/* Auto-generated by genmsg_cpp for file /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision/msg/LampState.msg */
#ifndef ROBOTINO_VISION_MESSAGE_LAMPSTATE_H
#define ROBOTINO_VISION_MESSAGE_LAMPSTATE_H
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


namespace robotino_vision
{
template <class ContainerAllocator>
struct LampState_ {
  typedef LampState_<ContainerAllocator> Type;

  LampState_()
  : color()
  , isLighting(false)
  , at()
  {
  }

  LampState_(const ContainerAllocator& _alloc)
  : color(_alloc)
  , isLighting(false)
  , at()
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _color_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  color;

  typedef uint8_t _isLighting_type;
  uint8_t isLighting;

  typedef ros::Time _at_type;
  ros::Time at;


  typedef boost::shared_ptr< ::robotino_vision::LampState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotino_vision::LampState_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct LampState
typedef  ::robotino_vision::LampState_<std::allocator<void> > LampState;

typedef boost::shared_ptr< ::robotino_vision::LampState> LampStatePtr;
typedef boost::shared_ptr< ::robotino_vision::LampState const> LampStateConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::robotino_vision::LampState_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::robotino_vision::LampState_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace robotino_vision

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::robotino_vision::LampState_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::robotino_vision::LampState_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::robotino_vision::LampState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "8f2944571279d0367e33f9f0fb46ac2d";
  }

  static const char* value(const  ::robotino_vision::LampState_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x8f2944571279d036ULL;
  static const uint64_t static_value2 = 0x7e33f9f0fb46ac2dULL;
};

template<class ContainerAllocator>
struct DataType< ::robotino_vision::LampState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "robotino_vision/LampState";
  }

  static const char* value(const  ::robotino_vision::LampState_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::robotino_vision::LampState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string color		# lamp color\n\
bool isLighting		# true if this lamp is lighting and false if this lamp is not.\n\
time at			# Time at which this had been stimated\n\
\n\
\n\
\n\
";
  }

  static const char* value(const  ::robotino_vision::LampState_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::robotino_vision::LampState_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.color);
    stream.next(m.isLighting);
    stream.next(m.at);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LampState_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotino_vision::LampState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::robotino_vision::LampState_<ContainerAllocator> & v) 
  {
    s << indent << "color: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.color);
    s << indent << "isLighting: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isLighting);
    s << indent << "at: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.at);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ROBOTINO_VISION_MESSAGE_LAMPSTATE_H
