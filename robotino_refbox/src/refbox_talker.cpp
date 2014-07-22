#define BOOST_DATE_TIME_POSIX_TIME_STD_CONFIG

#include "ros/ros.h"
#include "std_msgs/String.h"

#include <protobuf_comm/peer.h>
#include <utils/system/argparser.h>

#include <config/yaml.h>
#include <msgs/BeaconSignal.pb.h>
#include <msgs/OrderInfo.pb.h>
#include <msgs/GameState.pb.h>
#include <msgs/ExplorationInfo.pb.h>
#include <msgs/MachineInfo.pb.h>
#include <msgs/MachineReport.pb.h>

#include <nav_msgs/Odometry.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Quaternion.h>

#include <boost/asio.hpp>
#include <boost/date_time.hpp>

#include "robotino_refbox/Game_Info.h"
#include "robotino_refbox/Order_Info.h"
#include "robotino_refbox/Exploration_Info.h"
#include "robotino_refbox/Machine_Types.h"
#include "robotino_refbox/Reported_Machines.h"
#include "robotino_refbox/ReportMachine.h"
#include "robotino_refbox/RobotPos.h"

#include <unistd.h>

#include <sstream>

using namespace protobuf_comm;
using namespace llsf_msgs;
using namespace fawkes;

std::string selectMessage = "MachineReport";
static bool quit = false;
static boost::asio::deadline_timer *timer_ = NULL;
std::string name_;
Team team_color_;
std::string team_name_;
unsigned long seq_ = 0;
ProtobufBroadcastPeer *peer_public_ = NULL;
ProtobufBroadcastPeer *peer_team_ = NULL;
float posX, posY, posTheta;
int robotNumber;
bool crypto_setup_ = false;
bool weAreInTheGame = false;

std::shared_ptr<GameState> gs;

llsfrb::Configuration *config_;

ros::Publisher gamePhase_pub;
ros::Publisher orderInfo_pub;
ros::Publisher explorationInfo_pub;
ros::Publisher machineTypes_pub;
ros::Publisher reportedMachines_pub;
ros::ServiceServer reportMachine;

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
    //printf("Receive error from %s:%u: %s\n", endpoint.address().to_string().c_str(), endpoint.port(), msg.c_str());
}

void handle_send_error(std::string msg)
{
    printf("Send error: %s\n", msg.c_str());
}

void handle_message(boost::asio::ip::udp::endpoint &sender, uint16_t component_id, uint16_t msg_type,
                    std::shared_ptr<google::protobuf::Message> msg)
{
    if(selectMessage == "BeaconSignal" || selectMessage == "All")
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
    }

	// IMPLEMENTADO!
        // GameState - Lê as informações enviadas no GameState
        if ((gs = std::dynamic_pointer_cast<GameState>(msg)))
        {
		robotino_refbox::Game_Info game_msg;
		game_msg.time[0] = gs->game_time().sec() / 3600;			// HORA
		game_msg.time[1]  = (gs->game_time().sec() - game_msg.time[0] * 3600) / 60;	// MIN
		game_msg.time[2]  = gs->game_time().sec() - game_msg.time[0] * 3600 - game_msg.time[1] * 60; // SEC

		game_msg.phase = gs->phase();
		game_msg.state = gs->state();

		gamePhase_pub.publish(game_msg);

		if (team_name_ == gs->team_cyan() || team_name_ == gs->team_magenta())
		{
			weAreInTheGame = true;
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

	// IMPLEMENTADO!
        // OrderInfo - Lê as informações enviadas no OrderInfo
        // Recebe o pedido de peça, com qual peça é necessária e o periodo de tempo no qual o pedido é valido
        std::shared_ptr<OrderInfo> oi;
        if ((oi = std::dynamic_pointer_cast<OrderInfo>(msg)))
        {
	    robotino_refbox::Order_Info order_msg;
            for (int i = 0; i < oi->orders_size(); ++i)
            {
                const llsf_msgs::Order &o = oi->orders(i);
                unsigned int begin_min = o.delivery_period_begin() / 60;
                unsigned int begin_sec = o.delivery_period_begin() - begin_min * 60;
                unsigned int end_min = o.delivery_period_end() / 60;
                unsigned int end_sec = o.delivery_period_end() - end_min * 60;

		order_msg.peca[i] = o.product();
		order_msg.minI[i] = begin_min;
		order_msg.secI[i] = begin_sec;
		order_msg.minF[i] = end_min;
		order_msg.secF[i] = end_sec;

		orderInfo_pub.publish(order_msg);
            }
        }

	// IMPLEMENTADO!
	// ExplorationInfo - Lê as informações enviadas no ExplorationInfo
        // No início da fase de exploração, o Refbox envia qual combinação de luzes acesas
        // irá representar cada tipo de máquina, além da posição e orientação de cada máquina.
	std::shared_ptr<ExplorationInfo> ei;
        if ((ei = std::dynamic_pointer_cast<ExplorationInfo>(msg)))
        {
	    robotino_refbox::Exploration_Info explo_msg;
            for (int i = 0; i < ei->signals_size(); ++i)
            {
                const ExplorationSignal &es = ei->signals(i);
                for (int j = 0; j < es.lights_size(); ++j)
                {
			const LightSpec &lspec = es.lights(j);
			if( j == 0 )
		    		explo_msg.red[i] = lspec.state();
			else if( j == 1 )
		    		explo_msg.yellow[i] = lspec.state();
			else if( j == 2 )
		    		explo_msg.green[i] = lspec.state();
                }
            }
	    int x = 0;
            for (int i = 0; i < ei->machines_size(); ++i)
            {
                const ExplorationMachine &em = ei->machines(i);
		if( em.team_color() == team_color_ )
			explo_msg.machines[x++] = em.name();
            }
	    explorationInfo_pub.publish(explo_msg);
        }

	// IMPLEMENTADO!
        // MachineInfo - Lê as informações enviadas no MachineInfo
        // Enviado no inicio da Production Phase, mostra o tipo de cada máquina do time e sua posição
        std::shared_ptr<MachineInfo> mi;
        if ((mi = std::dynamic_pointer_cast<MachineInfo>(msg)))
        {
	    int x = 0;
	    robotino_refbox::Machine_Types mtypes_msg;
            for (int i = 0; i < mi->machines_size(); ++i)
            {
                const Machine &m = mi->machines(i);
		if( m.type().size() < 3 )
		{
			mtypes_msg.machines[x] = m.name();
			mtypes_msg.types[x++] = m.type();
		}
            }
	    machineTypes_pub.publish(mtypes_msg);
        }

	// IMPLEMENTADO!
        // MachineReportInfo - Está dentro do MachineReport e mostra as máquinas já reportadas para o Refbox
        std::shared_ptr<MachineReportInfo> mri;
        if ((mri = std::dynamic_pointer_cast<MachineReportInfo>(msg)))
        {
	    robotino_refbox::Reported_Machines repMach_msg;
                for (int i = 0; i < mri->reported_machines_size(); ++i)
                {
			repMach_msg.machines[i] = mri->reported_machines(i);
                }
		reportedMachines_pub.publish(repMach_msg);
        }
}

bool reportMachine_Callback(robotino_refbox::ReportMachine::Request &req, robotino_refbox::ReportMachine::Response &res)
{
	int counter = 0;
	while( counter < 3 )
	{
		printf("Announcing machine type\n");
		MachineReport report;
		report.set_team_color(team_color_);
		MachineReportEntry *entry = report.add_machines();
		entry->set_name(req.machine);
		entry->set_type(req.type);
		peer_team_->send(report);
		counter++;
		sleep(1);
	}
	res.reported = true;
}

void send_beacon()
{
	if (weAreInTheGame)
	{
		printf("Estou no jogo!!\n");
		timespec start;
		clock_gettime(CLOCK_REALTIME, &start);
		int32_t sec = start.tv_sec;
		int32_t nsec = start.tv_nsec;

		std::shared_ptr<BeaconSignal> signal(new BeaconSignal());

		Time *time = signal->mutable_time();
		time->set_sec(sec);
		time->set_nsec(nsec);

		Pose2D *pose = signal->mutable_pose();
		pose->set_x(posX);   // Enviar a posição X do robô
		pose->set_y(posY);   // Enviar a posição Y do robô
		pose->set_ori(posTheta); // Enviar a orientação do robô

		Time *pose_time = pose->mutable_timestamp();
		pose_time->set_sec(4);
		pose_time->set_nsec(5);

		signal->set_number(robotNumber);
		signal->set_peer_name(name_);
		signal->set_team_name(team_name_);
		signal->set_team_color(team_color_);
		signal->set_seq(++seq_);
		peer_team_->send(signal);
	}
}

void robotPosCallback(const robotino_refbox::RobotPos& msg)
{
    posX = msg.posX;
    posY = msg.posY;
    posTheta = msg.phi;
}

int main(int argc, char **argv)
{
	ROS_INFO("Robotino Refbox is running!");
    posX = 0;
    posY = 0;
    posTheta = 0;

//////////////////////////////////////////////////////////////// ATUALIZAR //////////////////////////////////////////////
    name_ = "R1";   // Nome do robô
    robotNumber = 1; // Número individual do Robo!
    team_color_ = MAGENTA; // Cor do time
//////////////////////////////////////////////////////////////// ATUALIZAR //////////////////////////////////////////////

    team_name_ = "Expertinos";
    config_ = new llsfrb::YamlConfiguration("/home/robotino/fuerte_workspace/sandbox/robotino/robotino_refbox/cfg");
    config_->load("config.yaml");

    if (config_->exists("/llsfrb/comm/public-peer/send-port") &&
      config_->exists("/llsfrb/comm/public-peer/recv-port") )
  {
    peer_public_ = new ProtobufBroadcastPeer(config_->get_string("/llsfrb/comm/public-peer/host"),
					     config_->get_uint("/llsfrb/comm/public-peer/recv-port"),
					     config_->get_uint("/llsfrb/comm/public-peer/send-port"));
  } else {
    peer_public_ = new ProtobufBroadcastPeer(config_->get_string("/llsfrb/comm/public-peer/host"),
					     config_->get_uint("/llsfrb/comm/public-peer/port"));
  }


    MessageRegister & message_register = peer_public_->message_register();
    message_register.add_message_type<BeaconSignal>();
    message_register.add_message_type<OrderInfo>();
    message_register.add_message_type<GameState>();
    message_register.add_message_type<ExplorationInfo>();
    message_register.add_message_type<MachineInfo>();
    message_register.add_message_type<MachineReport>();
    message_register.add_message_type<MachineReportInfo>();

    std::string cfg_prefix =
    std::string("/llsfrb/comm/") +
    ((team_color_ == CYAN) ? "cyan" : "magenta") + "-peer/";

    /*
    // better to this dynamically be reacting to the public GameState
    // this way you can also play unencrypted training games
    std::string crypto_key = "", cipher = "aes-128-cbc";
    try {
    crypto_key = config_->get_string(("/llsfrb/game/crypto-keys/" + team_name_).c_str());
    } catch (Exception &e) {
    printf("No encryption key configured for team, not enabling crypto");
    }
    */

    if (config_->exists((cfg_prefix + "send-port").c_str()) &&
      config_->exists((cfg_prefix + "recv-port").c_str()) )
  {
    peer_team_ = new ProtobufBroadcastPeer(config_->get_string((cfg_prefix + "host").c_str()),
					   config_->get_uint((cfg_prefix + "recv-port").c_str()),
					   config_->get_uint((cfg_prefix + "send-port").c_str()),
					   &message_register /*, crypto_key, cipher*/);
  } else {
    peer_team_ = new ProtobufBroadcastPeer(config_->get_string((cfg_prefix + "host").c_str()),
					   config_->get_uint((cfg_prefix + "port").c_str()),
					   &message_register/*, crypto_key, cipher*/);
  }

    boost::asio::io_service io_service;

    peer_public_->signal_received().connect(handle_message);
    peer_public_->signal_recv_error().connect(handle_recv_error);
    peer_public_->signal_send_error().connect(handle_send_error);

    peer_team_->signal_received().connect(handle_message);
    peer_team_->signal_recv_error().connect(handle_recv_error);
    peer_team_->signal_send_error().connect(handle_send_error);

#if BOOST_ASIO_VERSION >= 100601
    // Construct a signal set registered for process termination.
    boost::asio::signal_set signals(io_service, SIGINT, SIGTERM);

    // Start an asynchronous wait for one of the signals to occur.
    signals.async_wait(signal_handler);
#endif

//	timer_ = new boost::asio::deadline_timer(io_service);
//	timer_->expires_from_now(boost::posix_time::milliseconds(2000));
//	timer_->async_wait(handle_timer);

    ros::init(argc, argv, "refbox_talker");

    ros::NodeHandle n;

	// Subscribers
	ros::Subscriber odom_sub = n.subscribe("robot_pos", 10, robotPosCallback);
	// Publishers
	gamePhase_pub = n.advertise<robotino_refbox::Game_Info>("game_info", 10);
	orderInfo_pub = n.advertise<robotino_refbox::Order_Info>("order_info", 10);
	explorationInfo_pub = n.advertise<robotino_refbox::Exploration_Info>("exploration_info", 10);
	machineTypes_pub = n.advertise<robotino_refbox::Machine_Types>("machine_types", 10);
	reportedMachines_pub = n.advertise<robotino_refbox::Reported_Machines>("reported_machines", 10);
	// Servers
	reportMachine = n.advertiseService("ReportMachine", reportMachine_Callback);

    ros::Rate loop_rate(1); // Em Hz

    int count = 0;
    while (ros::ok())
    {
        /*if(!quit)
        {
            io_service.run();
            io_service.reset();
        }*/

        send_beacon();

        ros::spinOnce();

        loop_rate.sleep();
        ++count;
    }

    delete timer_;
    delete peer_team_;
    delete peer_public_;
    delete config_;

    // Delete all global objects allocated by libprotobuf
    google::protobuf::ShutdownProtobufLibrary();

    return 0;
}
