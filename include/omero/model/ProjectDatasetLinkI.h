   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.h for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef PROJECTDATASETLINKI_H
#define PROJECTDATASETLINKI_H
#include <omero/RTypes.h>
#include <omero/ClientErrors.h>
#include <omero/model/IObject.h>
#include <omero/model/DetailsI.h>
#include <omero/model/ProjectDatasetLink.h>
#include <omero/templates.h>
#include <IceUtil/Config.h>
#if ICE_INT_VERSION / 100 >= 304
#   include <Ice/Handle.h>
#else
#   include <IceUtil/Handle.h>
#endif
#ifndef OMERO_API
#   ifdef OMERO_API_EXPORTS
#       define OMERO_API ICE_DECLSPEC_EXPORT
#   else
#       define OMERO_API ICE_DECLSPEC_IMPORT
#   endif
#endif
namespace omero {
  namespace model {
    class OMERO_API ProjectDatasetLinkI;
  }
}
#if ICE_INT_VERSION / 100 >= 304
namespace IceInternal {
  OMERO_API ::Ice::Object* upCast(::omero::model::ProjectDatasetLinkI*);
}
#endif
namespace omero {
  namespace model {
#if ICE_INT_VERSION / 100 >= 304
  typedef IceInternal::Handle<ProjectDatasetLinkI> ProjectDatasetLinkIPtr;
#else
  typedef IceUtil::Handle<ProjectDatasetLinkI> ProjectDatasetLinkIPtr;
#endif
    class OMERO_API ProjectDatasetLinkI : virtual public ProjectDatasetLink {
   public:
      static const std::string PARENT;
      static const std::string CHILD;
      static const std::string DETAILS;
    protected:
      void errorIfUnloaded();
      void throwNullCollectionException(std::string propertyName);
      virtual void toggleCollectionsLoaded(bool load);
      virtual ~ProjectDatasetLinkI();
    public:
      ProjectDatasetLinkI();
      ProjectDatasetLinkI(omero::RLongPtr idPtr, bool isLoaded = false);
      ProjectDatasetLinkI(Ice::Long id, bool isLoaded = false);
      virtual void unload(const Ice::Current& current = Ice::Current());
      virtual bool isLoaded(const Ice::Current& current = Ice::Current());
      virtual void unloadCollections(const Ice::Current& current = Ice::Current());
      virtual bool isGlobal(const Ice::Current& current = Ice::Current());
      virtual bool isMutable(const Ice::Current& current = Ice::Current());
      virtual bool isAnnotated(const Ice::Current& current = Ice::Current());
      virtual bool isLink(const Ice::Current& current = Ice::Current());
      virtual omero::model::IObjectPtr shallowCopy(const Ice::Current& current = Ice::Current());
      virtual omero::model::IObjectPtr proxy(const Ice::Current& current = Ice::Current());
      virtual omero::model::DetailsPtr getDetails(const Ice::Current& current = Ice::Current());
      virtual void unloadDetails(const Ice::Current& current = Ice::Current());
      virtual omero::RLongPtr getId(const Ice::Current& current = Ice::Current());
      virtual void setId( const omero::RLongPtr& id, const Ice::Current& current = Ice::Current() );
      virtual omero::RIntPtr getVersion(const Ice::Current& current = Ice::Current());
      virtual void setVersion( const omero::RIntPtr& version, const Ice::Current& current = Ice::Current() );

      //
      //  ProjectDatasetLink.parent
      //
      virtual void unloadParent();
      virtual omero::model::ProjectPtr getParent(const Ice::Current& current = Ice::Current());
      virtual void setParent(const omero::model::ProjectPtr& _parent, const Ice::Current& current = Ice::Current());

      //
      //  ProjectDatasetLink.child
      //
      virtual void unloadChild();
      virtual omero::model::DatasetPtr getChild(const Ice::Current& current = Ice::Current());
      virtual void setChild(const omero::model::DatasetPtr& _child, const Ice::Current& current = Ice::Current());
      virtual void link(const ProjectPtr& parent, const DatasetPtr& child, const Ice::Current& current = Ice::Current());
 };

}}
#endif // PROJECTDATASETLINKI_H
