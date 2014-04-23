   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.h for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef LIGHTPATHI_H
#define LIGHTPATHI_H
#include <omero/RTypes.h>
#include <omero/ClientErrors.h>
#include <omero/model/IObject.h>
#include <omero/model/DetailsI.h>
#include <omero/model/LightPath.h>
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
    class OMERO_API LightPathI;
  }
}
#if ICE_INT_VERSION / 100 >= 304
namespace IceInternal {
  OMERO_API ::Ice::Object* upCast(::omero::model::LightPathI*);
}
#endif
namespace omero {
  namespace model {
#if ICE_INT_VERSION / 100 >= 304
  typedef IceInternal::Handle<LightPathI> LightPathIPtr;
#else
  typedef IceUtil::Handle<LightPathI> LightPathIPtr;
#endif
    class OMERO_API LightPathI : virtual public LightPath {
   public:
      static const std::string EXCITATIONFILTERLINK;
      static const std::string DICHROIC;
      static const std::string EMISSIONFILTERLINK;
      static const std::string DETAILS;
    protected:
      void errorIfUnloaded();
      void throwNullCollectionException(std::string propertyName);
      virtual void toggleCollectionsLoaded(bool load);
      virtual ~LightPathI();
    public:
      LightPathI();
      LightPathI(omero::RLongPtr idPtr, bool isLoaded = false);
      LightPathI(Ice::Long id, bool isLoaded = false);
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
      //  LightPath.excitationFilterLink
      //
      virtual void unloadExcitationFilterLink(const Ice::Current& current = Ice::Current());
    protected:
      virtual LightPathExcitationFilterLinkSeq getExcitationFilterLink(const Ice::Current& current = Ice::Current());
      virtual void setExcitationFilterLink(const LightPathExcitationFilterLinkSeq& _excitationFilterLink, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isExcitationFilterLinkLoaded();
      virtual Ice::Int sizeOfExcitationFilterLink(const Ice::Current& current = Ice::Current());
      virtual LightPathExcitationFilterLinkSeq copyExcitationFilterLink(const Ice::Current& current = Ice::Current());
      virtual LightPathExcitationFilterLinkSeq::iterator beginExcitationFilterLink();
      virtual LightPathExcitationFilterLinkSeq::iterator endExcitationFilterLink();
      virtual void addLightPathExcitationFilterLink(const LightPathExcitationFilterLinkPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllLightPathExcitationFilterLinkSet(const LightPathExcitationFilterLinkSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removeLightPathExcitationFilterLink(const LightPathExcitationFilterLinkPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllLightPathExcitationFilterLinkSet(const LightPathExcitationFilterLinkSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearExcitationFilterLink(const Ice::Current& current = Ice::Current());
      virtual void reloadExcitationFilterLink(const LightPathPtr& toCopy, const Ice::Current& current = Ice::Current());
      virtual LightPathExcitationFilterLinkPtr getLightPathExcitationFilterLink(int index, const Ice::Current& current = Ice::Current());
      virtual LightPathExcitationFilterLinkPtr setLightPathExcitationFilterLink(int index, const LightPathExcitationFilterLinkPtr& element, const Ice::Current& current = Ice::Current());
      virtual LightPathExcitationFilterLinkPtr getPrimaryLightPathExcitationFilterLink(const Ice::Current& current = Ice::Current());
      virtual LightPathExcitationFilterLinkPtr setPrimaryLightPathExcitationFilterLink(const LightPathExcitationFilterLinkPtr& element, const Ice::Current& current = Ice::Current());
      virtual omero::sys::CountMap getExcitationFilterLinkCountPerOwner(const Ice::Current& current = Ice::Current());
      virtual LightPathExcitationFilterLinkPtr linkExcitationFilter(const FilterPtr& addition, const Ice::Current& current = Ice::Current());
      virtual void addLightPathExcitationFilterLinkToBoth(const LightPathExcitationFilterLinkPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
      virtual LightPathExcitationFilterLinkSeq findLightPathExcitationFilterLink(const FilterPtr& removal, const Ice::Current& current = Ice::Current());
      virtual void unlinkExcitationFilter(const FilterPtr& removal, const Ice::Current& current = Ice::Current());
      virtual void removeLightPathExcitationFilterLinkFromBoth(const LightPathExcitationFilterLinkPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
       virtual LightPathLinkedExcitationFilterSeq linkedExcitationFilterList(const Ice::Current& current = Ice::Current());

      //
      //  LightPath.dichroic
      //
      virtual void unloadDichroic();
      virtual omero::model::DichroicPtr getDichroic(const Ice::Current& current = Ice::Current());
      virtual void setDichroic(const omero::model::DichroicPtr& _dichroic, const Ice::Current& current = Ice::Current());

      //
      //  LightPath.emissionFilterLink
      //
      virtual void unloadEmissionFilterLink(const Ice::Current& current = Ice::Current());
    protected:
      virtual LightPathEmissionFilterLinkSeq getEmissionFilterLink(const Ice::Current& current = Ice::Current());
      virtual void setEmissionFilterLink(const LightPathEmissionFilterLinkSeq& _emissionFilterLink, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isEmissionFilterLinkLoaded();
      virtual Ice::Int sizeOfEmissionFilterLink(const Ice::Current& current = Ice::Current());
      virtual LightPathEmissionFilterLinkSeq copyEmissionFilterLink(const Ice::Current& current = Ice::Current());
      virtual LightPathEmissionFilterLinkSeq::iterator beginEmissionFilterLink();
      virtual LightPathEmissionFilterLinkSeq::iterator endEmissionFilterLink();
      virtual void addLightPathEmissionFilterLink(const LightPathEmissionFilterLinkPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllLightPathEmissionFilterLinkSet(const LightPathEmissionFilterLinkSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removeLightPathEmissionFilterLink(const LightPathEmissionFilterLinkPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllLightPathEmissionFilterLinkSet(const LightPathEmissionFilterLinkSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearEmissionFilterLink(const Ice::Current& current = Ice::Current());
      virtual void reloadEmissionFilterLink(const LightPathPtr& toCopy, const Ice::Current& current = Ice::Current());
      virtual omero::sys::CountMap getEmissionFilterLinkCountPerOwner(const Ice::Current& current = Ice::Current());
      virtual LightPathEmissionFilterLinkPtr linkEmissionFilter(const FilterPtr& addition, const Ice::Current& current = Ice::Current());
      virtual void addLightPathEmissionFilterLinkToBoth(const LightPathEmissionFilterLinkPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
      virtual LightPathEmissionFilterLinkSeq findLightPathEmissionFilterLink(const FilterPtr& removal, const Ice::Current& current = Ice::Current());
      virtual void unlinkEmissionFilter(const FilterPtr& removal, const Ice::Current& current = Ice::Current());
      virtual void removeLightPathEmissionFilterLinkFromBoth(const LightPathEmissionFilterLinkPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
       virtual LightPathLinkedEmissionFilterSeq linkedEmissionFilterList(const Ice::Current& current = Ice::Current());
 };

}}
#endif // LIGHTPATHI_H