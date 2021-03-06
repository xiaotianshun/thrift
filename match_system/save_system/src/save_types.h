/**
 * Autogenerated by Thrift Compiler (0.16.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef save_TYPES_H
#define save_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <functional>
#include <memory>


namespace save {

class SaveInfo;

typedef struct _SaveInfo__isset {
  _SaveInfo__isset() : msg(false) {}
  bool msg :1;
} _SaveInfo__isset;

class SaveInfo : public virtual ::apache::thrift::TBase {
 public:

  SaveInfo(const SaveInfo&);
  SaveInfo& operator=(const SaveInfo&);
  SaveInfo() noexcept
           : msg() {
  }

  virtual ~SaveInfo() noexcept;
  std::string msg;

  _SaveInfo__isset __isset;

  void __set_msg(const std::string& val);

  bool operator == (const SaveInfo & rhs) const
  {
    if (!(msg == rhs.msg))
      return false;
    return true;
  }
  bool operator != (const SaveInfo &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SaveInfo & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot) override;
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const override;

  virtual void printTo(std::ostream& out) const;
};

void swap(SaveInfo &a, SaveInfo &b);

std::ostream& operator<<(std::ostream& out, const SaveInfo& obj);

} // namespace

#endif
