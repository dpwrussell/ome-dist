   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.h for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef OTFI_H
#define OTFI_H
#include <omero/RTypes.h>
#include <omero/ClientErrors.h>
#include <omero/model/IObject.h>
#include <omero/model/DetailsI.h>
#include <omero/model/OTF.h>
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
    class OMERO_API OTFI;
  }
}
#if ICE_INT_VERSION / 100 >= 304
namespace IceInternal {
  OMERO_API ::Ice::Object* upCast(::omero::model::OTFI*);
}
#endif
namespace omero {
  namespace model {
#if ICE_INT_VERSION / 100 >= 304
  typedef IceInternal::Handle<OTFI> OTFIPtr;
#else
  typedef IceUtil::Handle<OTFI> OTFIPtr;
#endif
    class OMERO_API OTFI : virtual public OTF {
   public:
      static const std::string SIZEX;
      static const std::string SIZEY;
      static const std::string OPTICALAXISAVERAGED;
      static const std::string PIXELSTYPE;
      static const std::string PATH;
      static const std::string FILTERSET;
      static const std::string OBJECTIVE;
      static const std::string INSTRUMENT;
      static const std::string DETAILS;
    protected:
      void errorIfUnloaded();
      void throwNullCollectionException(std::string propertyName);
      virtual void toggleCollectionsLoaded(bool load);
      virtual ~OTFI();
    public:
      OTFI();
      OTFI(omero::RLongPtr idPtr, bool isLoaded = false);
      OTFI(Ice::Long id, bool isLoaded = false);
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
      //  OTF.sizeX
      //
      virtual void unloadSizeX();
      virtual omero::RIntPtr getSizeX(const Ice::Current& current = Ice::Current());
      virtual void setSizeX(const omero::RIntPtr& _sizeX, const Ice::Current& current = Ice::Current());

      //
      //  OTF.sizeY
      //
      virtual void unloadSizeY();
      virtual omero::RIntPtr getSizeY(const Ice::Current& current = Ice::Current());
      virtual void setSizeY(const omero::RIntPtr& _sizeY, const Ice::Current& current = Ice::Current());

      //
      //  OTF.opticalAxisAveraged
      //
      virtual void unloadOpticalAxisAveraged();
      virtual omero::RBoolPtr getOpticalAxisAveraged(const Ice::Current& current = Ice::Current());
      virtual void setOpticalAxisAveraged(const omero::RBoolPtr& _opticalAxisAveraged, const Ice::Current& current = Ice::Current());

      //
      //  OTF.pixelsType
      //
      virtual void unloadPixelsType();
      virtual omero::model::PixelsTypePtr getPixelsType(const Ice::Current& current = Ice::Current());
      virtual void setPixelsType(const omero::model::PixelsTypePtr& _pixelsType, const Ice::Current& current = Ice::Current());

      //
      //  OTF.path
      //
      virtual void unloadPath();
      virtual omero::RStringPtr getPath(const Ice::Current& current = Ice::Current());
      virtual void setPath(const omero::RStringPtr& _path, const Ice::Current& current = Ice::Current());

      //
      //  OTF.filterSet
      //
      virtual void unloadFilterSet();
      virtual omero::model::FilterSetPtr getFilterSet(const Ice::Current& current = Ice::Current());
      virtual void setFilterSet(const omero::model::FilterSetPtr& _filterSet, const Ice::Current& current = Ice::Current());

      //
      //  OTF.objective
      //
      virtual void unloadObjective();
      virtual omero::model::ObjectivePtr getObjective(const Ice::Current& current = Ice::Current());
      virtual void setObjective(const omero::model::ObjectivePtr& _objective, const Ice::Current& current = Ice::Current());

      //
      //  OTF.instrument
      //
      virtual void unloadInstrument();
      virtual omero::model::InstrumentPtr getInstrument(const Ice::Current& current = Ice::Current());
      virtual void setInstrument(const omero::model::InstrumentPtr& _instrument, const Ice::Current& current = Ice::Current());
 };

}}
#endif // OTFI_H
