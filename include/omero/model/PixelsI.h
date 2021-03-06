   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.h for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef PIXELSI_H
#define PIXELSI_H
#include <omero/RTypes.h>
#include <omero/ClientErrors.h>
#include <omero/model/IObject.h>
#include <omero/model/DetailsI.h>
#include <omero/model/Pixels.h>
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
    class OMERO_API PixelsI;
  }
}
#if ICE_INT_VERSION / 100 >= 304
namespace IceInternal {
  OMERO_API ::Ice::Object* upCast(::omero::model::PixelsI*);
}
#endif
namespace omero {
  namespace model {
#if ICE_INT_VERSION / 100 >= 304
  typedef IceInternal::Handle<PixelsI> PixelsIPtr;
#else
  typedef IceUtil::Handle<PixelsI> PixelsIPtr;
#endif
    class OMERO_API PixelsI : virtual public Pixels {
   public:
      static const std::string IMAGE;
      static const std::string RELATEDTO;
      static const std::string PIXELSTYPE;
      static const std::string SIGNIFICANTBITS;
      static const std::string SIZEX;
      static const std::string SIZEY;
      static const std::string SIZEZ;
      static const std::string SIZEC;
      static const std::string SIZET;
      static const std::string SHA1;
      static const std::string DIMENSIONORDER;
      static const std::string PHYSICALSIZEX;
      static const std::string PHYSICALSIZEY;
      static const std::string PHYSICALSIZEZ;
      static const std::string WAVESTART;
      static const std::string WAVEINCREMENT;
      static const std::string TIMEINCREMENT;
      static const std::string METHODOLOGY;
      static const std::string PLANEINFO;
      static const std::string PIXELSFILEMAPS;
      static const std::string CHANNELS;
      static const std::string SETTINGS;
      static const std::string THUMBNAILS;
      static const std::string ANNOTATIONLINKS;
      static const std::string DETAILS;
    protected:
      void errorIfUnloaded();
      void throwNullCollectionException(std::string propertyName);
      virtual void toggleCollectionsLoaded(bool load);
      virtual ~PixelsI();
    public:
      PixelsI();
      PixelsI(omero::RLongPtr idPtr, bool isLoaded = false);
      PixelsI(Ice::Long id, bool isLoaded = false);
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
      //  Pixels.image
      //
      virtual void unloadImage();
      virtual omero::model::ImagePtr getImage(const Ice::Current& current = Ice::Current());
      virtual void setImage(const omero::model::ImagePtr& _image, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.relatedTo
      //
      virtual void unloadRelatedTo();
      virtual omero::model::PixelsPtr getRelatedTo(const Ice::Current& current = Ice::Current());
      virtual void setRelatedTo(const omero::model::PixelsPtr& _relatedTo, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.pixelsType
      //
      virtual void unloadPixelsType();
      virtual omero::model::PixelsTypePtr getPixelsType(const Ice::Current& current = Ice::Current());
      virtual void setPixelsType(const omero::model::PixelsTypePtr& _pixelsType, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.significantBits
      //
      virtual void unloadSignificantBits();
      virtual omero::RIntPtr getSignificantBits(const Ice::Current& current = Ice::Current());
      virtual void setSignificantBits(const omero::RIntPtr& _significantBits, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.sizeX
      //
      virtual void unloadSizeX();
      virtual omero::RIntPtr getSizeX(const Ice::Current& current = Ice::Current());
      virtual void setSizeX(const omero::RIntPtr& _sizeX, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.sizeY
      //
      virtual void unloadSizeY();
      virtual omero::RIntPtr getSizeY(const Ice::Current& current = Ice::Current());
      virtual void setSizeY(const omero::RIntPtr& _sizeY, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.sizeZ
      //
      virtual void unloadSizeZ();
      virtual omero::RIntPtr getSizeZ(const Ice::Current& current = Ice::Current());
      virtual void setSizeZ(const omero::RIntPtr& _sizeZ, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.sizeC
      //
      virtual void unloadSizeC();
      virtual omero::RIntPtr getSizeC(const Ice::Current& current = Ice::Current());
      virtual void setSizeC(const omero::RIntPtr& _sizeC, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.sizeT
      //
      virtual void unloadSizeT();
      virtual omero::RIntPtr getSizeT(const Ice::Current& current = Ice::Current());
      virtual void setSizeT(const omero::RIntPtr& _sizeT, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.sha1
      //
      virtual void unloadSha1();
      virtual omero::RStringPtr getSha1(const Ice::Current& current = Ice::Current());
      virtual void setSha1(const omero::RStringPtr& _sha1, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.dimensionOrder
      //
      virtual void unloadDimensionOrder();
      virtual omero::model::DimensionOrderPtr getDimensionOrder(const Ice::Current& current = Ice::Current());
      virtual void setDimensionOrder(const omero::model::DimensionOrderPtr& _dimensionOrder, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.physicalSizeX
      //
      virtual void unloadPhysicalSizeX();
      virtual omero::RDoublePtr getPhysicalSizeX(const Ice::Current& current = Ice::Current());
      virtual void setPhysicalSizeX(const omero::RDoublePtr& _physicalSizeX, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.physicalSizeY
      //
      virtual void unloadPhysicalSizeY();
      virtual omero::RDoublePtr getPhysicalSizeY(const Ice::Current& current = Ice::Current());
      virtual void setPhysicalSizeY(const omero::RDoublePtr& _physicalSizeY, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.physicalSizeZ
      //
      virtual void unloadPhysicalSizeZ();
      virtual omero::RDoublePtr getPhysicalSizeZ(const Ice::Current& current = Ice::Current());
      virtual void setPhysicalSizeZ(const omero::RDoublePtr& _physicalSizeZ, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.waveStart
      //
      virtual void unloadWaveStart();
      virtual omero::RIntPtr getWaveStart(const Ice::Current& current = Ice::Current());
      virtual void setWaveStart(const omero::RIntPtr& _waveStart, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.waveIncrement
      //
      virtual void unloadWaveIncrement();
      virtual omero::RIntPtr getWaveIncrement(const Ice::Current& current = Ice::Current());
      virtual void setWaveIncrement(const omero::RIntPtr& _waveIncrement, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.timeIncrement
      //
      virtual void unloadTimeIncrement();
      virtual omero::RDoublePtr getTimeIncrement(const Ice::Current& current = Ice::Current());
      virtual void setTimeIncrement(const omero::RDoublePtr& _timeIncrement, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.methodology
      //
      virtual void unloadMethodology();
      virtual omero::RStringPtr getMethodology(const Ice::Current& current = Ice::Current());
      virtual void setMethodology(const omero::RStringPtr& _methodology, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.planeInfo
      //
      virtual void unloadPlaneInfo(const Ice::Current& current = Ice::Current());
    protected:
      virtual PixelsPlaneInfoSeq getPlaneInfo(const Ice::Current& current = Ice::Current());
      virtual void setPlaneInfo(const PixelsPlaneInfoSeq& _planeInfo, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isPlaneInfoLoaded();
      virtual Ice::Int sizeOfPlaneInfo(const Ice::Current& current = Ice::Current());
      virtual PixelsPlaneInfoSeq copyPlaneInfo(const Ice::Current& current = Ice::Current());
      virtual PixelsPlaneInfoSeq::iterator beginPlaneInfo();
      virtual PixelsPlaneInfoSeq::iterator endPlaneInfo();
      virtual void addPlaneInfo(const PlaneInfoPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllPlaneInfoSet(const PixelsPlaneInfoSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removePlaneInfo(const PlaneInfoPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllPlaneInfoSet(const PixelsPlaneInfoSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearPlaneInfo(const Ice::Current& current = Ice::Current());
      virtual void reloadPlaneInfo(const PixelsPtr& toCopy, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.pixelsFileMaps
      //
      virtual void unloadPixelsFileMaps(const Ice::Current& current = Ice::Current());
    protected:
      virtual PixelsPixelsFileMapsSeq getPixelsFileMaps(const Ice::Current& current = Ice::Current());
      virtual void setPixelsFileMaps(const PixelsPixelsFileMapsSeq& _pixelsFileMaps, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isPixelsFileMapsLoaded();
      virtual Ice::Int sizeOfPixelsFileMaps(const Ice::Current& current = Ice::Current());
      virtual PixelsPixelsFileMapsSeq copyPixelsFileMaps(const Ice::Current& current = Ice::Current());
      virtual PixelsPixelsFileMapsSeq::iterator beginPixelsFileMaps();
      virtual PixelsPixelsFileMapsSeq::iterator endPixelsFileMaps();
      virtual void addPixelsOriginalFileMap(const PixelsOriginalFileMapPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllPixelsOriginalFileMapSet(const PixelsPixelsFileMapsSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removePixelsOriginalFileMap(const PixelsOriginalFileMapPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllPixelsOriginalFileMapSet(const PixelsPixelsFileMapsSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearPixelsFileMaps(const Ice::Current& current = Ice::Current());
      virtual void reloadPixelsFileMaps(const PixelsPtr& toCopy, const Ice::Current& current = Ice::Current());
      virtual omero::sys::CountMap getPixelsFileMapsCountPerOwner(const Ice::Current& current = Ice::Current());
      virtual PixelsOriginalFileMapPtr linkOriginalFile(const OriginalFilePtr& addition, const Ice::Current& current = Ice::Current());
      virtual void addPixelsOriginalFileMapToBoth(const PixelsOriginalFileMapPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
      virtual PixelsPixelsFileMapsSeq findPixelsOriginalFileMap(const OriginalFilePtr& removal, const Ice::Current& current = Ice::Current());
      virtual void unlinkOriginalFile(const OriginalFilePtr& removal, const Ice::Current& current = Ice::Current());
      virtual void removePixelsOriginalFileMapFromBoth(const PixelsOriginalFileMapPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
       virtual PixelsLinkedOriginalFileSeq linkedOriginalFileList(const Ice::Current& current = Ice::Current());

      //
      //  Pixels.channels
      //
      virtual void unloadChannels(const Ice::Current& current = Ice::Current());
    protected:
      virtual PixelsChannelsSeq getChannels(const Ice::Current& current = Ice::Current());
      virtual void setChannels(const PixelsChannelsSeq& _channels, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isChannelsLoaded();
      virtual Ice::Int sizeOfChannels(const Ice::Current& current = Ice::Current());
      virtual PixelsChannelsSeq copyChannels(const Ice::Current& current = Ice::Current());
      virtual PixelsChannelsSeq::iterator beginChannels();
      virtual PixelsChannelsSeq::iterator endChannels();
      virtual void addChannel(const ChannelPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllChannelSet(const PixelsChannelsSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removeChannel(const ChannelPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllChannelSet(const PixelsChannelsSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearChannels(const Ice::Current& current = Ice::Current());
      virtual void reloadChannels(const PixelsPtr& toCopy, const Ice::Current& current = Ice::Current());
      virtual ChannelPtr getChannel(int index, const Ice::Current& current = Ice::Current());
      virtual ChannelPtr setChannel(int index, const ChannelPtr& element, const Ice::Current& current = Ice::Current());
      virtual ChannelPtr getPrimaryChannel(const Ice::Current& current = Ice::Current());
      virtual ChannelPtr setPrimaryChannel(const ChannelPtr& element, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.settings
      //
      virtual void unloadSettings(const Ice::Current& current = Ice::Current());
    protected:
      virtual PixelsSettingsSeq getSettings(const Ice::Current& current = Ice::Current());
      virtual void setSettings(const PixelsSettingsSeq& _settings, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isSettingsLoaded();
      virtual Ice::Int sizeOfSettings(const Ice::Current& current = Ice::Current());
      virtual PixelsSettingsSeq copySettings(const Ice::Current& current = Ice::Current());
      virtual PixelsSettingsSeq::iterator beginSettings();
      virtual PixelsSettingsSeq::iterator endSettings();
      virtual void addRenderingDef(const RenderingDefPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllRenderingDefSet(const PixelsSettingsSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removeRenderingDef(const RenderingDefPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllRenderingDefSet(const PixelsSettingsSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearSettings(const Ice::Current& current = Ice::Current());
      virtual void reloadSettings(const PixelsPtr& toCopy, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.thumbnails
      //
      virtual void unloadThumbnails(const Ice::Current& current = Ice::Current());
    protected:
      virtual PixelsThumbnailsSeq getThumbnails(const Ice::Current& current = Ice::Current());
      virtual void setThumbnails(const PixelsThumbnailsSeq& _thumbnails, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isThumbnailsLoaded();
      virtual Ice::Int sizeOfThumbnails(const Ice::Current& current = Ice::Current());
      virtual PixelsThumbnailsSeq copyThumbnails(const Ice::Current& current = Ice::Current());
      virtual PixelsThumbnailsSeq::iterator beginThumbnails();
      virtual PixelsThumbnailsSeq::iterator endThumbnails();
      virtual void addThumbnail(const ThumbnailPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllThumbnailSet(const PixelsThumbnailsSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removeThumbnail(const ThumbnailPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllThumbnailSet(const PixelsThumbnailsSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearThumbnails(const Ice::Current& current = Ice::Current());
      virtual void reloadThumbnails(const PixelsPtr& toCopy, const Ice::Current& current = Ice::Current());

      //
      //  Pixels.annotationLinks
      //
      virtual void unloadAnnotationLinks(const Ice::Current& current = Ice::Current());
    protected:
      virtual PixelsAnnotationLinksSeq getAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual void setAnnotationLinks(const PixelsAnnotationLinksSeq& _annotationLinks, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isAnnotationLinksLoaded();
      virtual Ice::Int sizeOfAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual PixelsAnnotationLinksSeq copyAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual PixelsAnnotationLinksSeq::iterator beginAnnotationLinks();
      virtual PixelsAnnotationLinksSeq::iterator endAnnotationLinks();
      virtual void addPixelsAnnotationLink(const PixelsAnnotationLinkPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllPixelsAnnotationLinkSet(const PixelsAnnotationLinksSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removePixelsAnnotationLink(const PixelsAnnotationLinkPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllPixelsAnnotationLinkSet(const PixelsAnnotationLinksSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual void reloadAnnotationLinks(const PixelsPtr& toCopy, const Ice::Current& current = Ice::Current());
      virtual omero::sys::CountMap getAnnotationLinksCountPerOwner(const Ice::Current& current = Ice::Current());
      virtual PixelsAnnotationLinkPtr linkAnnotation(const AnnotationPtr& addition, const Ice::Current& current = Ice::Current());
      virtual void addPixelsAnnotationLinkToBoth(const PixelsAnnotationLinkPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
      virtual PixelsAnnotationLinksSeq findPixelsAnnotationLink(const AnnotationPtr& removal, const Ice::Current& current = Ice::Current());
      virtual void unlinkAnnotation(const AnnotationPtr& removal, const Ice::Current& current = Ice::Current());
      virtual void removePixelsAnnotationLinkFromBoth(const PixelsAnnotationLinkPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
       virtual PixelsLinkedAnnotationSeq linkedAnnotationList(const Ice::Current& current = Ice::Current());
 };

}}
#endif // PIXELSI_H
