   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.h for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef OBJECTIVEI_H
#define OBJECTIVEI_H
#include <omero/RTypes.h>
#include <omero/ClientErrors.h>
#include <omero/model/IObject.h>
#include <omero/model/DetailsI.h>
#include <omero/model/Objective.h>
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
    class OMERO_API ObjectiveI;
  }
}
#if ICE_INT_VERSION / 100 >= 304
namespace IceInternal {
  OMERO_API ::Ice::Object* upCast(::omero::model::ObjectiveI*);
}
#endif
namespace omero {
  namespace model {
#if ICE_INT_VERSION / 100 >= 304
  typedef IceInternal::Handle<ObjectiveI> ObjectiveIPtr;
#else
  typedef IceUtil::Handle<ObjectiveI> ObjectiveIPtr;
#endif
    class OMERO_API ObjectiveI : virtual public Objective {
   public:
      static const std::string MANUFACTURER;
      static const std::string MODEL;
      static const std::string LOTNUMBER;
      static const std::string SERIALNUMBER;
      static const std::string NOMINALMAGNIFICATION;
      static const std::string CALIBRATEDMAGNIFICATION;
      static const std::string LENSNA;
      static const std::string IMMERSION;
      static const std::string CORRECTION;
      static const std::string WORKINGDISTANCE;
      static const std::string IRIS;
      static const std::string INSTRUMENT;
      static const std::string DETAILS;
    protected:
      void errorIfUnloaded();
      void throwNullCollectionException(std::string propertyName);
      virtual void toggleCollectionsLoaded(bool load);
      virtual ~ObjectiveI();
    public:
      ObjectiveI();
      ObjectiveI(omero::RLongPtr idPtr, bool isLoaded = false);
      ObjectiveI(Ice::Long id, bool isLoaded = false);
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
      //  Objective.manufacturer
      //
      virtual void unloadManufacturer();
      virtual omero::RStringPtr getManufacturer(const Ice::Current& current = Ice::Current());
      virtual void setManufacturer(const omero::RStringPtr& _manufacturer, const Ice::Current& current = Ice::Current());

      //
      //  Objective.model
      //
      virtual void unloadModel();
      virtual omero::RStringPtr getModel(const Ice::Current& current = Ice::Current());
      virtual void setModel(const omero::RStringPtr& _model, const Ice::Current& current = Ice::Current());

      //
      //  Objective.lotNumber
      //
      virtual void unloadLotNumber();
      virtual omero::RStringPtr getLotNumber(const Ice::Current& current = Ice::Current());
      virtual void setLotNumber(const omero::RStringPtr& _lotNumber, const Ice::Current& current = Ice::Current());

      //
      //  Objective.serialNumber
      //
      virtual void unloadSerialNumber();
      virtual omero::RStringPtr getSerialNumber(const Ice::Current& current = Ice::Current());
      virtual void setSerialNumber(const omero::RStringPtr& _serialNumber, const Ice::Current& current = Ice::Current());

      //
      //  Objective.nominalMagnification
      //
      virtual void unloadNominalMagnification();
      virtual omero::RDoublePtr getNominalMagnification(const Ice::Current& current = Ice::Current());
      virtual void setNominalMagnification(const omero::RDoublePtr& _nominalMagnification, const Ice::Current& current = Ice::Current());

      //
      //  Objective.calibratedMagnification
      //
      virtual void unloadCalibratedMagnification();
      virtual omero::RDoublePtr getCalibratedMagnification(const Ice::Current& current = Ice::Current());
      virtual void setCalibratedMagnification(const omero::RDoublePtr& _calibratedMagnification, const Ice::Current& current = Ice::Current());

      //
      //  Objective.lensNA
      //
      virtual void unloadLensNA();
      virtual omero::RDoublePtr getLensNA(const Ice::Current& current = Ice::Current());
      virtual void setLensNA(const omero::RDoublePtr& _lensNA, const Ice::Current& current = Ice::Current());

      //
      //  Objective.immersion
      //
      virtual void unloadImmersion();
      virtual omero::model::ImmersionPtr getImmersion(const Ice::Current& current = Ice::Current());
      virtual void setImmersion(const omero::model::ImmersionPtr& _immersion, const Ice::Current& current = Ice::Current());

      //
      //  Objective.correction
      //
      virtual void unloadCorrection();
      virtual omero::model::CorrectionPtr getCorrection(const Ice::Current& current = Ice::Current());
      virtual void setCorrection(const omero::model::CorrectionPtr& _correction, const Ice::Current& current = Ice::Current());

      //
      //  Objective.workingDistance
      //
      virtual void unloadWorkingDistance();
      virtual omero::RDoublePtr getWorkingDistance(const Ice::Current& current = Ice::Current());
      virtual void setWorkingDistance(const omero::RDoublePtr& _workingDistance, const Ice::Current& current = Ice::Current());

      //
      //  Objective.iris
      //
      virtual void unloadIris();
      virtual omero::RBoolPtr getIris(const Ice::Current& current = Ice::Current());
      virtual void setIris(const omero::RBoolPtr& _iris, const Ice::Current& current = Ice::Current());

      //
      //  Objective.instrument
      //
      virtual void unloadInstrument();
      virtual omero::model::InstrumentPtr getInstrument(const Ice::Current& current = Ice::Current());
      virtual void setInstrument(const omero::model::InstrumentPtr& _instrument, const Ice::Current& current = Ice::Current());
 };

}}
#endif // OBJECTIVEI_H