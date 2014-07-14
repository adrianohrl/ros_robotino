// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OrderInfo.proto

#ifndef PROTOBUF_OrderInfo_2eproto__INCLUDED
#define PROTOBUF_OrderInfo_2eproto__INCLUDED

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
#include "Team.pb.h"
// @@protoc_insertion_point(includes)

namespace llsf_msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_OrderInfo_2eproto();
void protobuf_AssignDesc_OrderInfo_2eproto();
void protobuf_ShutdownFile_OrderInfo_2eproto();

class Order;
class OrderInfo;

enum Order_CompType {
  Order_CompType_COMP_ID = 2000,
  Order_CompType_MSG_TYPE = 40
};
bool Order_CompType_IsValid(int value);
const Order_CompType Order_CompType_CompType_MIN = Order_CompType_MSG_TYPE;
const Order_CompType Order_CompType_CompType_MAX = Order_CompType_COMP_ID;
const int Order_CompType_CompType_ARRAYSIZE = Order_CompType_CompType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Order_CompType_descriptor();
inline const ::std::string& Order_CompType_Name(Order_CompType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Order_CompType_descriptor(), value);
}
inline bool Order_CompType_Parse(
    const ::std::string& name, Order_CompType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Order_CompType>(
    Order_CompType_descriptor(), name, value);
}
enum Order_ProductType {
  Order_ProductType_P1 = 1,
  Order_ProductType_P2 = 2,
  Order_ProductType_P3 = 3
};
bool Order_ProductType_IsValid(int value);
const Order_ProductType Order_ProductType_ProductType_MIN = Order_ProductType_P1;
const Order_ProductType Order_ProductType_ProductType_MAX = Order_ProductType_P3;
const int Order_ProductType_ProductType_ARRAYSIZE = Order_ProductType_ProductType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Order_ProductType_descriptor();
inline const ::std::string& Order_ProductType_Name(Order_ProductType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Order_ProductType_descriptor(), value);
}
inline bool Order_ProductType_Parse(
    const ::std::string& name, Order_ProductType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Order_ProductType>(
    Order_ProductType_descriptor(), name, value);
}
enum Order_DeliveryGate {
  Order_DeliveryGate_ANY = 1,
  Order_DeliveryGate_D1 = 2,
  Order_DeliveryGate_D2 = 3,
  Order_DeliveryGate_D3 = 4,
  Order_DeliveryGate_D4 = 5,
  Order_DeliveryGate_D5 = 6,
  Order_DeliveryGate_D6 = 7
};
bool Order_DeliveryGate_IsValid(int value);
const Order_DeliveryGate Order_DeliveryGate_DeliveryGate_MIN = Order_DeliveryGate_ANY;
const Order_DeliveryGate Order_DeliveryGate_DeliveryGate_MAX = Order_DeliveryGate_D6;
const int Order_DeliveryGate_DeliveryGate_ARRAYSIZE = Order_DeliveryGate_DeliveryGate_MAX + 1;

const ::google::protobuf::EnumDescriptor* Order_DeliveryGate_descriptor();
inline const ::std::string& Order_DeliveryGate_Name(Order_DeliveryGate value) {
  return ::google::protobuf::internal::NameOfEnum(
    Order_DeliveryGate_descriptor(), value);
}
inline bool Order_DeliveryGate_Parse(
    const ::std::string& name, Order_DeliveryGate* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Order_DeliveryGate>(
    Order_DeliveryGate_descriptor(), name, value);
}
enum OrderInfo_CompType {
  OrderInfo_CompType_COMP_ID = 2000,
  OrderInfo_CompType_MSG_TYPE = 41
};
bool OrderInfo_CompType_IsValid(int value);
const OrderInfo_CompType OrderInfo_CompType_CompType_MIN = OrderInfo_CompType_MSG_TYPE;
const OrderInfo_CompType OrderInfo_CompType_CompType_MAX = OrderInfo_CompType_COMP_ID;
const int OrderInfo_CompType_CompType_ARRAYSIZE = OrderInfo_CompType_CompType_MAX + 1;

const ::google::protobuf::EnumDescriptor* OrderInfo_CompType_descriptor();
inline const ::std::string& OrderInfo_CompType_Name(OrderInfo_CompType value) {
  return ::google::protobuf::internal::NameOfEnum(
    OrderInfo_CompType_descriptor(), value);
}
inline bool OrderInfo_CompType_Parse(
    const ::std::string& name, OrderInfo_CompType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<OrderInfo_CompType>(
    OrderInfo_CompType_descriptor(), name, value);
}
// ===================================================================

class Order : public ::google::protobuf::Message {
 public:
  Order();
  virtual ~Order();
  
  Order(const Order& from);
  
  inline Order& operator=(const Order& from) {
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
  static const Order& default_instance();
  
  void Swap(Order* other);
  
  // implements Message ----------------------------------------------
  
  Order* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Order& from);
  void MergeFrom(const Order& from);
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
  
  typedef Order_CompType CompType;
  static const CompType COMP_ID = Order_CompType_COMP_ID;
  static const CompType MSG_TYPE = Order_CompType_MSG_TYPE;
  static inline bool CompType_IsValid(int value) {
    return Order_CompType_IsValid(value);
  }
  static const CompType CompType_MIN =
    Order_CompType_CompType_MIN;
  static const CompType CompType_MAX =
    Order_CompType_CompType_MAX;
  static const int CompType_ARRAYSIZE =
    Order_CompType_CompType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CompType_descriptor() {
    return Order_CompType_descriptor();
  }
  static inline const ::std::string& CompType_Name(CompType value) {
    return Order_CompType_Name(value);
  }
  static inline bool CompType_Parse(const ::std::string& name,
      CompType* value) {
    return Order_CompType_Parse(name, value);
  }
  
  typedef Order_ProductType ProductType;
  static const ProductType P1 = Order_ProductType_P1;
  static const ProductType P2 = Order_ProductType_P2;
  static const ProductType P3 = Order_ProductType_P3;
  static inline bool ProductType_IsValid(int value) {
    return Order_ProductType_IsValid(value);
  }
  static const ProductType ProductType_MIN =
    Order_ProductType_ProductType_MIN;
  static const ProductType ProductType_MAX =
    Order_ProductType_ProductType_MAX;
  static const int ProductType_ARRAYSIZE =
    Order_ProductType_ProductType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ProductType_descriptor() {
    return Order_ProductType_descriptor();
  }
  static inline const ::std::string& ProductType_Name(ProductType value) {
    return Order_ProductType_Name(value);
  }
  static inline bool ProductType_Parse(const ::std::string& name,
      ProductType* value) {
    return Order_ProductType_Parse(name, value);
  }
  
  typedef Order_DeliveryGate DeliveryGate;
  static const DeliveryGate ANY = Order_DeliveryGate_ANY;
  static const DeliveryGate D1 = Order_DeliveryGate_D1;
  static const DeliveryGate D2 = Order_DeliveryGate_D2;
  static const DeliveryGate D3 = Order_DeliveryGate_D3;
  static const DeliveryGate D4 = Order_DeliveryGate_D4;
  static const DeliveryGate D5 = Order_DeliveryGate_D5;
  static const DeliveryGate D6 = Order_DeliveryGate_D6;
  static inline bool DeliveryGate_IsValid(int value) {
    return Order_DeliveryGate_IsValid(value);
  }
  static const DeliveryGate DeliveryGate_MIN =
    Order_DeliveryGate_DeliveryGate_MIN;
  static const DeliveryGate DeliveryGate_MAX =
    Order_DeliveryGate_DeliveryGate_MAX;
  static const int DeliveryGate_ARRAYSIZE =
    Order_DeliveryGate_DeliveryGate_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  DeliveryGate_descriptor() {
    return Order_DeliveryGate_descriptor();
  }
  static inline const ::std::string& DeliveryGate_Name(DeliveryGate value) {
    return Order_DeliveryGate_Name(value);
  }
  static inline bool DeliveryGate_Parse(const ::std::string& name,
      DeliveryGate* value) {
    return Order_DeliveryGate_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // required uint32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::uint32 id() const;
  inline void set_id(::google::protobuf::uint32 value);
  
  // required .llsf_msgs.Order.ProductType product = 2;
  inline bool has_product() const;
  inline void clear_product();
  static const int kProductFieldNumber = 2;
  inline ::llsf_msgs::Order_ProductType product() const;
  inline void set_product(::llsf_msgs::Order_ProductType value);
  
  // optional .llsf_msgs.Team team_color = 11;
  inline bool has_team_color() const;
  inline void clear_team_color();
  static const int kTeamColorFieldNumber = 11;
  inline llsf_msgs::Team team_color() const;
  inline void set_team_color(llsf_msgs::Team value);
  
  // required uint32 quantity_requested = 3;
  inline bool has_quantity_requested() const;
  inline void clear_quantity_requested();
  static const int kQuantityRequestedFieldNumber = 3;
  inline ::google::protobuf::uint32 quantity_requested() const;
  inline void set_quantity_requested(::google::protobuf::uint32 value);
  
  // required uint32 quantity_delivered = 4;
  inline bool has_quantity_delivered() const;
  inline void clear_quantity_delivered();
  static const int kQuantityDeliveredFieldNumber = 4;
  inline ::google::protobuf::uint32 quantity_delivered() const;
  inline void set_quantity_delivered(::google::protobuf::uint32 value);
  
  // required uint32 delivery_period_begin = 6;
  inline bool has_delivery_period_begin() const;
  inline void clear_delivery_period_begin();
  static const int kDeliveryPeriodBeginFieldNumber = 6;
  inline ::google::protobuf::uint32 delivery_period_begin() const;
  inline void set_delivery_period_begin(::google::protobuf::uint32 value);
  
  // required uint32 delivery_period_end = 7;
  inline bool has_delivery_period_end() const;
  inline void clear_delivery_period_end();
  static const int kDeliveryPeriodEndFieldNumber = 7;
  inline ::google::protobuf::uint32 delivery_period_end() const;
  inline void set_delivery_period_end(::google::protobuf::uint32 value);
  
  // optional .llsf_msgs.Order.DeliveryGate delivery_gate = 8 [default = ANY];
  inline bool has_delivery_gate() const;
  inline void clear_delivery_gate();
  static const int kDeliveryGateFieldNumber = 8;
  inline ::llsf_msgs::Order_DeliveryGate delivery_gate() const;
  inline void set_delivery_gate(::llsf_msgs::Order_DeliveryGate value);
  
  // @@protoc_insertion_point(class_scope:llsf_msgs.Order)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_product();
  inline void clear_has_product();
  inline void set_has_team_color();
  inline void clear_has_team_color();
  inline void set_has_quantity_requested();
  inline void clear_has_quantity_requested();
  inline void set_has_quantity_delivered();
  inline void clear_has_quantity_delivered();
  inline void set_has_delivery_period_begin();
  inline void clear_has_delivery_period_begin();
  inline void set_has_delivery_period_end();
  inline void clear_has_delivery_period_end();
  inline void set_has_delivery_gate();
  inline void clear_has_delivery_gate();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::uint32 id_;
  int product_;
  int team_color_;
  ::google::protobuf::uint32 quantity_requested_;
  ::google::protobuf::uint32 quantity_delivered_;
  ::google::protobuf::uint32 delivery_period_begin_;
  ::google::protobuf::uint32 delivery_period_end_;
  int delivery_gate_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];
  
  friend void  protobuf_AddDesc_OrderInfo_2eproto();
  friend void protobuf_AssignDesc_OrderInfo_2eproto();
  friend void protobuf_ShutdownFile_OrderInfo_2eproto();
  
  void InitAsDefaultInstance();
  static Order* default_instance_;
};
// -------------------------------------------------------------------

class OrderInfo : public ::google::protobuf::Message {
 public:
  OrderInfo();
  virtual ~OrderInfo();
  
  OrderInfo(const OrderInfo& from);
  
  inline OrderInfo& operator=(const OrderInfo& from) {
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
  static const OrderInfo& default_instance();
  
  void Swap(OrderInfo* other);
  
  // implements Message ----------------------------------------------
  
  OrderInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const OrderInfo& from);
  void MergeFrom(const OrderInfo& from);
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
  
  typedef OrderInfo_CompType CompType;
  static const CompType COMP_ID = OrderInfo_CompType_COMP_ID;
  static const CompType MSG_TYPE = OrderInfo_CompType_MSG_TYPE;
  static inline bool CompType_IsValid(int value) {
    return OrderInfo_CompType_IsValid(value);
  }
  static const CompType CompType_MIN =
    OrderInfo_CompType_CompType_MIN;
  static const CompType CompType_MAX =
    OrderInfo_CompType_CompType_MAX;
  static const int CompType_ARRAYSIZE =
    OrderInfo_CompType_CompType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CompType_descriptor() {
    return OrderInfo_CompType_descriptor();
  }
  static inline const ::std::string& CompType_Name(CompType value) {
    return OrderInfo_CompType_Name(value);
  }
  static inline bool CompType_Parse(const ::std::string& name,
      CompType* value) {
    return OrderInfo_CompType_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // repeated .llsf_msgs.Order orders = 1;
  inline int orders_size() const;
  inline void clear_orders();
  static const int kOrdersFieldNumber = 1;
  inline const ::llsf_msgs::Order& orders(int index) const;
  inline ::llsf_msgs::Order* mutable_orders(int index);
  inline ::llsf_msgs::Order* add_orders();
  inline const ::google::protobuf::RepeatedPtrField< ::llsf_msgs::Order >&
      orders() const;
  inline ::google::protobuf::RepeatedPtrField< ::llsf_msgs::Order >*
      mutable_orders();
  
  // optional .llsf_msgs.Team team_color = 2;
  inline bool has_team_color() const;
  inline void clear_team_color();
  static const int kTeamColorFieldNumber = 2;
  inline llsf_msgs::Team team_color() const;
  inline void set_team_color(llsf_msgs::Team value);
  
  // @@protoc_insertion_point(class_scope:llsf_msgs.OrderInfo)
 private:
  inline void set_has_team_color();
  inline void clear_has_team_color();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::llsf_msgs::Order > orders_;
  int team_color_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_OrderInfo_2eproto();
  friend void protobuf_AssignDesc_OrderInfo_2eproto();
  friend void protobuf_ShutdownFile_OrderInfo_2eproto();
  
  void InitAsDefaultInstance();
  static OrderInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// Order

// required uint32 id = 1;
inline bool Order::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Order::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Order::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Order::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 Order::id() const {
  return id_;
}
inline void Order::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
}

// required .llsf_msgs.Order.ProductType product = 2;
inline bool Order::has_product() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Order::set_has_product() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Order::clear_has_product() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Order::clear_product() {
  product_ = 1;
  clear_has_product();
}
inline ::llsf_msgs::Order_ProductType Order::product() const {
  return static_cast< ::llsf_msgs::Order_ProductType >(product_);
}
inline void Order::set_product(::llsf_msgs::Order_ProductType value) {
  GOOGLE_DCHECK(::llsf_msgs::Order_ProductType_IsValid(value));
  set_has_product();
  product_ = value;
}

// optional .llsf_msgs.Team team_color = 11;
inline bool Order::has_team_color() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Order::set_has_team_color() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Order::clear_has_team_color() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Order::clear_team_color() {
  team_color_ = 0;
  clear_has_team_color();
}
inline llsf_msgs::Team Order::team_color() const {
  return static_cast< llsf_msgs::Team >(team_color_);
}
inline void Order::set_team_color(llsf_msgs::Team value) {
  GOOGLE_DCHECK(llsf_msgs::Team_IsValid(value));
  set_has_team_color();
  team_color_ = value;
}

// required uint32 quantity_requested = 3;
inline bool Order::has_quantity_requested() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Order::set_has_quantity_requested() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Order::clear_has_quantity_requested() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Order::clear_quantity_requested() {
  quantity_requested_ = 0u;
  clear_has_quantity_requested();
}
inline ::google::protobuf::uint32 Order::quantity_requested() const {
  return quantity_requested_;
}
inline void Order::set_quantity_requested(::google::protobuf::uint32 value) {
  set_has_quantity_requested();
  quantity_requested_ = value;
}

// required uint32 quantity_delivered = 4;
inline bool Order::has_quantity_delivered() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Order::set_has_quantity_delivered() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Order::clear_has_quantity_delivered() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Order::clear_quantity_delivered() {
  quantity_delivered_ = 0u;
  clear_has_quantity_delivered();
}
inline ::google::protobuf::uint32 Order::quantity_delivered() const {
  return quantity_delivered_;
}
inline void Order::set_quantity_delivered(::google::protobuf::uint32 value) {
  set_has_quantity_delivered();
  quantity_delivered_ = value;
}

// required uint32 delivery_period_begin = 6;
inline bool Order::has_delivery_period_begin() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Order::set_has_delivery_period_begin() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Order::clear_has_delivery_period_begin() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Order::clear_delivery_period_begin() {
  delivery_period_begin_ = 0u;
  clear_has_delivery_period_begin();
}
inline ::google::protobuf::uint32 Order::delivery_period_begin() const {
  return delivery_period_begin_;
}
inline void Order::set_delivery_period_begin(::google::protobuf::uint32 value) {
  set_has_delivery_period_begin();
  delivery_period_begin_ = value;
}

// required uint32 delivery_period_end = 7;
inline bool Order::has_delivery_period_end() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Order::set_has_delivery_period_end() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Order::clear_has_delivery_period_end() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Order::clear_delivery_period_end() {
  delivery_period_end_ = 0u;
  clear_has_delivery_period_end();
}
inline ::google::protobuf::uint32 Order::delivery_period_end() const {
  return delivery_period_end_;
}
inline void Order::set_delivery_period_end(::google::protobuf::uint32 value) {
  set_has_delivery_period_end();
  delivery_period_end_ = value;
}

// optional .llsf_msgs.Order.DeliveryGate delivery_gate = 8 [default = ANY];
inline bool Order::has_delivery_gate() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Order::set_has_delivery_gate() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Order::clear_has_delivery_gate() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Order::clear_delivery_gate() {
  delivery_gate_ = 1;
  clear_has_delivery_gate();
}
inline ::llsf_msgs::Order_DeliveryGate Order::delivery_gate() const {
  return static_cast< ::llsf_msgs::Order_DeliveryGate >(delivery_gate_);
}
inline void Order::set_delivery_gate(::llsf_msgs::Order_DeliveryGate value) {
  GOOGLE_DCHECK(::llsf_msgs::Order_DeliveryGate_IsValid(value));
  set_has_delivery_gate();
  delivery_gate_ = value;
}

// -------------------------------------------------------------------

// OrderInfo

// repeated .llsf_msgs.Order orders = 1;
inline int OrderInfo::orders_size() const {
  return orders_.size();
}
inline void OrderInfo::clear_orders() {
  orders_.Clear();
}
inline const ::llsf_msgs::Order& OrderInfo::orders(int index) const {
  return orders_.Get(index);
}
inline ::llsf_msgs::Order* OrderInfo::mutable_orders(int index) {
  return orders_.Mutable(index);
}
inline ::llsf_msgs::Order* OrderInfo::add_orders() {
  return orders_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::llsf_msgs::Order >&
OrderInfo::orders() const {
  return orders_;
}
inline ::google::protobuf::RepeatedPtrField< ::llsf_msgs::Order >*
OrderInfo::mutable_orders() {
  return &orders_;
}

// optional .llsf_msgs.Team team_color = 2;
inline bool OrderInfo::has_team_color() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void OrderInfo::set_has_team_color() {
  _has_bits_[0] |= 0x00000002u;
}
inline void OrderInfo::clear_has_team_color() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void OrderInfo::clear_team_color() {
  team_color_ = 0;
  clear_has_team_color();
}
inline llsf_msgs::Team OrderInfo::team_color() const {
  return static_cast< llsf_msgs::Team >(team_color_);
}
inline void OrderInfo::set_team_color(llsf_msgs::Team value) {
  GOOGLE_DCHECK(llsf_msgs::Team_IsValid(value));
  set_has_team_color();
  team_color_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace llsf_msgs

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::llsf_msgs::Order_CompType>() {
  return ::llsf_msgs::Order_CompType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::llsf_msgs::Order_ProductType>() {
  return ::llsf_msgs::Order_ProductType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::llsf_msgs::Order_DeliveryGate>() {
  return ::llsf_msgs::Order_DeliveryGate_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::llsf_msgs::OrderInfo_CompType>() {
  return ::llsf_msgs::OrderInfo_CompType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_OrderInfo_2eproto__INCLUDED