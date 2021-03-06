   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.h for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef MICROSCOPEI_H
#define MICROSCOPEI_H
#include <omero/RTypes.h>
#include <omero/ClientErrors.h>
#include <omero/model/IObject.h>
#include <omero/model/DetailsI.h>
#include <omero/model/Microscope.h>
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
    class OMERO_API MicroscopeI;
  }
}
#if ICE_INT_VERSION / 100 >= 304
namespace IceInternal {
  OMERO_API ::Ice::Object* upCast(::omero::model::MicroscopeI*);
}
#endif
namespace omero {
  namespace model {
#if ICE_INT_VERSION / 100 >= 304
  typedef IceInternal::Handle<MicroscopeI> MicroscopeIPtr;
#else
  typedef IceUtil::Handle<MicroscopeI> MicroscopeIPtr;
#endif
    class OMERO_API MicroscopeI : virtual public Microscope {
   public:
      static const std::string MANUFACTURER;
      static const std::string MODEL;
      static const std::string LOTNUMBER;
      static const std::string SERIALNUMBER;
      static const std::string TYPE;
      static const std::string DETAILS;
    protected:
      void errorIfUnloaded();
      void throwNullCollectionException(std::string propertyName);
      virtual void toggleCollectionsLoaded(bool load);
      virtual ~MicroscopeI();
    public:
      MicroscopeI();
      MicroscopeI(omero::RLongPtr idPtr, bool isLoaded = false);
      MicroscopeI(Ice::Long id, bool isLoaded = false);
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
      //  Microscope.manufacturer
      //
      virtual void unloadManufacturer();
      virtual omero::RStringPtr getManufacturer(const Ice::Current& current = Ice::Current());
      virtual void setManufacturer(const omero::RStringPtr& _manufacturer, const Ice::Current& current = Ice::Current());

      //
      //  Microscope.model
      //
      virtual void unloadModel();
      virtual omero::RStringPtr getModel(const Ice::Current& current = Ice::Current());
      virtual void setModel(const omero::RStringPtr& _model, const Ice::Current& current = Ice::Current());

      //
      //  Microscope.lotNumber
      //
      virtual void unloadLotNumber();
      virtual omero::RStringPtr getLotNumber(const Ice::Current& current = Ice::Current());
      virtual void setLotNumber(const omero::RStringPtr& _lotNumber, const Ice::Current& current = Ice::Current());

      //
      //  Microscope.serialNumber
      //
      virtual void unloadSerialNumber();
      virtual omero::RStringPtr getSerialNumber(const Ice::Current& current = Ice::Current());
      virtual void setSerialNumber(const omero::RStringPtr& _serialNumber, const Ice::Current& current = Ice::Current());

      //
      //  Microscope.type
      //
      virtual void unloadType();
      virtual omero::model::MicroscopeTypePtr getType(const Ice::Current& current = Ice::Current());
      virtual void setType(const omero::model::MicroscopeTypePtr& _type, const Ice::Current& current = Ice::Current());
 };

}}
#endif // MICROSCOPEI_H
