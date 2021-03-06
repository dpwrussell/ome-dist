   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.ice for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef EVENT_ICE
#define EVENT_ICE
#include <omero/model/IObject.ice>
#include <omero/RTypes.ice>
#include <omero/System.ice>
#include <omero/Collections.ice>
module omero {
  module model {
    class Experimenter;
    class ExperimenterGroup;
    class EventType;
    class Event;
    class EventLog;
    class Session;
    class Details;
    ["java:type:java.util.ArrayList"] sequence<omero::model::EventLog> EventLogsSeq;
    ["protected"] class Event
    extends omero::model::IObject
    {
      omero::RString status;
      omero::RString getStatus();
      void setStatus(omero::RString theStatus);
      omero::RTime time;
      omero::RTime getTime();
      void setTime(omero::RTime theTime);
      omero::model::Experimenter experimenter;
      omero::model::Experimenter getExperimenter();
      void setExperimenter(omero::model::Experimenter theExperimenter);
      omero::model::ExperimenterGroup experimenterGroup;
      omero::model::ExperimenterGroup getExperimenterGroup();
      void setExperimenterGroup(omero::model::ExperimenterGroup theExperimenterGroup);
      omero::model::EventType type;
      omero::model::EventType getType();
      void setType(omero::model::EventType theType);
      omero::model::Event containingEvent;
      omero::model::Event getContainingEvent();
      void setContainingEvent(omero::model::Event theContainingEvent);
      EventLogsSeq logsSeq;
      bool logsLoaded;
      /*
       * Unloads the logs collection. Any access to this
       * collection will throw an omero.UnloadedCollectionException.
       *
       * See sizeOfLogs() on how to test for unloaded collections.
       * See reloadLogs() on how to reset the value.
       *
       */
      void unloadLogs();
      int sizeOfLogs();
      EventLogsSeq copyLogs();
      // See language-specific iterator methods
      void addEventLog(EventLog target);
      /*
       * Adds all the members of the EventLogsSeq sequence to
       * the logsSeq field.
       */
      void addAllEventLogSet(EventLogsSeq targets);
      void removeEventLog(EventLog theTarget);
      /*
       * Removes all the members of the EventLogsSeq sequence from
       * the logsSeq field.
       */
      void removeAllEventLogSet(EventLogsSeq targets);
      void clearLogs();

      /*
       * Allows reloading the protected logs collection
       * from another instance of Event. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadLogs(Event toCopy);
      omero::model::Session session;
      omero::model::Session getSession();
      void setSession(omero::model::Session theSession);
    };
  };
};
#endif // EVENT_ICE
