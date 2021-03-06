/* Auto-generated by genmsg_cpp for file /home/robotino/fuerte_workspace/sandbox/robotino/robotino_msgs/msg/NorthStarReadings.msg */
#ifndef ROBOTINO_MSGS_MESSAGE_NORTHSTARREADINGS_H
#define ROBOTINO_MSGS_MESSAGE_NORTHSTARREADINGS_H
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

#include "geometry_msgs/Pose.h"

namespace robotino_msgs
{
template <class ContainerAllocator>
struct NorthStarReadings_ {
  typedef NorthStarReadings_<ContainerAllocator> Type;

  NorthStarReadings_()
  : stamp()
  , seq(0)
  , roomId(0)
  , numSpotsVisible(0)
  , pose()
  , magSpot0(0)
  , magSpot1(0)
  {
  }

  NorthStarReadings_(const ContainerAllocator& _alloc)
  : stamp()
  , seq(0)
  , roomId(0)
  , numSpotsVisible(0)
  , pose(_alloc)
  , magSpot0(0)
  , magSpot1(0)
  {
  }

  typedef ros::Time _stamp_type;
  ros::Time stamp;

  typedef uint32_t _seq_type;
  uint32_t seq;

  typedef uint32_t _roomId_type;
  uint32_t roomId;

  typedef uint32_t _numSpotsVisible_type;
  uint32_t numSpotsVisible;

  typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
   ::geometry_msgs::Pose_<ContainerAllocator>  pose;

  typedef uint32_t _magSpot0_type;
  uint32_t magSpot0;

  typedef uint32_t _magSpot1_type;
  uint32_t magSpot1;


  typedef boost::shared_ptr< ::robotino_msgs::NorthStarReadings_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotino_msgs::NorthStarReadings_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct NorthStarReadings
typedef  ::robotino_msgs::NorthStarReadings_<std::allocator<void> > NorthStarReadings;

typedef boost::shared_ptr< ::robotino_msgs::NorthStarReadings> NorthStarReadingsPtr;
typedef boost::shared_ptr< ::robotino_msgs::NorthStarReadings const> NorthStarReadingsConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::robotino_msgs::NorthStarReadings_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::robotino_msgs::NorthStarReadings_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace robotino_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::robotino_msgs::NorthStarReadings_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::robotino_msgs::NorthStarReadings_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::robotino_msgs::NorthStarReadings_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b8db44cc88a378f5282e8add1661d1e7";
  }

  static const char* value(const  ::robotino_msgs::NorthStarReadings_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb8db44cc88a378f5ULL;
  static const uint64_t static_value2 = 0x282e8add1661d1e7ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotino_msgs::NorthStarReadings_<ContainerAllocator> > {
  static const char* value() 
  {
    return "robotino_msgs/NorthStarReadings";
  }

  static const char* value(const  ::robotino_msgs::NorthStarReadings_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::robotino_msgs::NorthStarReadings_<ContainerAllocator> > {
  static const char* value() 
  {
    return "time stamp\n\
uint32 seq\n\
uint32 roomId\n\
uint32 numSpotsVisible\n\
geometry_msgs/Pose pose\n\
uint32 magSpot0\n\
uint32 magSpot1\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
";
  }

  static const char* value(const  ::robotino_msgs::NorthStarReadings_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::robotino_msgs::NorthStarReadings_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::robotino_msgs::NorthStarReadings_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.stamp);
    stream.next(m.seq);
    stream.next(m.roomId);
    stream.next(m.numSpotsVisible);
    stream.next(m.pose);
    stream.next(m.magSpot0);
    stream.next(m.magSpot1);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct NorthStarReadings_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotino_msgs::NorthStarReadings_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::robotino_msgs::NorthStarReadings_<ContainerAllocator> & v) 
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "seq: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.seq);
    s << indent << "roomId: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.roomId);
    s << indent << "numSpotsVisible: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.numSpotsVisible);
    s << indent << "pose: ";
s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "magSpot0: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.magSpot0);
    s << indent << "magSpot1: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.magSpot1);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ROBOTINO_MSGS_MESSAGE_NORTHSTARREADINGS_H

