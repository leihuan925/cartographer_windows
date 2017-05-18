// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/trajectory_connectivity.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping/proto/trajectory_connectivity.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* TrajectoryConnectivity_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TrajectoryConnectivity_reflection_ = NULL;
const ::google::protobuf::Descriptor* TrajectoryConnectivity_ConnectedComponent_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TrajectoryConnectivity_ConnectedComponent_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fconnectivity_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fconnectivity_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping/proto/trajectory_connectivity.proto");
  GOOGLE_CHECK(file != NULL);
  TrajectoryConnectivity_descriptor_ = file->message_type(0);
  static const int TrajectoryConnectivity_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrajectoryConnectivity, connected_component_),
  };
  TrajectoryConnectivity_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TrajectoryConnectivity_descriptor_,
      TrajectoryConnectivity::default_instance_,
      TrajectoryConnectivity_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrajectoryConnectivity, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrajectoryConnectivity, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TrajectoryConnectivity));
  TrajectoryConnectivity_ConnectedComponent_descriptor_ = TrajectoryConnectivity_descriptor_->nested_type(0);
  static const int TrajectoryConnectivity_ConnectedComponent_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrajectoryConnectivity_ConnectedComponent, trajectory_id_),
  };
  TrajectoryConnectivity_ConnectedComponent_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TrajectoryConnectivity_ConnectedComponent_descriptor_,
      TrajectoryConnectivity_ConnectedComponent::default_instance_,
      TrajectoryConnectivity_ConnectedComponent_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrajectoryConnectivity_ConnectedComponent, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrajectoryConnectivity_ConnectedComponent, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TrajectoryConnectivity_ConnectedComponent));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fconnectivity_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TrajectoryConnectivity_descriptor_, &TrajectoryConnectivity::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TrajectoryConnectivity_ConnectedComponent_descriptor_, &TrajectoryConnectivity_ConnectedComponent::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2ftrajectory_5fconnectivity_2eproto() {
  delete TrajectoryConnectivity::default_instance_;
  delete TrajectoryConnectivity_reflection_;
  delete TrajectoryConnectivity_ConnectedComponent::default_instance_;
  delete TrajectoryConnectivity_ConnectedComponent_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fconnectivity_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n8cartographer/mapping/proto/trajectory_"
    "connectivity.proto\022\032cartographer.mapping"
    ".proto\"\251\001\n\026TrajectoryConnectivity\022b\n\023con"
    "nected_component\030\001 \003(\0132E.cartographer.ma"
    "pping.proto.TrajectoryConnectivity.Conne"
    "ctedComponent\032+\n\022ConnectedComponent\022\025\n\rt"
    "rajectory_id\030\001 \003(\005B\"B TrajectoryConnecti"
    "vityOuterClass", 294);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/proto/trajectory_connectivity.proto", &protobuf_RegisterTypes);
  TrajectoryConnectivity::default_instance_ = new TrajectoryConnectivity();
  TrajectoryConnectivity_ConnectedComponent::default_instance_ = new TrajectoryConnectivity_ConnectedComponent();
  TrajectoryConnectivity::default_instance_->InitAsDefaultInstance();
  TrajectoryConnectivity_ConnectedComponent::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2ftrajectory_5fconnectivity_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2ftrajectory_5fconnectivity_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2ftrajectory_5fconnectivity_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fconnectivity_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_2fproto_2ftrajectory_5fconnectivity_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int TrajectoryConnectivity_ConnectedComponent::kTrajectoryIdFieldNumber;
#endif  // !_MSC_VER

TrajectoryConnectivity_ConnectedComponent::TrajectoryConnectivity_ConnectedComponent()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void TrajectoryConnectivity_ConnectedComponent::InitAsDefaultInstance() {
}

TrajectoryConnectivity_ConnectedComponent::TrajectoryConnectivity_ConnectedComponent(const TrajectoryConnectivity_ConnectedComponent& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void TrajectoryConnectivity_ConnectedComponent::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TrajectoryConnectivity_ConnectedComponent::~TrajectoryConnectivity_ConnectedComponent() {
  SharedDtor();
}

void TrajectoryConnectivity_ConnectedComponent::SharedDtor() {
  if (this != default_instance_) {
  }
}

void TrajectoryConnectivity_ConnectedComponent::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TrajectoryConnectivity_ConnectedComponent::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TrajectoryConnectivity_ConnectedComponent_descriptor_;
}

const TrajectoryConnectivity_ConnectedComponent& TrajectoryConnectivity_ConnectedComponent::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fconnectivity_2eproto();
  return *default_instance_;
}

TrajectoryConnectivity_ConnectedComponent* TrajectoryConnectivity_ConnectedComponent::default_instance_ = NULL;

TrajectoryConnectivity_ConnectedComponent* TrajectoryConnectivity_ConnectedComponent::New() const {
  return new TrajectoryConnectivity_ConnectedComponent;
}

void TrajectoryConnectivity_ConnectedComponent::Clear() {
  trajectory_id_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TrajectoryConnectivity_ConnectedComponent::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int32 trajectory_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_trajectory_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 8, input, this->mutable_trajectory_id())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_trajectory_id())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(8)) goto parse_trajectory_id;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void TrajectoryConnectivity_ConnectedComponent::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated int32 trajectory_id = 1;
  for (int i = 0; i < this->trajectory_id_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      1, this->trajectory_id(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* TrajectoryConnectivity_ConnectedComponent::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated int32 trajectory_id = 1;
  for (int i = 0; i < this->trajectory_id_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(1, this->trajectory_id(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int TrajectoryConnectivity_ConnectedComponent::ByteSize() const {
  int total_size = 0;

  // repeated int32 trajectory_id = 1;
  {
    int data_size = 0;
    for (int i = 0; i < this->trajectory_id_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->trajectory_id(i));
    }
    total_size += 1 * this->trajectory_id_size() + data_size;
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TrajectoryConnectivity_ConnectedComponent::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TrajectoryConnectivity_ConnectedComponent* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TrajectoryConnectivity_ConnectedComponent*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TrajectoryConnectivity_ConnectedComponent::MergeFrom(const TrajectoryConnectivity_ConnectedComponent& from) {
  GOOGLE_CHECK_NE(&from, this);
  trajectory_id_.MergeFrom(from.trajectory_id_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TrajectoryConnectivity_ConnectedComponent::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TrajectoryConnectivity_ConnectedComponent::CopyFrom(const TrajectoryConnectivity_ConnectedComponent& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TrajectoryConnectivity_ConnectedComponent::IsInitialized() const {

  return true;
}

void TrajectoryConnectivity_ConnectedComponent::Swap(TrajectoryConnectivity_ConnectedComponent* other) {
  if (other != this) {
    trajectory_id_.Swap(&other->trajectory_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TrajectoryConnectivity_ConnectedComponent::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TrajectoryConnectivity_ConnectedComponent_descriptor_;
  metadata.reflection = TrajectoryConnectivity_ConnectedComponent_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int TrajectoryConnectivity::kConnectedComponentFieldNumber;
#endif  // !_MSC_VER

TrajectoryConnectivity::TrajectoryConnectivity()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void TrajectoryConnectivity::InitAsDefaultInstance() {
}

TrajectoryConnectivity::TrajectoryConnectivity(const TrajectoryConnectivity& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void TrajectoryConnectivity::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TrajectoryConnectivity::~TrajectoryConnectivity() {
  SharedDtor();
}

void TrajectoryConnectivity::SharedDtor() {
  if (this != default_instance_) {
  }
}

void TrajectoryConnectivity::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TrajectoryConnectivity::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TrajectoryConnectivity_descriptor_;
}

const TrajectoryConnectivity& TrajectoryConnectivity::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fconnectivity_2eproto();
  return *default_instance_;
}

TrajectoryConnectivity* TrajectoryConnectivity::default_instance_ = NULL;

TrajectoryConnectivity* TrajectoryConnectivity::New() const {
  return new TrajectoryConnectivity;
}

void TrajectoryConnectivity::Clear() {
  connected_component_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TrajectoryConnectivity::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .cartographer.mapping.proto.TrajectoryConnectivity.ConnectedComponent connected_component = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_connected_component:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_connected_component()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_connected_component;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void TrajectoryConnectivity::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .cartographer.mapping.proto.TrajectoryConnectivity.ConnectedComponent connected_component = 1;
  for (int i = 0; i < this->connected_component_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->connected_component(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* TrajectoryConnectivity::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .cartographer.mapping.proto.TrajectoryConnectivity.ConnectedComponent connected_component = 1;
  for (int i = 0; i < this->connected_component_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->connected_component(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int TrajectoryConnectivity::ByteSize() const {
  int total_size = 0;

  // repeated .cartographer.mapping.proto.TrajectoryConnectivity.ConnectedComponent connected_component = 1;
  total_size += 1 * this->connected_component_size();
  for (int i = 0; i < this->connected_component_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->connected_component(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TrajectoryConnectivity::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TrajectoryConnectivity* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TrajectoryConnectivity*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TrajectoryConnectivity::MergeFrom(const TrajectoryConnectivity& from) {
  GOOGLE_CHECK_NE(&from, this);
  connected_component_.MergeFrom(from.connected_component_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TrajectoryConnectivity::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TrajectoryConnectivity::CopyFrom(const TrajectoryConnectivity& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TrajectoryConnectivity::IsInitialized() const {

  return true;
}

void TrajectoryConnectivity::Swap(TrajectoryConnectivity* other) {
  if (other != this) {
    connected_component_.Swap(&other->connected_component_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TrajectoryConnectivity::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TrajectoryConnectivity_descriptor_;
  metadata.reflection = TrajectoryConnectivity_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)