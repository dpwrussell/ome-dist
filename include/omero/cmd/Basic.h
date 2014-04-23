// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Basic.ice'

#ifndef __omero_cmd__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_cmd_Basic_h__
#define __omero_cmd__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_cmd_Basic_h__

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

class DoAll;

class DoAllRsp;

class ListRequests;

class ListRequestsRsp;

class PopStatus;

class PopStatusRsp;

class FindHandles;

class FindHandlesRsp;

class Timing;

}

}

}

namespace omero
{

namespace cmd
{

class DoAll;
bool operator==(const DoAll&, const DoAll&);
bool operator<(const DoAll&, const DoAll&);

class DoAllRsp;
bool operator==(const DoAllRsp&, const DoAllRsp&);
bool operator<(const DoAllRsp&, const DoAllRsp&);

class ListRequests;
bool operator==(const ListRequests&, const ListRequests&);
bool operator<(const ListRequests&, const ListRequests&);

class ListRequestsRsp;
bool operator==(const ListRequestsRsp&, const ListRequestsRsp&);
bool operator<(const ListRequestsRsp&, const ListRequestsRsp&);

class PopStatus;
bool operator==(const PopStatus&, const PopStatus&);
bool operator<(const PopStatus&, const PopStatus&);

class PopStatusRsp;
bool operator==(const PopStatusRsp&, const PopStatusRsp&);
bool operator<(const PopStatusRsp&, const PopStatusRsp&);

class FindHandles;
bool operator==(const FindHandles&, const FindHandles&);
bool operator<(const FindHandles&, const FindHandles&);

class FindHandlesRsp;
bool operator==(const FindHandlesRsp&, const FindHandlesRsp&);
bool operator<(const FindHandlesRsp&, const FindHandlesRsp&);

class Timing;
bool operator==(const Timing&, const Timing&);
bool operator<(const Timing&, const Timing&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::cmd::DoAll*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::DoAll*);

::Ice::Object* upCast(::omero::cmd::DoAllRsp*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::DoAllRsp*);

::Ice::Object* upCast(::omero::cmd::ListRequests*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::ListRequests*);

::Ice::Object* upCast(::omero::cmd::ListRequestsRsp*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::ListRequestsRsp*);

::Ice::Object* upCast(::omero::cmd::PopStatus*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::PopStatus*);

::Ice::Object* upCast(::omero::cmd::PopStatusRsp*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::PopStatusRsp*);

::Ice::Object* upCast(::omero::cmd::FindHandles*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::FindHandles*);

::Ice::Object* upCast(::omero::cmd::FindHandlesRsp*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::FindHandlesRsp*);

::Ice::Object* upCast(::omero::cmd::Timing*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::cmd::Timing*);

}

namespace omero
{

namespace cmd
{

typedef ::IceInternal::Handle< ::omero::cmd::DoAll> DoAllPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::DoAll> DoAllPrx;

void __read(::IceInternal::BasicStream*, DoAllPrx&);
void __patch__DoAllPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::DoAllRsp> DoAllRspPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::DoAllRsp> DoAllRspPrx;

void __read(::IceInternal::BasicStream*, DoAllRspPrx&);
void __patch__DoAllRspPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::ListRequests> ListRequestsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::ListRequests> ListRequestsPrx;

void __read(::IceInternal::BasicStream*, ListRequestsPrx&);
void __patch__ListRequestsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::ListRequestsRsp> ListRequestsRspPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::ListRequestsRsp> ListRequestsRspPrx;

void __read(::IceInternal::BasicStream*, ListRequestsRspPrx&);
void __patch__ListRequestsRspPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::PopStatus> PopStatusPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::PopStatus> PopStatusPrx;

void __read(::IceInternal::BasicStream*, PopStatusPrx&);
void __patch__PopStatusPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::PopStatusRsp> PopStatusRspPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::PopStatusRsp> PopStatusRspPrx;

void __read(::IceInternal::BasicStream*, PopStatusRspPrx&);
void __patch__PopStatusRspPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::FindHandles> FindHandlesPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::FindHandles> FindHandlesPrx;

void __read(::IceInternal::BasicStream*, FindHandlesPrx&);
void __patch__FindHandlesPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::FindHandlesRsp> FindHandlesRspPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::FindHandlesRsp> FindHandlesRspPrx;

void __read(::IceInternal::BasicStream*, FindHandlesRspPrx&);
void __patch__FindHandlesRspPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::cmd::Timing> TimingPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::cmd::Timing> TimingPrx;

void __read(::IceInternal::BasicStream*, TimingPrx&);
void __patch__TimingPtr(void*, ::Ice::ObjectPtr&);

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

class DoAll : virtual public ::IceProxy::omero::cmd::Request
{
public:
    
    ::IceInternal::ProxyHandle<DoAll> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAll*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<DoAll*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAll> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAll*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<DoAll*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAll> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAll*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<DoAll*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAll> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAll*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<DoAll*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAll> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAll*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<DoAll*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAll> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAll*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<DoAll*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAll> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAll*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<DoAll*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAll> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAll*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<DoAll*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAll> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAll*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<DoAll*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAll> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAll*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<DoAll*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAll> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAll*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<DoAll*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAll> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAll*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<DoAll*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAll> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAll*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<DoAll*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAll> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAll*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<DoAll*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAll> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAll*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<DoAll*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAll> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAll*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<DoAll*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAll> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAll*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<DoAll*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAll> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAll*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<DoAll*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAll> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAll*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<DoAll*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class DoAllRsp : virtual public ::IceProxy::omero::cmd::OK
{
public:
    
    ::IceInternal::ProxyHandle<DoAllRsp> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAllRsp*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<DoAllRsp*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAllRsp> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAllRsp*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<DoAllRsp*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAllRsp> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAllRsp*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<DoAllRsp*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAllRsp> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAllRsp*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<DoAllRsp*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAllRsp> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAllRsp*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<DoAllRsp*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAllRsp> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAllRsp*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<DoAllRsp*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAllRsp> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAllRsp*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<DoAllRsp*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAllRsp> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAllRsp*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<DoAllRsp*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAllRsp> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAllRsp*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<DoAllRsp*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAllRsp> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAllRsp*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<DoAllRsp*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAllRsp> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAllRsp*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<DoAllRsp*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAllRsp> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAllRsp*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<DoAllRsp*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAllRsp> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAllRsp*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<DoAllRsp*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAllRsp> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAllRsp*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<DoAllRsp*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAllRsp> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAllRsp*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<DoAllRsp*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAllRsp> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAllRsp*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<DoAllRsp*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAllRsp> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAllRsp*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<DoAllRsp*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAllRsp> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAllRsp*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<DoAllRsp*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DoAllRsp> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DoAllRsp*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<DoAllRsp*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ListRequests : virtual public ::IceProxy::omero::cmd::Request
{
public:
    
    ::IceInternal::ProxyHandle<ListRequests> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequests*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ListRequests*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequests> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequests*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ListRequests*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequests> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequests*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ListRequests*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequests> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequests*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ListRequests*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequests> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequests*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ListRequests*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequests> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequests*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ListRequests*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequests> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequests*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ListRequests*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequests> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequests*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ListRequests*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequests> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequests*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ListRequests*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequests> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequests*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ListRequests*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequests> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequests*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ListRequests*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequests> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequests*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ListRequests*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequests> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequests*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ListRequests*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequests> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequests*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ListRequests*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequests> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequests*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ListRequests*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequests> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequests*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ListRequests*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequests> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequests*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ListRequests*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequests> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequests*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ListRequests*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequests> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequests*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ListRequests*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ListRequestsRsp : virtual public ::IceProxy::omero::cmd::OK
{
public:
    
    ::IceInternal::ProxyHandle<ListRequestsRsp> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequestsRsp*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ListRequestsRsp*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequestsRsp> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequestsRsp*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ListRequestsRsp*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequestsRsp> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequestsRsp*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ListRequestsRsp*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequestsRsp> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequestsRsp*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ListRequestsRsp*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequestsRsp> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequestsRsp*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ListRequestsRsp*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequestsRsp> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequestsRsp*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ListRequestsRsp*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequestsRsp> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequestsRsp*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ListRequestsRsp*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequestsRsp> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequestsRsp*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ListRequestsRsp*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequestsRsp> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequestsRsp*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ListRequestsRsp*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequestsRsp> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequestsRsp*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ListRequestsRsp*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequestsRsp> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequestsRsp*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ListRequestsRsp*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequestsRsp> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequestsRsp*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ListRequestsRsp*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequestsRsp> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequestsRsp*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ListRequestsRsp*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequestsRsp> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequestsRsp*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ListRequestsRsp*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequestsRsp> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequestsRsp*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ListRequestsRsp*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequestsRsp> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequestsRsp*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ListRequestsRsp*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequestsRsp> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequestsRsp*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ListRequestsRsp*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequestsRsp> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequestsRsp*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ListRequestsRsp*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ListRequestsRsp> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ListRequestsRsp*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ListRequestsRsp*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class PopStatus : virtual public ::IceProxy::omero::cmd::Request
{
public:
    
    ::IceInternal::ProxyHandle<PopStatus> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatus*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<PopStatus*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatus> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatus*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<PopStatus*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatus> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatus*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<PopStatus*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatus> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatus*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<PopStatus*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatus> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatus*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<PopStatus*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatus> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatus*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<PopStatus*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatus> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatus*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<PopStatus*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatus> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatus*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<PopStatus*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatus> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatus*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<PopStatus*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatus> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatus*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<PopStatus*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatus> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatus*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<PopStatus*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatus> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatus*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<PopStatus*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatus> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatus*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<PopStatus*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatus> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatus*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<PopStatus*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatus> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatus*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<PopStatus*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatus> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatus*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<PopStatus*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatus> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatus*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<PopStatus*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatus> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatus*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<PopStatus*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatus> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatus*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<PopStatus*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class PopStatusRsp : virtual public ::IceProxy::omero::cmd::OK
{
public:
    
    ::IceInternal::ProxyHandle<PopStatusRsp> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatusRsp*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<PopStatusRsp*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatusRsp> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatusRsp*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<PopStatusRsp*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatusRsp> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatusRsp*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<PopStatusRsp*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatusRsp> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatusRsp*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<PopStatusRsp*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatusRsp> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatusRsp*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<PopStatusRsp*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatusRsp> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatusRsp*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<PopStatusRsp*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatusRsp> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatusRsp*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<PopStatusRsp*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatusRsp> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatusRsp*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<PopStatusRsp*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatusRsp> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatusRsp*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<PopStatusRsp*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatusRsp> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatusRsp*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<PopStatusRsp*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatusRsp> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatusRsp*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<PopStatusRsp*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatusRsp> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatusRsp*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<PopStatusRsp*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatusRsp> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatusRsp*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<PopStatusRsp*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatusRsp> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatusRsp*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<PopStatusRsp*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatusRsp> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatusRsp*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<PopStatusRsp*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatusRsp> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatusRsp*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<PopStatusRsp*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatusRsp> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatusRsp*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<PopStatusRsp*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatusRsp> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatusRsp*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<PopStatusRsp*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PopStatusRsp> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PopStatusRsp*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<PopStatusRsp*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FindHandles : virtual public ::IceProxy::omero::cmd::Request
{
public:
    
    ::IceInternal::ProxyHandle<FindHandles> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandles*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FindHandles*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandles> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandles*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FindHandles*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandles> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandles*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FindHandles*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandles> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandles*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FindHandles*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandles> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandles*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FindHandles*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandles> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandles*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FindHandles*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandles> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandles*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FindHandles*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandles> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandles*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FindHandles*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandles> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandles*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FindHandles*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandles> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandles*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FindHandles*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandles> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandles*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FindHandles*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandles> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandles*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FindHandles*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandles> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandles*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FindHandles*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandles> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandles*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FindHandles*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandles> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandles*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FindHandles*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandles> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandles*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FindHandles*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandles> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandles*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FindHandles*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandles> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandles*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FindHandles*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandles> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandles*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FindHandles*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FindHandlesRsp : virtual public ::IceProxy::omero::cmd::OK
{
public:
    
    ::IceInternal::ProxyHandle<FindHandlesRsp> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandlesRsp*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FindHandlesRsp*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandlesRsp> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandlesRsp*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FindHandlesRsp*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandlesRsp> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandlesRsp*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FindHandlesRsp*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandlesRsp> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandlesRsp*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FindHandlesRsp*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandlesRsp> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandlesRsp*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FindHandlesRsp*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandlesRsp> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandlesRsp*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FindHandlesRsp*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandlesRsp> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandlesRsp*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FindHandlesRsp*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandlesRsp> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandlesRsp*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FindHandlesRsp*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandlesRsp> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandlesRsp*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FindHandlesRsp*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandlesRsp> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandlesRsp*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FindHandlesRsp*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandlesRsp> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandlesRsp*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FindHandlesRsp*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandlesRsp> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandlesRsp*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FindHandlesRsp*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandlesRsp> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandlesRsp*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FindHandlesRsp*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandlesRsp> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandlesRsp*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FindHandlesRsp*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandlesRsp> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandlesRsp*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FindHandlesRsp*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandlesRsp> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandlesRsp*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FindHandlesRsp*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandlesRsp> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandlesRsp*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FindHandlesRsp*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandlesRsp> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandlesRsp*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FindHandlesRsp*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FindHandlesRsp> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FindHandlesRsp*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FindHandlesRsp*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Timing : virtual public ::IceProxy::omero::cmd::Request
{
public:
    
    ::IceInternal::ProxyHandle<Timing> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Timing*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Timing*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Timing> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Timing*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Timing*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Timing> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Timing*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Timing*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Timing> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Timing*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Timing*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Timing> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Timing*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Timing*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Timing> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Timing*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Timing*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Timing> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Timing*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Timing*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Timing> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Timing*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Timing*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Timing> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Timing*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Timing*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Timing> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Timing*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Timing*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Timing> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Timing*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Timing*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Timing> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Timing*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Timing*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Timing> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Timing*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Timing*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Timing> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Timing*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Timing*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Timing> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Timing*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Timing*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Timing> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Timing*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Timing*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Timing> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Timing*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Timing*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Timing> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Timing*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Timing*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Timing> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Timing*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Timing*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class DoAll : virtual public ::IceDelegate::omero::cmd::Request
{
public:
};

class DoAllRsp : virtual public ::IceDelegate::omero::cmd::OK
{
public:
};

class ListRequests : virtual public ::IceDelegate::omero::cmd::Request
{
public:
};

class ListRequestsRsp : virtual public ::IceDelegate::omero::cmd::OK
{
public:
};

class PopStatus : virtual public ::IceDelegate::omero::cmd::Request
{
public:
};

class PopStatusRsp : virtual public ::IceDelegate::omero::cmd::OK
{
public:
};

class FindHandles : virtual public ::IceDelegate::omero::cmd::Request
{
public:
};

class FindHandlesRsp : virtual public ::IceDelegate::omero::cmd::OK
{
public:
};

class Timing : virtual public ::IceDelegate::omero::cmd::Request
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

class DoAll : virtual public ::IceDelegate::omero::cmd::DoAll,
              virtual public ::IceDelegateM::omero::cmd::Request
{
public:
};

class DoAllRsp : virtual public ::IceDelegate::omero::cmd::DoAllRsp,
                 virtual public ::IceDelegateM::omero::cmd::OK
{
public:
};

class ListRequests : virtual public ::IceDelegate::omero::cmd::ListRequests,
                     virtual public ::IceDelegateM::omero::cmd::Request
{
public:
};

class ListRequestsRsp : virtual public ::IceDelegate::omero::cmd::ListRequestsRsp,
                        virtual public ::IceDelegateM::omero::cmd::OK
{
public:
};

class PopStatus : virtual public ::IceDelegate::omero::cmd::PopStatus,
                  virtual public ::IceDelegateM::omero::cmd::Request
{
public:
};

class PopStatusRsp : virtual public ::IceDelegate::omero::cmd::PopStatusRsp,
                     virtual public ::IceDelegateM::omero::cmd::OK
{
public:
};

class FindHandles : virtual public ::IceDelegate::omero::cmd::FindHandles,
                    virtual public ::IceDelegateM::omero::cmd::Request
{
public:
};

class FindHandlesRsp : virtual public ::IceDelegate::omero::cmd::FindHandlesRsp,
                       virtual public ::IceDelegateM::omero::cmd::OK
{
public:
};

class Timing : virtual public ::IceDelegate::omero::cmd::Timing,
               virtual public ::IceDelegateM::omero::cmd::Request
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

class DoAll : virtual public ::IceDelegate::omero::cmd::DoAll,
              virtual public ::IceDelegateD::omero::cmd::Request
{
public:
};

class DoAllRsp : virtual public ::IceDelegate::omero::cmd::DoAllRsp,
                 virtual public ::IceDelegateD::omero::cmd::OK
{
public:
};

class ListRequests : virtual public ::IceDelegate::omero::cmd::ListRequests,
                     virtual public ::IceDelegateD::omero::cmd::Request
{
public:
};

class ListRequestsRsp : virtual public ::IceDelegate::omero::cmd::ListRequestsRsp,
                        virtual public ::IceDelegateD::omero::cmd::OK
{
public:
};

class PopStatus : virtual public ::IceDelegate::omero::cmd::PopStatus,
                  virtual public ::IceDelegateD::omero::cmd::Request
{
public:
};

class PopStatusRsp : virtual public ::IceDelegate::omero::cmd::PopStatusRsp,
                     virtual public ::IceDelegateD::omero::cmd::OK
{
public:
};

class FindHandles : virtual public ::IceDelegate::omero::cmd::FindHandles,
                    virtual public ::IceDelegateD::omero::cmd::Request
{
public:
};

class FindHandlesRsp : virtual public ::IceDelegate::omero::cmd::FindHandlesRsp,
                       virtual public ::IceDelegateD::omero::cmd::OK
{
public:
};

class Timing : virtual public ::IceDelegate::omero::cmd::Timing,
               virtual public ::IceDelegateD::omero::cmd::Request
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

class DoAll : virtual public ::omero::cmd::Request
{
public:

    typedef DoAllPrx ProxyType;
    typedef DoAllPtr PointerType;
    
    DoAll() {}
    DoAll(const ::omero::cmd::RequestList&, const ::omero::cmd::StringMapList&);
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

    virtual ~DoAll() {}

    friend class DoAll__staticInit;

public:

    ::omero::cmd::RequestList requests;

    ::omero::cmd::StringMapList contexts;
};

class DoAll__staticInit
{
public:

    ::omero::cmd::DoAll _init;
};

static DoAll__staticInit _DoAll_init;

class DoAllRsp : virtual public ::omero::cmd::OK
{
public:

    typedef DoAllRspPrx ProxyType;
    typedef DoAllRspPtr PointerType;
    
    DoAllRsp() {}
    DoAllRsp(const ::omero::cmd::ResponseList&, const ::omero::cmd::StatusList&);
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

    virtual ~DoAllRsp() {}

public:

    ::omero::cmd::ResponseList responses;

    ::omero::cmd::StatusList status;
};

class ListRequests : virtual public ::omero::cmd::Request
{
public:

    typedef ListRequestsPrx ProxyType;
    typedef ListRequestsPtr PointerType;
    
    ListRequests() {}
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

    virtual ~ListRequests() {}
};

class ListRequestsRsp : virtual public ::omero::cmd::OK
{
public:

    typedef ListRequestsRspPrx ProxyType;
    typedef ListRequestsRspPtr PointerType;
    
    ListRequestsRsp() {}
    explicit ListRequestsRsp(const ::omero::cmd::RequestList&);
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

    virtual ~ListRequestsRsp() {}

public:

    ::omero::cmd::RequestList list;
};

class PopStatus : virtual public ::omero::cmd::Request
{
public:

    typedef PopStatusPrx ProxyType;
    typedef PopStatusPtr PointerType;
    
    PopStatus() {}
    PopStatus(::Ice::Int, const ::omero::cmd::StateList&, const ::omero::cmd::StateList&);
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

    virtual ~PopStatus() {}

public:

    ::Ice::Int limit;

    ::omero::cmd::StateList include;

    ::omero::cmd::StateList exclude;
};

class PopStatusRsp : virtual public ::omero::cmd::OK
{
public:

    typedef PopStatusRspPrx ProxyType;
    typedef PopStatusRspPtr PointerType;
    
    PopStatusRsp() {}
    explicit PopStatusRsp(const ::omero::cmd::StatusList&);
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

    virtual ~PopStatusRsp() {}

public:

    ::omero::cmd::StatusList list;
};

class FindHandles : virtual public ::omero::cmd::Request
{
public:

    typedef FindHandlesPrx ProxyType;
    typedef FindHandlesPtr PointerType;
    
    FindHandles() {}
    FindHandles(::Ice::Int, const ::omero::cmd::StateList&, const ::omero::cmd::StateList&);
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

    virtual ~FindHandles() {}

public:

    ::Ice::Int limit;

    ::omero::cmd::StateList include;

    ::omero::cmd::StateList exclude;
};

class FindHandlesRsp : virtual public ::omero::cmd::OK
{
public:

    typedef FindHandlesRspPrx ProxyType;
    typedef FindHandlesRspPtr PointerType;
    
    FindHandlesRsp() {}
    explicit FindHandlesRsp(const ::omero::cmd::HandleList&);
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

    virtual ~FindHandlesRsp() {}

public:

    ::omero::cmd::HandleList handles;
};

class Timing : virtual public ::omero::cmd::Request
{
public:

    typedef TimingPrx ProxyType;
    typedef TimingPtr PointerType;
    
    Timing() {}
    Timing(::Ice::Int, ::Ice::Int);
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

    virtual ~Timing() {}

public:

    ::Ice::Int steps;

    ::Ice::Int millisPerStep;
};

}

}

#endif
