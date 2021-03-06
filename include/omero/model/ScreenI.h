   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.h for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef SCREENI_H
#define SCREENI_H
#include <omero/RTypes.h>
#include <omero/ClientErrors.h>
#include <omero/model/IObject.h>
#include <omero/model/DetailsI.h>
#include <omero/model/Screen.h>
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
    class OMERO_API ScreenI;
  }
}
#if ICE_INT_VERSION / 100 >= 304
namespace IceInternal {
  OMERO_API ::Ice::Object* upCast(::omero::model::ScreenI*);
}
#endif
namespace omero {
  namespace model {
#if ICE_INT_VERSION / 100 >= 304
  typedef IceInternal::Handle<ScreenI> ScreenIPtr;
#else
  typedef IceUtil::Handle<ScreenI> ScreenIPtr;
#endif
    class OMERO_API ScreenI : virtual public Screen {
   public:
      static const std::string TYPE;
      static const std::string PROTOCOLIDENTIFIER;
      static const std::string PROTOCOLDESCRIPTION;
      static const std::string REAGENTSETIDENTIFIER;
      static const std::string REAGENTSETDESCRIPTION;
      static const std::string PLATELINKS;
      static const std::string REAGENTS;
      static const std::string ANNOTATIONLINKS;
      static const std::string NAME;
      static const std::string DESCRIPTION;
      static const std::string DETAILS;
    protected:
      void errorIfUnloaded();
      void throwNullCollectionException(std::string propertyName);
      virtual void toggleCollectionsLoaded(bool load);
      virtual ~ScreenI();
    public:
      ScreenI();
      ScreenI(omero::RLongPtr idPtr, bool isLoaded = false);
      ScreenI(Ice::Long id, bool isLoaded = false);
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
      //  Screen.type
      //
      virtual void unloadType();
      virtual omero::RStringPtr getType(const Ice::Current& current = Ice::Current());
      virtual void setType(const omero::RStringPtr& _type, const Ice::Current& current = Ice::Current());

      //
      //  Screen.protocolIdentifier
      //
      virtual void unloadProtocolIdentifier();
      virtual omero::RStringPtr getProtocolIdentifier(const Ice::Current& current = Ice::Current());
      virtual void setProtocolIdentifier(const omero::RStringPtr& _protocolIdentifier, const Ice::Current& current = Ice::Current());

      //
      //  Screen.protocolDescription
      //
      virtual void unloadProtocolDescription();
      virtual omero::RStringPtr getProtocolDescription(const Ice::Current& current = Ice::Current());
      virtual void setProtocolDescription(const omero::RStringPtr& _protocolDescription, const Ice::Current& current = Ice::Current());

      //
      //  Screen.reagentSetIdentifier
      //
      virtual void unloadReagentSetIdentifier();
      virtual omero::RStringPtr getReagentSetIdentifier(const Ice::Current& current = Ice::Current());
      virtual void setReagentSetIdentifier(const omero::RStringPtr& _reagentSetIdentifier, const Ice::Current& current = Ice::Current());

      //
      //  Screen.reagentSetDescription
      //
      virtual void unloadReagentSetDescription();
      virtual omero::RStringPtr getReagentSetDescription(const Ice::Current& current = Ice::Current());
      virtual void setReagentSetDescription(const omero::RStringPtr& _reagentSetDescription, const Ice::Current& current = Ice::Current());

      //
      //  Screen.plateLinks
      //
      virtual void unloadPlateLinks(const Ice::Current& current = Ice::Current());
    protected:
      virtual ScreenPlateLinksSeq getPlateLinks(const Ice::Current& current = Ice::Current());
      virtual void setPlateLinks(const ScreenPlateLinksSeq& _plateLinks, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isPlateLinksLoaded();
      virtual Ice::Int sizeOfPlateLinks(const Ice::Current& current = Ice::Current());
      virtual ScreenPlateLinksSeq copyPlateLinks(const Ice::Current& current = Ice::Current());
      virtual ScreenPlateLinksSeq::iterator beginPlateLinks();
      virtual ScreenPlateLinksSeq::iterator endPlateLinks();
      virtual void addScreenPlateLink(const ScreenPlateLinkPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllScreenPlateLinkSet(const ScreenPlateLinksSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removeScreenPlateLink(const ScreenPlateLinkPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllScreenPlateLinkSet(const ScreenPlateLinksSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearPlateLinks(const Ice::Current& current = Ice::Current());
      virtual void reloadPlateLinks(const ScreenPtr& toCopy, const Ice::Current& current = Ice::Current());
      virtual omero::sys::CountMap getPlateLinksCountPerOwner(const Ice::Current& current = Ice::Current());
      virtual ScreenPlateLinkPtr linkPlate(const PlatePtr& addition, const Ice::Current& current = Ice::Current());
      virtual void addScreenPlateLinkToBoth(const ScreenPlateLinkPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
      virtual ScreenPlateLinksSeq findScreenPlateLink(const PlatePtr& removal, const Ice::Current& current = Ice::Current());
      virtual void unlinkPlate(const PlatePtr& removal, const Ice::Current& current = Ice::Current());
      virtual void removeScreenPlateLinkFromBoth(const ScreenPlateLinkPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
       virtual ScreenLinkedPlateSeq linkedPlateList(const Ice::Current& current = Ice::Current());

      //
      //  Screen.reagents
      //
      virtual void unloadReagents(const Ice::Current& current = Ice::Current());
    protected:
      virtual ScreenReagentsSeq getReagents(const Ice::Current& current = Ice::Current());
      virtual void setReagents(const ScreenReagentsSeq& _reagents, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isReagentsLoaded();
      virtual Ice::Int sizeOfReagents(const Ice::Current& current = Ice::Current());
      virtual ScreenReagentsSeq copyReagents(const Ice::Current& current = Ice::Current());
      virtual ScreenReagentsSeq::iterator beginReagents();
      virtual ScreenReagentsSeq::iterator endReagents();
      virtual void addReagent(const ReagentPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllReagentSet(const ScreenReagentsSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removeReagent(const ReagentPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllReagentSet(const ScreenReagentsSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearReagents(const Ice::Current& current = Ice::Current());
      virtual void reloadReagents(const ScreenPtr& toCopy, const Ice::Current& current = Ice::Current());

      //
      //  Screen.annotationLinks
      //
      virtual void unloadAnnotationLinks(const Ice::Current& current = Ice::Current());
    protected:
      virtual ScreenAnnotationLinksSeq getAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual void setAnnotationLinks(const ScreenAnnotationLinksSeq& _annotationLinks, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isAnnotationLinksLoaded();
      virtual Ice::Int sizeOfAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual ScreenAnnotationLinksSeq copyAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual ScreenAnnotationLinksSeq::iterator beginAnnotationLinks();
      virtual ScreenAnnotationLinksSeq::iterator endAnnotationLinks();
      virtual void addScreenAnnotationLink(const ScreenAnnotationLinkPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllScreenAnnotationLinkSet(const ScreenAnnotationLinksSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removeScreenAnnotationLink(const ScreenAnnotationLinkPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllScreenAnnotationLinkSet(const ScreenAnnotationLinksSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual void reloadAnnotationLinks(const ScreenPtr& toCopy, const Ice::Current& current = Ice::Current());
      virtual omero::sys::CountMap getAnnotationLinksCountPerOwner(const Ice::Current& current = Ice::Current());
      virtual ScreenAnnotationLinkPtr linkAnnotation(const AnnotationPtr& addition, const Ice::Current& current = Ice::Current());
      virtual void addScreenAnnotationLinkToBoth(const ScreenAnnotationLinkPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
      virtual ScreenAnnotationLinksSeq findScreenAnnotationLink(const AnnotationPtr& removal, const Ice::Current& current = Ice::Current());
      virtual void unlinkAnnotation(const AnnotationPtr& removal, const Ice::Current& current = Ice::Current());
      virtual void removeScreenAnnotationLinkFromBoth(const ScreenAnnotationLinkPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
       virtual ScreenLinkedAnnotationSeq linkedAnnotationList(const Ice::Current& current = Ice::Current());

      //
      //  Screen.name
      //
      virtual void unloadName();
      virtual omero::RStringPtr getName(const Ice::Current& current = Ice::Current());
      virtual void setName(const omero::RStringPtr& _name, const Ice::Current& current = Ice::Current());

      //
      //  Screen.description
      //
      virtual void unloadDescription();
      virtual omero::RStringPtr getDescription(const Ice::Current& current = Ice::Current());
      virtual void setDescription(const omero::RStringPtr& _description, const Ice::Current& current = Ice::Current());
 };

}}
#endif // SCREENI_H
