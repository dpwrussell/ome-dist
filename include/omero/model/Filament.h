// **********************************************************************
//
// Copyright (c) 2003-2011 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.4.2
//
// <auto-generated>
//
// Generated from file `Filament.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Filament_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Filament_h__

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
#include <Ice/Direct.h>
#include <Ice/FactoryTableInit.h>
#include <IceUtil/ScopedArray.h>
#include <Ice/StreamF.h>
#include <omero/model/IObject.h>
#include <omero/RTypes.h>
#include <omero/System.h>
#include <omero/Collections.h>
#include <omero/model/LightSource.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 304
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 2
#       error Ice patch level mismatch!
#   endif
#endif

namespace IceProxy
{

namespace omero
{

namespace model
{

class FilamentType;

class Instrument;

class Details;

class Filament;

}

}

}

namespace omero
{

namespace model
{

class FilamentType;
bool operator==(const FilamentType&, const FilamentType&);
bool operator<(const FilamentType&, const FilamentType&);

class Instrument;
bool operator==(const Instrument&, const Instrument&);
bool operator<(const Instrument&, const Instrument&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Filament;
bool operator==(const Filament&, const Filament&);
bool operator<(const Filament&, const Filament&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::FilamentType*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::FilamentType*);

::Ice::Object* upCast(::omero::model::Instrument*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Instrument*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Filament*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Filament*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::FilamentType> FilamentTypePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::FilamentType> FilamentTypePrx;

void __read(::IceInternal::BasicStream*, FilamentTypePrx&);
void __patch__FilamentTypePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Instrument> InstrumentPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Instrument> InstrumentPrx;

void __read(::IceInternal::BasicStream*, InstrumentPrx&);
void __patch__InstrumentPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Filament> FilamentPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Filament> FilamentPrx;

void __read(::IceInternal::BasicStream*, FilamentPrx&);
void __patch__FilamentPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

class Callback_Filament_getType_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_Filament_getType_Base> Callback_Filament_getTypePtr;

class Callback_Filament_setType_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_Filament_setType_Base> Callback_Filament_setTypePtr;

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Filament : virtual public ::IceProxy::omero::model::LightSource
{
public:

    ::omero::model::FilamentTypePtr getType()
    {
        return getType(0);
    }
    ::omero::model::FilamentTypePtr getType(const ::Ice::Context& __ctx)
    {
        return getType(&__ctx);
    }

    ::Ice::AsyncResultPtr begin_getType()
    {
        return begin_getType(0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getType(const ::Ice::Context& __ctx)
    {
        return begin_getType(&__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getType(const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getType(0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getType(const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getType(&__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getType(const ::omero::model::Callback_Filament_getTypePtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getType(0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getType(const ::Ice::Context& __ctx, const ::omero::model::Callback_Filament_getTypePtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getType(&__ctx, __del, __cookie);
    }

    ::omero::model::FilamentTypePtr end_getType(const ::Ice::AsyncResultPtr&);
    
private:

    ::omero::model::FilamentTypePtr getType(const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_getType(const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:

    void setType(const ::omero::model::FilamentTypePtr& theType)
    {
        setType(theType, 0);
    }
    void setType(const ::omero::model::FilamentTypePtr& theType, const ::Ice::Context& __ctx)
    {
        setType(theType, &__ctx);
    }

    ::Ice::AsyncResultPtr begin_setType(const ::omero::model::FilamentTypePtr& theType)
    {
        return begin_setType(theType, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_setType(const ::omero::model::FilamentTypePtr& theType, const ::Ice::Context& __ctx)
    {
        return begin_setType(theType, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_setType(const ::omero::model::FilamentTypePtr& theType, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setType(theType, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setType(const ::omero::model::FilamentTypePtr& theType, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setType(theType, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setType(const ::omero::model::FilamentTypePtr& theType, const ::omero::model::Callback_Filament_setTypePtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setType(theType, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setType(const ::omero::model::FilamentTypePtr& theType, const ::Ice::Context& __ctx, const ::omero::model::Callback_Filament_setTypePtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setType(theType, &__ctx, __del, __cookie);
    }

    void end_setType(const ::Ice::AsyncResultPtr&);
    
private:

    void setType(const ::omero::model::FilamentTypePtr&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_setType(const ::omero::model::FilamentTypePtr&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<Filament> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filament*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Filament*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filament> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filament*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Filament*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filament> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filament*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Filament*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filament> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filament*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Filament*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filament> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filament*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Filament*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filament> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filament*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Filament*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filament> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filament*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Filament*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filament> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filament*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Filament*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filament> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filament*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Filament*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filament> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filament*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Filament*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filament> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filament*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Filament*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filament> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filament*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Filament*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filament> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filament*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Filament*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filament> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filament*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Filament*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filament> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filament*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Filament*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filament> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filament*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Filament*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filament> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filament*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Filament*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filament> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filament*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Filament*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Filament> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Filament*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Filament*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Filament : virtual public ::IceDelegate::omero::model::LightSource
{
public:

    virtual ::omero::model::FilamentTypePtr getType(const ::Ice::Context*) = 0;

    virtual void setType(const ::omero::model::FilamentTypePtr&, const ::Ice::Context*) = 0;
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

class Filament : virtual public ::IceDelegate::omero::model::Filament,
                 virtual public ::IceDelegateM::omero::model::LightSource
{
public:

    virtual ::omero::model::FilamentTypePtr getType(const ::Ice::Context*);

    virtual void setType(const ::omero::model::FilamentTypePtr&, const ::Ice::Context*);
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

class Filament : virtual public ::IceDelegate::omero::model::Filament,
                 virtual public ::IceDelegateD::omero::model::LightSource
{
public:

    virtual ::omero::model::FilamentTypePtr getType(const ::Ice::Context*);

    virtual void setType(const ::omero::model::FilamentTypePtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Filament : public ::omero::model::LightSource
{
public:

    typedef FilamentPrx ProxyType;
    typedef FilamentPtr PointerType;
    
    Filament() {}
    Filament(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RDoublePtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::model::InstrumentPtr&, const ::omero::model::FilamentTypePtr&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::model::FilamentTypePtr getType(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setType(const ::omero::model::FilamentTypePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
// COMPILERFIX: Stream API is not supported with VC++ 6
#if !defined(_MSC_VER) || (_MSC_VER >= 1300)
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
#endif

protected:

    ::omero::model::FilamentTypePtr type;
};

inline bool operator==(const Filament& l, const Filament& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const Filament& l, const Filament& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

}

}

namespace omero
{

namespace model
{

template<class T>
class CallbackNC_Filament_getType : public Callback_Filament_getType_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(const ::omero::model::FilamentTypePtr&);

    CallbackNC_Filament_getType(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::omero::model::FilamentPrx __proxy = ::omero::model::FilamentPrx::uncheckedCast(__result->getProxy());
        ::omero::model::FilamentTypePtr __ret;
        try
        {
            __ret = __proxy->end_getType(__result);
        }
        catch(::Ice::Exception& ex)
        {
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
            __exception(__result, ex);
#else
            ::IceInternal::CallbackNC<T>::__exception(__result, ex);
#endif
            return;
        }
        if(response)
        {
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
            (callback.get()->*response)(__ret);
#else
            (::IceInternal::CallbackNC<T>::callback.get()->*response)(__ret);
#endif
        }
    }

    Response response;
};

template<class T> Callback_Filament_getTypePtr
newCallback_Filament_getType(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::omero::model::FilamentTypePtr&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Filament_getType<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_Filament_getTypePtr
newCallback_Filament_getType(T* instance, void (T::*cb)(const ::omero::model::FilamentTypePtr&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Filament_getType<T>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
class Callback_Filament_getType : public Callback_Filament_getType_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const ::omero::model::FilamentTypePtr&, const CT&);

    Callback_Filament_getType(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::omero::model::FilamentPrx __proxy = ::omero::model::FilamentPrx::uncheckedCast(__result->getProxy());
        ::omero::model::FilamentTypePtr __ret;
        try
        {
            __ret = __proxy->end_getType(__result);
        }
        catch(::Ice::Exception& ex)
        {
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
            __exception(__result, ex);
#else
            ::IceInternal::Callback<T, CT>::__exception(__result, ex);
#endif
            return;
        }
        if(response)
        {
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
            (callback.get()->*response)(__ret, CT::dynamicCast(__result->getCookie()));
#else
            (::IceInternal::Callback<T, CT>::callback.get()->*response)(__ret, CT::dynamicCast(__result->getCookie()));
#endif
        }
    }

    Response response;
};

template<class T, typename CT> Callback_Filament_getTypePtr
newCallback_Filament_getType(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::omero::model::FilamentTypePtr&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Filament_getType<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_Filament_getTypePtr
newCallback_Filament_getType(T* instance, void (T::*cb)(const ::omero::model::FilamentTypePtr&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Filament_getType<T, CT>(instance, cb, excb, sentcb);
}

template<class T>
class CallbackNC_Filament_setType : public Callback_Filament_setType_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_Filament_setType(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_Filament_setTypePtr
newCallback_Filament_setType(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Filament_setType<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_Filament_setTypePtr
newCallback_Filament_setType(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Filament_setType<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_Filament_setTypePtr
newCallback_Filament_setType(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Filament_setType<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_Filament_setTypePtr
newCallback_Filament_setType(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Filament_setType<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_Filament_setType : public Callback_Filament_setType_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_Filament_setType(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_Filament_setTypePtr
newCallback_Filament_setType(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Filament_setType<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_Filament_setTypePtr
newCallback_Filament_setType(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Filament_setType<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_Filament_setTypePtr
newCallback_Filament_setType(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Filament_setType<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_Filament_setTypePtr
newCallback_Filament_setType(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Filament_setType<T, CT>(instance, 0, excb, sentcb);
}

}

}

#endif
