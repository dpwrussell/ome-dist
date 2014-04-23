// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `FS.ice'

#ifndef __omero_cmd__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_cmd_FS_h__
#define __omero_cmd__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_cmd_FS_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/Incoming.h>
#include <Ice/IncomingAsync.h>
#include <Ice/Direct.h>
#include <Ice/UserExceptionFactory.h>
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <omero/Collections.h>
#include <omero/cmd/API.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 303
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace IceProxy
{

namespace omero
{

namespace cmd
{

class OriginalMetadataRequest;

class OriginalMetadataResponse;

}

}

}

namespace omero
{

namespace cmd
{

class OriginalMetadataRequest;
bool operator==(const OriginalMetadataRequest&, const OriginalMetadataRequest&);
bool operator<(const OriginalMetadataRequest&, const OriginalMetadataRequest&);

class OriginalMetadataResponse;
bool operator==(const OriginalMetadataResponse&, const OriginalMetadataResponse&);
bool operator<(const OriginalMetadataResponse&, const OriginalMetadataResponse&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::cmd::OriginalMetadataRequest*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::OriginalMetadataRequest*);

::Ice::Object* upCast(::omero::cmd::OriginalMetadataResponse*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::OriginalMetadataResponse*);

}

namespace omero
{

namespace cmd
{

typedef ::IceInternal::Handle< ::omero::cmd::OriginalMetadataRequest> OriginalMetadataRequestPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::OriginalMetadataRequest> OriginalMetadataRequestPrx;

void __read(::IceInternal::BasicStream*, OriginalMetadataRequestPrx&);
void __patch__OriginalMetadataRequestPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::OriginalMetadataResponse> OriginalMetadataResponsePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::OriginalMetadataResponse> OriginalMetadataResponsePrx;

void __read(::IceInternal::BasicStream*, OriginalMetadataResponsePrx&);
void __patch__OriginalMetadataResponsePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceAsync
{

}

namespace IceProxy
{

namespace omero
{

namespace cmd
{

class OriginalMetadataRequest : virtual public ::IceProxy::omero::cmd::Request
{
public:
    
    ::IceInternal::ProxyHandle<OriginalMetadataRequest> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataRequest*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<OriginalMetadataRequest*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataRequest> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataRequest*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<OriginalMetadataRequest*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataRequest> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataRequest*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<OriginalMetadataRequest*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataRequest> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataRequest*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<OriginalMetadataRequest*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataRequest> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataRequest*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<OriginalMetadataRequest*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataRequest> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataRequest*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<OriginalMetadataRequest*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataRequest> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataRequest*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<OriginalMetadataRequest*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataRequest> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataRequest*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<OriginalMetadataRequest*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataRequest> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataRequest*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<OriginalMetadataRequest*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataRequest> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataRequest*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<OriginalMetadataRequest*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataRequest> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataRequest*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<OriginalMetadataRequest*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataRequest> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataRequest*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<OriginalMetadataRequest*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataRequest> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataRequest*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<OriginalMetadataRequest*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataRequest> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataRequest*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<OriginalMetadataRequest*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataRequest> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataRequest*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<OriginalMetadataRequest*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataRequest> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataRequest*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<OriginalMetadataRequest*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataRequest> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataRequest*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<OriginalMetadataRequest*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataRequest> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataRequest*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<OriginalMetadataRequest*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataRequest> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataRequest*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<OriginalMetadataRequest*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class OriginalMetadataResponse : virtual public ::IceProxy::omero::cmd::Response
{
public:
    
    ::IceInternal::ProxyHandle<OriginalMetadataResponse> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataResponse*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<OriginalMetadataResponse*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataResponse> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataResponse*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<OriginalMetadataResponse*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataResponse> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataResponse*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<OriginalMetadataResponse*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataResponse> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataResponse*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<OriginalMetadataResponse*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataResponse> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataResponse*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<OriginalMetadataResponse*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataResponse> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataResponse*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<OriginalMetadataResponse*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataResponse> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataResponse*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<OriginalMetadataResponse*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataResponse> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataResponse*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<OriginalMetadataResponse*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataResponse> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataResponse*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<OriginalMetadataResponse*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataResponse> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataResponse*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<OriginalMetadataResponse*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataResponse> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataResponse*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<OriginalMetadataResponse*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataResponse> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataResponse*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<OriginalMetadataResponse*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataResponse> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataResponse*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<OriginalMetadataResponse*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataResponse> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataResponse*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<OriginalMetadataResponse*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataResponse> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataResponse*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<OriginalMetadataResponse*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataResponse> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataResponse*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<OriginalMetadataResponse*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataResponse> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataResponse*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<OriginalMetadataResponse*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataResponse> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataResponse*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<OriginalMetadataResponse*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OriginalMetadataResponse> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OriginalMetadataResponse*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<OriginalMetadataResponse*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

}

namespace IceDelegate
{

namespace omero
{

namespace cmd
{

class OriginalMetadataRequest : virtual public ::IceDelegate::omero::cmd::Request
{
public:
};

class OriginalMetadataResponse : virtual public ::IceDelegate::omero::cmd::Response
{
public:
};

}

}

}

namespace IceDelegateM
{

namespace omero
{

namespace cmd
{

class OriginalMetadataRequest : virtual public ::IceDelegate::omero::cmd::OriginalMetadataRequest,
                                virtual public ::IceDelegateM::omero::cmd::Request
{
public:
};

class OriginalMetadataResponse : virtual public ::IceDelegate::omero::cmd::OriginalMetadataResponse,
                                 virtual public ::IceDelegateM::omero::cmd::Response
{
public:
};

}

}

}

namespace IceDelegateD
{

namespace omero
{

namespace cmd
{

class OriginalMetadataRequest : virtual public ::IceDelegate::omero::cmd::OriginalMetadataRequest,
                                virtual public ::IceDelegateD::omero::cmd::Request
{
public:
};

class OriginalMetadataResponse : virtual public ::IceDelegate::omero::cmd::OriginalMetadataResponse,
                                 virtual public ::IceDelegateD::omero::cmd::Response
{
public:
};

}

}

}

namespace omero
{

namespace cmd
{

class OriginalMetadataRequest : virtual public ::omero::cmd::Request
{
public:

    typedef OriginalMetadataRequestPrx ProxyType;
    typedef OriginalMetadataRequestPtr PointerType;
    
    OriginalMetadataRequest() {}
    explicit OriginalMetadataRequest(::Ice::Long);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~OriginalMetadataRequest() {}

    friend class OriginalMetadataRequest__staticInit;

public:

    ::Ice::Long imageId;
};

class OriginalMetadataRequest__staticInit
{
public:

    ::omero::cmd::OriginalMetadataRequest _init;
};

static OriginalMetadataRequest__staticInit _OriginalMetadataRequest_init;

class OriginalMetadataResponse : virtual public ::omero::cmd::Response
{
public:

    typedef OriginalMetadataResponsePrx ProxyType;
    typedef OriginalMetadataResponsePtr PointerType;
    
    OriginalMetadataResponse() {}
    OriginalMetadataResponse(const ::omero::RLongPtr&, const ::omero::RLongPtr&, const ::omero::RTypeDict&, const ::omero::RTypeDict&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __incRef();
    virtual void __decRef();
    virtual void __addObject(::IceInternal::GCCountMap&);
    virtual bool __usesClasses();
    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~OriginalMetadataResponse() {}

public:

    ::omero::RLongPtr filesetId;

    ::omero::RLongPtr fileAnnotationId;

    ::omero::RTypeDict globalMetadata;

    ::omero::RTypeDict seriesMetadata;
};

}

}

#endif