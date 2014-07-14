// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RobotInfo.proto

#ifndef PROTOBUF_RobotInfo_2eproto__INCLUDED
#define PROTOBUF_RobotInfo_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "Time.pb.h"
#include "Pose2D.pb.h"
#include "Team.pb.h"
// @@protoc_insertion_point(includes)

namespace llsf_msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_RobotInfo_2eproto();
void protobuf_AssignDesc_RobotInfo_2eproto();
void protobuf_ShutdownFile_RobotInfo_2eproto();

class Robot;
class RobotInfo;

enum Robot_CompType {
  Robot_CompType_COMP_ID = 2000,
  Robot_CompType_MSG_TYPE = 31
};
bool Robot_CompType_IsValid(int value);
const Robot_CompType Robot_CompType_CompType_MIN = Robot_CompType_MSG_TYPE;
const Robot_CompType Robot_CompType_CompType_MAX = Robot_CompType_COMP_ID;
const int Robot_CompType_CompType_ARRAYSIZE = Robot_CompType_CompType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Robot_CompType_descriptor();
inline const ::std::string& Robot_CompType_Name(Robot_CompType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Robot_CompType_descriptor(), value);
}
inline bool Robot_CompType_Parse(
    const ::std::string& name, Robot_CompType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Robot_CompType>(
    Robot_CompType_descriptor(), name, value);
}
enum RobotInfo_CompType {
  RobotInfo_CompType_COMP_ID = 2000,
  RobotInfo_CompType_MSG_TYPE = 30
};
bool RobotInfo_CompType_IsValid(int value);
const RobotInfo_CompType RobotInfo_CompType_CompType_MIN = RobotInfo_CompType_MSG_TYPE;
const RobotInfo_CompType RobotInfo_CompType_CompType_MAX = RobotInfo_CompType_COMP_ID;
const int RobotInfo_CompType_CompType_ARRAYSIZE = RobotInfo_CompType_CompType_MAX + 1;

const ::google::protobuf::EnumDescriptor* RobotInfo_CompType_descriptor();
inline const ::std::string& RobotInfo_CompType_Name(RobotInfo_CompType value) {
  return ::google::protobuf::internal::NameOfEnum(
    RobotInfo_CompType_descriptor(), value);
}
inline bool RobotInfo_CompType_Parse(
    const ::std::string& name, RobotInfo_CompType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<RobotInfo_CompType>(
    RobotInfo_CompType_descriptor(), name, value);
}
enum RobotState {
  ACTIVE = 1,
  MAINTENANCE = 2,
  DISQUALIFIED = 3
};
bool RobotState_IsValid(int value);
const RobotState RobotState_MIN = ACTIVE;
const RobotState RobotState_MAX = DISQUALIFIED;
const int RobotState_ARRAYSIZE = RobotState_MAX + 1;

const ::google::protobuf::EnumDescriptor* RobotState_descriptor();
inline const ::std::string& RobotState_Name(RobotState value) {
  return ::google::protobuf::internal::NameOfEnum(
    RobotState_descriptor(), value);
}
inline bool RobotState_Parse(
    const ::std::string& name, RobotState* value) {
  return ::google::protobuf::internal::ParseNamedEnum<RobotState>(
    RobotState_descriptor(), name, value);
}
// ===================================================================

class Robot : public ::google::protobuf::Message {
 public:
  Robot();
  virtual ~Robot();
  
  Robot(const Robot& from);
  
  inline Robot& operator=(const Robot& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Robot& default_instance();
  
  void Swap(Robot* other);
  
  // implements Message ----------------------------------------------
  
  Robot* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Robot& from);
  void MergeFrom(const Robot& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  typedef Robot_CompType CompType;
  static const CompType COMP_ID = Robot_CompType_COMP_ID;
  static const CompType MSG_TYPE = Robot_CompType_MSG_TYPE;
  static inline bool CompType_IsValid(int value) {
    return Robot_CompType_IsValid(value);
  }
  static const CompType CompType_MIN =
    Robot_CompType_CompType_MIN;
  static const CompType CompType_MAX =
    Robot_CompType_CompType_MAX;
  static const int CompType_ARRAYSIZE =
    Robot_CompType_CompType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CompType_descriptor() {
    return Robot_CompType_descriptor();
  }
  static inline const ::std::string& CompType_Name(CompType value) {
    return Robot_CompType_Name(value);
  }
  static inline bool CompType_Parse(const ::std::string& name,
      CompType* value) {
    return Robot_CompType_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // required string team = 2;
  inline bool has_team() const;
  inline void clear_team();
  static const int kTeamFieldNumber = 2;
  inline const ::std::string& team() const;
  inline void set_team(const ::std::string& value);
  inline void set_team(const char* value);
  inline void set_team(const char* value, size_t size);
  inline ::std::string* mutable_team();
  inline ::std::string* release_team();
  
  // required .llsf_msgs.Team team_color = 12;
  inline bool has_team_color() const;
  inline void clear_team_color();
  static const int kTeamColorFieldNumber = 12;
  inline llsf_msgs::Team team_color() const;
  inline void set_team_color(llsf_msgs::Team value);
  
  // required uint32 number = 7;
  inline bool has_number() const;
  inline void clear_number();
  static const int kNumberFieldNumber = 7;
  inline ::google::protobuf::uint32 number() const;
  inline void set_number(::google::protobuf::uint32 value);
  
  // required string host = 3;
  inline bool has_host() const;
  inline void clear_host();
  static const int kHostFieldNumber = 3;
  inline const ::std::string& host() const;
  inline void set_host(const ::std::string& value);
  inline void set_host(const char* value);
  inline void set_host(const char* value, size_t size);
  inline ::std::string* mutable_host();
  inline ::std::string* release_host();
  
  // required .llsf_msgs.Time last_seen = 4;
  inline bool has_last_seen() const;
  inline void clear_last_seen();
  static const int kLastSeenFieldNumber = 4;
  inline const ::llsf_msgs::Time& last_seen() const;
  inline ::llsf_msgs::Time* mutable_last_seen();
  inline ::llsf_msgs::Time* release_last_seen();
  
  // optional .llsf_msgs.Pose2D pose = 6;
  inline bool has_pose() const;
  inline void clear_pose();
  static const int kPoseFieldNumber = 6;
  inline const ::llsf_msgs::Pose2D& pose() const;
  inline ::llsf_msgs::Pose2D* mutable_pose();
  inline ::llsf_msgs::Pose2D* release_pose();
  
  // optional .llsf_msgs.Pose2D vision_pose = 11;
  inline bool has_vision_pose() const;
  inline void clear_vision_pose();
  static const int kVisionPoseFieldNumber = 11;
  inline const ::llsf_msgs::Pose2D& vision_pose() const;
  inline ::llsf_msgs::Pose2D* mutable_vision_pose();
  inline ::llsf_msgs::Pose2D* release_vision_pose();
  
  // optional .llsf_msgs.RobotState state = 8;
  inline bool has_state() const;
  inline void clear_state();
  static const int kStateFieldNumber = 8;
  inline llsf_msgs::RobotState state() const;
  inline void set_state(llsf_msgs::RobotState value);
  
  // optional float maintenance_time_remaining = 9 [default = 0];
  inline bool has_maintenance_time_remaining() const;
  inline void clear_maintenance_time_remaining();
  static const int kMaintenanceTimeRemainingFieldNumber = 9;
  inline float maintenance_time_remaining() const;
  inline void set_maintenance_time_remaining(float value);
  
  // optional uint32 maintenance_cycles = 10;
  inline bool has_maintenance_cycles() const;
  inline void clear_maintenance_cycles();
  static const int kMaintenanceCyclesFieldNumber = 10;
  inline ::google::protobuf::uint32 maintenance_cycles() const;
  inline void set_maintenance_cycles(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:llsf_msgs.Robot)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_team();
  inline void clear_has_team();
  inline void set_has_team_color();
  inline void clear_has_team_color();
  inline void set_has_number();
  inline void clear_has_number();
  inline void set_has_host();
  inline void clear_has_host();
  inline void set_has_last_seen();
  inline void clear_has_last_seen();
  inline void set_has_pose();
  inline void clear_has_pose();
  inline void set_has_vision_pose();
  inline void clear_has_vision_pose();
  inline void set_has_state();
  inline void clear_has_state();
  inline void set_has_maintenance_time_remaining();
  inline void clear_has_maintenance_time_remaining();
  inline void set_has_maintenance_cycles();
  inline void clear_has_maintenance_cycles();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* name_;
  ::std::string* team_;
  int team_color_;
  ::google::protobuf::uint32 number_;
  ::std::string* host_;
  ::llsf_msgs::Time* last_seen_;
  ::llsf_msgs::Pose2D* pose_;
  ::llsf_msgs::Pose2D* vision_pose_;
  int state_;
  float maintenance_time_remaining_;
  ::google::protobuf::uint32 maintenance_cycles_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(11 + 31) / 32];
  
  friend void  protobuf_AddDesc_RobotInfo_2eproto();
  friend void protobuf_AssignDesc_RobotInfo_2eproto();
  friend void protobuf_ShutdownFile_RobotInfo_2eproto();
  
  void InitAsDefaultInstance();
  static Robot* default_instance_;
};
// -------------------------------------------------------------------

class RobotInfo : public ::google::protobuf::Message {
 public:
  RobotInfo();
  virtual ~RobotInfo();
  
  RobotInfo(const RobotInfo& from);
  
  inline RobotInfo& operator=(const RobotInfo& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const RobotInfo& default_instance();
  
  void Swap(RobotInfo* other);
  
  // implements Message ----------------------------------------------
  
  RobotInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RobotInfo& from);
  void MergeFrom(const RobotInfo& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  typedef RobotInfo_CompType CompType;
  static const CompType COMP_ID = RobotInfo_CompType_COMP_ID;
  static const CompType MSG_TYPE = RobotInfo_CompType_MSG_TYPE;
  static inline bool CompType_IsValid(int value) {
    return RobotInfo_CompType_IsValid(value);
  }
  static const CompType CompType_MIN =
    RobotInfo_CompType_CompType_MIN;
  static const CompType CompType_MAX =
    RobotInfo_CompType_CompType_MAX;
  static const int CompType_ARRAYSIZE =
    RobotInfo_CompType_CompType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CompType_descriptor() {
    return RobotInfo_CompType_descriptor();
  }
  static inline const ::std::string& CompType_Name(CompType value) {
    return RobotInfo_CompType_Name(value);
  }
  static inline bool CompType_Parse(const ::std::string& name,
      CompType* value) {
    return RobotInfo_CompType_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // repeated .llsf_msgs.Robot robots = 1;
  inline int robots_size() const;
  inline void clear_robots();
  static const int kRobotsFieldNumber = 1;
  inline const ::llsf_msgs::Robot& robots(int index) const;
  inline ::llsf_msgs::Robot* mutable_robots(int index);
  inline ::llsf_msgs::Robot* add_robots();
  inline const ::google::protobuf::RepeatedPtrField< ::llsf_msgs::Robot >&
      robots() const;
  inline ::google::protobuf::RepeatedPtrField< ::llsf_msgs::Robot >*
      mutable_robots();
  
  // @@protoc_insertion_point(class_scope:llsf_msgs.RobotInfo)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::llsf_msgs::Robot > robots_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_RobotInfo_2eproto();
  friend void protobuf_AssignDesc_RobotInfo_2eproto();
  friend void protobuf_ShutdownFile_RobotInfo_2eproto();
  
  void InitAsDefaultInstance();
  static RobotInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// Robot

// required string name = 1;
inline bool Robot::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Robot::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Robot::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Robot::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Robot::name() const {
  return *name_;
}
inline void Robot::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Robot::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Robot::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Robot::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* Robot::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string team = 2;
inline bool Robot::has_team() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Robot::set_has_team() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Robot::clear_has_team() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Robot::clear_team() {
  if (team_ != &::google::protobuf::internal::kEmptyString) {
    team_->clear();
  }
  clear_has_team();
}
inline const ::std::string& Robot::team() const {
  return *team_;
}
inline void Robot::set_team(const ::std::string& value) {
  set_has_team();
  if (team_ == &::google::protobuf::internal::kEmptyString) {
    team_ = new ::std::string;
  }
  team_->assign(value);
}
inline void Robot::set_team(const char* value) {
  set_has_team();
  if (team_ == &::google::protobuf::internal::kEmptyString) {
    team_ = new ::std::string;
  }
  team_->assign(value);
}
inline void Robot::set_team(const char* value, size_t size) {
  set_has_team();
  if (team_ == &::google::protobuf::internal::kEmptyString) {
    team_ = new ::std::string;
  }
  team_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Robot::mutable_team() {
  set_has_team();
  if (team_ == &::google::protobuf::internal::kEmptyString) {
    team_ = new ::std::string;
  }
  return team_;
}
inline ::std::string* Robot::release_team() {
  clear_has_team();
  if (team_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = team_;
    team_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required .llsf_msgs.Team team_color = 12;
inline bool Robot::has_team_color() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Robot::set_has_team_color() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Robot::clear_has_team_color() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Robot::clear_team_color() {
  team_color_ = 0;
  clear_has_team_color();
}
inline llsf_msgs::Team Robot::team_color() const {
  return static_cast< llsf_msgs::Team >(team_color_);
}
inline void Robot::set_team_color(llsf_msgs::Team value) {
  GOOGLE_DCHECK(llsf_msgs::Team_IsValid(value));
  set_has_team_color();
  team_color_ = value;
}

// required uint32 number = 7;
inline bool Robot::has_number() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Robot::set_has_number() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Robot::clear_has_number() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Robot::clear_number() {
  number_ = 0u;
  clear_has_number();
}
inline ::google::protobuf::uint32 Robot::number() const {
  return number_;
}
inline void Robot::set_number(::google::protobuf::uint32 value) {
  set_has_number();
  number_ = value;
}

// required string host = 3;
inline bool Robot::has_host() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Robot::set_has_host() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Robot::clear_has_host() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Robot::clear_host() {
  if (host_ != &::google::protobuf::internal::kEmptyString) {
    host_->clear();
  }
  clear_has_host();
}
inline const ::std::string& Robot::host() const {
  return *host_;
}
inline void Robot::set_host(const ::std::string& value) {
  set_has_host();
  if (host_ == &::google::protobuf::internal::kEmptyString) {
    host_ = new ::std::string;
  }
  host_->assign(value);
}
inline void Robot::set_host(const char* value) {
  set_has_host();
  if (host_ == &::google::protobuf::internal::kEmptyString) {
    host_ = new ::std::string;
  }
  host_->assign(value);
}
inline void Robot::set_host(const char* value, size_t size) {
  set_has_host();
  if (host_ == &::google::protobuf::internal::kEmptyString) {
    host_ = new ::std::string;
  }
  host_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Robot::mutable_host() {
  set_has_host();
  if (host_ == &::google::protobuf::internal::kEmptyString) {
    host_ = new ::std::string;
  }
  return host_;
}
inline ::std::string* Robot::release_host() {
  clear_has_host();
  if (host_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = host_;
    host_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required .llsf_msgs.Time last_seen = 4;
inline bool Robot::has_last_seen() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Robot::set_has_last_seen() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Robot::clear_has_last_seen() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Robot::clear_last_seen() {
  if (last_seen_ != NULL) last_seen_->::llsf_msgs::Time::Clear();
  clear_has_last_seen();
}
inline const ::llsf_msgs::Time& Robot::last_seen() const {
  return last_seen_ != NULL ? *last_seen_ : *default_instance_->last_seen_;
}
inline ::llsf_msgs::Time* Robot::mutable_last_seen() {
  set_has_last_seen();
  if (last_seen_ == NULL) last_seen_ = new ::llsf_msgs::Time;
  return last_seen_;
}
inline ::llsf_msgs::Time* Robot::release_last_seen() {
  clear_has_last_seen();
  ::llsf_msgs::Time* temp = last_seen_;
  last_seen_ = NULL;
  return temp;
}

// optional .llsf_msgs.Pose2D pose = 6;
inline bool Robot::has_pose() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Robot::set_has_pose() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Robot::clear_has_pose() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Robot::clear_pose() {
  if (pose_ != NULL) pose_->::llsf_msgs::Pose2D::Clear();
  clear_has_pose();
}
inline const ::llsf_msgs::Pose2D& Robot::pose() const {
  return pose_ != NULL ? *pose_ : *default_instance_->pose_;
}
inline ::llsf_msgs::Pose2D* Robot::mutable_pose() {
  set_has_pose();
  if (pose_ == NULL) pose_ = new ::llsf_msgs::Pose2D;
  return pose_;
}
inline ::llsf_msgs::Pose2D* Robot::release_pose() {
  clear_has_pose();
  ::llsf_msgs::Pose2D* temp = pose_;
  pose_ = NULL;
  return temp;
}

// optional .llsf_msgs.Pose2D vision_pose = 11;
inline bool Robot::has_vision_pose() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Robot::set_has_vision_pose() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Robot::clear_has_vision_pose() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Robot::clear_vision_pose() {
  if (vision_pose_ != NULL) vision_pose_->::llsf_msgs::Pose2D::Clear();
  clear_has_vision_pose();
}
inline const ::llsf_msgs::Pose2D& Robot::vision_pose() const {
  return vision_pose_ != NULL ? *vision_pose_ : *default_instance_->vision_pose_;
}
inline ::llsf_msgs::Pose2D* Robot::mutable_vision_pose() {
  set_has_vision_pose();
  if (vision_pose_ == NULL) vision_pose_ = new ::llsf_msgs::Pose2D;
  return vision_pose_;
}
inline ::llsf_msgs::Pose2D* Robot::release_vision_pose() {
  clear_has_vision_pose();
  ::llsf_msgs::Pose2D* temp = vision_pose_;
  vision_pose_ = NULL;
  return temp;
}

// optional .llsf_msgs.RobotState state = 8;
inline bool Robot::has_state() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Robot::set_has_state() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Robot::clear_has_state() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Robot::clear_state() {
  state_ = 1;
  clear_has_state();
}
inline llsf_msgs::RobotState Robot::state() const {
  return static_cast< llsf_msgs::RobotState >(state_);
}
inline void Robot::set_state(llsf_msgs::RobotState value) {
  GOOGLE_DCHECK(llsf_msgs::RobotState_IsValid(value));
  set_has_state();
  state_ = value;
}

// optional float maintenance_time_remaining = 9 [default = 0];
inline bool Robot::has_maintenance_time_remaining() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void Robot::set_has_maintenance_time_remaining() {
  _has_bits_[0] |= 0x00000200u;
}
inline void Robot::clear_has_maintenance_time_remaining() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void Robot::clear_maintenance_time_remaining() {
  maintenance_time_remaining_ = 0;
  clear_has_maintenance_time_remaining();
}
inline float Robot::maintenance_time_remaining() const {
  return maintenance_time_remaining_;
}
inline void Robot::set_maintenance_time_remaining(float value) {
  set_has_maintenance_time_remaining();
  maintenance_time_remaining_ = value;
}

// optional uint32 maintenance_cycles = 10;
inline bool Robot::has_maintenance_cycles() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void Robot::set_has_maintenance_cycles() {
  _has_bits_[0] |= 0x00000400u;
}
inline void Robot::clear_has_maintenance_cycles() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void Robot::clear_maintenance_cycles() {
  maintenance_cycles_ = 0u;
  clear_has_maintenance_cycles();
}
inline ::google::protobuf::uint32 Robot::maintenance_cycles() const {
  return maintenance_cycles_;
}
inline void Robot::set_maintenance_cycles(::google::protobuf::uint32 value) {
  set_has_maintenance_cycles();
  maintenance_cycles_ = value;
}

// -------------------------------------------------------------------

// RobotInfo

// repeated .llsf_msgs.Robot robots = 1;
inline int RobotInfo::robots_size() const {
  return robots_.size();
}
inline void RobotInfo::clear_robots() {
  robots_.Clear();
}
inline const ::llsf_msgs::Robot& RobotInfo::robots(int index) const {
  return robots_.Get(index);
}
inline ::llsf_msgs::Robot* RobotInfo::mutable_robots(int index) {
  return robots_.Mutable(index);
}
inline ::llsf_msgs::Robot* RobotInfo::add_robots() {
  return robots_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::llsf_msgs::Robot >&
RobotInfo::robots() const {
  return robots_;
}
inline ::google::protobuf::RepeatedPtrField< ::llsf_msgs::Robot >*
RobotInfo::mutable_robots() {
  return &robots_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace llsf_msgs

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::llsf_msgs::Robot_CompType>() {
  return ::llsf_msgs::Robot_CompType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::llsf_msgs::RobotInfo_CompType>() {
  return ::llsf_msgs::RobotInfo_CompType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< llsf_msgs::RobotState>() {
  return llsf_msgs::RobotState_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_RobotInfo_2eproto__INCLUDED