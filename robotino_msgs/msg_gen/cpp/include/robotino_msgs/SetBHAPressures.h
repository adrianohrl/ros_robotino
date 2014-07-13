/* Auto-generated by genmsg_cpp for file /home/robotino/fuerte_workspace/sandbox/robotino/robotino_msgs/msg/SetBHAPressures.msg */
#ifndef ROBOTINO_MSGS_MESSAGE_SETBHAPRESSURES_H
#define ROBOTINO_MSGS_MESSAGE_SETBHAPRESSURES_H
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
struct SetBHAPressures_ {
  typedef SetBHAPressures_<ContainerAllocator> Type;

  SetBHAPressures_()
  : pressures()
  {
  }

  SetBHAPressures_(const ContainerAllocator& _alloc)
  : pressures(_alloc)
  {
  }

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _pressures_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  pressures;


  typedef boost::shared_ptr< ::robotino_msgs::SetBHAPressures_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotino_msgs::SetBHAPressures_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SetBHAPressures
typedef  ::robotino_msgs::SetBHAPressures_<std::allocator<void> > SetBHAPressures;

typedef boost::shared_ptr< ::robotino_msgs::SetBHAPressures> SetBHAPressuresPtr;
typedef boost::shared_ptr< ::robotino_msgs::SetBHAPressures const> SetBHAPressuresConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::robotino_msgs::SetBHAPressures_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::robotino_msgs::SetBHAPressures_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace robotino_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::robotino_msgs::SetBHAPressures_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::robotino_msgs::SetBHAPressures_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::robotino_msgs::SetBHAPressures_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f07803ec936ff4605f313dd88545e5bb";
  }

  static const char* value(const  ::robotino_msgs::SetBHAPressures_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xf07803ec936ff460ULL;
  static const uint64_t static_value2 = 0x5f313dd88545e5bbULL;
};

template<class ContainerAllocator>
struct DataType< ::robotino_msgs::SetBHAPressures_<ContainerAllocator> > {
  static const char* value() 
  {
    return "robotino_msgs/SetBHAPressures";
  }

  static const char* value(const  ::robotino_msgs::SetBHAPressures_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::robotino_msgs::SetBHAPressures_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32[] pressures	# must be of size 8\n\
";
  }

  static const char* value(const  ::robotino_msgs::SetBHAPressures_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::robotino_msgs::SetBHAPressures_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.pressures);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetBHAPressures_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotino_msgs::SetBHAPressures_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::robotino_msgs::SetBHAPressures_<ContainerAllocator> & v) 
  {
    s << indent << "pressures[]" << std::endl;
    for (size_t i = 0; i < v.pressures.size(); ++i)
    {
      s << indent << "  pressures[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.pressures[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // ROBOTINO_MSGS_MESSAGE_SETBHAPRESSURES_H

