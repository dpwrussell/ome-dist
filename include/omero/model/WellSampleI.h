   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.h for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef WELLSAMPLEI_H
#define WELLSAMPLEI_H
#include <omero/RTypes.h>
#include <omero/ClientErrors.h>
#include <omero/model/IObject.h>
#include <omero/model/DetailsI.h>
#include <omero/model/WellSample.h>
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
    class OMERO_API WellSampleI;
  }
}
#if ICE_INT_VERSION / 100 >= 304
namespace IceInternal {
  OMERO_API ::Ice::Object* upCast(::omero::model::WellSampleI*);
}
#endif
namespace omero {
  namespace model {
#if ICE_INT_VERSION / 100 >= 304
  typedef IceInternal::Handle<WellSampleI> WellSampleIPtr;
#else
  typedef IceUtil::Handle<WellSampleI> WellSampleIPtr;
#endif
    class OMERO_API WellSampleI : virtual public WellSample {
   public:
      static const std::string POSX;
      static const std::string POSY;
      static const std::string TIMEPOINT;
      static const std::string PLATEACQUISITION;
      static const std::string WELL;
      static const std::string IMAGE;
      static const std::string ANNOTATIONLINKS;
      static const std::string DETAILS;
    protected:
      void errorIfUnloaded();
      void throwNullCollectionException(std::string propertyName);
      virtual void toggleCollectionsLoaded(bool load);
      virtual ~WellSampleI();
    public:
      WellSampleI();
      WellSampleI(omero::RLongPtr idPtr, bool isLoaded = false);
      WellSampleI(Ice::Long id, bool isLoaded = false);
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
      //  WellSample.posX
      //
      virtual void unloadPosX();
      virtual omero::RDoublePtr getPosX(const Ice::Current& current = Ice::Current());
      virtual void setPosX(const omero::RDoublePtr& _posX, const Ice::Current& current = Ice::Current());

      //
      //  WellSample.posY
      //
      virtual void unloadPosY();
      virtual omero::RDoublePtr getPosY(const Ice::Current& current = Ice::Current());
      virtual void setPosY(const omero::RDoublePtr& _posY, const Ice::Current& current = Ice::Current());

      //
      //  WellSample.timepoint
      //
      virtual void unloadTimepoint();
      virtual omero::RTimePtr getTimepoint(const Ice::Current& current = Ice::Current());
      virtual void setTimepoint(const omero::RTimePtr& _timepoint, const Ice::Current& current = Ice::Current());

      //
      //  WellSample.plateAcquisition
      //
      virtual void unloadPlateAcquisition();
      virtual omero::model::PlateAcquisitionPtr getPlateAcquisition(const Ice::Current& current = Ice::Current());
      virtual void setPlateAcquisition(const omero::model::PlateAcquisitionPtr& _plateAcquisition, const Ice::Current& current = Ice::Current());

      //
      //  WellSample.well
      //
      virtual void unloadWell();
      virtual omero::model::WellPtr getWell(const Ice::Current& current = Ice::Current());
      virtual void setWell(const omero::model::WellPtr& _well, const Ice::Current& current = Ice::Current());

      //
      //  WellSample.image
      //
      virtual void unloadImage();
      virtual omero::model::ImagePtr getImage(const Ice::Current& current = Ice::Current());
      virtual void setImage(const omero::model::ImagePtr& _image, const Ice::Current& current = Ice::Current());

      //
      //  WellSample.annotationLinks
      //
      virtual void unloadAnnotationLinks(const Ice::Current& current = Ice::Current());
    protected:
      virtual WellSampleAnnotationLinksSeq getAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual void setAnnotationLinks(const WellSampleAnnotationLinksSeq& _annotationLinks, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isAnnotationLinksLoaded();
      virtual Ice::Int sizeOfAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual WellSampleAnnotationLinksSeq copyAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual WellSampleAnnotationLinksSeq::iterator beginAnnotationLinks();
      virtual WellSampleAnnotationLinksSeq::iterator endAnnotationLinks();
      virtual void addWellSampleAnnotationLink(const WellSampleAnnotationLinkPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllWellSampleAnnotationLinkSet(const WellSampleAnnotationLinksSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removeWellSampleAnnotationLink(const WellSampleAnnotationLinkPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllWellSampleAnnotationLinkSet(const WellSampleAnnotationLinksSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual void reloadAnnotationLinks(const WellSamplePtr& toCopy, const Ice::Current& current = Ice::Current());
      virtual omero::sys::CountMap getAnnotationLinksCountPerOwner(const Ice::Current& current = Ice::Current());
      virtual WellSampleAnnotationLinkPtr linkAnnotation(const AnnotationPtr& addition, const Ice::Current& current = Ice::Current());
      virtual void addWellSampleAnnotationLinkToBoth(const WellSampleAnnotationLinkPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
      virtual WellSampleAnnotationLinksSeq findWellSampleAnnotationLink(const AnnotationPtr& removal, const Ice::Current& current = Ice::Current());
      virtual void unlinkAnnotation(const AnnotationPtr& removal, const Ice::Current& current = Ice::Current());
      virtual void removeWellSampleAnnotationLinkFromBoth(const WellSampleAnnotationLinkPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
       virtual WellSampleLinkedAnnotationSeq linkedAnnotationList(const Ice::Current& current = Ice::Current());
 };

}}
#endif // WELLSAMPLEI_H
