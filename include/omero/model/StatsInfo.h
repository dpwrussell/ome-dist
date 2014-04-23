// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `StatsInfo.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_StatsInfo_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_StatsInfo_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <omero/model/IObject.h>
#include <omero/RTypes.h>
#include <omero/System.h>
#include <omero/Collections.h>
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

namespace model
{

class Details;

class StatsInfo;

}

}

}

namespace omero
{

namespace model
{

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class StatsInfo;
bool operator==(const StatsInfo&, const StatsInfo&);
bool operator<(const StatsInfo&, const StatsInfo&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::StatsInfo*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::StatsInfo*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::StatsInfo> StatsInfoPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::StatsInfo> StatsInfoPrx;

void __read(::IceInternal::BasicStream*, StatsInfoPrx&);
void __patch__StatsInfoPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class StatsInfo : virtual public ::IceProxy::omero::model::IObject
{
public:

    ::omero::RIntPtr getVersion()
    {
        return getVersion(0);
    }
    ::omero::RIntPtr getVersion(const ::Ice::Context& __ctx)
    {
        return getVersion(&__ctx);
    }
    
private:

    ::omero::RIntPtr getVersion(const ::Ice::Context*);
    
public:

    void setVersion(const ::omero::RIntPtr& theVersion)
    {
        setVersion(theVersion, 0);
    }
    void setVersion(const ::omero::RIntPtr& theVersion, const ::Ice::Context& __ctx)
    {
        setVersion(theVersion, &__ctx);
    }
    
private:

    void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getGlobalMin()
    {
        return getGlobalMin(0);
    }
    ::omero::RDoublePtr getGlobalMin(const ::Ice::Context& __ctx)
    {
        return getGlobalMin(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getGlobalMin(const ::Ice::Context*);
    
public:

    void setGlobalMin(const ::omero::RDoublePtr& theGlobalMin)
    {
        setGlobalMin(theGlobalMin, 0);
    }
    void setGlobalMin(const ::omero::RDoublePtr& theGlobalMin, const ::Ice::Context& __ctx)
    {
        setGlobalMin(theGlobalMin, &__ctx);
    }
    
private:

    void setGlobalMin(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getGlobalMax()
    {
        return getGlobalMax(0);
    }
    ::omero::RDoublePtr getGlobalMax(const ::Ice::Context& __ctx)
    {
        return getGlobalMax(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getGlobalMax(const ::Ice::Context*);
    
public:

    void setGlobalMax(const ::omero::RDoublePtr& theGlobalMax)
    {
        setGlobalMax(theGlobalMax, 0);
    }
    void setGlobalMax(const ::omero::RDoublePtr& theGlobalMax, const ::Ice::Context& __ctx)
    {
        setGlobalMax(theGlobalMax, &__ctx);
    }
    
private:

    void setGlobalMax(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<StatsInfo> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatsInfo*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<StatsInfo*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatsInfo> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatsInfo*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<StatsInfo*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatsInfo> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatsInfo*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<StatsInfo*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatsInfo> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatsInfo*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<StatsInfo*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatsInfo> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatsInfo*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<StatsInfo*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatsInfo> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatsInfo*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<StatsInfo*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatsInfo> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatsInfo*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<StatsInfo*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatsInfo> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatsInfo*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<StatsInfo*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatsInfo> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatsInfo*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<StatsInfo*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatsInfo> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatsInfo*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<StatsInfo*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatsInfo> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatsInfo*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<StatsInfo*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatsInfo> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatsInfo*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<StatsInfo*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatsInfo> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatsInfo*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<StatsInfo*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatsInfo> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatsInfo*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<StatsInfo*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatsInfo> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatsInfo*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<StatsInfo*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatsInfo> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatsInfo*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<StatsInfo*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatsInfo> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatsInfo*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<StatsInfo*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatsInfo> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatsInfo*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<StatsInfo*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatsInfo> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatsInfo*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<StatsInfo*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace model
{

class StatsInfo : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getGlobalMin(const ::Ice::Context*) = 0;

    virtual void setGlobalMin(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getGlobalMax(const ::Ice::Context*) = 0;

    virtual void setGlobalMax(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;
};

}

}

}

namespace IceDelegateM
{

namespace omero
{

namespace model
{

class StatsInfo : virtual public ::IceDelegate::omero::model::StatsInfo,
                  virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getGlobalMin(const ::Ice::Context*);

    virtual void setGlobalMin(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getGlobalMax(const ::Ice::Context*);

    virtual void setGlobalMax(const ::omero::RDoublePtr&, const ::Ice::Context*);
};

}

}

}

namespace IceDelegateD
{

namespace omero
{

namespace model
{

class StatsInfo : virtual public ::IceDelegate::omero::model::StatsInfo,
                  virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getGlobalMin(const ::Ice::Context*);

    virtual void setGlobalMin(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getGlobalMax(const ::Ice::Context*);

    virtual void setGlobalMax(const ::omero::RDoublePtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class StatsInfo : virtual public ::omero::model::IObject
{
public:

    typedef StatsInfoPrx ProxyType;
    typedef StatsInfoPtr PointerType;
    
    StatsInfo() {}
    StatsInfo(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::RIntPtr getVersion(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getVersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setVersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getGlobalMin(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getGlobalMin(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setGlobalMin(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setGlobalMin(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getGlobalMax(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getGlobalMax(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setGlobalMax(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setGlobalMax(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RIntPtr version;

    ::omero::RDoublePtr globalMin;

    ::omero::RDoublePtr globalMax;
};

}

}

#endif