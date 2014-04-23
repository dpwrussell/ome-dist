// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `ServicesF.ice'

#ifndef __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_ServicesF_h__
#define __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_ServicesF_h__

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
#include <omero/ServerErrors.h>
#include <omero/System.h>
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

namespace api
{

class ServiceInterface;

class StatefulServiceInterface;

class IAdmin;

class IConfig;

class IContainer;

class IDelete;

class ILdap;

class IMetadata;

class IPixels;

class IProjection;

class IQuery;

class IRoi;

class IScript;

class ISession;

class IShare;

class ITypes;

class IUpdate;

class IRenderingSettings;

class IRepositoryInfo;

class ITimeline;

class Exporter;

class Gateway;

class JobHandle;

class RawFileStore;

class RawPixelsStore;

class RenderingEngine;

class Search;

class ThumbnailStore;

}

namespace grid
{

class ManagedRepository;

class ScriptProcessor;

class SharedResources;

class Table;

}

}

}

namespace omero
{

namespace api
{

class ServiceInterface;
bool operator==(const ServiceInterface&, const ServiceInterface&);
bool operator<(const ServiceInterface&, const ServiceInterface&);

class StatefulServiceInterface;
bool operator==(const StatefulServiceInterface&, const StatefulServiceInterface&);
bool operator<(const StatefulServiceInterface&, const StatefulServiceInterface&);

class IAdmin;
bool operator==(const IAdmin&, const IAdmin&);
bool operator<(const IAdmin&, const IAdmin&);

class IConfig;
bool operator==(const IConfig&, const IConfig&);
bool operator<(const IConfig&, const IConfig&);

class IContainer;
bool operator==(const IContainer&, const IContainer&);
bool operator<(const IContainer&, const IContainer&);

class IDelete;
bool operator==(const IDelete&, const IDelete&);
bool operator<(const IDelete&, const IDelete&);

class ILdap;
bool operator==(const ILdap&, const ILdap&);
bool operator<(const ILdap&, const ILdap&);

class IMetadata;
bool operator==(const IMetadata&, const IMetadata&);
bool operator<(const IMetadata&, const IMetadata&);

class IPixels;
bool operator==(const IPixels&, const IPixels&);
bool operator<(const IPixels&, const IPixels&);

class IProjection;
bool operator==(const IProjection&, const IProjection&);
bool operator<(const IProjection&, const IProjection&);

class IQuery;
bool operator==(const IQuery&, const IQuery&);
bool operator<(const IQuery&, const IQuery&);

class IRoi;
bool operator==(const IRoi&, const IRoi&);
bool operator<(const IRoi&, const IRoi&);

class IScript;
bool operator==(const IScript&, const IScript&);
bool operator<(const IScript&, const IScript&);

class ISession;
bool operator==(const ISession&, const ISession&);
bool operator<(const ISession&, const ISession&);

class IShare;
bool operator==(const IShare&, const IShare&);
bool operator<(const IShare&, const IShare&);

class ITypes;
bool operator==(const ITypes&, const ITypes&);
bool operator<(const ITypes&, const ITypes&);

class IUpdate;
bool operator==(const IUpdate&, const IUpdate&);
bool operator<(const IUpdate&, const IUpdate&);

class IRenderingSettings;
bool operator==(const IRenderingSettings&, const IRenderingSettings&);
bool operator<(const IRenderingSettings&, const IRenderingSettings&);

class IRepositoryInfo;
bool operator==(const IRepositoryInfo&, const IRepositoryInfo&);
bool operator<(const IRepositoryInfo&, const IRepositoryInfo&);

class ITimeline;
bool operator==(const ITimeline&, const ITimeline&);
bool operator<(const ITimeline&, const ITimeline&);

class Exporter;
bool operator==(const Exporter&, const Exporter&);
bool operator<(const Exporter&, const Exporter&);

class Gateway;
bool operator==(const Gateway&, const Gateway&);
bool operator<(const Gateway&, const Gateway&);

class JobHandle;
bool operator==(const JobHandle&, const JobHandle&);
bool operator<(const JobHandle&, const JobHandle&);

class RawFileStore;
bool operator==(const RawFileStore&, const RawFileStore&);
bool operator<(const RawFileStore&, const RawFileStore&);

class RawPixelsStore;
bool operator==(const RawPixelsStore&, const RawPixelsStore&);
bool operator<(const RawPixelsStore&, const RawPixelsStore&);

class RenderingEngine;
bool operator==(const RenderingEngine&, const RenderingEngine&);
bool operator<(const RenderingEngine&, const RenderingEngine&);

class Search;
bool operator==(const Search&, const Search&);
bool operator<(const Search&, const Search&);

class ThumbnailStore;
bool operator==(const ThumbnailStore&, const ThumbnailStore&);
bool operator<(const ThumbnailStore&, const ThumbnailStore&);

}

namespace grid
{

class ManagedRepository;
bool operator==(const ManagedRepository&, const ManagedRepository&);
bool operator<(const ManagedRepository&, const ManagedRepository&);

class ScriptProcessor;
bool operator==(const ScriptProcessor&, const ScriptProcessor&);
bool operator<(const ScriptProcessor&, const ScriptProcessor&);

class SharedResources;
bool operator==(const SharedResources&, const SharedResources&);
bool operator<(const SharedResources&, const SharedResources&);

class Table;
bool operator==(const Table&, const Table&);
bool operator<(const Table&, const Table&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::omero::api::ServiceInterface*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::ServiceInterface*);

::Ice::Object* upCast(::omero::api::StatefulServiceInterface*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::StatefulServiceInterface*);

::Ice::Object* upCast(::omero::api::IAdmin*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IAdmin*);

::Ice::Object* upCast(::omero::api::IConfig*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IConfig*);

::Ice::Object* upCast(::omero::api::IContainer*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IContainer*);

::Ice::Object* upCast(::omero::api::IDelete*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IDelete*);

::Ice::Object* upCast(::omero::api::ILdap*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::ILdap*);

::Ice::Object* upCast(::omero::api::IMetadata*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IMetadata*);

::Ice::Object* upCast(::omero::api::IPixels*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IPixels*);

::Ice::Object* upCast(::omero::api::IProjection*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IProjection*);

::Ice::Object* upCast(::omero::api::IQuery*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IQuery*);

::Ice::Object* upCast(::omero::api::IRoi*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IRoi*);

::Ice::Object* upCast(::omero::api::IScript*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IScript*);

::Ice::Object* upCast(::omero::api::ISession*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::ISession*);

::Ice::Object* upCast(::omero::api::IShare*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IShare*);

::Ice::Object* upCast(::omero::api::ITypes*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::ITypes*);

::Ice::Object* upCast(::omero::api::IUpdate*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IUpdate*);

::Ice::Object* upCast(::omero::api::IRenderingSettings*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IRenderingSettings*);

::Ice::Object* upCast(::omero::api::IRepositoryInfo*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::IRepositoryInfo*);

::Ice::Object* upCast(::omero::api::ITimeline*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::ITimeline*);

::Ice::Object* upCast(::omero::api::Exporter*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::Exporter*);

::Ice::Object* upCast(::omero::api::Gateway*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::Gateway*);

::Ice::Object* upCast(::omero::api::JobHandle*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::JobHandle*);

::Ice::Object* upCast(::omero::api::RawFileStore*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::RawFileStore*);

::Ice::Object* upCast(::omero::api::RawPixelsStore*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::RawPixelsStore*);

::Ice::Object* upCast(::omero::api::RenderingEngine*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::RenderingEngine*);

::Ice::Object* upCast(::omero::api::Search*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::Search*);

::Ice::Object* upCast(::omero::api::ThumbnailStore*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::api::ThumbnailStore*);

::Ice::Object* upCast(::omero::grid::ManagedRepository*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::ManagedRepository*);

::Ice::Object* upCast(::omero::grid::ScriptProcessor*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::ScriptProcessor*);

::Ice::Object* upCast(::omero::grid::SharedResources*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::SharedResources*);

::Ice::Object* upCast(::omero::grid::Table*);
::IceProxy::Ice::Object* upCast(::IceProxy::omero::grid::Table*);

}

namespace omero
{

namespace api
{

typedef ::IceInternal::Handle< ::omero::api::ServiceInterface> ServiceInterfacePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::ServiceInterface> ServiceInterfacePrx;

void __read(::IceInternal::BasicStream*, ServiceInterfacePrx&);
void __patch__ServiceInterfacePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::StatefulServiceInterface> StatefulServiceInterfacePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::StatefulServiceInterface> StatefulServiceInterfacePrx;

void __read(::IceInternal::BasicStream*, StatefulServiceInterfacePrx&);
void __patch__StatefulServiceInterfacePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::IAdmin> IAdminPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IAdmin> IAdminPrx;

void __read(::IceInternal::BasicStream*, IAdminPrx&);
void __patch__IAdminPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::IConfig> IConfigPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IConfig> IConfigPrx;

void __read(::IceInternal::BasicStream*, IConfigPrx&);
void __patch__IConfigPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::IContainer> IContainerPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IContainer> IContainerPrx;

void __read(::IceInternal::BasicStream*, IContainerPrx&);
void __patch__IContainerPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::IDelete> IDeletePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IDelete> IDeletePrx;

void __read(::IceInternal::BasicStream*, IDeletePrx&);
void __patch__IDeletePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::ILdap> ILdapPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::ILdap> ILdapPrx;

void __read(::IceInternal::BasicStream*, ILdapPrx&);
void __patch__ILdapPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::IMetadata> IMetadataPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IMetadata> IMetadataPrx;

void __read(::IceInternal::BasicStream*, IMetadataPrx&);
void __patch__IMetadataPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::IPixels> IPixelsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IPixels> IPixelsPrx;

void __read(::IceInternal::BasicStream*, IPixelsPrx&);
void __patch__IPixelsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::IProjection> IProjectionPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IProjection> IProjectionPrx;

void __read(::IceInternal::BasicStream*, IProjectionPrx&);
void __patch__IProjectionPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::IQuery> IQueryPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IQuery> IQueryPrx;

void __read(::IceInternal::BasicStream*, IQueryPrx&);
void __patch__IQueryPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::IRoi> IRoiPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IRoi> IRoiPrx;

void __read(::IceInternal::BasicStream*, IRoiPrx&);
void __patch__IRoiPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::IScript> IScriptPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IScript> IScriptPrx;

void __read(::IceInternal::BasicStream*, IScriptPrx&);
void __patch__IScriptPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::ISession> ISessionPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::ISession> ISessionPrx;

void __read(::IceInternal::BasicStream*, ISessionPrx&);
void __patch__ISessionPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::IShare> ISharePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IShare> ISharePrx;

void __read(::IceInternal::BasicStream*, ISharePrx&);
void __patch__ISharePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::ITypes> ITypesPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::ITypes> ITypesPrx;

void __read(::IceInternal::BasicStream*, ITypesPrx&);
void __patch__ITypesPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::IUpdate> IUpdatePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IUpdate> IUpdatePrx;

void __read(::IceInternal::BasicStream*, IUpdatePrx&);
void __patch__IUpdatePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::IRenderingSettings> IRenderingSettingsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IRenderingSettings> IRenderingSettingsPrx;

void __read(::IceInternal::BasicStream*, IRenderingSettingsPrx&);
void __patch__IRenderingSettingsPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::IRepositoryInfo> IRepositoryInfoPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::IRepositoryInfo> IRepositoryInfoPrx;

void __read(::IceInternal::BasicStream*, IRepositoryInfoPrx&);
void __patch__IRepositoryInfoPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::ITimeline> ITimelinePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::ITimeline> ITimelinePrx;

void __read(::IceInternal::BasicStream*, ITimelinePrx&);
void __patch__ITimelinePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::Exporter> ExporterPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::Exporter> ExporterPrx;

void __read(::IceInternal::BasicStream*, ExporterPrx&);
void __patch__ExporterPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::Gateway> GatewayPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::Gateway> GatewayPrx;

void __read(::IceInternal::BasicStream*, GatewayPrx&);
void __patch__GatewayPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::JobHandle> JobHandlePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::JobHandle> JobHandlePrx;

void __read(::IceInternal::BasicStream*, JobHandlePrx&);
void __patch__JobHandlePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::RawFileStore> RawFileStorePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::RawFileStore> RawFileStorePrx;

void __read(::IceInternal::BasicStream*, RawFileStorePrx&);
void __patch__RawFileStorePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::RawPixelsStore> RawPixelsStorePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::RawPixelsStore> RawPixelsStorePrx;

void __read(::IceInternal::BasicStream*, RawPixelsStorePrx&);
void __patch__RawPixelsStorePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::RenderingEngine> RenderingEnginePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::RenderingEngine> RenderingEnginePrx;

void __read(::IceInternal::BasicStream*, RenderingEnginePrx&);
void __patch__RenderingEnginePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::Search> SearchPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::Search> SearchPrx;

void __read(::IceInternal::BasicStream*, SearchPrx&);
void __patch__SearchPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::api::ThumbnailStore> ThumbnailStorePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::api::ThumbnailStore> ThumbnailStorePrx;

void __read(::IceInternal::BasicStream*, ThumbnailStorePrx&);
void __patch__ThumbnailStorePtr(void*, ::Ice::ObjectPtr&);

}

namespace grid
{

typedef ::IceInternal::Handle< ::omero::grid::ManagedRepository> ManagedRepositoryPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::ManagedRepository> ManagedRepositoryPrx;

void __read(::IceInternal::BasicStream*, ManagedRepositoryPrx&);
void __patch__ManagedRepositoryPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::ScriptProcessor> ScriptProcessorPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::ScriptProcessor> ScriptProcessorPrx;

void __read(::IceInternal::BasicStream*, ScriptProcessorPrx&);
void __patch__ScriptProcessorPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::SharedResources> SharedResourcesPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::SharedResources> SharedResourcesPrx;

void __read(::IceInternal::BasicStream*, SharedResourcesPrx&);
void __patch__SharedResourcesPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::omero::grid::Table> TablePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::omero::grid::Table> TablePrx;

void __read(::IceInternal::BasicStream*, TablePrx&);
void __patch__TablePtr(void*, ::Ice::ObjectPtr&);

}

}

namespace omero
{

namespace api
{

typedef ::std::vector< ::omero::api::ServiceInterfacePrx> ServiceList;
void __writeServiceList(::IceInternal::BasicStream*, const ::omero::api::ServiceInterfacePrx*, const ::omero::api::ServiceInterfacePrx*);
void __readServiceList(::IceInternal::BasicStream*, ServiceList&);

}

}

namespace omero
{

namespace api
{

class AMI_StatefulServiceInterface_passivate : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::StatefulServiceInterfacePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_StatefulServiceInterface_passivate> AMI_StatefulServiceInterface_passivatePtr;

class AMD_StatefulServiceInterface_passivate : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_StatefulServiceInterface_passivate> AMD_StatefulServiceInterface_passivatePtr;

class AMI_StatefulServiceInterface_activate : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::StatefulServiceInterfacePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_StatefulServiceInterface_activate> AMI_StatefulServiceInterface_activatePtr;

class AMD_StatefulServiceInterface_activate : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_StatefulServiceInterface_activate> AMD_StatefulServiceInterface_activatePtr;

class AMI_StatefulServiceInterface_close : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::StatefulServiceInterfacePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_StatefulServiceInterface_close> AMI_StatefulServiceInterface_closePtr;

class AMD_StatefulServiceInterface_close : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response() = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_StatefulServiceInterface_close> AMD_StatefulServiceInterface_closePtr;

class AMI_StatefulServiceInterface_getCurrentEventContext : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::omero::sys::EventContextPtr&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::omero::api::StatefulServiceInterfacePrx&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::omero::api::AMI_StatefulServiceInterface_getCurrentEventContext> AMI_StatefulServiceInterface_getCurrentEventContextPtr;

class AMD_StatefulServiceInterface_getCurrentEventContext : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(const ::omero::sys::EventContextPtr&) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::omero::api::AMD_StatefulServiceInterface_getCurrentEventContext> AMD_StatefulServiceInterface_getCurrentEventContextPtr;

}

}

namespace IceAsync
{

namespace omero
{

namespace api
{

class AMD_StatefulServiceInterface_passivate : public ::omero::api::AMD_StatefulServiceInterface_passivate, public ::IceInternal::IncomingAsync
{
public:

    AMD_StatefulServiceInterface_passivate(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_StatefulServiceInterface_activate : public ::omero::api::AMD_StatefulServiceInterface_activate, public ::IceInternal::IncomingAsync
{
public:

    AMD_StatefulServiceInterface_activate(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_StatefulServiceInterface_close : public ::omero::api::AMD_StatefulServiceInterface_close, public ::IceInternal::IncomingAsync
{
public:

    AMD_StatefulServiceInterface_close(::IceInternal::Incoming&);

    virtual void ice_response();
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_StatefulServiceInterface_getCurrentEventContext : public ::omero::api::AMD_StatefulServiceInterface_getCurrentEventContext, public ::IceInternal::IncomingAsync
{
public:

    AMD_StatefulServiceInterface_getCurrentEventContext(::IceInternal::Incoming&);

    virtual void ice_response(const ::omero::sys::EventContextPtr&);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

}

}

}

namespace IceProxy
{

namespace omero
{

namespace api
{

class ServiceInterface : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<ServiceInterface> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceInterface*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ServiceInterface*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceInterface> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceInterface*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ServiceInterface*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceInterface> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceInterface*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ServiceInterface*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceInterface> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceInterface*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ServiceInterface*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceInterface> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceInterface*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ServiceInterface*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceInterface> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceInterface*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ServiceInterface*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceInterface> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceInterface*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ServiceInterface*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceInterface> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceInterface*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ServiceInterface*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceInterface> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceInterface*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ServiceInterface*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceInterface> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceInterface*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ServiceInterface*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceInterface> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceInterface*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ServiceInterface*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceInterface> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceInterface*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ServiceInterface*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceInterface> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceInterface*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ServiceInterface*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceInterface> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceInterface*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ServiceInterface*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceInterface> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceInterface*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ServiceInterface*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceInterface> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceInterface*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ServiceInterface*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceInterface> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceInterface*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ServiceInterface*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceInterface> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceInterface*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ServiceInterface*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ServiceInterface> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ServiceInterface*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ServiceInterface*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class StatefulServiceInterface : virtual public ::IceProxy::omero::api::ServiceInterface
{
public:

    void passivate()
    {
        passivate(0);
    }
    void passivate(const ::Ice::Context& __ctx)
    {
        passivate(&__ctx);
    }
    
private:

    void passivate(const ::Ice::Context*);
    
public:
    bool passivate_async(const ::omero::api::AMI_StatefulServiceInterface_passivatePtr&);
    bool passivate_async(const ::omero::api::AMI_StatefulServiceInterface_passivatePtr&, const ::Ice::Context&);

    void activate()
    {
        activate(0);
    }
    void activate(const ::Ice::Context& __ctx)
    {
        activate(&__ctx);
    }
    
private:

    void activate(const ::Ice::Context*);
    
public:
    bool activate_async(const ::omero::api::AMI_StatefulServiceInterface_activatePtr&);
    bool activate_async(const ::omero::api::AMI_StatefulServiceInterface_activatePtr&, const ::Ice::Context&);

    void close()
    {
        close(0);
    }
    void close(const ::Ice::Context& __ctx)
    {
        close(&__ctx);
    }
    
private:

    void close(const ::Ice::Context*);
    
public:
    bool close_async(const ::omero::api::AMI_StatefulServiceInterface_closePtr&);
    bool close_async(const ::omero::api::AMI_StatefulServiceInterface_closePtr&, const ::Ice::Context&);

    ::omero::sys::EventContextPtr getCurrentEventContext()
    {
        return getCurrentEventContext(0);
    }
    ::omero::sys::EventContextPtr getCurrentEventContext(const ::Ice::Context& __ctx)
    {
        return getCurrentEventContext(&__ctx);
    }
    
private:

    ::omero::sys::EventContextPtr getCurrentEventContext(const ::Ice::Context*);
    
public:
    bool getCurrentEventContext_async(const ::omero::api::AMI_StatefulServiceInterface_getCurrentEventContextPtr&);
    bool getCurrentEventContext_async(const ::omero::api::AMI_StatefulServiceInterface_getCurrentEventContextPtr&, const ::Ice::Context&);
    
    ::IceInternal::ProxyHandle<StatefulServiceInterface> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatefulServiceInterface*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<StatefulServiceInterface*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatefulServiceInterface> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatefulServiceInterface*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<StatefulServiceInterface*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatefulServiceInterface> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatefulServiceInterface*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<StatefulServiceInterface*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatefulServiceInterface> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatefulServiceInterface*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<StatefulServiceInterface*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatefulServiceInterface> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatefulServiceInterface*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<StatefulServiceInterface*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatefulServiceInterface> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatefulServiceInterface*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<StatefulServiceInterface*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatefulServiceInterface> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatefulServiceInterface*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<StatefulServiceInterface*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatefulServiceInterface> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatefulServiceInterface*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<StatefulServiceInterface*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatefulServiceInterface> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatefulServiceInterface*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<StatefulServiceInterface*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatefulServiceInterface> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatefulServiceInterface*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<StatefulServiceInterface*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatefulServiceInterface> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatefulServiceInterface*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<StatefulServiceInterface*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatefulServiceInterface> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatefulServiceInterface*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<StatefulServiceInterface*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatefulServiceInterface> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatefulServiceInterface*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<StatefulServiceInterface*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatefulServiceInterface> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatefulServiceInterface*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<StatefulServiceInterface*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatefulServiceInterface> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatefulServiceInterface*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<StatefulServiceInterface*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatefulServiceInterface> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatefulServiceInterface*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<StatefulServiceInterface*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatefulServiceInterface> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatefulServiceInterface*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<StatefulServiceInterface*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatefulServiceInterface> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatefulServiceInterface*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<StatefulServiceInterface*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<StatefulServiceInterface> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<StatefulServiceInterface*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<StatefulServiceInterface*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace api
{

class ServiceInterface : virtual public ::IceDelegate::Ice::Object
{
public:
};

class StatefulServiceInterface : virtual public ::IceDelegate::omero::api::ServiceInterface
{
public:

    virtual void passivate(const ::Ice::Context*) = 0;

    virtual void activate(const ::Ice::Context*) = 0;

    virtual void close(const ::Ice::Context*) = 0;

    virtual ::omero::sys::EventContextPtr getCurrentEventContext(const ::Ice::Context*) = 0;
};

}

}

}

namespace IceDelegateM
{

namespace omero
{

namespace api
{

class ServiceInterface : virtual public ::IceDelegate::omero::api::ServiceInterface,
                         virtual public ::IceDelegateM::Ice::Object
{
public:
};

class StatefulServiceInterface : virtual public ::IceDelegate::omero::api::StatefulServiceInterface,
                                 virtual public ::IceDelegateM::omero::api::ServiceInterface
{
public:

    virtual void passivate(const ::Ice::Context*);

    virtual void activate(const ::Ice::Context*);

    virtual void close(const ::Ice::Context*);

    virtual ::omero::sys::EventContextPtr getCurrentEventContext(const ::Ice::Context*);
};

}

}

}

namespace IceDelegateD
{

namespace omero
{

namespace api
{

class ServiceInterface : virtual public ::IceDelegate::omero::api::ServiceInterface,
                         virtual public ::IceDelegateD::Ice::Object
{
public:
};

class StatefulServiceInterface : virtual public ::IceDelegate::omero::api::StatefulServiceInterface,
                                 virtual public ::IceDelegateD::omero::api::ServiceInterface
{
public:

    virtual void passivate(const ::Ice::Context*);

    virtual void activate(const ::Ice::Context*);

    virtual void close(const ::Ice::Context*);

    virtual ::omero::sys::EventContextPtr getCurrentEventContext(const ::Ice::Context*);
};

}

}

}

namespace omero
{

namespace api
{

class ServiceInterface : virtual public ::Ice::Object
{
public:

    typedef ServiceInterfacePrx ProxyType;
    typedef ServiceInterfacePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class StatefulServiceInterface : virtual public ::omero::api::ServiceInterface
{
public:

    typedef StatefulServiceInterfacePrx ProxyType;
    typedef StatefulServiceInterfacePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void passivate_async(const ::omero::api::AMD_StatefulServiceInterface_passivatePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___passivate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void activate_async(const ::omero::api::AMD_StatefulServiceInterface_activatePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___activate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void close_async(const ::omero::api::AMD_StatefulServiceInterface_closePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___close(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getCurrentEventContext_async(const ::omero::api::AMD_StatefulServiceInterface_getCurrentEventContextPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getCurrentEventContext(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
