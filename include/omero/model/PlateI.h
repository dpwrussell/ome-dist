   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.h for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef PLATEI_H
#define PLATEI_H
#include <omero/RTypes.h>
#include <omero/ClientErrors.h>
#include <omero/model/IObject.h>
#include <omero/model/DetailsI.h>
#include <omero/model/Plate.h>
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
    class OMERO_API PlateI;
  }
}
#if ICE_INT_VERSION / 100 >= 304
namespace IceInternal {
  OMERO_API ::Ice::Object* upCast(::omero::model::PlateI*);
}
#endif
namespace omero {
  namespace model {
#if ICE_INT_VERSION / 100 >= 304
  typedef IceInternal::Handle<PlateI> PlateIPtr;
#else
  typedef IceUtil::Handle<PlateI> PlateIPtr;
#endif
    class OMERO_API PlateI : virtual public Plate {
   public:
      static const std::string DEFAULTSAMPLE;
      static const std::string COLUMNNAMINGCONVENTION;
      static const std::string ROWNAMINGCONVENTION;
      static const std::string WELLORIGINX;
      static const std::string WELLORIGINY;
      static const std::string ROWS;
      static const std::string COLUMNS;
      static const std::string STATUS;
      static const std::string EXTERNALIDENTIFIER;
      static const std::string SCREENLINKS;
      static const std::string WELLS;
      static const std::string PLATEACQUISITIONS;
      static const std::string ANNOTATIONLINKS;
      static const std::string NAME;
      static const std::string DESCRIPTION;
      static const std::string DETAILS;
    protected:
      void errorIfUnloaded();
      void throwNullCollectionException(std::string propertyName);
      virtual void toggleCollectionsLoaded(bool load);
      virtual ~PlateI();
    public:
      PlateI();
      PlateI(omero::RLongPtr idPtr, bool isLoaded = false);
      PlateI(Ice::Long id, bool isLoaded = false);
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
      //  Plate.defaultSample
      //
      virtual void unloadDefaultSample();
      virtual omero::RIntPtr getDefaultSample(const Ice::Current& current = Ice::Current());
      virtual void setDefaultSample(const omero::RIntPtr& _defaultSample, const Ice::Current& current = Ice::Current());

      //
      //  Plate.columnNamingConvention
      //
      virtual void unloadColumnNamingConvention();
      virtual omero::RStringPtr getColumnNamingConvention(const Ice::Current& current = Ice::Current());
      virtual void setColumnNamingConvention(const omero::RStringPtr& _columnNamingConvention, const Ice::Current& current = Ice::Current());

      //
      //  Plate.rowNamingConvention
      //
      virtual void unloadRowNamingConvention();
      virtual omero::RStringPtr getRowNamingConvention(const Ice::Current& current = Ice::Current());
      virtual void setRowNamingConvention(const omero::RStringPtr& _rowNamingConvention, const Ice::Current& current = Ice::Current());

      //
      //  Plate.wellOriginX
      //
      virtual void unloadWellOriginX();
      virtual omero::RDoublePtr getWellOriginX(const Ice::Current& current = Ice::Current());
      virtual void setWellOriginX(const omero::RDoublePtr& _wellOriginX, const Ice::Current& current = Ice::Current());

      //
      //  Plate.wellOriginY
      //
      virtual void unloadWellOriginY();
      virtual omero::RDoublePtr getWellOriginY(const Ice::Current& current = Ice::Current());
      virtual void setWellOriginY(const omero::RDoublePtr& _wellOriginY, const Ice::Current& current = Ice::Current());

      //
      //  Plate.rows
      //
      virtual void unloadRows();
      virtual omero::RIntPtr getRows(const Ice::Current& current = Ice::Current());
      virtual void setRows(const omero::RIntPtr& _rows, const Ice::Current& current = Ice::Current());

      //
      //  Plate.columns
      //
      virtual void unloadColumns();
      virtual omero::RIntPtr getColumns(const Ice::Current& current = Ice::Current());
      virtual void setColumns(const omero::RIntPtr& _columns, const Ice::Current& current = Ice::Current());

      //
      //  Plate.status
      //
      virtual void unloadStatus();
      virtual omero::RStringPtr getStatus(const Ice::Current& current = Ice::Current());
      virtual void setStatus(const omero::RStringPtr& _status, const Ice::Current& current = Ice::Current());

      //
      //  Plate.externalIdentifier
      //
      virtual void unloadExternalIdentifier();
      virtual omero::RStringPtr getExternalIdentifier(const Ice::Current& current = Ice::Current());
      virtual void setExternalIdentifier(const omero::RStringPtr& _externalIdentifier, const Ice::Current& current = Ice::Current());

      //
      //  Plate.screenLinks
      //
      virtual void unloadScreenLinks(const Ice::Current& current = Ice::Current());
    protected:
      virtual PlateScreenLinksSeq getScreenLinks(const Ice::Current& current = Ice::Current());
      virtual void setScreenLinks(const PlateScreenLinksSeq& _screenLinks, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isScreenLinksLoaded();
      virtual Ice::Int sizeOfScreenLinks(const Ice::Current& current = Ice::Current());
      virtual PlateScreenLinksSeq copyScreenLinks(const Ice::Current& current = Ice::Current());
      virtual PlateScreenLinksSeq::iterator beginScreenLinks();
      virtual PlateScreenLinksSeq::iterator endScreenLinks();
      virtual void addScreenPlateLink(const ScreenPlateLinkPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllScreenPlateLinkSet(const PlateScreenLinksSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removeScreenPlateLink(const ScreenPlateLinkPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllScreenPlateLinkSet(const PlateScreenLinksSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearScreenLinks(const Ice::Current& current = Ice::Current());
      virtual void reloadScreenLinks(const PlatePtr& toCopy, const Ice::Current& current = Ice::Current());
      virtual omero::sys::CountMap getScreenLinksCountPerOwner(const Ice::Current& current = Ice::Current());
      virtual ScreenPlateLinkPtr linkScreen(const ScreenPtr& addition, const Ice::Current& current = Ice::Current());
      virtual void addScreenPlateLinkToBoth(const ScreenPlateLinkPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
      virtual PlateScreenLinksSeq findScreenPlateLink(const ScreenPtr& removal, const Ice::Current& current = Ice::Current());
      virtual void unlinkScreen(const ScreenPtr& removal, const Ice::Current& current = Ice::Current());
      virtual void removeScreenPlateLinkFromBoth(const ScreenPlateLinkPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
       virtual PlateLinkedScreenSeq linkedScreenList(const Ice::Current& current = Ice::Current());

      //
      //  Plate.wells
      //
      virtual void unloadWells(const Ice::Current& current = Ice::Current());
    protected:
      virtual PlateWellsSeq getWells(const Ice::Current& current = Ice::Current());
      virtual void setWells(const PlateWellsSeq& _wells, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isWellsLoaded();
      virtual Ice::Int sizeOfWells(const Ice::Current& current = Ice::Current());
      virtual PlateWellsSeq copyWells(const Ice::Current& current = Ice::Current());
      virtual PlateWellsSeq::iterator beginWells();
      virtual PlateWellsSeq::iterator endWells();
      virtual void addWell(const WellPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllWellSet(const PlateWellsSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removeWell(const WellPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllWellSet(const PlateWellsSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearWells(const Ice::Current& current = Ice::Current());
      virtual void reloadWells(const PlatePtr& toCopy, const Ice::Current& current = Ice::Current());

      //
      //  Plate.plateAcquisitions
      //
      virtual void unloadPlateAcquisitions(const Ice::Current& current = Ice::Current());
    protected:
      virtual PlatePlateAcquisitionsSeq getPlateAcquisitions(const Ice::Current& current = Ice::Current());
      virtual void setPlateAcquisitions(const PlatePlateAcquisitionsSeq& _plateAcquisitions, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isPlateAcquisitionsLoaded();
      virtual Ice::Int sizeOfPlateAcquisitions(const Ice::Current& current = Ice::Current());
      virtual PlatePlateAcquisitionsSeq copyPlateAcquisitions(const Ice::Current& current = Ice::Current());
      virtual PlatePlateAcquisitionsSeq::iterator beginPlateAcquisitions();
      virtual PlatePlateAcquisitionsSeq::iterator endPlateAcquisitions();
      virtual void addPlateAcquisition(const PlateAcquisitionPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllPlateAcquisitionSet(const PlatePlateAcquisitionsSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removePlateAcquisition(const PlateAcquisitionPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllPlateAcquisitionSet(const PlatePlateAcquisitionsSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearPlateAcquisitions(const Ice::Current& current = Ice::Current());
      virtual void reloadPlateAcquisitions(const PlatePtr& toCopy, const Ice::Current& current = Ice::Current());

      //
      //  Plate.annotationLinks
      //
      virtual void unloadAnnotationLinks(const Ice::Current& current = Ice::Current());
    protected:
      virtual PlateAnnotationLinksSeq getAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual void setAnnotationLinks(const PlateAnnotationLinksSeq& _annotationLinks, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isAnnotationLinksLoaded();
      virtual Ice::Int sizeOfAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual PlateAnnotationLinksSeq copyAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual PlateAnnotationLinksSeq::iterator beginAnnotationLinks();
      virtual PlateAnnotationLinksSeq::iterator endAnnotationLinks();
      virtual void addPlateAnnotationLink(const PlateAnnotationLinkPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllPlateAnnotationLinkSet(const PlateAnnotationLinksSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removePlateAnnotationLink(const PlateAnnotationLinkPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllPlateAnnotationLinkSet(const PlateAnnotationLinksSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual void reloadAnnotationLinks(const PlatePtr& toCopy, const Ice::Current& current = Ice::Current());
      virtual omero::sys::CountMap getAnnotationLinksCountPerOwner(const Ice::Current& current = Ice::Current());
      virtual PlateAnnotationLinkPtr linkAnnotation(const AnnotationPtr& addition, const Ice::Current& current = Ice::Current());
      virtual void addPlateAnnotationLinkToBoth(const PlateAnnotationLinkPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
      virtual PlateAnnotationLinksSeq findPlateAnnotationLink(const AnnotationPtr& removal, const Ice::Current& current = Ice::Current());
      virtual void unlinkAnnotation(const AnnotationPtr& removal, const Ice::Current& current = Ice::Current());
      virtual void removePlateAnnotationLinkFromBoth(const PlateAnnotationLinkPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
       virtual PlateLinkedAnnotationSeq linkedAnnotationList(const Ice::Current& current = Ice::Current());

      //
      //  Plate.name
      //
      virtual void unloadName();
      virtual omero::RStringPtr getName(const Ice::Current& current = Ice::Current());
      virtual void setName(const omero::RStringPtr& _name, const Ice::Current& current = Ice::Current());

      //
      //  Plate.description
      //
      virtual void unloadDescription();
      virtual omero::RStringPtr getDescription(const Ice::Current& current = Ice::Current());
      virtual void setDescription(const omero::RStringPtr& _description, const Ice::Current& current = Ice::Current());
 };

}}
#endif // PLATEI_H
