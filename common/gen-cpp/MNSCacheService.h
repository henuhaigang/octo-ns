/**
 * Autogenerated by Thrift Compiler (0.8.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef MNSCacheService_H
#define MNSCacheService_H

#include <TProcessor.h>
#include "mnsc_service_types.h"

namespace meituan_mns {

class MNSCacheServiceIf {
 public:
  virtual ~MNSCacheServiceIf() {}
  virtual void getMNSCache(MNSResponse& _return, const std::string& appkey, const std::string& version, const std::string& env) = 0;
  virtual void getMNSCacheHttp(MNSResponse& _return, const std::string& appkey, const std::string& version, const std::string& env) = 0;
  virtual void getMNSCacheWithVersionCheck(MNSResponse& _return, const MnsRequest& req) = 0;
  virtual void getMNSCacheByAppkeys(MNSBatchResponse& _return, const std::vector<std::string> & appkeys, const std::string& protocol) = 0;
  virtual void getProvidersByIP(MNSResponse& _return, const std::string& ip) = 0;
  virtual void getAppkeyListByIP(AppKeyListResponse& _return, const std::string& ip) = 0;
};

class MNSCacheServiceIfFactory {
 public:
  typedef MNSCacheServiceIf Handler;

  virtual ~MNSCacheServiceIfFactory() {}

  virtual MNSCacheServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(MNSCacheServiceIf* /* handler */) = 0;
};

class MNSCacheServiceIfSingletonFactory : virtual public MNSCacheServiceIfFactory {
 public:
  MNSCacheServiceIfSingletonFactory(const boost::shared_ptr<MNSCacheServiceIf>& iface) : iface_(iface) {}
  virtual ~MNSCacheServiceIfSingletonFactory() {}

  virtual MNSCacheServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(MNSCacheServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<MNSCacheServiceIf> iface_;
};

class MNSCacheServiceNull : virtual public MNSCacheServiceIf {
 public:
  virtual ~MNSCacheServiceNull() {}
  void getMNSCache(MNSResponse& /* _return */, const std::string& /* appkey */, const std::string& /* version */, const std::string& /* env */) {
    return;
  }
  void getMNSCacheHttp(MNSResponse& /* _return */, const std::string& /* appkey */, const std::string& /* version */, const std::string& /* env */) {
    return;
  }
  void getMNSCacheWithVersionCheck(MNSResponse& /* _return */, const MnsRequest& /* req */) {
    return;
  }
  void getMNSCacheByAppkeys(MNSBatchResponse& /* _return */, const std::vector<std::string> & /* appkeys */, const std::string& /* protocol */) {
    return;
  }
  void getProvidersByIP(MNSResponse& /* _return */, const std::string& /* ip */) {
    return;
  }
  void getAppkeyListByIP(AppKeyListResponse& /* _return */, const std::string& /* ip */) {
    return;
  }
};

typedef struct _MNSCacheService_getMNSCache_args__isset {
  _MNSCacheService_getMNSCache_args__isset() : appkey(false), version(false), env(false) {}
  bool appkey;
  bool version;
  bool env;
} _MNSCacheService_getMNSCache_args__isset;

class MNSCacheService_getMNSCache_args {
 public:

  MNSCacheService_getMNSCache_args() : appkey(""), version(""), env("") {
  }

  virtual ~MNSCacheService_getMNSCache_args() throw() {}

  std::string appkey;
  std::string version;
  std::string env;

  _MNSCacheService_getMNSCache_args__isset __isset;

  void __set_appkey(const std::string& val) {
    appkey = val;
  }

  void __set_version(const std::string& val) {
    version = val;
  }

  void __set_env(const std::string& val) {
    env = val;
  }

  bool operator == (const MNSCacheService_getMNSCache_args & rhs) const
  {
    if (!(appkey == rhs.appkey))
      return false;
    if (!(version == rhs.version))
      return false;
    if (!(env == rhs.env))
      return false;
    return true;
  }
  bool operator != (const MNSCacheService_getMNSCache_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MNSCacheService_getMNSCache_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MNSCacheService_getMNSCache_pargs {
 public:


  virtual ~MNSCacheService_getMNSCache_pargs() throw() {}

  const std::string* appkey;
  const std::string* version;
  const std::string* env;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MNSCacheService_getMNSCache_result__isset {
  _MNSCacheService_getMNSCache_result__isset() : success(false) {}
  bool success;
} _MNSCacheService_getMNSCache_result__isset;

class MNSCacheService_getMNSCache_result {
 public:

  MNSCacheService_getMNSCache_result() {
  }

  virtual ~MNSCacheService_getMNSCache_result() throw() {}

  MNSResponse success;

  _MNSCacheService_getMNSCache_result__isset __isset;

  void __set_success(const MNSResponse& val) {
    success = val;
  }

  bool operator == (const MNSCacheService_getMNSCache_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const MNSCacheService_getMNSCache_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MNSCacheService_getMNSCache_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MNSCacheService_getMNSCache_presult__isset {
  _MNSCacheService_getMNSCache_presult__isset() : success(false) {}
  bool success;
} _MNSCacheService_getMNSCache_presult__isset;

class MNSCacheService_getMNSCache_presult {
 public:


  virtual ~MNSCacheService_getMNSCache_presult() throw() {}

  MNSResponse* success;

  _MNSCacheService_getMNSCache_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _MNSCacheService_getMNSCacheHttp_args__isset {
  _MNSCacheService_getMNSCacheHttp_args__isset() : appkey(false), version(false), env(false) {}
  bool appkey;
  bool version;
  bool env;
} _MNSCacheService_getMNSCacheHttp_args__isset;

class MNSCacheService_getMNSCacheHttp_args {
 public:

  MNSCacheService_getMNSCacheHttp_args() : appkey(""), version(""), env("") {
  }

  virtual ~MNSCacheService_getMNSCacheHttp_args() throw() {}

  std::string appkey;
  std::string version;
  std::string env;

  _MNSCacheService_getMNSCacheHttp_args__isset __isset;

  void __set_appkey(const std::string& val) {
    appkey = val;
  }

  void __set_version(const std::string& val) {
    version = val;
  }

  void __set_env(const std::string& val) {
    env = val;
  }

  bool operator == (const MNSCacheService_getMNSCacheHttp_args & rhs) const
  {
    if (!(appkey == rhs.appkey))
      return false;
    if (!(version == rhs.version))
      return false;
    if (!(env == rhs.env))
      return false;
    return true;
  }
  bool operator != (const MNSCacheService_getMNSCacheHttp_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MNSCacheService_getMNSCacheHttp_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MNSCacheService_getMNSCacheHttp_pargs {
 public:


  virtual ~MNSCacheService_getMNSCacheHttp_pargs() throw() {}

  const std::string* appkey;
  const std::string* version;
  const std::string* env;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MNSCacheService_getMNSCacheHttp_result__isset {
  _MNSCacheService_getMNSCacheHttp_result__isset() : success(false) {}
  bool success;
} _MNSCacheService_getMNSCacheHttp_result__isset;

class MNSCacheService_getMNSCacheHttp_result {
 public:

  MNSCacheService_getMNSCacheHttp_result() {
  }

  virtual ~MNSCacheService_getMNSCacheHttp_result() throw() {}

  MNSResponse success;

  _MNSCacheService_getMNSCacheHttp_result__isset __isset;

  void __set_success(const MNSResponse& val) {
    success = val;
  }

  bool operator == (const MNSCacheService_getMNSCacheHttp_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const MNSCacheService_getMNSCacheHttp_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MNSCacheService_getMNSCacheHttp_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MNSCacheService_getMNSCacheHttp_presult__isset {
  _MNSCacheService_getMNSCacheHttp_presult__isset() : success(false) {}
  bool success;
} _MNSCacheService_getMNSCacheHttp_presult__isset;

class MNSCacheService_getMNSCacheHttp_presult {
 public:


  virtual ~MNSCacheService_getMNSCacheHttp_presult() throw() {}

  MNSResponse* success;

  _MNSCacheService_getMNSCacheHttp_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _MNSCacheService_getMNSCacheWithVersionCheck_args__isset {
  _MNSCacheService_getMNSCacheWithVersionCheck_args__isset() : req(false) {}
  bool req;
} _MNSCacheService_getMNSCacheWithVersionCheck_args__isset;

class MNSCacheService_getMNSCacheWithVersionCheck_args {
 public:

  MNSCacheService_getMNSCacheWithVersionCheck_args() {
  }

  virtual ~MNSCacheService_getMNSCacheWithVersionCheck_args() throw() {}

  MnsRequest req;

  _MNSCacheService_getMNSCacheWithVersionCheck_args__isset __isset;

  void __set_req(const MnsRequest& val) {
    req = val;
  }

  bool operator == (const MNSCacheService_getMNSCacheWithVersionCheck_args & rhs) const
  {
    if (!(req == rhs.req))
      return false;
    return true;
  }
  bool operator != (const MNSCacheService_getMNSCacheWithVersionCheck_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MNSCacheService_getMNSCacheWithVersionCheck_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MNSCacheService_getMNSCacheWithVersionCheck_pargs {
 public:


  virtual ~MNSCacheService_getMNSCacheWithVersionCheck_pargs() throw() {}

  const MnsRequest* req;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MNSCacheService_getMNSCacheWithVersionCheck_result__isset {
  _MNSCacheService_getMNSCacheWithVersionCheck_result__isset() : success(false) {}
  bool success;
} _MNSCacheService_getMNSCacheWithVersionCheck_result__isset;

class MNSCacheService_getMNSCacheWithVersionCheck_result {
 public:

  MNSCacheService_getMNSCacheWithVersionCheck_result() {
  }

  virtual ~MNSCacheService_getMNSCacheWithVersionCheck_result() throw() {}

  MNSResponse success;

  _MNSCacheService_getMNSCacheWithVersionCheck_result__isset __isset;

  void __set_success(const MNSResponse& val) {
    success = val;
  }

  bool operator == (const MNSCacheService_getMNSCacheWithVersionCheck_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const MNSCacheService_getMNSCacheWithVersionCheck_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MNSCacheService_getMNSCacheWithVersionCheck_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MNSCacheService_getMNSCacheWithVersionCheck_presult__isset {
  _MNSCacheService_getMNSCacheWithVersionCheck_presult__isset() : success(false) {}
  bool success;
} _MNSCacheService_getMNSCacheWithVersionCheck_presult__isset;

class MNSCacheService_getMNSCacheWithVersionCheck_presult {
 public:


  virtual ~MNSCacheService_getMNSCacheWithVersionCheck_presult() throw() {}

  MNSResponse* success;

  _MNSCacheService_getMNSCacheWithVersionCheck_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _MNSCacheService_getMNSCacheByAppkeys_args__isset {
  _MNSCacheService_getMNSCacheByAppkeys_args__isset() : appkeys(false), protocol(false) {}
  bool appkeys;
  bool protocol;
} _MNSCacheService_getMNSCacheByAppkeys_args__isset;

class MNSCacheService_getMNSCacheByAppkeys_args {
 public:

  MNSCacheService_getMNSCacheByAppkeys_args() : protocol("") {
  }

  virtual ~MNSCacheService_getMNSCacheByAppkeys_args() throw() {}

  std::vector<std::string>  appkeys;
  std::string protocol;

  _MNSCacheService_getMNSCacheByAppkeys_args__isset __isset;

  void __set_appkeys(const std::vector<std::string> & val) {
    appkeys = val;
  }

  void __set_protocol(const std::string& val) {
    protocol = val;
  }

  bool operator == (const MNSCacheService_getMNSCacheByAppkeys_args & rhs) const
  {
    if (!(appkeys == rhs.appkeys))
      return false;
    if (!(protocol == rhs.protocol))
      return false;
    return true;
  }
  bool operator != (const MNSCacheService_getMNSCacheByAppkeys_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MNSCacheService_getMNSCacheByAppkeys_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MNSCacheService_getMNSCacheByAppkeys_pargs {
 public:


  virtual ~MNSCacheService_getMNSCacheByAppkeys_pargs() throw() {}

  const std::vector<std::string> * appkeys;
  const std::string* protocol;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MNSCacheService_getMNSCacheByAppkeys_result__isset {
  _MNSCacheService_getMNSCacheByAppkeys_result__isset() : success(false) {}
  bool success;
} _MNSCacheService_getMNSCacheByAppkeys_result__isset;

class MNSCacheService_getMNSCacheByAppkeys_result {
 public:

  MNSCacheService_getMNSCacheByAppkeys_result() {
  }

  virtual ~MNSCacheService_getMNSCacheByAppkeys_result() throw() {}

  MNSBatchResponse success;

  _MNSCacheService_getMNSCacheByAppkeys_result__isset __isset;

  void __set_success(const MNSBatchResponse& val) {
    success = val;
  }

  bool operator == (const MNSCacheService_getMNSCacheByAppkeys_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const MNSCacheService_getMNSCacheByAppkeys_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MNSCacheService_getMNSCacheByAppkeys_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MNSCacheService_getMNSCacheByAppkeys_presult__isset {
  _MNSCacheService_getMNSCacheByAppkeys_presult__isset() : success(false) {}
  bool success;
} _MNSCacheService_getMNSCacheByAppkeys_presult__isset;

class MNSCacheService_getMNSCacheByAppkeys_presult {
 public:


  virtual ~MNSCacheService_getMNSCacheByAppkeys_presult() throw() {}

  MNSBatchResponse* success;

  _MNSCacheService_getMNSCacheByAppkeys_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _MNSCacheService_getProvidersByIP_args__isset {
  _MNSCacheService_getProvidersByIP_args__isset() : ip(false) {}
  bool ip;
} _MNSCacheService_getProvidersByIP_args__isset;

class MNSCacheService_getProvidersByIP_args {
 public:

  MNSCacheService_getProvidersByIP_args() : ip("") {
  }

  virtual ~MNSCacheService_getProvidersByIP_args() throw() {}

  std::string ip;

  _MNSCacheService_getProvidersByIP_args__isset __isset;

  void __set_ip(const std::string& val) {
    ip = val;
  }

  bool operator == (const MNSCacheService_getProvidersByIP_args & rhs) const
  {
    if (!(ip == rhs.ip))
      return false;
    return true;
  }
  bool operator != (const MNSCacheService_getProvidersByIP_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MNSCacheService_getProvidersByIP_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MNSCacheService_getProvidersByIP_pargs {
 public:


  virtual ~MNSCacheService_getProvidersByIP_pargs() throw() {}

  const std::string* ip;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MNSCacheService_getProvidersByIP_result__isset {
  _MNSCacheService_getProvidersByIP_result__isset() : success(false) {}
  bool success;
} _MNSCacheService_getProvidersByIP_result__isset;

class MNSCacheService_getProvidersByIP_result {
 public:

  MNSCacheService_getProvidersByIP_result() {
  }

  virtual ~MNSCacheService_getProvidersByIP_result() throw() {}

  MNSResponse success;

  _MNSCacheService_getProvidersByIP_result__isset __isset;

  void __set_success(const MNSResponse& val) {
    success = val;
  }

  bool operator == (const MNSCacheService_getProvidersByIP_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const MNSCacheService_getProvidersByIP_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MNSCacheService_getProvidersByIP_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MNSCacheService_getProvidersByIP_presult__isset {
  _MNSCacheService_getProvidersByIP_presult__isset() : success(false) {}
  bool success;
} _MNSCacheService_getProvidersByIP_presult__isset;

class MNSCacheService_getProvidersByIP_presult {
 public:


  virtual ~MNSCacheService_getProvidersByIP_presult() throw() {}

  MNSResponse* success;

  _MNSCacheService_getProvidersByIP_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _MNSCacheService_getAppkeyListByIP_args__isset {
  _MNSCacheService_getAppkeyListByIP_args__isset() : ip(false) {}
  bool ip;
} _MNSCacheService_getAppkeyListByIP_args__isset;

class MNSCacheService_getAppkeyListByIP_args {
 public:

  MNSCacheService_getAppkeyListByIP_args() : ip("") {
  }

  virtual ~MNSCacheService_getAppkeyListByIP_args() throw() {}

  std::string ip;

  _MNSCacheService_getAppkeyListByIP_args__isset __isset;

  void __set_ip(const std::string& val) {
    ip = val;
  }

  bool operator == (const MNSCacheService_getAppkeyListByIP_args & rhs) const
  {
    if (!(ip == rhs.ip))
      return false;
    return true;
  }
  bool operator != (const MNSCacheService_getAppkeyListByIP_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MNSCacheService_getAppkeyListByIP_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MNSCacheService_getAppkeyListByIP_pargs {
 public:


  virtual ~MNSCacheService_getAppkeyListByIP_pargs() throw() {}

  const std::string* ip;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MNSCacheService_getAppkeyListByIP_result__isset {
  _MNSCacheService_getAppkeyListByIP_result__isset() : success(false) {}
  bool success;
} _MNSCacheService_getAppkeyListByIP_result__isset;

class MNSCacheService_getAppkeyListByIP_result {
 public:

  MNSCacheService_getAppkeyListByIP_result() {
  }

  virtual ~MNSCacheService_getAppkeyListByIP_result() throw() {}

  AppKeyListResponse success;

  _MNSCacheService_getAppkeyListByIP_result__isset __isset;

  void __set_success(const AppKeyListResponse& val) {
    success = val;
  }

  bool operator == (const MNSCacheService_getAppkeyListByIP_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const MNSCacheService_getAppkeyListByIP_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MNSCacheService_getAppkeyListByIP_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MNSCacheService_getAppkeyListByIP_presult__isset {
  _MNSCacheService_getAppkeyListByIP_presult__isset() : success(false) {}
  bool success;
} _MNSCacheService_getAppkeyListByIP_presult__isset;

class MNSCacheService_getAppkeyListByIP_presult {
 public:


  virtual ~MNSCacheService_getAppkeyListByIP_presult() throw() {}

  AppKeyListResponse* success;

  _MNSCacheService_getAppkeyListByIP_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class MNSCacheServiceClient : virtual public MNSCacheServiceIf {
 public:
  MNSCacheServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) :
    piprot_(prot),
    poprot_(prot) {
    iprot_ = prot.get();
    oprot_ = prot.get();
  }
  MNSCacheServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) :
    piprot_(iprot),
    poprot_(oprot) {
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void getMNSCache(MNSResponse& _return, const std::string& appkey, const std::string& version, const std::string& env);
  void send_getMNSCache(const std::string& appkey, const std::string& version, const std::string& env);
  void recv_getMNSCache(MNSResponse& _return);
  void getMNSCacheHttp(MNSResponse& _return, const std::string& appkey, const std::string& version, const std::string& env);
  void send_getMNSCacheHttp(const std::string& appkey, const std::string& version, const std::string& env);
  void recv_getMNSCacheHttp(MNSResponse& _return);
  void getMNSCacheWithVersionCheck(MNSResponse& _return, const MnsRequest& req);
  void send_getMNSCacheWithVersionCheck(const MnsRequest& req);
  void recv_getMNSCacheWithVersionCheck(MNSResponse& _return);
  void getMNSCacheByAppkeys(MNSBatchResponse& _return, const std::vector<std::string> & appkeys, const std::string& protocol);
  void send_getMNSCacheByAppkeys(const std::vector<std::string> & appkeys, const std::string& protocol);
  void recv_getMNSCacheByAppkeys(MNSBatchResponse& _return);
  void getProvidersByIP(MNSResponse& _return, const std::string& ip);
  void send_getProvidersByIP(const std::string& ip);
  void recv_getProvidersByIP(MNSResponse& _return);
  void getAppkeyListByIP(AppKeyListResponse& _return, const std::string& ip);
  void send_getAppkeyListByIP(const std::string& ip);
  void recv_getAppkeyListByIP(AppKeyListResponse& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class MNSCacheServiceProcessor : public ::apache::thrift::TProcessor {
 protected:
  boost::shared_ptr<MNSCacheServiceIf> iface_;
  virtual bool process_fn(apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, std::string& fname, int32_t seqid, void* callContext);
 private:
  std::map<std::string, void (MNSCacheServiceProcessor::*)(int32_t, apache::thrift::protocol::TProtocol*, apache::thrift::protocol::TProtocol*, void*)> processMap_;
  void process_getMNSCache(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getMNSCacheHttp(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getMNSCacheWithVersionCheck(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getMNSCacheByAppkeys(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getProvidersByIP(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getAppkeyListByIP(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  MNSCacheServiceProcessor(boost::shared_ptr<MNSCacheServiceIf> iface) :
    iface_(iface) {
    processMap_["getMNSCache"] = &MNSCacheServiceProcessor::process_getMNSCache;
    processMap_["getMNSCacheHttp"] = &MNSCacheServiceProcessor::process_getMNSCacheHttp;
    processMap_["getMNSCacheWithVersionCheck"] = &MNSCacheServiceProcessor::process_getMNSCacheWithVersionCheck;
    processMap_["getMNSCacheByAppkeys"] = &MNSCacheServiceProcessor::process_getMNSCacheByAppkeys;
    processMap_["getProvidersByIP"] = &MNSCacheServiceProcessor::process_getProvidersByIP;
    processMap_["getAppkeyListByIP"] = &MNSCacheServiceProcessor::process_getAppkeyListByIP;
  }

  virtual bool process(boost::shared_ptr<apache::thrift::protocol::TProtocol> piprot, boost::shared_ptr<apache::thrift::protocol::TProtocol> poprot, void* callContext);
  virtual ~MNSCacheServiceProcessor() {}
};

class MNSCacheServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  MNSCacheServiceProcessorFactory(const ::boost::shared_ptr< MNSCacheServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< MNSCacheServiceIfFactory > handlerFactory_;
};

class MNSCacheServiceMultiface : virtual public MNSCacheServiceIf {
 public:
  MNSCacheServiceMultiface(std::vector<boost::shared_ptr<MNSCacheServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~MNSCacheServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<MNSCacheServiceIf> > ifaces_;
  MNSCacheServiceMultiface() {}
  void add(boost::shared_ptr<MNSCacheServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void getMNSCache(MNSResponse& _return, const std::string& appkey, const std::string& version, const std::string& env) {
    size_t sz = ifaces_.size();
    for (size_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        ifaces_[i]->getMNSCache(_return, appkey, version, env);
        return;
      } else {
        ifaces_[i]->getMNSCache(_return, appkey, version, env);
      }
    }
  }

  void getMNSCacheHttp(MNSResponse& _return, const std::string& appkey, const std::string& version, const std::string& env) {
    size_t sz = ifaces_.size();
    for (size_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        ifaces_[i]->getMNSCacheHttp(_return, appkey, version, env);
        return;
      } else {
        ifaces_[i]->getMNSCacheHttp(_return, appkey, version, env);
      }
    }
  }

  void getMNSCacheWithVersionCheck(MNSResponse& _return, const MnsRequest& req) {
    size_t sz = ifaces_.size();
    for (size_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        ifaces_[i]->getMNSCacheWithVersionCheck(_return, req);
        return;
      } else {
        ifaces_[i]->getMNSCacheWithVersionCheck(_return, req);
      }
    }
  }

  void getMNSCacheByAppkeys(MNSBatchResponse& _return, const std::vector<std::string> & appkeys, const std::string& protocol) {
    size_t sz = ifaces_.size();
    for (size_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        ifaces_[i]->getMNSCacheByAppkeys(_return, appkeys, protocol);
        return;
      } else {
        ifaces_[i]->getMNSCacheByAppkeys(_return, appkeys, protocol);
      }
    }
  }

  void getProvidersByIP(MNSResponse& _return, const std::string& ip) {
    size_t sz = ifaces_.size();
    for (size_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        ifaces_[i]->getProvidersByIP(_return, ip);
        return;
      } else {
        ifaces_[i]->getProvidersByIP(_return, ip);
      }
    }
  }

  void getAppkeyListByIP(AppKeyListResponse& _return, const std::string& ip) {
    size_t sz = ifaces_.size();
    for (size_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        ifaces_[i]->getAppkeyListByIP(_return, ip);
        return;
      } else {
        ifaces_[i]->getAppkeyListByIP(_return, ip);
      }
    }
  }

};

} // namespace

#endif
