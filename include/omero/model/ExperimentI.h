   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.h for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef EXPERIMENTI_H
#define EXPERIMENTI_H
#include <omero/RTypes.h>
#include <omero/ClientErrors.h>
#include <omero/model/IObject.h>
#include <omero/model/DetailsI.h>
#include <omero/model/Experiment.h>
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
    class OMERO_API ExperimentI;
  }
}
#if ICE_INT_VERSION / 100 >= 304
namespace IceInternal {
  OMERO_API ::Ice::Object* upCast(::omero::model::ExperimentI*);
}
#endif
namespace omero {
  namespace model {
#if ICE_INT_VERSION / 100 >= 304
  typedef IceInternal::Handle<ExperimentI> ExperimentIPtr;
#else
  typedef IceUtil::Handle<ExperimentI> ExperimentIPtr;
#endif
    class OMERO_API ExperimentI : virtual public Experiment {
   public:
      static const std::string TYPE;
      static const std::string MICROBEAMMANIPULATION;
      static const std::string DESCRIPTION;
      static const std::string DETAILS;
    protected:
      void errorIfUnloaded();
      void throwNullCollectionException(std::string propertyName);
      virtual void toggleCollectionsLoaded(bool load);
      virtual ~ExperimentI();
    public:
      ExperimentI();
      ExperimentI(omero::RLongPtr idPtr, bool isLoaded = false);
      ExperimentI(Ice::Long id, bool isLoaded = false);
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
      //  Experiment.type
      //
      virtual void unloadType();
      virtual omero::model::ExperimentTypePtr getType(const Ice::Current& current = Ice::Current());
      virtual void setType(const omero::model::ExperimentTypePtr& _type, const Ice::Current& current = Ice::Current());

      //
      //  Experiment.microbeamManipulation
      //
      virtual void unloadMicrobeamManipulation(const Ice::Current& current = Ice::Current());
    protected:
      virtual ExperimentMicrobeamManipulationSeq getMicrobeamManipulation(const Ice::Current& current = Ice::Current());
      virtual void setMicrobeamManipulation(const ExperimentMicrobeamManipulationSeq& _microbeamManipulation, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isMicrobeamManipulationLoaded();
      virtual Ice::Int sizeOfMicrobeamManipulation(const Ice::Current& current = Ice::Current());
      virtual ExperimentMicrobeamManipulationSeq copyMicrobeamManipulation(const Ice::Current& current = Ice::Current());
      virtual ExperimentMicrobeamManipulationSeq::iterator beginMicrobeamManipulation();
      virtual ExperimentMicrobeamManipulationSeq::iterator endMicrobeamManipulation();
      virtual void addMicrobeamManipulation(const MicrobeamManipulationPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllMicrobeamManipulationSet(const ExperimentMicrobeamManipulationSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removeMicrobeamManipulation(const MicrobeamManipulationPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllMicrobeamManipulationSet(const ExperimentMicrobeamManipulationSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearMicrobeamManipulation(const Ice::Current& current = Ice::Current());
      virtual void reloadMicrobeamManipulation(const ExperimentPtr& toCopy, const Ice::Current& current = Ice::Current());

      //
      //  Experiment.description
      //
      virtual void unloadDescription();
      virtual omero::RStringPtr getDescription(const Ice::Current& current = Ice::Current());
      virtual void setDescription(const omero::RStringPtr& _description, const Ice::Current& current = Ice::Current());
 };

}}
#endif // EXPERIMENTI_H
