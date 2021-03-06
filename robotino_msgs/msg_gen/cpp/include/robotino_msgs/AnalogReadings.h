/* Auto-generated by genmsg_cpp for file /home/robotino/fuerte_workspace/sandbox/robotino/robotino_msgs/msg/AnalogReadings.msg */
#ifndef ROBOTINO_MSGS_MESSAGE_ANALOGREADINGS_H
#define ROBOTINO_MSGS_MESSAGE_ANALOGREADINGS_H
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
struct AnalogReadings_ {
  typedef AnalogReadings_<ContainerAllocator> Type;

  AnalogReadings_()
  : stamp()
  , values()
  {
  }

  AnalogReadings_(const ContainerAllocator& _alloc)
  : stamp()
  , values(_alloc)
  {
  }

  typedef ros::Time _stamp_type;
  ros::Time stamp;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _values_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  values;


  typedef boost::shared_ptr< ::robotino_msgs::AnalogReadings_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotino_msgs::AnalogReadings_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct AnalogReadings
typedef  ::robotino_msgs::AnalogReadings_<std::allocator<void> > AnalogReadings;

typedef boost::shared_ptr< ::robotino_msgs::AnalogReadings> AnalogReadingsPtr;
typedef boost::shared_ptr< ::robotino_msgs::AnalogReadings const> AnalogReadingsConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::robotino_msgs::AnalogReadings_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::robotino_msgs::AnalogReadings_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace robotino_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::robotino_msgs::AnalogReadings_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::robotino_msgs::AnalogReadings_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::robotino_msgs::AnalogReadings_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b18badc07ef45644f603212cc1654669";
  }

  static const char* value(const  ::robotino_msgs::AnalogReadings_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb18badc07ef45644ULL;
  static const uint64_t static_value2 = 0xf603212cc1654669ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotino_msgs::AnalogReadings_<ContainerAllocator> > {
  static const char* value() 
  {
    return "robotino_msgs/AnalogReadings";
  }

  static const char* value(const  ::robotino_msgs::AnalogReadings_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::robotino_msgs::AnalogReadings_<ContainerAllocator> > {
  static const char* value() 
  {
    return "time stamp\n\
float32[] values\n\
";
  }

  static const char* value(const  ::robotino_msgs::AnalogReadings_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::robotino_msgs::AnalogReadings_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.stamp);
    stream.next(m.values);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AnalogReadings_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotino_msgs::AnalogReadings_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::robotino_msgs::AnalogReadings_<ContainerAllocator> & v) 
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "values[]" << std::endl;
    for (size_t i = 0; i < v.values.size(); ++i)
    {
      s << indent << "  values[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.values[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // ROBOTINO_MSGS_MESSAGE_ANALOGREADINGS_H

