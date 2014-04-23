   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.h for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef SESSIONI_H
#define SESSIONI_H
#include <omero/RTypes.h>
#include <omero/ClientErrors.h>
#include <omero/model/IObject.h>
#include <omero/model/DetailsI.h>
#include <omero/model/Session.h>
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
    class OMERO_API SessionI;
  }
}
#if ICE_INT_VERSION / 100 >= 304
namespace IceInternal {
  OMERO_API ::Ice::Object* upCast(::omero::model::SessionI*);
}
#endif
namespace omero {
  namespace model {
#if ICE_INT_VERSION / 100 >= 304
  typedef IceInternal::Handle<SessionI> SessionIPtr;
#else
  typedef IceUtil::Handle<SessionI> SessionIPtr;
#endif
    class OMERO_API SessionI : virtual public Session {
   public:
      static const std::string NODE;
      static const std::string UUID;
      static const std::string OWNER;
      static const std::string TIMETOIDLE;
      static const std::string TIMETOLIVE;
      static const std::string STARTED;
      static const std::string CLOSED;
      static const std::string MESSAGE;
      static const std::string DEFAULTEVENTTYPE;
      static const std::string USERAGENT;
      static const std::string EVENTS;
      static const std::string ANNOTATIONLINKS;
      static const std::string DETAILS;
    protected:
      void errorIfUnloaded();
      void throwNullCollectionException(std::string propertyName);
      virtual void toggleCollectionsLoaded(bool load);
      virtual ~SessionI();
    public:
      SessionI();
      SessionI(omero::RLongPtr idPtr, bool isLoaded = false);
      SessionI(Ice::Long id, bool isLoaded = false);
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
      //  Session.node
      //
      virtual void unloadNode();
      virtual omero::model::NodePtr getNode(const Ice::Current& current = Ice::Current());
      virtual void setNode(const omero::model::NodePtr& _node, const Ice::Current& current = Ice::Current());

      //
      //  Session.uuid
      //
      virtual void unloadUuid();
      virtual omero::RStringPtr getUuid(const Ice::Current& current = Ice::Current());
      virtual void setUuid(const omero::RStringPtr& _uuid, const Ice::Current& current = Ice::Current());

      //
      //  Session.owner
      //
      virtual void unloadOwner();
      virtual omero::model::ExperimenterPtr getOwner(const Ice::Current& current = Ice::Current());
      virtual void setOwner(const omero::model::ExperimenterPtr& _owner, const Ice::Current& current = Ice::Current());

      //
      //  Session.timeToIdle
      //
      virtual void unloadTimeToIdle();
      virtual omero::RLongPtr getTimeToIdle(const Ice::Current& current = Ice::Current());
      virtual void setTimeToIdle(const omero::RLongPtr& _timeToIdle, const Ice::Current& current = Ice::Current());

      //
      //  Session.timeToLive
      //
      virtual void unloadTimeToLive();
      virtual omero::RLongPtr getTimeToLive(const Ice::Current& current = Ice::Current());
      virtual void setTimeToLive(const omero::RLongPtr& _timeToLive, const Ice::Current& current = Ice::Current());

      //
      //  Session.started
      //
      virtual void unloadStarted();
      virtual omero::RTimePtr getStarted(const Ice::Current& current = Ice::Current());
      virtual void setStarted(const omero::RTimePtr& _started, const Ice::Current& current = Ice::Current());

      //
      //  Session.closed
      //
      virtual void unloadClosed();
      virtual omero::RTimePtr getClosed(const Ice::Current& current = Ice::Current());
      virtual void setClosed(const omero::RTimePtr& _closed, const Ice::Current& current = Ice::Current());

      //
      //  Session.message
      //
      virtual void unloadMessage();
      virtual omero::RStringPtr getMessage(const Ice::Current& current = Ice::Current());
      virtual void setMessage(const omero::RStringPtr& _message, const Ice::Current& current = Ice::Current());

      //
      //  Session.defaultEventType
      //
      virtual void unloadDefaultEventType();
      virtual omero::RStringPtr getDefaultEventType(const Ice::Current& current = Ice::Current());
      virtual void setDefaultEventType(const omero::RStringPtr& _defaultEventType, const Ice::Current& current = Ice::Current());

      //
      //  Session.userAgent
      //
      virtual void unloadUserAgent();
      virtual omero::RStringPtr getUserAgent(const Ice::Current& current = Ice::Current());
      virtual void setUserAgent(const omero::RStringPtr& _userAgent, const Ice::Current& current = Ice::Current());

      //
      //  Session.events
      //
      virtual void unloadEvents(const Ice::Current& current = Ice::Current());
    protected:
      virtual SessionEventsSeq getEvents(const Ice::Current& current = Ice::Current());
      virtual void setEvents(const SessionEventsSeq& _events, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isEventsLoaded();
      virtual Ice::Int sizeOfEvents(const Ice::Current& current = Ice::Current());
      virtual SessionEventsSeq copyEvents(const Ice::Current& current = Ice::Current());
      virtual SessionEventsSeq::iterator beginEvents();
      virtual SessionEventsSeq::iterator endEvents();
      virtual void addEvent(const EventPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllEventSet(const SessionEventsSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removeEvent(const EventPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllEventSet(const SessionEventsSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearEvents(const Ice::Current& current = Ice::Current());
      virtual void reloadEvents(const SessionPtr& toCopy, const Ice::Current& current = Ice::Current());

      //
      //  Session.annotationLinks
      //
      virtual void unloadAnnotationLinks(const Ice::Current& current = Ice::Current());
    protected:
      virtual SessionAnnotationLinksSeq getAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual void setAnnotationLinks(const SessionAnnotationLinksSeq& _annotationLinks, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isAnnotationLinksLoaded();
      virtual Ice::Int sizeOfAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual SessionAnnotationLinksSeq copyAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual SessionAnnotationLinksSeq::iterator beginAnnotationLinks();
      virtual SessionAnnotationLinksSeq::iterator endAnnotationLinks();
      virtual void addSessionAnnotationLink(const SessionAnnotationLinkPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllSessionAnnotationLinkSet(const SessionAnnotationLinksSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removeSessionAnnotationLink(const SessionAnnotationLinkPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllSessionAnnotationLinkSet(const SessionAnnotationLinksSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual void reloadAnnotationLinks(const SessionPtr& toCopy, const Ice::Current& current = Ice::Current());
      virtual omero::sys::CountMap getAnnotationLinksCountPerOwner(const Ice::Current& current = Ice::Current());
      virtual SessionAnnotationLinkPtr linkAnnotation(const AnnotationPtr& addition, const Ice::Current& current = Ice::Current());
      virtual void addSessionAnnotationLinkToBoth(const SessionAnnotationLinkPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
      virtual SessionAnnotationLinksSeq findSessionAnnotationLink(const AnnotationPtr& removal, const Ice::Current& current = Ice::Current());
      virtual void unlinkAnnotation(const AnnotationPtr& removal, const Ice::Current& current = Ice::Current());
      virtual void removeSessionAnnotationLinkFromBoth(const SessionAnnotationLinkPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
       virtual SessionLinkedAnnotationSeq linkedAnnotationList(const Ice::Current& current = Ice::Current());
 };

}}
#endif // SESSIONI_H
