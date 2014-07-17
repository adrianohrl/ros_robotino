/* Auto-generated by genmsg_cpp for file /home/robotino/fuerte_workspace/sandbox/robotino-ros-pkg/robotino/robotino_msgs/msg/GrapplerReadings.msg */
#ifndef ROBOTINO_MSGS_MESSAGE_GRAPPLERREADINGS_H
#define ROBOTINO_MSGS_MESSAGE_GRAPPLERREADINGS_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace robotino_msgs
{
template <class ContainerAllocator>
struct GrapplerReadings_ {
  typedef GrapplerReadings_<ContainerAllocator> Type;

  GrapplerReadings_()
  : stamp()
  , seq(0)
  , numServos(0)
  , torqueEnabled(false)
  , angles()
  , velocities()
  , errors()
  , channels()
  , ids()
  , cwAxesLimits()
  , ccwAxesLimits()
  {
  }

  GrapplerReadings_(const ContainerAllocator& _alloc)
  : stamp()
  , seq(0)
  , numServos(0)
  , torqueEnabled(false)
  , angles(_alloc)
  , velocities(_alloc)
  , errors(_alloc)
  , channels(_alloc)
  , ids(_alloc)
  , cwAxesLimits(_alloc)
  , ccwAxesLimits(_alloc)
  {
  }

  typedef ros::Time _stamp_type;
  ros::Time stamp;

  typedef uint32_t _seq_type;
  uint32_t seq;

  typedef uint32_t _numServos_type;
  uint32_t numServos;

  typedef uint8_t _torqueEnabled_type;
  uint8_t torqueEnabled;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _angles_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  angles;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _velocities_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  velocities;

  typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _errors_type;
  std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  errors;

  typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _channels_type;
  std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  channels;

  typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _ids_type;
  std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  ids;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _cwAxesLimits_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  cwAxesLimits;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _ccwAxesLimits_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  ccwAxesLimits;


  typedef boost::shared_ptr< ::robotino_msgs::GrapplerReadings_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotino_msgs::GrapplerReadings_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GrapplerReadings
typedef  ::robotino_msgs::GrapplerReadings_<std::allocator<void> > GrapplerReadings;

typedef boost::shared_ptr< ::robotino_msgs::GrapplerReadings> GrapplerReadingsPtr;
typedef boost::shared_ptr< ::robotino_msgs::GrapplerReadings const> GrapplerReadingsConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::robotino_msgs::GrapplerReadings_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::robotino_msgs::GrapplerReadings_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace robotino_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::robotino_msgs::GrapplerReadings_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::robotino_msgs::GrapplerReadings_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::robotino_msgs::GrapplerReadings_<ContainerAllocator> > {
  static const char* value() 
  {
    return "53d1f6c81df9b5242320201fe0231738";
  }

  static const char* value(const  ::robotino_msgs::GrapplerReadings_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x53d1f6c81df9b524ULL;
  static const uint64_t static_value2 = 0x2320201fe0231738ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotino_msgs::GrapplerReadings_<ContainerAllocator> > {
  static const char* value() 
  {
    return "robotino_msgs/GrapplerReadings";
  }

  static const char* value(const  ::robotino_msgs::GrapplerReadings_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::robotino_msgs::GrapplerReadings_<ContainerAllocator> > {
  static const char* value() 
  {
    return "time stamp\n\
uint32 seq\n\
uint32 numServos\n\
bool torqueEnabled\n\
float32[] angles		# in degrees\n\
float32[] velocities	# in rpm\n\
uint32[] errors\n\
uint32[] channels\n\
uint32[] ids\n\
float32[] cwAxesLimits 	# in degrees\n\
float32[] ccwAxesLimits	# in degrees\n\
";
  }

  static const char* value(const  ::robotino_msgs::GrapplerReadings_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::robotino_msgs::GrapplerReadings_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.stamp);
    stream.next(m.seq);
    stream.next(m.numServos);
    stream.next(m.torqueEnabled);
    stream.next(m.angles);
    stream.next(m.velocities);
    stream.next(m.errors);
    stream.next(m.channels);
    stream.next(m.ids);
    stream.next(m.cwAxesLimits);
    stream.next(m.ccwAxesLimits);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GrapplerReadings_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotino_msgs::GrapplerReadings_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::robotino_msgs::GrapplerReadings_<ContainerAllocator> & v) 
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "seq: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.seq);
    s << indent << "numServos: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.numServos);
    s << indent << "torqueEnabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.torqueEnabled);
    s << indent << "angles[]" << std::endl;
    for (size_t i = 0; i < v.angles.size(); ++i)
    {
      s << indent << "  angles[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.angles[i]);
    }
    s << indent << "velocities[]" << std::endl;
    for (size_t i = 0; i < v.velocities.size(); ++i)
    {
      s << indent << "  velocities[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.velocities[i]);
    }
    s << indent << "errors[]" << std::endl;
    for (size_t i = 0; i < v.errors.size(); ++i)
    {
      s << indent << "  errors[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.errors[i]);
    }
    s << indent << "channels[]" << std::endl;
    for (size_t i = 0; i < v.channels.size(); ++i)
    {
      s << indent << "  channels[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.channels[i]);
    }
    s << indent << "ids[]" << std::endl;
    for (size_t i = 0; i < v.ids.size(); ++i)
    {
      s << indent << "  ids[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.ids[i]);
    }
    s << indent << "cwAxesLimits[]" << std::endl;
    for (size_t i = 0; i < v.cwAxesLimits.size(); ++i)
    {
      s << indent << "  cwAxesLimits[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.cwAxesLimits[i]);
    }
    s << indent << "ccwAxesLimits[]" << std::endl;
    for (size_t i = 0; i < v.ccwAxesLimits.size(); ++i)
    {
      s << indent << "  ccwAxesLimits[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.ccwAxesLimits[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // ROBOTINO_MSGS_MESSAGE_GRAPPLERREADINGS_H

