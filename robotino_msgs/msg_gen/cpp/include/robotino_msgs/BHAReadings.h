/* Auto-generated by genmsg_cpp for file /home/robotino/fuerte_workspace/sandbox/robotino/robotino_msgs/msg/BHAReadings.msg */
#ifndef ROBOTINO_MSGS_MESSAGE_BHAREADINGS_H
#define ROBOTINO_MSGS_MESSAGE_BHAREADINGS_H
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
struct BHAReadings_ {
  typedef BHAReadings_<ContainerAllocator> Type;

  BHAReadings_()
  : stamp()
  , pressures()
  , cablepull()
  {
  }

  BHAReadings_(const ContainerAllocator& _alloc)
  : stamp()
  , pressures(_alloc)
  , cablepull(_alloc)
  {
  }

  typedef ros::Time _stamp_type;
  ros::Time stamp;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _pressures_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  pressures;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _cablepull_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  cablepull;


  typedef boost::shared_ptr< ::robotino_msgs::BHAReadings_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotino_msgs::BHAReadings_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct BHAReadings
typedef  ::robotino_msgs::BHAReadings_<std::allocator<void> > BHAReadings;

typedef boost::shared_ptr< ::robotino_msgs::BHAReadings> BHAReadingsPtr;
typedef boost::shared_ptr< ::robotino_msgs::BHAReadings const> BHAReadingsConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::robotino_msgs::BHAReadings_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::robotino_msgs::BHAReadings_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace robotino_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::robotino_msgs::BHAReadings_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::robotino_msgs::BHAReadings_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::robotino_msgs::BHAReadings_<ContainerAllocator> > {
  static const char* value() 
  {
    return "db28e0e5f4b0a0da881baf9c7f3c94a1";
  }

  static const char* value(const  ::robotino_msgs::BHAReadings_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xdb28e0e5f4b0a0daULL;
  static const uint64_t static_value2 = 0x881baf9c7f3c94a1ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotino_msgs::BHAReadings_<ContainerAllocator> > {
  static const char* value() 
  {
    return "robotino_msgs/BHAReadings";
  }

  static const char* value(const  ::robotino_msgs::BHAReadings_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::robotino_msgs::BHAReadings_<ContainerAllocator> > {
  static const char* value() 
  {
    return "time stamp\n\
float32[] pressures	# in bar\n\
float32[] cablepull\n\
";
  }

  static const char* value(const  ::robotino_msgs::BHAReadings_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::robotino_msgs::BHAReadings_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.stamp);
    stream.next(m.pressures);
    stream.next(m.cablepull);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct BHAReadings_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotino_msgs::BHAReadings_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::robotino_msgs::BHAReadings_<ContainerAllocator> & v) 
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "pressures[]" << std::endl;
    for (size_t i = 0; i < v.pressures.size(); ++i)
    {
      s << indent << "  pressures[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.pressures[i]);
    }
    s << indent << "cablepull[]" << std::endl;
    for (size_t i = 0; i < v.cablepull.size(); ++i)
    {
      s << indent << "  cablepull[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.cablepull[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // ROBOTINO_MSGS_MESSAGE_BHAREADINGS_H

