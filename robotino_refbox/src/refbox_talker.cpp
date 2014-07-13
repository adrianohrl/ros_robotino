#define BOOST_DATE_TIME_POSIX_TIME_STD_CONFIG

#include "ros/ros.h"
#include "std_msgs/String.h"

#include <protobuf_comm/peer.h>
#include <utils/system/argparser.h>

#include <config/yaml.h>
#include <msgs/BeaconSignal.pb.h>
#include <msgs/OrderInfo.pb.h>
#include <msgs/GameState.pb.h>
#include <msgs/VersionInfo.pb.h>
#include <msgs/ExplorationInfo.pb.h>
#include <msgs/MachineInfo.pb.h>
#include <msgs/MachineReport.pb.h>
#include <msgs/RobotInfo.pb.h>

#include <boost/asio.hpp>
#include <boost/date_time.hpp>

#include <sstream>

using namespace protobuf_comm;
using namespace llsf_msgs;
using namespace fawkes;

static bool quit = false;
static boost::asio::deadline_timer *timer_ = NULL;
std::string name_;
Team team_color_;
std::string team_name_;
unsigned long seq_ = 0;
ProtobufBroadcastPeer *peer_public_ = NULL;
ProtobufBroadcastPeer *peer_team_ = NULL;
bool crypto_setup_ = false;
std::string machine_name_;
std::string machine_type_;

llsfrb::Configuration *config_;

void signal_handler(const boost::system::error_code& error, int signum)
{
	if (!error)
	{
		quit = true;

		if (timer_)
		{
			timer_->cancel();
		}
	}
}

void handle_recv_error(boost::asio::ip::udp::endpoint &endpoint, std::string msg)
{
	printf("Receive error from %s:%u: %s\n", endpoint.address().to_string().c_str(), endpoint.port(), msg.c_str());
}

void handle_send_error(std::string msg)
{
	printf("Send error: %s\n", msg.c_str());
}

void handle_message(boost::asio::ip::udp::endpoint &sender, uint16_t component_id, uint16_t msg_type,
		    std::shared_ptr<google::protobuf::Message> msg)
{
	// BeaconSignal - Lê as informações enviadas no BeaconSignal dos outros Robôs ou Refbox
	std::shared_ptr<BeaconSignal> b;
	if ((b = std::dynamic_pointer_cast<BeaconSignal>(msg)))
	{
		#if __WORDSIZE == 64
			printf("Detected robot: %u %s:%s (seq %lu, team %s)\n",
		#else
			printf("Detected robot: %u %s:%s (seq %llu, team %s)\n",
		#endif
		b->number(), b->team_name().c_str(), b->peer_name().c_str(), b->seq(),
		b->has_team_color() ? Team_Name(b->team_color()).c_str() : "NONE");
	}

	// GameState - Lê as informações enviadas no GameState
	std::shared_ptr<GameState> gs;
	if ((gs = std::dynamic_pointer_cast<GameState>(msg)))
	{
		int hour = gs->game_time().sec() / 3600;
		int min  = (gs->game_time().sec() - hour * 3600) / 60;
		int sec  = gs->game_time().sec() - hour * 3600 - min * 60;

		#if __WORDSIZE == 64
			printf("GameState received:  %02i:%02i:%02i.%02ld  %s %s  %u:%u points, %s vs. %s\n",
		#else
			printf("GameState received:  %02i:%02i:%02i.%02lld  %s %s  %u:%u points, %s vs. %s\n",
		#endif
		hour, min, sec, gs->game_time().nsec() / 1000000,
		llsf_msgs::GameState::Phase_Name(gs->phase()).c_str(),
		llsf_msgs::GameState::State_Name(gs->state()).c_str(),
		gs->points_cyan(), gs->points_magenta(),
		gs->team_cyan().c_str(), gs->team_magenta().c_str());

		if (team_name_ == gs->team_cyan() || team_name_ == gs->team_magenta())
		{
			if (team_name_ == gs->team_cyan() && team_color_ != CYAN)
			{
				printf("WARNING: sending as magenta, but our team is announced as cyan by refbox!\n");
			}
			else if (team_name_ == gs->team_magenta() && team_color_ != MAGENTA)
			{
				printf("WARNING: sending as cyan, but our team is announced as magenta by refbox!\n");
			}

			if (! crypto_setup_)
			{
				crypto_setup_ = true;

				std::string crypto_key = "", cipher = "aes-128-cbc";
				try
				{
					crypto_key = config_->get_string(("/llsfrb/game/crypto-keys/" + team_name_).c_str());
					printf("Set crypto key to %s (cipher %s)\n", crypto_key.c_str(), cipher.c_str());
					peer_team_->setup_crypto(crypto_key, cipher);
				}
				catch (Exception &e)
				{
					printf("No encryption key configured for team, not enabling crypto");
				}
			}
		}
		else if (crypto_setup_)
		{
			printf("Our team is not set, training game? Disabling crypto.\n");
			crypto_setup_ = false;
			peer_team_->setup_crypto("", "");
		}
	}

	// OrderInfo - Lê as informações enviadas no OrderInfo
	std::shared_ptr<OrderInfo> oi;
	if ((oi = std::dynamic_pointer_cast<OrderInfo>(msg)))
	{
		printf("Order Info received:\n");
		for (int i = 0; i < oi->orders_size(); ++i)
		{
			const llsf_msgs::Order &o = oi->orders(i);
			unsigned int begin_min = o.delivery_period_begin() / 60;
			unsigned int begin_sec = o.delivery_period_begin() - begin_min * 60;
			unsigned int end_min = o.delivery_period_end() / 60;
			unsigned int end_sec = o.delivery_period_end() - end_min * 60;

			printf("  %u: %u/%u of %s from %02u:%02u to %02u:%02u at gate %s\n", o.id(),
			o.quantity_delivered(), o.quantity_requested(),
			llsf_msgs::Order::ProductType_Name(o.product()).c_str(),
			begin_min, begin_sec, end_min, end_sec,
			llsf_msgs::Order::DeliveryGate_Name(o.delivery_gate()).c_str());
		}
	}

	// VersionInfo - Lê as informações enviadas no VersionInfo
	std::shared_ptr<VersionInfo> vi;
	if ((vi = std::dynamic_pointer_cast<VersionInfo>(msg)))
	{
		printf("VersionInfo received: %s\n", vi->version_string().c_str());
	}

	// ExplorationInfo - Lê as informações enviadas no ExplorationInfo
	std::shared_ptr<ExplorationInfo> ei;
	if ((ei = std::dynamic_pointer_cast<ExplorationInfo>(msg)))
	{
		printf("ExplorationInfo received:\n");
		for (int i = 0; i < ei->signals_size(); ++i)
		{
			const ExplorationSignal &es = ei->signals(i);
			printf("  Machine type %s assignment:", es.type().c_str());
			for (int j = 0; j < es.lights_size(); ++j)
			{
				const LightSpec &lspec = es.lights(j);
				printf(" %s=%s", LightColor_Name(lspec.color()).c_str(),
				LightState_Name(lspec.state()).c_str());
			}
			printf("\n");
		}
		printf("  --\n");
		for (int i = 0; i < ei->machines_size(); ++i)
		{
			const ExplorationMachine &em = ei->machines(i);
			printf("  Machine %s at (%f, %f, %f)\n", em.name().c_str(),
			em.pose().x(), em.pose().y(), em.pose().ori());
		}
	}

	// MachineInfo - Lê as informações enviadas no MachineInfo
	std::shared_ptr<MachineInfo> mi;
	if ((mi = std::dynamic_pointer_cast<MachineInfo>(msg)))
	{
		printf("MachineInfo received:\n");
		for (int i = 0; i < mi->machines_size(); ++i)
		{
			const Machine &m = mi->machines(i);
			const Pose2D &p = m.pose();
			printf("  %-3s|%2s|%s @ (%f, %f, %f)\n",
			m.name().c_str(), m.type().substr(0, 2).c_str(),
			Team_Name(m.team_color()).substr(0, 2).c_str(),
			p.x(), p.y(), p.ori());
		}
	}

	// BeaconSignal - Quando o robô recebe o BeaconSignal do Refbox, ele envia o MachineReport
	std::shared_ptr<BeaconSignal> bs;
	if ((bs = std::dynamic_pointer_cast<BeaconSignal>(msg)))
	{
		if (bs->team_name() == "LLSF" && bs->peer_name() == "RefBox")
		{
			printf("Announcing machine type\n");
			MachineReport report;
			report.set_team_color(team_color_);
			MachineReportEntry *entry = report.add_machines();
			entry->set_name(machine_name_);
			entry->set_type(machine_type_);
			peer_public_->send(report);
		}
	}

	// MachineReportInfo - Está dentro do MachineReport e mostra as máquinas já reportadas para o Refbox
	std::shared_ptr<MachineReportInfo> mri;
	if ((mri = std::dynamic_pointer_cast<MachineReportInfo>(msg)))
	{
		printf("MachineReportInfo received:\n");
		if (mri->reported_machines_size() > 0)
		{
			printf("  Reported machines:");
			for (int i = 0; i < mri->reported_machines_size(); ++i)
			{
				printf(" %s", mri->reported_machines(i).c_str());
			}
			printf("\n");
		}
		else
		{
			printf("  no machines reported, yet\n");
		}
	}

	// RobotInfo - Lê as informações enviadas no RobotInfo
	std::shared_ptr<RobotInfo> ri;
	if ((ri = std::dynamic_pointer_cast<RobotInfo>(msg)))
	{
		printf("Robot Info received:\n");
		for (int i = 0; i < ri->robots_size(); ++i)
		{
			const llsf_msgs::Robot &r = ri->robots(i);

			const llsf_msgs::Time &time = r.last_seen();

			boost::posix_time::ptime now(boost::posix_time::microsec_clock::universal_time());
			boost::posix_time::ptime last_seen = boost::posix_time::from_time_t(time.sec())	+
							     boost::posix_time::nanoseconds(time.nsec());
			boost::posix_time::time_duration const last_seen_ago_td = now - last_seen;
			float last_seen_ago = last_seen_ago_td.total_milliseconds() / 1000.f;

			printf("  %u %s/%s @ %s: state %s, last seen %f sec ago  Maint cyc: %u  rem: %f\n",
			r.number(), r.name().c_str(), r.team().c_str(), r.host().c_str(),
			llsf_msgs::RobotState_Name(r.state()).substr(0,3).c_str(),
			last_seen_ago, r.maintenance_cycles(), r.maintenance_time_remaining());
		}
	}
}

void handle_timer(const boost::system::error_code& error)
{
	if (! error)
	{
		boost::posix_time::ptime now(boost::posix_time::microsec_clock::universal_time());
		std::shared_ptr<BeaconSignal> signal(new BeaconSignal());
		Time *time = signal->mutable_time();
		boost::posix_time::time_duration const since_epoch = now - boost::posix_time::from_time_t(0);

		time->set_sec(static_cast<google::protobuf::int64>(since_epoch.total_seconds()));
		time->set_nsec(static_cast<google::protobuf::int64>(since_epoch.fractional_seconds() *
								    (1000000000/since_epoch.ticks_per_second())));

		Pose2D *pose = signal->mutable_pose();
		pose->set_x(1.0);
		pose->set_y(2.0);
		pose->set_ori(3.0);

		Time *pose_time = pose->mutable_timestamp();
		pose_time->set_sec(4);
		pose_time->set_nsec(5);

		signal->set_number(1);
		signal->set_peer_name(name_);
		signal->set_team_name(team_name_);
		signal->set_team_color(team_color_);
		signal->set_seq(++seq_);
		peer_team_->send(signal);

		timer_->expires_at(timer_->expires_at() + boost::posix_time::milliseconds(2000));
		timer_->async_wait(handle_timer);
	}
}

/**
 * This tutorial demonstrates simple sending of messages over the ROS system.
 */
int main(int argc, char **argv)
{
    machine_name_ = "M13";
	machine_type_ = "T5";

	name_ = "Robo1";
	team_name_ = "Expertinos";
	team_color_ = CYAN;
	config_ = new llsfrb::YamlConfiguration("/home/robotino/fuerte_workspace/sandbox/robotino/robotino_refbox/cfg");
	config_->load("config.yaml");

	/**
	* The ros::init() function needs to see argc and argv so that it can perform
	* any ROS arguments and name remapping that were provided at the command line. For programmatic
	* remappings you can use a different version of init() which takes remappings
	* directly, but for most command-line programs, passing argc and argv is the easiest
	* way to do it.  The third argument to init() is the name of the node.
	*
	* You must call one of the versions of ros::init() before using any other
	* part of the ROS system.
	*/
	ros::init(argc, argv, "refbox_talker");

	/**
	* NodeHandle is the main access point to communications with the ROS system.
	* The first NodeHandle constructed will fully initialize this node, and the last
	* NodeHandle destructed will close down the node.
	*/
	ros::NodeHandle n;

	/**
	* The advertise() function is how you tell ROS that you want to
	* publish on a given topic name. This invokes a call to the ROS
	* master node, which keeps a registry of who is publishing and who
	* is subscribing. After this advertise() call is made, the master
	* node will notify anyone who is trying to subscribe to this topic name,
	* and they will in turn negotiate a peer-to-peer connection with this
	* node.  advertise() returns a Publisher object which allows you to
	* publish messages on that topic through a call to publish().  Once
	* all copies of the returned Publisher object are destroyed, the topic
	* will be automatically unadvertised.
	*
	* The second parameter to advertise() is the size of the message queue
	* used for publishing messages.  If messages are published more quickly
	* than we can send them, the number here specifies how many messages to
	* buffer up before throwing some away.
	*/
	ros::Publisher chatter_pub = n.advertise<std_msgs::String>("position", 100);

	ros::Rate loop_rate(10);

	/**
	* A count of how many messages we have sent. This is used to create
	* a unique string for each message.
	*/
	int count = 0;
	while (ros::ok())
	{
		/**
		* This is a message object. You stuff it with data, and then publish it.
		*/
		std_msgs::String msg;

		std::stringstream ss;
		ss << "hello world " << count;
		msg.data = ss.str();

		ROS_INFO("%s", msg.data.c_str());

		/**
		* The publish() function is how you send messages. The parameter
		* is the message object. The type of this object must agree with the type
		* given as a template parameter to the advertise<>() call, as was done
		* in the constructor above.
		*/
		chatter_pub.publish(msg);

		ros::spinOnce();

		loop_rate.sleep();
		++count;
	}


	return 0;
}
