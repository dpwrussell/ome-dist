// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Point.ice'

#ifndef __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Point_h__
#define __omero_model__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_model_Point_h__

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
#include <omero/model/Shape.h>
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

class Roi;

class Details;

class Point;

}

}

}

namespace omero
{

namespace model
{

class Roi;
bool operator==(const Roi&, const Roi&);
bool operator<(const Roi&, const Roi&);

class Details;
bool operator==(const Details&, const Details&);
bool operator<(const Details&, const Details&);

class Point;
bool operator==(const Point&, const Point&);
bool operator<(const Point&, const Point&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::model::Roi*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Roi*);

::Ice::Object* upCast(::omero::model::Details*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Details*);

::Ice::Object* upCast(::omero::model::Point*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::model::Point*);

}

namespace omero
{

namespace model
{

typedef ::IceInternal::Handle< ::omero::model::Roi> RoiPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Roi> RoiPrx;

void __read(::IceInternal::BasicStream*, RoiPrx&);
void __patch__RoiPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Details> DetailsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Details> DetailsPrx;

void __read(::IceInternal::BasicStream*, DetailsPrx&);
void __patch__DetailsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::model::Point> PointPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::model::Point> PointPrx;

void __read(::IceInternal::BasicStream*, PointPrx&);
void __patch__PointPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace IceProxy
{

namespace omero
{

namespace model
{

class Point : virtual public ::IceProxy::omero::model::Shape
{
public:

    ::omero::RDoublePtr getCx()
    {
        return getCx(0);
    }
    ::omero::RDoublePtr getCx(const ::Ice::Context& __ctx)
    {
        return getCx(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getCx(const ::Ice::Context*);
    
public:

    void setCx(const ::omero::RDoublePtr& theCx)
    {
        setCx(theCx, 0);
    }
    void setCx(const ::omero::RDoublePtr& theCx, const ::Ice::Context& __ctx)
    {
        setCx(theCx, &__ctx);
    }
    
private:

    void setCx(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RDoublePtr getCy()
    {
        return getCy(0);
    }
    ::omero::RDoublePtr getCy(const ::Ice::Context& __ctx)
    {
        return getCy(&__ctx);
    }
    
private:

    ::omero::RDoublePtr getCy(const ::Ice::Context*);
    
public:

    void setCy(const ::omero::RDoublePtr& theCy)
    {
        setCy(theCy, 0);
    }
    void setCy(const ::omero::RDoublePtr& theCy, const ::Ice::Context& __ctx)
    {
        setCy(theCy, &__ctx);
    }
    
private:

    void setCy(const ::omero::RDoublePtr&, const ::Ice::Context*);
    
public:

    ::omero::RStringPtr getTextValue()
    {
        return getTextValue(0);
    }
    ::omero::RStringPtr getTextValue(const ::Ice::Context& __ctx)
    {
        return getTextValue(&__ctx);
    }
    
private:

    ::omero::RStringPtr getTextValue(const ::Ice::Context*);
    
public:

    void setTextValue(const ::omero::RStringPtr& theTextValue)
    {
        setTextValue(theTextValue, 0);
    }
    void setTextValue(const ::omero::RStringPtr& theTextValue, const ::Ice::Context& __ctx)
    {
        setTextValue(theTextValue, &__ctx);
    }
    
private:

    void setTextValue(const ::omero::RStringPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Point> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Point> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Point*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Point*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Point : virtual public ::IceDelegate::omero::model::Shape
{
public:

    virtual ::omero::RDoublePtr getCx(const ::Ice::Context*) = 0;

    virtual void setCx(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RDoublePtr getCy(const ::Ice::Context*) = 0;

    virtual void setCy(const ::omero::RDoublePtr&, const ::Ice::Context*) = 0;

    virtual ::omero::RStringPtr getTextValue(const ::Ice::Context*) = 0;

    virtual void setTextValue(const ::omero::RStringPtr&, const ::Ice::Context*) = 0;
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

class Point : virtual public ::IceDelegate::omero::model::Point,
              virtual public ::IceDelegateM::omero::model::Shape
{
public:

    virtual ::omero::RDoublePtr getCx(const ::Ice::Context*);

    virtual void setCx(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getCy(const ::Ice::Context*);

    virtual void setCy(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getTextValue(const ::Ice::Context*);

    virtual void setTextValue(const ::omero::RStringPtr&, const ::Ice::Context*);
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

class Point : virtual public ::IceDelegate::omero::model::Point,
              virtual public ::IceDelegateD::omero::model::Shape
{
public:

    virtual ::omero::RDoublePtr getCx(const ::Ice::Context*);

    virtual void setCx(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RDoublePtr getCy(const ::Ice::Context*);

    virtual void setCy(const ::omero::RDoublePtr&, const ::Ice::Context*);

    virtual ::omero::RStringPtr getTextValue(const ::Ice::Context*);

    virtual void setTextValue(const ::omero::RStringPtr&, const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace model
{

class Point : virtual public ::omero::model::Shape
{
public:

    typedef PointPrx ProxyType;
    typedef PointPtr PointerType;
    
    Point() {}
    Point(const ::omero::RLongPtr&, const ::omero::model::DetailsPtr&, bool, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::model::RoiPtr&, const ::omero::RBoolPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RBoolPtr&, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RIntPtr&, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RIntPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RStringPtr&, const ::omero::RDoublePtr&, const ::omero::RDoublePtr&, const ::omero::RStringPtr&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual ::omero::RDoublePtr getCx(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setCx(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCx(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RDoublePtr getCy(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCy(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setCy(const ::omero::RDoublePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCy(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::omero::RStringPtr getTextValue(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getTextValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setTextValue(const ::omero::RStringPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setTextValue(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

protected:

    ::omero::RDoublePtr cx;

    ::omero::RDoublePtr cy;

    ::omero::RStringPtr textValue;
};

}

}

#endif