// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Team.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace llsf_msgs {

namespace {

const ::google::protobuf::EnumDescriptor* Team_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_Team_2eproto() {
  protobuf_AddDesc_Team_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Team.proto");
  GOOGLE_CHECK(file != NULL);
  Team_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Team_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_Team_2eproto() {
}

void protobuf_AddDesc_Team_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\nTeam.proto\022\tllsf_msgs*\035\n\004Team\022\010\n\004CYAN\020"
    "\000\022\013\n\007MAGENTA\020\001B-\n\037org.robocup_logistics."
    "llsf_msgsB\nTeamProtos", 101);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Team.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Team_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Team_2eproto {
  StaticDescriptorInitializer_Team_2eproto() {
    protobuf_AddDesc_Team_2eproto();
  }
} static_descriptor_initializer_Team_2eproto_;

const ::google::protobuf::EnumDescriptor* Team_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Team_descriptor_;
}
bool Team_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace llsf_msgs

// @@protoc_insertion_point(global_scope)