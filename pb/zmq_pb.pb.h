// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: zmq_pb.proto

#ifndef PROTOBUF_zmq_5fpb_2eproto__INCLUDED
#define PROTOBUF_zmq_5fpb_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace zmq_pb {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_zmq_5fpb_2eproto();
void protobuf_AssignDesc_zmq_5fpb_2eproto();
void protobuf_ShutdownFile_zmq_5fpb_2eproto();

class FileMeta;
class File;

// ===================================================================

class FileMeta : public ::google::protobuf::Message {
 public:
  FileMeta();
  virtual ~FileMeta();

  FileMeta(const FileMeta& from);

  inline FileMeta& operator=(const FileMeta& from) {
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
  static const FileMeta& default_instance();

  void Swap(FileMeta* other);

  // implements Message ----------------------------------------------

  FileMeta* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FileMeta& from);
  void MergeFrom(const FileMeta& from);
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

  // accessors -------------------------------------------------------

  // optional string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional int32 size = 2;
  inline bool has_size() const;
  inline void clear_size();
  static const int kSizeFieldNumber = 2;
  inline ::google::protobuf::int32 size() const;
  inline void set_size(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:zmq_pb.FileMeta)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_size();
  inline void clear_has_size();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::google::protobuf::int32 size_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_zmq_5fpb_2eproto();
  friend void protobuf_AssignDesc_zmq_5fpb_2eproto();
  friend void protobuf_ShutdownFile_zmq_5fpb_2eproto();

  void InitAsDefaultInstance();
  static FileMeta* default_instance_;
};
// -------------------------------------------------------------------

class File : public ::google::protobuf::Message {
 public:
  File();
  virtual ~File();

  File(const File& from);

  inline File& operator=(const File& from) {
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
  static const File& default_instance();

  void Swap(File* other);

  // implements Message ----------------------------------------------

  File* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const File& from);
  void MergeFrom(const File& from);
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

  // accessors -------------------------------------------------------

  // optional bytes buffer = 1;
  inline bool has_buffer() const;
  inline void clear_buffer();
  static const int kBufferFieldNumber = 1;
  inline const ::std::string& buffer() const;
  inline void set_buffer(const ::std::string& value);
  inline void set_buffer(const char* value);
  inline void set_buffer(const void* value, size_t size);
  inline ::std::string* mutable_buffer();
  inline ::std::string* release_buffer();
  inline void set_allocated_buffer(::std::string* buffer);

  // optional bool isMore = 2;
  inline bool has_ismore() const;
  inline void clear_ismore();
  static const int kIsMoreFieldNumber = 2;
  inline bool ismore() const;
  inline void set_ismore(bool value);

  // optional int32 bufferSize = 3;
  inline bool has_buffersize() const;
  inline void clear_buffersize();
  static const int kBufferSizeFieldNumber = 3;
  inline ::google::protobuf::int32 buffersize() const;
  inline void set_buffersize(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:zmq_pb.File)
 private:
  inline void set_has_buffer();
  inline void clear_has_buffer();
  inline void set_has_ismore();
  inline void clear_has_ismore();
  inline void set_has_buffersize();
  inline void clear_has_buffersize();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* buffer_;
  bool ismore_;
  ::google::protobuf::int32 buffersize_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_zmq_5fpb_2eproto();
  friend void protobuf_AssignDesc_zmq_5fpb_2eproto();
  friend void protobuf_ShutdownFile_zmq_5fpb_2eproto();

  void InitAsDefaultInstance();
  static File* default_instance_;
};
// ===================================================================


// ===================================================================

// FileMeta

// optional string name = 1;
inline bool FileMeta::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FileMeta::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FileMeta::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FileMeta::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& FileMeta::name() const {
  return *name_;
}
inline void FileMeta::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void FileMeta::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void FileMeta::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* FileMeta::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* FileMeta::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void FileMeta::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 size = 2;
inline bool FileMeta::has_size() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FileMeta::set_has_size() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FileMeta::clear_has_size() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FileMeta::clear_size() {
  size_ = 0;
  clear_has_size();
}
inline ::google::protobuf::int32 FileMeta::size() const {
  return size_;
}
inline void FileMeta::set_size(::google::protobuf::int32 value) {
  set_has_size();
  size_ = value;
}

// -------------------------------------------------------------------

// File

// optional bytes buffer = 1;
inline bool File::has_buffer() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void File::set_has_buffer() {
  _has_bits_[0] |= 0x00000001u;
}
inline void File::clear_has_buffer() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void File::clear_buffer() {
  if (buffer_ != &::google::protobuf::internal::kEmptyString) {
    buffer_->clear();
  }
  clear_has_buffer();
}
inline const ::std::string& File::buffer() const {
  return *buffer_;
}
inline void File::set_buffer(const ::std::string& value) {
  set_has_buffer();
  if (buffer_ == &::google::protobuf::internal::kEmptyString) {
    buffer_ = new ::std::string;
  }
  buffer_->assign(value);
}
inline void File::set_buffer(const char* value) {
  set_has_buffer();
  if (buffer_ == &::google::protobuf::internal::kEmptyString) {
    buffer_ = new ::std::string;
  }
  buffer_->assign(value);
}
inline void File::set_buffer(const void* value, size_t size) {
  set_has_buffer();
  if (buffer_ == &::google::protobuf::internal::kEmptyString) {
    buffer_ = new ::std::string;
  }
  buffer_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* File::mutable_buffer() {
  set_has_buffer();
  if (buffer_ == &::google::protobuf::internal::kEmptyString) {
    buffer_ = new ::std::string;
  }
  return buffer_;
}
inline ::std::string* File::release_buffer() {
  clear_has_buffer();
  if (buffer_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = buffer_;
    buffer_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void File::set_allocated_buffer(::std::string* buffer) {
  if (buffer_ != &::google::protobuf::internal::kEmptyString) {
    delete buffer_;
  }
  if (buffer) {
    set_has_buffer();
    buffer_ = buffer;
  } else {
    clear_has_buffer();
    buffer_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional bool isMore = 2;
inline bool File::has_ismore() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void File::set_has_ismore() {
  _has_bits_[0] |= 0x00000002u;
}
inline void File::clear_has_ismore() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void File::clear_ismore() {
  ismore_ = false;
  clear_has_ismore();
}
inline bool File::ismore() const {
  return ismore_;
}
inline void File::set_ismore(bool value) {
  set_has_ismore();
  ismore_ = value;
}

// optional int32 bufferSize = 3;
inline bool File::has_buffersize() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void File::set_has_buffersize() {
  _has_bits_[0] |= 0x00000004u;
}
inline void File::clear_has_buffersize() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void File::clear_buffersize() {
  buffersize_ = 0;
  clear_has_buffersize();
}
inline ::google::protobuf::int32 File::buffersize() const {
  return buffersize_;
}
inline void File::set_buffersize(::google::protobuf::int32 value) {
  set_has_buffersize();
  buffersize_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace zmq_pb

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_zmq_5fpb_2eproto__INCLUDED
