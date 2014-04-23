   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.h for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef MICROBEAMMANIPULATIONI_H
#define MICROBEAMMANIPULATIONI_H
#include <omero/RTypes.h>
#include <omero/ClientErrors.h>
#include <omero/model/IObject.h>
#include <omero/model/DetailsI.h>
#include <omero/model/MicrobeamManipulation.h>
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
    class OMERO_API MicrobeamManipulationI;
  }
}
#if ICE_INT_VERSION / 100 >= 304
namespace IceInternal {
  OMERO_API ::Ice::Object* upCast(::omero::model::MicrobeamManipulationI*);
}
#endif
namespace omero {
  namespace model {
#if ICE_INT_VERSION / 100 >= 304
  typedef IceInternal::Handle<MicrobeamManipulationI> MicrobeamManipulationIPtr;
#else
  typedef IceUtil::Handle<MicrobeamManipulationI> MicrobeamManipulationIPtr;
#endif
    class OMERO_API MicrobeamManipulationI : virtual public MicrobeamManipulation {
   public:
      static const std::string TYPE;
      static const std::string LIGHTSOURCESETTINGS;
      static const std::string EXPERIMENT;
      static const std::string DESCRIPTION;
      static const std::string DETAILS;
    protected:
      void errorIfUnloaded();
      void throwNullCollectionException(std::string propertyName);
      virtual void toggleCollectionsLoaded(bool load);
      virtual ~MicrobeamManipulationI();
    public:
      MicrobeamManipulationI();
      MicrobeamManipulationI(omero::RLongPtr idPtr, bool isLoaded = false);
      MicrobeamManipulationI(Ice::Long id, bool isLoaded = false);
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
      //  MicrobeamManipulation.type
      //
      virtual void unloadType();
      virtual omero::model::MicrobeamManipulationTypePtr getType(const Ice::Current& current = Ice::Current());
      virtual void setType(const omero::model::MicrobeamManipulationTypePtr& _type, const Ice::Current& current = Ice::Current());

      //
      //  MicrobeamManipulation.lightSourceSettings
      //
      virtual void unloadLightSourceSettings(const Ice::Current& current = Ice::Current());
    protected:
      virtual MicrobeamManipulationLightSourceSettingsSeq getLightSourceSettings(const Ice::Current& current = Ice::Current());
      virtual void setLightSourceSettings(const MicrobeamManipulationLightSourceSettingsSeq& _lightSourceSettings, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isLightSourceSettingsLoaded();
      virtual Ice::Int sizeOfLightSourceSettings(const Ice::Current& current = Ice::Current());
      virtual MicrobeamManipulationLightSourceSettingsSeq copyLightSourceSettings(const Ice::Current& current = Ice::Current());
      virtual MicrobeamManipulationLightSourceSettingsSeq::iterator beginLightSourceSettings();
      virtual MicrobeamManipulationLightSourceSettingsSeq::iterator endLightSourceSettings();
      virtual void addLightSettings(const LightSettingsPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllLightSettingsSet(const MicrobeamManipulationLightSourceSettingsSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removeLightSettings(const LightSettingsPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllLightSettingsSet(const MicrobeamManipulationLightSourceSettingsSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearLightSourceSettings(const Ice::Current& current = Ice::Current());
      virtual void reloadLightSourceSettings(const MicrobeamManipulationPtr& toCopy, const Ice::Current& current = Ice::Current());

      //
      //  MicrobeamManipulation.experiment
      //
      virtual void unloadExperiment();
      virtual omero::model::ExperimentPtr getExperiment(const Ice::Current& current = Ice::Current());
      virtual void setExperiment(const omero::model::ExperimentPtr& _experiment, const Ice::Current& current = Ice::Current());

      //
      //  MicrobeamManipulation.description
      //
      virtual void unloadDescription();
      virtual omero::RStringPtr getDescription(const Ice::Current& current = Ice::Current());
      virtual void setDescription(const omero::RStringPtr& _description, const Ice::Current& current = Ice::Current());
 };

}}
#endif // MICROBEAMMANIPULATIONI_H
