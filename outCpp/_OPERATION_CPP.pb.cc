// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: _OPERATION_CPP.proto

#include "_OPERATION_CPP.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace packet {
class _OPEARATIONDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<_OPEARATION>
      _instance;
} __OPEARATION_default_instance_;
}  // namespace packet
namespace protobuf__5fOPERATION_5fCPP_2eproto {
void InitDefaults_OPEARATIONImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::packet::__OPEARATION_default_instance_;
    new (ptr) ::packet::_OPEARATION();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::packet::_OPEARATION::InitAsDefaultInstance();
}

void InitDefaults_OPEARATION() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaults_OPEARATIONImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::packet::_OPEARATION, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::packet::_OPEARATION, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::packet::_OPEARATION, code_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::packet::_OPEARATION, session_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::packet::_OPEARATION, operation_description_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::packet::_OPEARATION, operational_local_id_),
  3,
  0,
  1,
  2,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(::packet::_OPEARATION)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::packet::__OPEARATION_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "_OPERATION_CPP.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\024_OPERATION_CPP.proto\022\006packet\"o\n\013_OPEAR"
      "ATION\022\017\n\004code\030\001 \002(\005:\0012\022\022\n\nsession_id\030\002 \002"
      "(\005\022\035\n\025operation_description\030\003 \001(\005\022\034\n\024ope"
      "rational_local_id\030\004 \001(\005"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 143);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "_OPERATION_CPP.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf__5fOPERATION_5fCPP_2eproto
namespace packet {

// ===================================================================

void _OPEARATION::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int _OPEARATION::kCodeFieldNumber;
const int _OPEARATION::kSessionIdFieldNumber;
const int _OPEARATION::kOperationDescriptionFieldNumber;
const int _OPEARATION::kOperationalLocalIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

_OPEARATION::_OPEARATION()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf__5fOPERATION_5fCPP_2eproto::InitDefaults_OPEARATION();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:packet._OPEARATION)
}
_OPEARATION::_OPEARATION(const _OPEARATION& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&session_id_, &from.session_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&code_) -
    reinterpret_cast<char*>(&session_id_)) + sizeof(code_));
  // @@protoc_insertion_point(copy_constructor:packet._OPEARATION)
}

void _OPEARATION::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&session_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&operational_local_id_) -
      reinterpret_cast<char*>(&session_id_)) + sizeof(operational_local_id_));
  code_ = 2;
}

_OPEARATION::~_OPEARATION() {
  // @@protoc_insertion_point(destructor:packet._OPEARATION)
  SharedDtor();
}

void _OPEARATION::SharedDtor() {
}

void _OPEARATION::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* _OPEARATION::descriptor() {
  ::protobuf__5fOPERATION_5fCPP_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf__5fOPERATION_5fCPP_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const _OPEARATION& _OPEARATION::default_instance() {
  ::protobuf__5fOPERATION_5fCPP_2eproto::InitDefaults_OPEARATION();
  return *internal_default_instance();
}

_OPEARATION* _OPEARATION::New(::google::protobuf::Arena* arena) const {
  _OPEARATION* n = new _OPEARATION;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void _OPEARATION::Clear() {
// @@protoc_insertion_point(message_clear_start:packet._OPEARATION)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 15u) {
    ::memset(&session_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&operational_local_id_) -
        reinterpret_cast<char*>(&session_id_)) + sizeof(operational_local_id_));
    code_ = 2;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool _OPEARATION::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:packet._OPEARATION)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 code = 1 [default = 2];
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_code();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &code_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int32 session_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_session_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &session_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 operation_description = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_operation_description();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &operation_description_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 operational_local_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_operational_local_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &operational_local_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:packet._OPEARATION)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:packet._OPEARATION)
  return false;
#undef DO_
}

void _OPEARATION::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:packet._OPEARATION)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 code = 1 [default = 2];
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->code(), output);
  }

  // required int32 session_id = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->session_id(), output);
  }

  // optional int32 operation_description = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->operation_description(), output);
  }

  // optional int32 operational_local_id = 4;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->operational_local_id(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:packet._OPEARATION)
}

::google::protobuf::uint8* _OPEARATION::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:packet._OPEARATION)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 code = 1 [default = 2];
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->code(), target);
  }

  // required int32 session_id = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->session_id(), target);
  }

  // optional int32 operation_description = 3;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->operation_description(), target);
  }

  // optional int32 operational_local_id = 4;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->operational_local_id(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:packet._OPEARATION)
  return target;
}

size_t _OPEARATION::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:packet._OPEARATION)
  size_t total_size = 0;

  if (has_session_id()) {
    // required int32 session_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->session_id());
  }

  if (has_code()) {
    // required int32 code = 1 [default = 2];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->code());
  }

  return total_size;
}
size_t _OPEARATION::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:packet._OPEARATION)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000009) ^ 0x00000009) == 0) {  // All required fields are present.
    // required int32 session_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->session_id());

    // required int32 code = 1 [default = 2];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->code());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_has_bits_[0 / 32] & 6u) {
    // optional int32 operation_description = 3;
    if (has_operation_description()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->operation_description());
    }

    // optional int32 operational_local_id = 4;
    if (has_operational_local_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->operational_local_id());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void _OPEARATION::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:packet._OPEARATION)
  GOOGLE_DCHECK_NE(&from, this);
  const _OPEARATION* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const _OPEARATION>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:packet._OPEARATION)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:packet._OPEARATION)
    MergeFrom(*source);
  }
}

void _OPEARATION::MergeFrom(const _OPEARATION& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:packet._OPEARATION)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      session_id_ = from.session_id_;
    }
    if (cached_has_bits & 0x00000002u) {
      operation_description_ = from.operation_description_;
    }
    if (cached_has_bits & 0x00000004u) {
      operational_local_id_ = from.operational_local_id_;
    }
    if (cached_has_bits & 0x00000008u) {
      code_ = from.code_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void _OPEARATION::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:packet._OPEARATION)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void _OPEARATION::CopyFrom(const _OPEARATION& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:packet._OPEARATION)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool _OPEARATION::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000009) != 0x00000009) return false;
  return true;
}

void _OPEARATION::Swap(_OPEARATION* other) {
  if (other == this) return;
  InternalSwap(other);
}
void _OPEARATION::InternalSwap(_OPEARATION* other) {
  using std::swap;
  swap(session_id_, other->session_id_);
  swap(operation_description_, other->operation_description_);
  swap(operational_local_id_, other->operational_local_id_);
  swap(code_, other->code_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata _OPEARATION::GetMetadata() const {
  protobuf__5fOPERATION_5fCPP_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf__5fOPERATION_5fCPP_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace packet

// @@protoc_insertion_point(global_scope)
