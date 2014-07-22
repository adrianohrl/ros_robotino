/* Auto-generated by genmsg_cpp for file /home/robotino/fuerte_workspace/sandbox/robotino/robotino_refbox/msg/Game_Info.msg */
#ifndef ROBOTINO_REFBOX_MESSAGE_GAME_INFO_H
#define ROBOTINO_REFBOX_MESSAGE_GAME_INFO_H
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


namespace robotino_refbox
{
template <class ContainerAllocator>
struct Game_Info_ {
  typedef Game_Info_<ContainerAllocator> Type;

  Game_Info_()
  : phase(0)
  , state(0)
  , time()
  {
    time.assign(0);
  }

  Game_Info_(const ContainerAllocator& _alloc)
  : phase(0)
  , state(0)
  , time()
  {
    time.assign(0);
  }

  typedef int32_t _phase_type;
  int32_t phase;

  typedef int32_t _state_type;
  int32_t state;

  typedef boost::array<int64_t, 3>  _time_type;
  boost::array<int64_t, 3>  time;


  typedef boost::shared_ptr< ::robotino_refbox::Game_Info_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotino_refbox::Game_Info_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Game_Info
typedef  ::robotino_refbox::Game_Info_<std::allocator<void> > Game_Info;

typedef boost::shared_ptr< ::robotino_refbox::Game_Info> Game_InfoPtr;
typedef boost::shared_ptr< ::robotino_refbox::Game_Info const> Game_InfoConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::robotino_refbox::Game_Info_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::robotino_refbox::Game_Info_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace robotino_refbox

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::robotino_refbox::Game_Info_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::robotino_refbox::Game_Info_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::robotino_refbox::Game_Info_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e6f8fa933c19a2d59891d4e40d40385f";
  }

  static const char* value(const  ::robotino_refbox::Game_Info_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe6f8fa933c19a2d5ULL;
  static const uint64_t static_value2 = 0x9891d4e40d40385fULL;
};

template<class ContainerAllocator>
struct DataType< ::robotino_refbox::Game_Info_<ContainerAllocator> > {
  static const char* value() 
  {
    return "robotino_refbox/Game_Info";
  }

  static const char* value(const  ::robotino_refbox::Game_Info_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::robotino_refbox::Game_Info_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 phase\n\
int32 state\n\
int64[3] time\n\
\n\
";
  }

  static const char* value(const  ::robotino_refbox::Game_Info_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::robotino_refbox::Game_Info_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::robotino_refbox::Game_Info_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.phase);
    stream.next(m.state);
    stream.next(m.time);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Game_Info_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotino_refbox::Game_Info_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::robotino_refbox::Game_Info_<ContainerAllocator> & v) 
  {
    s << indent << "phase: ";
    Printer<int32_t>::stream(s, indent + "  ", v.phase);
    s << indent << "state: ";
    Printer<int32_t>::stream(s, indent + "  ", v.state);
    s << indent << "time[]" << std::endl;
    for (size_t i = 0; i < v.time.size(); ++i)
    {
      s << indent << "  time[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.time[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // ROBOTINO_REFBOX_MESSAGE_GAME_INFO_H
