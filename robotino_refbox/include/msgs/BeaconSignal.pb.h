// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BeaconSignal.proto

#ifndef PROTOBUF_BeaconSignal_2eproto__INCLUDED
#define PROTOBUF_BeaconSignal_2eproto__INCLUDED

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
#include "Team.pb.h"
#include "Pose2D.pb.h"
// @@protoc_insertion_point(includes)

namespace llsf_msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_BeaconSignal_2eproto();
void protobuf_AssignDesc_BeaconSignal_2eproto();
void protobuf_ShutdownFile_BeaconSignal_2eproto();

class BeaconSignal;

enum BeaconSignal_CompType {
  BeaconSignal_CompType_COMP_ID = 2000,
  BeaconSignal_CompType_MSG_TYPE = 1
};
bool BeaconSignal_CompType_IsValid(int value);
const BeaconSignal_CompType BeaconSignal_CompType_CompType_MIN = BeaconSignal_CompType_MSG_TYPE;
const BeaconSignal_CompType BeaconSignal_CompType_CompType_MAX = BeaconSignal_CompType_COMP_ID;
const int BeaconSignal_CompType_CompType_ARRAYSIZE = BeaconSignal_CompType_CompType_MAX + 1;

const ::google::protobuf::EnumDescriptor* BeaconSignal_CompType_descriptor();
inline const ::std::string& BeaconSignal_CompType_Name(BeaconSignal_CompType value) {
  return ::google::protobuf::internal::NameOfEnum(
    BeaconSignal_CompType_descriptor(), value);
}
inline bool BeaconSignal_CompType_Parse(
    const ::std::string& name, BeaconSignal_CompType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<BeaconSignal_CompType>(
    BeaconSignal_CompType_descriptor(), name, value);
}
// ===================================================================

class BeaconSignal : public ::google::protobuf::Message {
 public:
  BeaconSignal();
  virtual ~BeaconSignal();
  
  BeaconSignal(const BeaconSignal& from);
  
  inline BeaconSignal& operator=(const BeaconSignal& from) {
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
  static const BeaconSignal& default_instance();
  
  void Swap(BeaconSignal* other);
  
  // implements Message ----------------------------------------------
  
  BeaconSignal* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BeaconSignal& from);
  void MergeFrom(const BeaconSignal& from);
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
  
  typedef BeaconSignal_CompType CompType;
  static const CompType COMP_ID = BeaconSignal_CompType_COMP_ID;
  static const CompType MSG_TYPE = BeaconSignal_CompType_MSG_TYPE;
  static inline bool CompType_IsValid(int value) {
    return BeaconSignal_CompType_IsValid(value);
  }
  static const CompType CompType_MIN =
    BeaconSignal_CompType_CompType_MIN;
  static const CompType CompType_MAX =
    BeaconSignal_CompType_CompType_MAX;
  static const int CompType_ARRAYSIZE =
    BeaconSignal_CompType_CompType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CompType_descriptor() {
    return BeaconSignal_CompType_descriptor();
  }
  static inline const ::std::string& CompType_Name(CompType value) {
    return BeaconSignal_CompType_Name(value);
  }
  static inline bool CompType_Parse(const ::std::string& name,
      CompType* value) {
    return BeaconSignal_CompType_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // required .llsf_msgs.Time time = 1;
  inline bool has_time() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 1;
  inline const ::llsf_msgs::Time& time() const;
  inline ::llsf_msgs::Time* mutable_time();
  inline ::llsf_msgs::Time* release_time();
  
  // required uint64 seq = 2;
  inline bool has_seq() const;
  inline void clear_seq();
  static const int kSeqFieldNumber = 2;
  inline ::google::protobuf::uint64 seq() const;
  inline void set_seq(::google::protobuf::uint64 value);
  
  // required uint32 number = 8;
  inline bool has_number() const;
  inline void clear_number();
  static const int kNumberFieldNumber = 8;
  inline ::google::protobuf::uint32 number() const;
  inline void set_number(::google::protobuf::uint32 value);
  
  // required string team_name = 4;
  inline bool has_team_name() const;
  inline void clear_team_name();
  static const int kTeamNameFieldNumber = 4;
  inline const ::std::string& team_name() const;
  inline void set_team_name(const ::std::string& value);
  inline void set_team_name(const char* value);
  inline void set_team_name(const char* value, size_t size);
  inline ::std::string* mutable_team_name();
  inline ::std::string* release_team_name();
  
  // required string peer_name = 5;
  inline bool has_peer_name() const;
  inline void clear_peer_name();
  static const int kPeerNameFieldNumber = 5;
  inline const ::std::string& peer_name() const;
  inline void set_peer_name(const ::std::string& value);
  inline void set_peer_name(const char* value);
  inline void set_peer_name(const char* value, size_t size);
  inline ::std::string* mutable_peer_name();
  inline ::std::string* release_peer_name();
  
  // optional .llsf_msgs.Team team_color = 6;
  inline bool has_team_color() const;
  inline void clear_team_color();
  static const int kTeamColorFieldNumber = 6;
  inline llsf_msgs::Team team_color() const;
  inline void set_team_color(llsf_msgs::Team value);
  
  // optional .llsf_msgs.Pose2D pose = 7;
  inline bool has_pose() const;
  inline void clear_pose();
  static const int kPoseFieldNumber = 7;
  inline const ::llsf_msgs::Pose2D& pose() const;
  inline ::llsf_msgs::Pose2D* mutable_pose();
  inline ::llsf_msgs::Pose2D* release_pose();
  
  // @@protoc_insertion_point(class_scope:llsf_msgs.BeaconSignal)
 private:
  inline void set_has_time();
  inline void clear_has_time();
  inline void set_has_seq();
  inline void clear_has_seq();
  inline void set_has_number();
  inline void clear_has_number();
  inline void set_has_team_name();
  inline void clear_has_team_name();
  inline void set_has_peer_name();
  inline void clear_has_peer_name();
  inline void set_has_team_color();
  inline void clear_has_team_color();
  inline void set_has_pose();
  inline void clear_has_pose();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::llsf_msgs::Time* time_;
  ::google::protobuf::uint64 seq_;
  ::std::string* team_name_;
  ::google::protobuf::uint32 number_;
  int team_color_;
  ::std::string* peer_name_;
  ::llsf_msgs::Pose2D* pose_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];
  
  friend void  protobuf_AddDesc_BeaconSignal_2eproto();
  friend void protobuf_AssignDesc_BeaconSignal_2eproto();
  friend void protobuf_ShutdownFile_BeaconSignal_2eproto();
  
  void InitAsDefaultInstance();
  static BeaconSignal* default_instance_;
};
// ===================================================================


// ===================================================================

// BeaconSignal

// required .llsf_msgs.Time time = 1;
inline bool BeaconSignal::has_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BeaconSignal::set_has_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BeaconSignal::clear_has_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BeaconSignal::clear_time() {
  if (time_ != NULL) time_->::llsf_msgs::Time::Clear();
  clear_has_time();
}
inline const ::llsf_msgs::Time& BeaconSignal::time() const {
  return time_ != NULL ? *time_ : *default_instance_->time_;
}
inline ::llsf_msgs::Time* BeaconSignal::mutable_time() {
  set_has_time();
  if (time_ == NULL) time_ = new ::llsf_msgs::Time;
  return time_;
}
inline ::llsf_msgs::Time* BeaconSignal::release_time() {
  clear_has_time();
  ::llsf_msgs::Time* temp = time_;
  time_ = NULL;
  return temp;
}

// required uint64 seq = 2;
inline bool BeaconSignal::has_seq() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BeaconSignal::set_has_seq() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BeaconSignal::clear_has_seq() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BeaconSignal::clear_seq() {
  seq_ = GOOGLE_ULONGLONG(0);
  clear_has_seq();
}
inline ::google::protobuf::uint64 BeaconSignal::seq() const {
  return seq_;
}
inline void BeaconSignal::set_seq(::google::protobuf::uint64 value) {
  set_has_seq();
  seq_ = value;
}

// required uint32 number = 8;
inline bool BeaconSignal::has_number() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BeaconSignal::set_has_number() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BeaconSignal::clear_has_number() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BeaconSignal::clear_number() {
  number_ = 0u;
  clear_has_number();
}
inline ::google::protobuf::uint32 BeaconSignal::number() const {
  return number_;
}
inline void BeaconSignal::set_number(::google::protobuf::uint32 value) {
  set_has_number();
  number_ = value;
}

// required string team_name = 4;
inline bool BeaconSignal::has_team_name() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void BeaconSignal::set_has_team_name() {
  _has_bits_[0] |= 0x00000008u;
}
inline void BeaconSignal::clear_has_team_name() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void BeaconSignal::clear_team_name() {
  if (team_name_ != &::google::protobuf::internal::kEmptyString) {
    team_name_->clear();
  }
  clear_has_team_name();
}
inline const ::std::string& BeaconSignal::team_name() const {
  return *team_name_;
}
inline void BeaconSignal::set_team_name(const ::std::string& value) {
  set_has_team_name();
  if (team_name_ == &::google::protobuf::internal::kEmptyString) {
    team_name_ = new ::std::string;
  }
  team_name_->assign(value);
}
inline void BeaconSignal::set_team_name(const char* value) {
  set_has_team_name();
  if (team_name_ == &::google::protobuf::internal::kEmptyString) {
    team_name_ = new ::std::string;
  }
  team_name_->assign(value);
}
inline void BeaconSignal::set_team_name(const char* value, size_t size) {
  set_has_team_name();
  if (team_name_ == &::google::protobuf::internal::kEmptyString) {
    team_name_ = new ::std::string;
  }
  team_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BeaconSignal::mutable_team_name() {
  set_has_team_name();
  if (team_name_ == &::google::protobuf::internal::kEmptyString) {
    team_name_ = new ::std::string;
  }
  return team_name_;
}
inline ::std::string* BeaconSignal::release_team_name() {
  clear_has_team_name();
  if (team_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = team_name_;
    team_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string peer_name = 5;
inline bool BeaconSignal::has_peer_name() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void BeaconSignal::set_has_peer_name() {
  _has_bits_[0] |= 0x00000010u;
}
inline void BeaconSignal::clear_has_peer_name() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void BeaconSignal::clear_peer_name() {
  if (peer_name_ != &::google::protobuf::internal::kEmptyString) {
    peer_name_->clear();
  }
  clear_has_peer_name();
}
inline const ::std::string& BeaconSignal::peer_name() const {
  return *peer_name_;
}
inline void BeaconSignal::set_peer_name(const ::std::string& value) {
  set_has_peer_name();
  if (peer_name_ == &::google::protobuf::internal::kEmptyString) {
    peer_name_ = new ::std::string;
  }
  peer_name_->assign(value);
}
inline void BeaconSignal::set_peer_name(const char* value) {
  set_has_peer_name();
  if (peer_name_ == &::google::protobuf::internal::kEmptyString) {
    peer_name_ = new ::std::string;
  }
  peer_name_->assign(value);
}
inline void BeaconSignal::set_peer_name(const char* value, size_t size) {
  set_has_peer_name();
  if (peer_name_ == &::google::protobuf::internal::kEmptyString) {
    peer_name_ = new ::std::string;
  }
  peer_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BeaconSignal::mutable_peer_name() {
  set_has_peer_name();
  if (peer_name_ == &::google::protobuf::internal::kEmptyString) {
    peer_name_ = new ::std::string;
  }
  return peer_name_;
}
inline ::std::string* BeaconSignal::release_peer_name() {
  clear_has_peer_name();
  if (peer_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = peer_name_;
    peer_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional .llsf_msgs.Team team_color = 6;
inline bool BeaconSignal::has_team_color() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void BeaconSignal::set_has_team_color() {
  _has_bits_[0] |= 0x00000020u;
}
inline void BeaconSignal::clear_has_team_color() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void BeaconSignal::clear_team_color() {
  team_color_ = 0;
  clear_has_team_color();
}
inline llsf_msgs::Team BeaconSignal::team_color() const {
  return static_cast< llsf_msgs::Team >(team_color_);
}
inline void BeaconSignal::set_team_color(llsf_msgs::Team value) {
  GOOGLE_DCHECK(llsf_msgs::Team_IsValid(value));
  set_has_team_color();
  team_color_ = value;
}

// optional .llsf_msgs.Pose2D pose = 7;
inline bool BeaconSignal::has_pose() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void BeaconSignal::set_has_pose() {
  _has_bits_[0] |= 0x00000040u;
}
inline void BeaconSignal::clear_has_pose() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void BeaconSignal::clear_pose() {
  if (pose_ != NULL) pose_->::llsf_msgs::Pose2D::Clear();
  clear_has_pose();
}
inline const ::llsf_msgs::Pose2D& BeaconSignal::pose() const {
  return pose_ != NULL ? *pose_ : *default_instance_->pose_;
}
inline ::llsf_msgs::Pose2D* BeaconSignal::mutable_pose() {
  set_has_pose();
  if (pose_ == NULL) pose_ = new ::llsf_msgs::Pose2D;
  return pose_;
}
inline ::llsf_msgs::Pose2D* BeaconSignal::release_pose() {
  clear_has_pose();
  ::llsf_msgs::Pose2D* temp = pose_;
  pose_ = NULL;
  return temp;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace llsf_msgs

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::llsf_msgs::BeaconSignal_CompType>() {
  return ::llsf_msgs::BeaconSignal_CompType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_BeaconSignal_2eproto__INCLUDED
