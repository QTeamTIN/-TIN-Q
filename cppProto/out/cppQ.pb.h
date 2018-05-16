// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cppQ.proto

#ifndef PROTOBUF_cppQ_2eproto__INCLUDED
#define PROTOBUF_cppQ_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_cppQ_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[7];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsPACKETImpl();
void InitDefaultsPACKET();
void InitDefaults_ACTImpl();
void InitDefaults_ACT();
void InitDefaults_ALIVEImpl();
void InitDefaults_ALIVE();
void InitDefaults_CHANGEImpl();
void InitDefaults_CHANGE();
void InitDefaults_OPEARATIONImpl();
void InitDefaults_OPEARATION();
void InitDefaults_QUERYImpl();
void InitDefaults_QUERY();
void InitDefaults_QUERY_RESPONSEImpl();
void InitDefaults_QUERY_RESPONSE();
inline void InitDefaults() {
  InitDefaultsPACKET();
  InitDefaults_ACT();
  InitDefaults_ALIVE();
  InitDefaults_CHANGE();
  InitDefaults_OPEARATION();
  InitDefaults_QUERY();
  InitDefaults_QUERY_RESPONSE();
}
}  // namespace protobuf_cppQ_2eproto
namespace packet {
class PACKET;
class PACKETDefaultTypeInternal;
extern PACKETDefaultTypeInternal _PACKET_default_instance_;
class _ACT;
class _ACTDefaultTypeInternal;
extern _ACTDefaultTypeInternal __ACT_default_instance_;
class _ALIVE;
class _ALIVEDefaultTypeInternal;
extern _ALIVEDefaultTypeInternal __ALIVE_default_instance_;
class _CHANGE;
class _CHANGEDefaultTypeInternal;
extern _CHANGEDefaultTypeInternal __CHANGE_default_instance_;
class _OPEARATION;
class _OPEARATIONDefaultTypeInternal;
extern _OPEARATIONDefaultTypeInternal __OPEARATION_default_instance_;
class _QUERY;
class _QUERYDefaultTypeInternal;
extern _QUERYDefaultTypeInternal __QUERY_default_instance_;
class _QUERY_RESPONSE;
class _QUERY_RESPONSEDefaultTypeInternal;
extern _QUERY_RESPONSEDefaultTypeInternal __QUERY_RESPONSE_default_instance_;
}  // namespace packet
namespace packet {

// ===================================================================

class PACKET : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:packet.PACKET) */ {
 public:
  PACKET();
  virtual ~PACKET();

  PACKET(const PACKET& from);

  inline PACKET& operator=(const PACKET& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PACKET(PACKET&& from) noexcept
    : PACKET() {
    *this = ::std::move(from);
  }

  inline PACKET& operator=(PACKET&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PACKET& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PACKET* internal_default_instance() {
    return reinterpret_cast<const PACKET*>(
               &_PACKET_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(PACKET* other);
  friend void swap(PACKET& a, PACKET& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PACKET* New() const PROTOBUF_FINAL { return New(NULL); }

  PACKET* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const PACKET& from);
  void MergeFrom(const PACKET& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(PACKET* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 code = 1 [default = 2];
  bool has_code() const;
  void clear_code();
  static const int kCodeFieldNumber = 1;
  ::google::protobuf::int32 code() const;
  void set_code(::google::protobuf::int32 value);

  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(PACKET)
  // @@protoc_insertion_point(class_scope:packet.PACKET)
 private:
  void set_has_code();
  void clear_has_code();

  ::google::protobuf::internal::ExtensionSet _extensions_;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int32 code_;
  friend struct ::protobuf_cppQ_2eproto::TableStruct;
  friend void ::protobuf_cppQ_2eproto::InitDefaultsPACKETImpl();
};
// -------------------------------------------------------------------

class _ACT : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:packet._ACT) */ {
 public:
  _ACT();
  virtual ~_ACT();

  _ACT(const _ACT& from);

  inline _ACT& operator=(const _ACT& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  _ACT(_ACT&& from) noexcept
    : _ACT() {
    *this = ::std::move(from);
  }

  inline _ACT& operator=(_ACT&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const _ACT& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const _ACT* internal_default_instance() {
    return reinterpret_cast<const _ACT*>(
               &__ACT_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(_ACT* other);
  friend void swap(_ACT& a, _ACT& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline _ACT* New() const PROTOBUF_FINAL { return New(NULL); }

  _ACT* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const _ACT& from);
  void MergeFrom(const _ACT& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(_ACT* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  static const int kOperationalLocalIdFieldNumber = 2;
  static ::google::protobuf::internal::ExtensionIdentifier< ::packet::PACKET,
      ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int32 >, 5, false >
    operational_local_id;
  static const int kSuccessFieldNumber = 3;
  static ::google::protobuf::internal::ExtensionIdentifier< ::packet::PACKET,
      ::google::protobuf::internal::StringTypeTraits, 9, false >
    success;
  static const int kErrorFieldNumber = 4;
  static ::google::protobuf::internal::ExtensionIdentifier< ::packet::PACKET,
      ::google::protobuf::internal::StringTypeTraits, 9, false >
    error;
  // @@protoc_insertion_point(class_scope:packet._ACT)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  friend struct ::protobuf_cppQ_2eproto::TableStruct;
  friend void ::protobuf_cppQ_2eproto::InitDefaults_ACTImpl();
};
// -------------------------------------------------------------------

class _ALIVE : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:packet._ALIVE) */ {
 public:
  _ALIVE();
  virtual ~_ALIVE();

  _ALIVE(const _ALIVE& from);

  inline _ALIVE& operator=(const _ALIVE& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  _ALIVE(_ALIVE&& from) noexcept
    : _ALIVE() {
    *this = ::std::move(from);
  }

  inline _ALIVE& operator=(_ALIVE&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const _ALIVE& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const _ALIVE* internal_default_instance() {
    return reinterpret_cast<const _ALIVE*>(
               &__ALIVE_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(_ALIVE* other);
  friend void swap(_ALIVE& a, _ALIVE& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline _ALIVE* New() const PROTOBUF_FINAL { return New(NULL); }

  _ALIVE* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const _ALIVE& from);
  void MergeFrom(const _ALIVE& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(_ALIVE* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  static const int kSessionIdFieldNumber = 5;
  static ::google::protobuf::internal::ExtensionIdentifier< ::packet::PACKET,
      ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int32 >, 5, false >
    session_id;
  // @@protoc_insertion_point(class_scope:packet._ALIVE)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  friend struct ::protobuf_cppQ_2eproto::TableStruct;
  friend void ::protobuf_cppQ_2eproto::InitDefaults_ALIVEImpl();
};
// -------------------------------------------------------------------

class _CHANGE : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:packet._CHANGE) */ {
 public:
  _CHANGE();
  virtual ~_CHANGE();

  _CHANGE(const _CHANGE& from);

  inline _CHANGE& operator=(const _CHANGE& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  _CHANGE(_CHANGE&& from) noexcept
    : _CHANGE() {
    *this = ::std::move(from);
  }

  inline _CHANGE& operator=(_CHANGE&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const _CHANGE& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const _CHANGE* internal_default_instance() {
    return reinterpret_cast<const _CHANGE*>(
               &__CHANGE_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(_CHANGE* other);
  friend void swap(_CHANGE& a, _CHANGE& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline _CHANGE* New() const PROTOBUF_FINAL { return New(NULL); }

  _CHANGE* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const _CHANGE& from);
  void MergeFrom(const _CHANGE& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(_CHANGE* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  static const int kObiectIdFieldNumber = 6;
  static ::google::protobuf::internal::ExtensionIdentifier< ::packet::PACKET,
      ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int32 >, 5, false >
    obiect_id;
  // @@protoc_insertion_point(class_scope:packet._CHANGE)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  friend struct ::protobuf_cppQ_2eproto::TableStruct;
  friend void ::protobuf_cppQ_2eproto::InitDefaults_CHANGEImpl();
};
// -------------------------------------------------------------------

class _OPEARATION : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:packet._OPEARATION) */ {
 public:
  _OPEARATION();
  virtual ~_OPEARATION();

  _OPEARATION(const _OPEARATION& from);

  inline _OPEARATION& operator=(const _OPEARATION& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  _OPEARATION(_OPEARATION&& from) noexcept
    : _OPEARATION() {
    *this = ::std::move(from);
  }

  inline _OPEARATION& operator=(_OPEARATION&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const _OPEARATION& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const _OPEARATION* internal_default_instance() {
    return reinterpret_cast<const _OPEARATION*>(
               &__OPEARATION_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    4;

  void Swap(_OPEARATION* other);
  friend void swap(_OPEARATION& a, _OPEARATION& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline _OPEARATION* New() const PROTOBUF_FINAL { return New(NULL); }

  _OPEARATION* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const _OPEARATION& from);
  void MergeFrom(const _OPEARATION& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(_OPEARATION* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  static const int kSessionIdFieldNumber = 7;
  static ::google::protobuf::internal::ExtensionIdentifier< ::packet::PACKET,
      ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int32 >, 5, false >
    session_id;
  static const int kOperationDescriptionFieldNumber = 8;
  static ::google::protobuf::internal::ExtensionIdentifier< ::packet::PACKET,
      ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int32 >, 5, false >
    operation_description;
  static const int kOperationalLocalIdFieldNumber = 9;
  static ::google::protobuf::internal::ExtensionIdentifier< ::packet::PACKET,
      ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int32 >, 5, false >
    operational_local_id;
  // @@protoc_insertion_point(class_scope:packet._OPEARATION)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  friend struct ::protobuf_cppQ_2eproto::TableStruct;
  friend void ::protobuf_cppQ_2eproto::InitDefaults_OPEARATIONImpl();
};
// -------------------------------------------------------------------

class _QUERY : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:packet._QUERY) */ {
 public:
  _QUERY();
  virtual ~_QUERY();

  _QUERY(const _QUERY& from);

  inline _QUERY& operator=(const _QUERY& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  _QUERY(_QUERY&& from) noexcept
    : _QUERY() {
    *this = ::std::move(from);
  }

  inline _QUERY& operator=(_QUERY&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const _QUERY& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const _QUERY* internal_default_instance() {
    return reinterpret_cast<const _QUERY*>(
               &__QUERY_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    5;

  void Swap(_QUERY* other);
  friend void swap(_QUERY& a, _QUERY& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline _QUERY* New() const PROTOBUF_FINAL { return New(NULL); }

  _QUERY* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const _QUERY& from);
  void MergeFrom(const _QUERY& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(_QUERY* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  static const int kSessionIdFieldNumber = 10;
  static ::google::protobuf::internal::ExtensionIdentifier< ::packet::PACKET,
      ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int32 >, 5, false >
    session_id;
  static const int kObjectIdFieldNumber = 11;
  static ::google::protobuf::internal::ExtensionIdentifier< ::packet::PACKET,
      ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int32 >, 5, false >
    object_id;
  // @@protoc_insertion_point(class_scope:packet._QUERY)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  friend struct ::protobuf_cppQ_2eproto::TableStruct;
  friend void ::protobuf_cppQ_2eproto::InitDefaults_QUERYImpl();
};
// -------------------------------------------------------------------

class _QUERY_RESPONSE : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:packet._QUERY_RESPONSE) */ {
 public:
  _QUERY_RESPONSE();
  virtual ~_QUERY_RESPONSE();

  _QUERY_RESPONSE(const _QUERY_RESPONSE& from);

  inline _QUERY_RESPONSE& operator=(const _QUERY_RESPONSE& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  _QUERY_RESPONSE(_QUERY_RESPONSE&& from) noexcept
    : _QUERY_RESPONSE() {
    *this = ::std::move(from);
  }

  inline _QUERY_RESPONSE& operator=(_QUERY_RESPONSE&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const _QUERY_RESPONSE& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const _QUERY_RESPONSE* internal_default_instance() {
    return reinterpret_cast<const _QUERY_RESPONSE*>(
               &__QUERY_RESPONSE_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    6;

  void Swap(_QUERY_RESPONSE* other);
  friend void swap(_QUERY_RESPONSE& a, _QUERY_RESPONSE& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline _QUERY_RESPONSE* New() const PROTOBUF_FINAL { return New(NULL); }

  _QUERY_RESPONSE* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const _QUERY_RESPONSE& from);
  void MergeFrom(const _QUERY_RESPONSE& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(_QUERY_RESPONSE* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  static const int kObjectDataFieldNumber = 12;
  static ::google::protobuf::internal::ExtensionIdentifier< ::packet::PACKET,
      ::google::protobuf::internal::StringTypeTraits, 9, false >
    object_data;
  // @@protoc_insertion_point(class_scope:packet._QUERY_RESPONSE)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  friend struct ::protobuf_cppQ_2eproto::TableStruct;
  friend void ::protobuf_cppQ_2eproto::InitDefaults_QUERY_RESPONSEImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PACKET

// required int32 code = 1 [default = 2];
inline bool PACKET::has_code() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PACKET::set_has_code() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PACKET::clear_has_code() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PACKET::clear_code() {
  code_ = 2;
  clear_has_code();
}
inline ::google::protobuf::int32 PACKET::code() const {
  // @@protoc_insertion_point(field_get:packet.PACKET.code)
  return code_;
}
inline void PACKET::set_code(::google::protobuf::int32 value) {
  set_has_code();
  code_ = value;
  // @@protoc_insertion_point(field_set:packet.PACKET.code)
}

// -------------------------------------------------------------------

// _ACT

// -------------------------------------------------------------------

// _ALIVE

// -------------------------------------------------------------------

// _CHANGE

// -------------------------------------------------------------------

// _OPEARATION

// -------------------------------------------------------------------

// _QUERY

// -------------------------------------------------------------------

// _QUERY_RESPONSE

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace packet

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cppQ_2eproto__INCLUDED
