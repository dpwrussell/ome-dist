// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.1
//
// <auto-generated>
//
// Generated from file `Link.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Link_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Link_h__

#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/FactoryTableInit.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/StreamF.h>
#include <omero/model/IObject.h>
#include <omero/RTypes.h>
#include <omero/System.h>
#include <omero/Collections.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
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
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details>&);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

class Link;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Link>&);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Link*);

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
::Ice::Object* upCast(::omero::model::Details*);
typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;
void __patch(DetailsPtr&, const ::Ice::ObjectPtr&);

class Link;
bool operator==(const Link&, const Link&);
bool operator<(const Link&, const Link&);
::Ice::Object* upCast(::omero::model::Link*);
typedef ::IceInternal::Handle< ::omero::model::Link> LinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Link> LinkPrx;
void __patch(LinkPtr&, const ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

class Callback_Link_getVersion_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_Link_getVersion_Base> Callback_Link_getVersionPtr;

class Callback_Link_setVersion_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_Link_setVersion_Base> Callback_Link_setVersionPtr;

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Link : virtual public ::IceProxy::omero::model::IObject
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
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_getVersion(const ::IceInternal::Function<void (const ::omero::RIntPtr&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_getVersion(0, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_getVersion(const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_getVersion(0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_getVersion(const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::omero::RIntPtr&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_getVersion(&__ctx, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_getVersion(const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_getVersion(&__ctx, ::Ice::newCallback(__completed, __sent));
    }
    
private:

    ::Ice::AsyncResultPtr __begin_getVersion(const ::Ice::Context* __ctx, const ::IceInternal::Function<void (const ::omero::RIntPtr&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception, const ::IceInternal::Function<void (bool)>& __sent)
    {
        class Cpp11CB : public ::IceInternal::Cpp11FnCallbackNC
        {
        public:

            Cpp11CB(const ::std::function<void (const ::omero::RIntPtr&)>& responseFunc, const ::std::function<void (const ::Ice::Exception&)>& exceptionFunc, const ::std::function<void (bool)>& sentFunc) :
                ::IceInternal::Cpp11FnCallbackNC(exceptionFunc, sentFunc),
                _response(responseFunc)
            {
                CallbackBase::checkCallback(true, responseFunc || exceptionFunc != nullptr);
            }

            virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
            {
                ::omero::model::LinkPrx __proxy = ::omero::model::LinkPrx::uncheckedCast(__result->getProxy());
                ::omero::RIntPtr __ret;
                try
                {
                    __ret = __proxy->end_getVersion(__result);
                }
                catch(::Ice::Exception& ex)
                {
                    Cpp11FnCallbackNC::__exception(__result, ex);
                    return;
                }
                if(_response != nullptr)
                {
                    _response(__ret);
                }
            }
        
        private:
            
            ::std::function<void (const ::omero::RIntPtr&)> _response;
        };
        return begin_getVersion(__ctx, new Cpp11CB(__response, __exception, __sent));
    }
    
public:
#endif

    ::Ice::AsyncResultPtr begin_getVersion()
    {
        return begin_getVersion(0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getVersion(const ::Ice::Context& __ctx)
    {
        return begin_getVersion(&__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getVersion(const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getVersion(0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getVersion(const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getVersion(&__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getVersion(const ::omero::model::Callback_Link_getVersionPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getVersion(0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getVersion(const ::Ice::Context& __ctx, const ::omero::model::Callback_Link_getVersionPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getVersion(&__ctx, __del, __cookie);
    }

    ::omero::RIntPtr end_getVersion(const ::Ice::AsyncResultPtr&);
    
private:

    ::omero::RIntPtr getVersion(const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_getVersion(const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:

    void setVersion(const ::omero::RIntPtr& theVersion)
    {
        setVersion(theVersion, 0);
    }
    void setVersion(const ::omero::RIntPtr& theVersion, const ::Ice::Context& __ctx)
    {
        setVersion(theVersion, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_setVersion(const ::omero::RIntPtr& theVersion, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_setVersion(theVersion, 0, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent));
    }
    ::Ice::AsyncResultPtr
    begin_setVersion(const ::omero::RIntPtr& theVersion, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_setVersion(theVersion, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_setVersion(const ::omero::RIntPtr& theVersion, const ::Ice::Context& __ctx, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_setVersion(theVersion, &__ctx, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_setVersion(const ::omero::RIntPtr& theVersion, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_setVersion(theVersion, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
#endif

    ::Ice::AsyncResultPtr begin_setVersion(const ::omero::RIntPtr& theVersion)
    {
        return begin_setVersion(theVersion, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_setVersion(const ::omero::RIntPtr& theVersion, const ::Ice::Context& __ctx)
    {
        return begin_setVersion(theVersion, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_setVersion(const ::omero::RIntPtr& theVersion, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setVersion(theVersion, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setVersion(const ::omero::RIntPtr& theVersion, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setVersion(theVersion, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setVersion(const ::omero::RIntPtr& theVersion, const ::omero::model::Callback_Link_setVersionPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setVersion(theVersion, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setVersion(const ::omero::RIntPtr& theVersion, const ::Ice::Context& __ctx, const ::omero::model::Callback_Link_setVersionPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setVersion(theVersion, &__ctx, __del, __cookie);
    }

    void end_setVersion(const ::Ice::AsyncResultPtr&);
    
private:

    void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_setVersion(const ::omero::RIntPtr&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<Link> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Link*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Link> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<Link*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<Link> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<Link*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<Link> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<Link*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<Link> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<Link*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<Link> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<Link*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<Link> ice_secure(bool __secure) const
    {
        return dynamic_cast<Link*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<Link> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<Link*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<Link> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Link*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<Link> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Link*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Link> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<Link*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<Link> ice_twoway() const
    {
        return dynamic_cast<Link*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Link> ice_oneway() const
    {
        return dynamic_cast<Link*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Link> ice_batchOneway() const
    {
        return dynamic_cast<Link*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Link> ice_datagram() const
    {
        return dynamic_cast<Link*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Link> ice_batchDatagram() const
    {
        return dynamic_cast<Link*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Link> ice_compress(bool __compress) const
    {
        return dynamic_cast<Link*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<Link> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Link*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<Link> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<Link*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<Link> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<Link*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
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

class Link : virtual public ::IceDelegate::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;
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

class Link : virtual public ::IceDelegate::omero::model::Link,
             virtual public ::IceDelegateM::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*, ::IceInternal::InvocationObserver&);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);
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

class Link : virtual public ::IceDelegate::omero::model::Link,
             virtual public ::IceDelegateD::omero::model::IObject
{
public:

    virtual ::omero::RIntPtr getVersion(const ::Ice::Context*, ::IceInternal::InvocationObserver&);

    virtual void setVersion(const ::omero::RIntPtr&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

}

namespace omero
{

namespace model
{

class Link : public ::omero::model::IObject
{
public:

    typedef LinkPrx ProxyType;
    typedef LinkPtr PointerType;

    Link()
    {
    }

    Link(const ::omero::RLongPtr& __ice_id, const ::omero::model::DetailsPtr& __ice_details, bool __ice_loaded, const ::omero::RIntPtr& __ice_version) :
        ::omero::model::IObject(__ice_id, __ice_details, __ice_loaded)
        ,
        version(__ice_version)
    {
    }

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

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::omero::model::IObject::__writeImpl;
    using ::omero::model::IObject::__readImpl;
    #endif

    ::omero::RIntPtr version;
};

inline bool operator==(const Link& l, const Link& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const Link& l, const Link& r)
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
class CallbackNC_Link_getVersion : public Callback_Link_getVersion_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(const ::omero::RIntPtr&);

    CallbackNC_Link_getVersion(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::omero::model::LinkPrx __proxy = ::omero::model::LinkPrx::uncheckedCast(__result->getProxy());
        ::omero::RIntPtr __ret;
        try
        {
            __ret = __proxy->end_getVersion(__result);
        }
        catch(::Ice::Exception& ex)
        {
            ::IceInternal::CallbackNC<T>::__exception(__result, ex);
            return;
        }
        if(response)
        {
            (::IceInternal::CallbackNC<T>::callback.get()->*response)(__ret);
        }
    }

    Response response;
};

template<class T> Callback_Link_getVersionPtr
newCallback_Link_getVersion(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::omero::RIntPtr&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Link_getVersion<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_Link_getVersionPtr
newCallback_Link_getVersion(T* instance, void (T::*cb)(const ::omero::RIntPtr&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Link_getVersion<T>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
class Callback_Link_getVersion : public Callback_Link_getVersion_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const ::omero::RIntPtr&, const CT&);

    Callback_Link_getVersion(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::omero::model::LinkPrx __proxy = ::omero::model::LinkPrx::uncheckedCast(__result->getProxy());
        ::omero::RIntPtr __ret;
        try
        {
            __ret = __proxy->end_getVersion(__result);
        }
        catch(::Ice::Exception& ex)
        {
            ::IceInternal::Callback<T, CT>::__exception(__result, ex);
            return;
        }
        if(response)
        {
            (::IceInternal::Callback<T, CT>::callback.get()->*response)(__ret, CT::dynamicCast(__result->getCookie()));
        }
    }

    Response response;
};

template<class T, typename CT> Callback_Link_getVersionPtr
newCallback_Link_getVersion(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::omero::RIntPtr&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Link_getVersion<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_Link_getVersionPtr
newCallback_Link_getVersion(T* instance, void (T::*cb)(const ::omero::RIntPtr&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Link_getVersion<T, CT>(instance, cb, excb, sentcb);
}

template<class T>
class CallbackNC_Link_setVersion : public Callback_Link_setVersion_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_Link_setVersion(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_Link_setVersionPtr
newCallback_Link_setVersion(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Link_setVersion<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_Link_setVersionPtr
newCallback_Link_setVersion(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Link_setVersion<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_Link_setVersionPtr
newCallback_Link_setVersion(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Link_setVersion<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_Link_setVersionPtr
newCallback_Link_setVersion(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Link_setVersion<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_Link_setVersion : public Callback_Link_setVersion_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_Link_setVersion(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_Link_setVersionPtr
newCallback_Link_setVersion(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Link_setVersion<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_Link_setVersionPtr
newCallback_Link_setVersion(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Link_setVersion<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_Link_setVersionPtr
newCallback_Link_setVersion(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Link_setVersion<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_Link_setVersionPtr
newCallback_Link_setVersion(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Link_setVersion<T, CT>(instance, 0, excb, sentcb);
}

}

}

#endif
