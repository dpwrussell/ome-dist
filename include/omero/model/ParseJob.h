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
// Generated from file `ParseJob.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_ParseJob_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_ParseJob_h__

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
#include <omero/model/Job.h>
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

class JobStatus;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::omero::model::JobStatus>&);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::JobStatus*);

class JobOriginalFileLink;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::omero::model::JobOriginalFileLink>&);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::JobOriginalFileLink*);

class OriginalFile;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::omero::model::OriginalFile>&);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::OriginalFile*);

class Details;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details>&);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

class ParseJob;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ParseJob>&);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::ParseJob*);

}

}

}

namespace omero
{

namespace model
{

class JobStatus;
bool operator==(const JobStatus&, const JobStatus&);
bool operator<(const JobStatus&, const JobStatus&);
::Ice::Object* upCast(::omero::model::JobStatus*);
typedef ::IceInternal::Handle< ::omero::model::JobStatus> JobStatusPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::JobStatus> JobStatusPrx;
void __patch(JobStatusPtr&, const ::Ice::ObjectPtr&);

class JobOriginalFileLink;
bool operator==(const JobOriginalFileLink&, const JobOriginalFileLink&);
bool operator<(const JobOriginalFileLink&, const JobOriginalFileLink&);
::Ice::Object* upCast(::omero::model::JobOriginalFileLink*);
typedef ::IceInternal::Handle< ::omero::model::JobOriginalFileLink> JobOriginalFileLinkPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::JobOriginalFileLink> JobOriginalFileLinkPrx;
void __patch(JobOriginalFileLinkPtr&, const ::Ice::ObjectPtr&);

class OriginalFile;
bool operator==(const OriginalFile&, const OriginalFile&);
bool operator<(const OriginalFile&, const OriginalFile&);
::Ice::Object* upCast(::omero::model::OriginalFile*);
typedef ::IceInternal::Handle< ::omero::model::OriginalFile> OriginalFilePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::OriginalFile> OriginalFilePrx;
void __patch(OriginalFilePtr&, const ::Ice::ObjectPtr&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);
::Ice::Object* upCast(::omero::model::Details*);
typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;
void __patch(DetailsPtr&, const ::Ice::ObjectPtr&);

class ParseJob;
bool operator==(const ParseJob&, const ParseJob&);
bool operator<(const ParseJob&, const ParseJob&);
::Ice::Object* upCast(::omero::model::ParseJob*);
typedef ::IceInternal::Handle< ::omero::model::ParseJob> ParseJobPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::ParseJob> ParseJobPrx;
void __patch(ParseJobPtr&, const ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace model
{

class Callback_ParseJob_getParams_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_ParseJob_getParams_Base> Callback_ParseJob_getParamsPtr;

class Callback_ParseJob_setParams_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_ParseJob_setParams_Base> Callback_ParseJob_setParamsPtr;

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class ParseJob : virtual public ::IceProxy::omero::model::Job
{
public:

    ::Ice::ByteSeq getParams()
    {
        return getParams(0);
    }
    ::Ice::ByteSeq getParams(const ::Ice::Context& __ctx)
    {
        return getParams(&__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_getParams(const ::IceInternal::Function<void (const ::Ice::ByteSeq&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_getParams(0, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_getParams(const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_getParams(0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_getParams(const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::ByteSeq&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_getParams(&__ctx, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_getParams(const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_getParams(&__ctx, ::Ice::newCallback(__completed, __sent));
    }
    
private:

    ::Ice::AsyncResultPtr __begin_getParams(const ::Ice::Context* __ctx, const ::IceInternal::Function<void (const ::Ice::ByteSeq&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception, const ::IceInternal::Function<void (bool)>& __sent)
    {
        class Cpp11CB : public ::IceInternal::Cpp11FnCallbackNC
        {
        public:

            Cpp11CB(const ::std::function<void (const ::Ice::ByteSeq&)>& responseFunc, const ::std::function<void (const ::Ice::Exception&)>& exceptionFunc, const ::std::function<void (bool)>& sentFunc) :
                ::IceInternal::Cpp11FnCallbackNC(exceptionFunc, sentFunc),
                _response(responseFunc)
            {
                CallbackBase::checkCallback(true, responseFunc || exceptionFunc != nullptr);
            }

            virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
            {
                ::omero::model::ParseJobPrx __proxy = ::omero::model::ParseJobPrx::uncheckedCast(__result->getProxy());
                ::Ice::ByteSeq __ret;
                try
                {
                    __ret = __proxy->end_getParams(__result);
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
            
            ::std::function<void (const ::Ice::ByteSeq&)> _response;
        };
        return begin_getParams(__ctx, new Cpp11CB(__response, __exception, __sent));
    }
    
public:
#endif

    ::Ice::AsyncResultPtr begin_getParams()
    {
        return begin_getParams(0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getParams(const ::Ice::Context& __ctx)
    {
        return begin_getParams(&__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getParams(const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getParams(0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getParams(const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getParams(&__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getParams(const ::omero::model::Callback_ParseJob_getParamsPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getParams(0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getParams(const ::Ice::Context& __ctx, const ::omero::model::Callback_ParseJob_getParamsPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getParams(&__ctx, __del, __cookie);
    }

    ::Ice::ByteSeq end_getParams(const ::Ice::AsyncResultPtr&);
    
private:

    ::Ice::ByteSeq getParams(const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_getParams(const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:

    void setParams(const ::Ice::ByteSeq& theParams)
    {
        setParams(theParams, 0);
    }
    void setParams(const ::Ice::ByteSeq& theParams, const ::Ice::Context& __ctx)
    {
        setParams(theParams, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_setParams(const ::Ice::ByteSeq& theParams, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_setParams(theParams, 0, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent));
    }
    ::Ice::AsyncResultPtr
    begin_setParams(const ::Ice::ByteSeq& theParams, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_setParams(theParams, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_setParams(const ::Ice::ByteSeq& theParams, const ::Ice::Context& __ctx, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_setParams(theParams, &__ctx, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_setParams(const ::Ice::ByteSeq& theParams, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_setParams(theParams, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
#endif

    ::Ice::AsyncResultPtr begin_setParams(const ::Ice::ByteSeq& theParams)
    {
        return begin_setParams(theParams, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_setParams(const ::Ice::ByteSeq& theParams, const ::Ice::Context& __ctx)
    {
        return begin_setParams(theParams, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_setParams(const ::Ice::ByteSeq& theParams, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setParams(theParams, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setParams(const ::Ice::ByteSeq& theParams, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setParams(theParams, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setParams(const ::Ice::ByteSeq& theParams, const ::omero::model::Callback_ParseJob_setParamsPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setParams(theParams, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setParams(const ::Ice::ByteSeq& theParams, const ::Ice::Context& __ctx, const ::omero::model::Callback_ParseJob_setParamsPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setParams(theParams, &__ctx, __del, __cookie);
    }

    void end_setParams(const ::Ice::AsyncResultPtr&);
    
private:

    void setParams(const ::Ice::ByteSeq&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_setParams(const ::Ice::ByteSeq&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<ParseJob> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<ParseJob*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<ParseJob> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<ParseJob*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<ParseJob> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<ParseJob*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<ParseJob> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<ParseJob*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<ParseJob> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<ParseJob*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<ParseJob> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<ParseJob*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<ParseJob> ice_secure(bool __secure) const
    {
        return dynamic_cast<ParseJob*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<ParseJob> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<ParseJob*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<ParseJob> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<ParseJob*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<ParseJob> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<ParseJob*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<ParseJob> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<ParseJob*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<ParseJob> ice_twoway() const
    {
        return dynamic_cast<ParseJob*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<ParseJob> ice_oneway() const
    {
        return dynamic_cast<ParseJob*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<ParseJob> ice_batchOneway() const
    {
        return dynamic_cast<ParseJob*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<ParseJob> ice_datagram() const
    {
        return dynamic_cast<ParseJob*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<ParseJob> ice_batchDatagram() const
    {
        return dynamic_cast<ParseJob*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<ParseJob> ice_compress(bool __compress) const
    {
        return dynamic_cast<ParseJob*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<ParseJob> ice_timeout(int __timeout) const
    {
        return dynamic_cast<ParseJob*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<ParseJob> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<ParseJob*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<ParseJob> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<ParseJob*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
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

class ParseJob : virtual public ::IceDelegate::omero::model::Job
{
public:

    virtual ::Ice::ByteSeq getParams(const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;

    virtual void setParams(const ::Ice::ByteSeq&, const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;
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

class ParseJob : virtual public ::IceDelegate::omero::model::ParseJob,
                 virtual public ::IceDelegateM::omero::model::Job
{
public:

    virtual ::Ice::ByteSeq getParams(const ::Ice::Context*, ::IceInternal::InvocationObserver&);

    virtual void setParams(const ::Ice::ByteSeq&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);
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

class ParseJob : virtual public ::IceDelegate::omero::model::ParseJob,
                 virtual public ::IceDelegateD::omero::model::Job
{
public:

    virtual ::Ice::ByteSeq getParams(const ::Ice::Context*, ::IceInternal::InvocationObserver&);

    virtual void setParams(const ::Ice::ByteSeq&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

}

namespace omero
{

namespace model
{

class ParseJob : public ::omero::model::Job
{
public:

    typedef ParseJobPrx ProxyType;
    typedef ParseJobPtr PointerType;

    ParseJob()
    {
    }

    ParseJob(const ::omero::RLongPtr& __ice_id, const ::omero::model::DetailsPtr& __ice_details, bool __ice_loaded, const ::omero::RIntPtr& __ice_version, const ::omero::RStringPtr& __ice_username, const ::omero::RStringPtr& __ice_groupname, const ::omero::RStringPtr& __ice_type, const ::omero::RStringPtr& __ice_message, const ::omero::model::JobStatusPtr& __ice_status, const ::omero::RTimePtr& __ice_submitted, const ::omero::RTimePtr& __ice_scheduledFor, const ::omero::RTimePtr& __ice_started, const ::omero::RTimePtr& __ice_finished, const ::omero::model::JobOriginalFileLinksSeq& __ice_originalFileLinksSeq, bool __ice_originalFileLinksLoaded, const ::omero::sys::CountMap& __ice_originalFileLinksCountPerOwner, const ::Ice::ByteSeq& __ice_params) :
        ::omero::model::Job(__ice_id, __ice_details, __ice_loaded, __ice_version, __ice_username, __ice_groupname, __ice_type, __ice_message, __ice_status, __ice_submitted, __ice_scheduledFor, __ice_started, __ice_finished, __ice_originalFileLinksSeq, __ice_originalFileLinksLoaded, __ice_originalFileLinksCountPerOwner)
        ,
        params(__ice_params)
    {
    }

    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::Ice::ByteSeq getParams(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getParams(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setParams(const ::Ice::ByteSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setParams(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::omero::model::Job::__writeImpl;
    using ::omero::model::Job::__readImpl;
    #endif

    ::Ice::ByteSeq params;
};

inline bool operator==(const ParseJob& l, const ParseJob& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const ParseJob& l, const ParseJob& r)
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
class CallbackNC_ParseJob_getParams : public Callback_ParseJob_getParams_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(const ::Ice::ByteSeq&);

    CallbackNC_ParseJob_getParams(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::omero::model::ParseJobPrx __proxy = ::omero::model::ParseJobPrx::uncheckedCast(__result->getProxy());
        ::Ice::ByteSeq __ret;
        try
        {
            __ret = __proxy->end_getParams(__result);
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

template<class T> Callback_ParseJob_getParamsPtr
newCallback_ParseJob_getParams(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::Ice::ByteSeq&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_ParseJob_getParams<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_ParseJob_getParamsPtr
newCallback_ParseJob_getParams(T* instance, void (T::*cb)(const ::Ice::ByteSeq&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_ParseJob_getParams<T>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
class Callback_ParseJob_getParams : public Callback_ParseJob_getParams_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const ::Ice::ByteSeq&, const CT&);

    Callback_ParseJob_getParams(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::omero::model::ParseJobPrx __proxy = ::omero::model::ParseJobPrx::uncheckedCast(__result->getProxy());
        ::Ice::ByteSeq __ret;
        try
        {
            __ret = __proxy->end_getParams(__result);
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

template<class T, typename CT> Callback_ParseJob_getParamsPtr
newCallback_ParseJob_getParams(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::Ice::ByteSeq&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_ParseJob_getParams<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_ParseJob_getParamsPtr
newCallback_ParseJob_getParams(T* instance, void (T::*cb)(const ::Ice::ByteSeq&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_ParseJob_getParams<T, CT>(instance, cb, excb, sentcb);
}

template<class T>
class CallbackNC_ParseJob_setParams : public Callback_ParseJob_setParams_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_ParseJob_setParams(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_ParseJob_setParamsPtr
newCallback_ParseJob_setParams(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_ParseJob_setParams<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_ParseJob_setParamsPtr
newCallback_ParseJob_setParams(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_ParseJob_setParams<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_ParseJob_setParamsPtr
newCallback_ParseJob_setParams(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_ParseJob_setParams<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_ParseJob_setParamsPtr
newCallback_ParseJob_setParams(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_ParseJob_setParams<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_ParseJob_setParams : public Callback_ParseJob_setParams_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_ParseJob_setParams(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_ParseJob_setParamsPtr
newCallback_ParseJob_setParams(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_ParseJob_setParams<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_ParseJob_setParamsPtr
newCallback_ParseJob_setParams(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_ParseJob_setParams<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_ParseJob_setParamsPtr
newCallback_ParseJob_setParams(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_ParseJob_setParams<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_ParseJob_setParamsPtr
newCallback_ParseJob_setParams(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_ParseJob_setParams<T, CT>(instance, 0, excb, sentcb);
}

}

}

#endif
