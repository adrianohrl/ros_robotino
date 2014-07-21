/* Auto-generated by genmsg_cpp for file /home/robotino/fuerte_workspace/sandbox/robotino/robotino_movements/srv/FullPath.srv */
#ifndef ROBOTINO_MOVEMENTS_SERVICE_FULLPATH_H
#define ROBOTINO_MOVEMENTS_SERVICE_FULLPATH_H
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

#include "ros/service_traits.h"




namespace robotino_movements
{
template <class ContainerAllocator>
struct FullPathRequest_ {
  typedef FullPathRequest_<ContainerAllocator> Type;

  FullPathRequest_()
  : goal(0)
  {
  }

  FullPathRequest_(const ContainerAllocator& _alloc)
  : goal(0)
  {
  }

  typedef int32_t _goal_type;
  int32_t goal;


  typedef boost::shared_ptr< ::robotino_movements::FullPathRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotino_movements::FullPathRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct FullPathRequest
typedef  ::robotino_movements::FullPathRequest_<std::allocator<void> > FullPathRequest;

typedef boost::shared_ptr< ::robotino_movements::FullPathRequest> FullPathRequestPtr;
typedef boost::shared_ptr< ::robotino_movements::FullPathRequest const> FullPathRequestConstPtr;


template <class ContainerAllocator>
struct FullPathResponse_ {
  typedef FullPathResponse_<ContainerAllocator> Type;

  FullPathResponse_()
  : path_size(0)
  , num_turns(0)
  , full_path()
  {
  }

  FullPathResponse_(const ContainerAllocator& _alloc)
  : path_size(0)
  , num_turns(0)
  , full_path(_alloc)
  {
  }

  typedef int32_t _path_size_type;
  int32_t path_size;

  typedef int32_t _num_turns_type;
  int32_t num_turns;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _full_path_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  full_path;


  typedef boost::shared_ptr< ::robotino_movements::FullPathResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotino_movements::FullPathResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct FullPathResponse
typedef  ::robotino_movements::FullPathResponse_<std::allocator<void> > FullPathResponse;

typedef boost::shared_ptr< ::robotino_movements::FullPathResponse> FullPathResponsePtr;
typedef boost::shared_ptr< ::robotino_movements::FullPathResponse const> FullPathResponseConstPtr;

struct FullPath
{

typedef FullPathRequest Request;
typedef FullPathResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct FullPath
} // namespace robotino_movements

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::robotino_movements::FullPathRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::robotino_movements::FullPathRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::robotino_movements::FullPathRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "18df0149936b7aa95588e3862476ebde";
  }

  static const char* value(const  ::robotino_movements::FullPathRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x18df0149936b7aa9ULL;
  static const uint64_t static_value2 = 0x5588e3862476ebdeULL;
};

template<class ContainerAllocator>
struct DataType< ::robotino_movements::FullPathRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "robotino_movements/FullPathRequest";
  }

  static const char* value(const  ::robotino_movements::FullPathRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::robotino_movements::FullPathRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 goal\n\
\n\
";
  }

  static const char* value(const  ::robotino_movements::FullPathRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::robotino_movements::FullPathRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::robotino_movements::FullPathResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::robotino_movements::FullPathResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::robotino_movements::FullPathResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6b2530fdfa739ffe368570ee045dc6c4";
  }

  static const char* value(const  ::robotino_movements::FullPathResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x6b2530fdfa739ffeULL;
  static const uint64_t static_value2 = 0x368570ee045dc6c4ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotino_movements::FullPathResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "robotino_movements/FullPathResponse";
  }

  static const char* value(const  ::robotino_movements::FullPathResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::robotino_movements::FullPathResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 path_size\n\
int32 num_turns\n\
string full_path\n\
\n\
\n\
";
  }

  static const char* value(const  ::robotino_movements::FullPathResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::robotino_movements::FullPathRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.goal);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct FullPathRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::robotino_movements::FullPathResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.path_size);
    stream.next(m.num_turns);
    stream.next(m.full_path);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct FullPathResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<robotino_movements::FullPath> {
  static const char* value() 
  {
    return "03a4f20dd60c4c41c218f9ce72db01fd";
  }

  static const char* value(const robotino_movements::FullPath&) { return value(); } 
};

template<>
struct DataType<robotino_movements::FullPath> {
  static const char* value() 
  {
    return "robotino_movements/FullPath";
  }

  static const char* value(const robotino_movements::FullPath&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<robotino_movements::FullPathRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "03a4f20dd60c4c41c218f9ce72db01fd";
  }

  static const char* value(const robotino_movements::FullPathRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<robotino_movements::FullPathRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "robotino_movements/FullPath";
  }

  static const char* value(const robotino_movements::FullPathRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<robotino_movements::FullPathResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "03a4f20dd60c4c41c218f9ce72db01fd";
  }

  static const char* value(const robotino_movements::FullPathResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<robotino_movements::FullPathResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "robotino_movements/FullPath";
  }

  static const char* value(const robotino_movements::FullPathResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // ROBOTINO_MOVEMENTS_SERVICE_FULLPATH_H

