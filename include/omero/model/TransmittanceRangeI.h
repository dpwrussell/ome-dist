   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.h for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef TRANSMITTANCERANGEI_H
#define TRANSMITTANCERANGEI_H
#include <omero/RTypes.h>
#include <omero/ClientErrors.h>
#include <omero/model/IObject.h>
#include <omero/model/DetailsI.h>
#include <omero/model/TransmittanceRange.h>
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
    class OMERO_API TransmittanceRangeI;
  }
}
#if ICE_INT_VERSION / 100 >= 304
namespace IceInternal {
  OMERO_API ::Ice::Object* upCast(::omero::model::TransmittanceRangeI*);
}
#endif
namespace omero {
  namespace model {
#if ICE_INT_VERSION / 100 >= 304
  typedef IceInternal::Handle<TransmittanceRangeI> TransmittanceRangeIPtr;
#else
  typedef IceUtil::Handle<TransmittanceRangeI> TransmittanceRangeIPtr;
#endif
    class OMERO_API TransmittanceRangeI : virtual public TransmittanceRange {
   public:
      static const std::string CUTIN;
      static const std::string CUTOUT;
      static const std::string CUTINTOLERANCE;
      static const std::string CUTOUTTOLERANCE;
      static const std::string TRANSMITTANCE;
      static const std::string DETAILS;
    protected:
      void errorIfUnloaded();
      void throwNullCollectionException(std::string propertyName);
      virtual void toggleCollectionsLoaded(bool load);
      virtual ~TransmittanceRangeI();
    public:
      TransmittanceRangeI();
      TransmittanceRangeI(omero::RLongPtr idPtr, bool isLoaded = false);
      TransmittanceRangeI(Ice::Long id, bool isLoaded = false);
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
      //  TransmittanceRange.cutIn
      //
      virtual void unloadCutIn();
      virtual omero::RIntPtr getCutIn(const Ice::Current& current = Ice::Current());
      virtual void setCutIn(const omero::RIntPtr& _cutIn, const Ice::Current& current = Ice::Current());

      //
      //  TransmittanceRange.cutOut
      //
      virtual void unloadCutOut();
      virtual omero::RIntPtr getCutOut(const Ice::Current& current = Ice::Current());
      virtual void setCutOut(const omero::RIntPtr& _cutOut, const Ice::Current& current = Ice::Current());

      //
      //  TransmittanceRange.cutInTolerance
      //
      virtual void unloadCutInTolerance();
      virtual omero::RIntPtr getCutInTolerance(const Ice::Current& current = Ice::Current());
      virtual void setCutInTolerance(const omero::RIntPtr& _cutInTolerance, const Ice::Current& current = Ice::Current());

      //
      //  TransmittanceRange.cutOutTolerance
      //
      virtual void unloadCutOutTolerance();
      virtual omero::RIntPtr getCutOutTolerance(const Ice::Current& current = Ice::Current());
      virtual void setCutOutTolerance(const omero::RIntPtr& _cutOutTolerance, const Ice::Current& current = Ice::Current());

      //
      //  TransmittanceRange.transmittance
      //
      virtual void unloadTransmittance();
      virtual omero::RDoublePtr getTransmittance(const Ice::Current& current = Ice::Current());
      virtual void setTransmittance(const omero::RDoublePtr& _transmittance, const Ice::Current& current = Ice::Current());
 };

}}
#endif // TRANSMITTANCERANGEI_H
