   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.ice for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef EVENTTYPE_ICE
#define EVENTTYPE_ICE
#include <omero/model/IObject.ice>
#include <omero/RTypes.ice>
#include <omero/System.ice>
#include <omero/Collections.ice>
module omero {
  module model {

    module enums {
        const string EventTypeImport = "Import";
        const string EventTypeInternal = "Internal";
        const string EventTypeShoola = "Shoola";
        const string EventTypeUser = "User";
        const string EventTypeTask = "Task";
        const string EventTypeTest = "Test";
        const string EventTypeProcessing = "Processing";
        const string EventTypeFullText = "FullText";
        const string EventTypeSessions = "Sessions";
    };

    class Details;
    ["protected"] class EventType
    extends omero::model::IObject
    {
      omero::RString value;
      omero::RString getValue();
      void setValue(omero::RString theValue);
    };
  };
};
#endif // EVENTTYPE_ICE
