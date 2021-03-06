   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.ice for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef SCREEN_ICE
#define SCREEN_ICE
#include <omero/model/IObject.ice>
#include <omero/RTypes.ice>
#include <omero/System.ice>
#include <omero/Collections.ice>
module omero {
  module model {
    class ScreenPlateLink;
    class Plate;
    class Reagent;
    class ScreenAnnotationLink;
    class Annotation;
    class Details;
    ["java:type:java.util.ArrayList"] sequence<omero::model::ScreenPlateLink> ScreenPlateLinksSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::Plate> ScreenLinkedPlateSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::Reagent> ScreenReagentsSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::ScreenAnnotationLink> ScreenAnnotationLinksSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::Annotation> ScreenLinkedAnnotationSeq;
    ["protected"] class Screen
    extends omero::model::IObject
    {
      omero::RInt version;
      omero::RInt getVersion();
      void setVersion(omero::RInt theVersion);
      omero::RString type;
      omero::RString getType();
      void setType(omero::RString theType);
      omero::RString protocolIdentifier;
      omero::RString getProtocolIdentifier();
      void setProtocolIdentifier(omero::RString theProtocolIdentifier);
      omero::RString protocolDescription;
      omero::RString getProtocolDescription();
      void setProtocolDescription(omero::RString theProtocolDescription);
      omero::RString reagentSetIdentifier;
      omero::RString getReagentSetIdentifier();
      void setReagentSetIdentifier(omero::RString theReagentSetIdentifier);
      omero::RString reagentSetDescription;
      omero::RString getReagentSetDescription();
      void setReagentSetDescription(omero::RString theReagentSetDescription);
      ScreenPlateLinksSeq plateLinksSeq;
      bool plateLinksLoaded;
      omero::sys::CountMap plateLinksCountPerOwner;
      /*
       * Unloads the plateLinks collection. Any access to this
       * collection will throw an omero.UnloadedCollectionException.
       *
       * See sizeOfPlateLinks() on how to test for unloaded collections.
       * See reloadPlateLinks() on how to reset the value.
       *
       */
      void unloadPlateLinks();
      int sizeOfPlateLinks();
      ScreenPlateLinksSeq copyPlateLinks();
      // See language-specific iterator methods
      void addScreenPlateLink(ScreenPlateLink target);
      /*
       * Adds all the members of the ScreenPlateLinksSeq sequence to
       * the plateLinksSeq field.
       */
      void addAllScreenPlateLinkSet(ScreenPlateLinksSeq targets);
      void removeScreenPlateLink(ScreenPlateLink theTarget);
      /*
       * Removes all the members of the ScreenPlateLinksSeq sequence from
       * the plateLinksSeq field.
       */
      void removeAllScreenPlateLinkSet(ScreenPlateLinksSeq targets);
      void clearPlateLinks();

      /*
       * Allows reloading the protected plateLinks collection
       * from another instance of Screen. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadPlateLinks(Screen toCopy);
      omero::sys::CountMap getPlateLinksCountPerOwner();
      ScreenPlateLink linkPlate(Plate addition);

      /*
       * Add the link to the current instance and if bothSides is true AND
       * the other side of the link is loaded, add the current instance to
       * it as well.
       */
      void addScreenPlateLinkToBoth(omero::model::ScreenPlateLink link, bool bothSides);
      ScreenPlateLinksSeq findScreenPlateLink(Plate removal);
      void unlinkPlate(Plate removal);

      /*
       * Remove the link from the current instance and if bothSides is true AND
       * the other side of the link is loaded, remove the current instance from
       * it as well.
       */
      void removeScreenPlateLinkFromBoth(omero::model::ScreenPlateLink link, bool bothSides);
      ScreenLinkedPlateSeq linkedPlateList();
      ScreenReagentsSeq reagentsSeq;
      bool reagentsLoaded;
      /*
       * Unloads the reagents collection. Any access to this
       * collection will throw an omero.UnloadedCollectionException.
       *
       * See sizeOfReagents() on how to test for unloaded collections.
       * See reloadReagents() on how to reset the value.
       *
       */
      void unloadReagents();
      int sizeOfReagents();
      ScreenReagentsSeq copyReagents();
      // See language-specific iterator methods
      void addReagent(Reagent target);
      /*
       * Adds all the members of the ScreenReagentsSeq sequence to
       * the reagentsSeq field.
       */
      void addAllReagentSet(ScreenReagentsSeq targets);
      void removeReagent(Reagent theTarget);
      /*
       * Removes all the members of the ScreenReagentsSeq sequence from
       * the reagentsSeq field.
       */
      void removeAllReagentSet(ScreenReagentsSeq targets);
      void clearReagents();

      /*
       * Allows reloading the protected reagents collection
       * from another instance of Screen. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadReagents(Screen toCopy);
      ScreenAnnotationLinksSeq annotationLinksSeq;
      bool annotationLinksLoaded;
      omero::sys::CountMap annotationLinksCountPerOwner;
      /*
       * Unloads the annotationLinks collection. Any access to this
       * collection will throw an omero.UnloadedCollectionException.
       *
       * See sizeOfAnnotationLinks() on how to test for unloaded collections.
       * See reloadAnnotationLinks() on how to reset the value.
       *
       */
      void unloadAnnotationLinks();
      int sizeOfAnnotationLinks();
      ScreenAnnotationLinksSeq copyAnnotationLinks();
      // See language-specific iterator methods
      void addScreenAnnotationLink(ScreenAnnotationLink target);
      /*
       * Adds all the members of the ScreenAnnotationLinksSeq sequence to
       * the annotationLinksSeq field.
       */
      void addAllScreenAnnotationLinkSet(ScreenAnnotationLinksSeq targets);
      void removeScreenAnnotationLink(ScreenAnnotationLink theTarget);
      /*
       * Removes all the members of the ScreenAnnotationLinksSeq sequence from
       * the annotationLinksSeq field.
       */
      void removeAllScreenAnnotationLinkSet(ScreenAnnotationLinksSeq targets);
      void clearAnnotationLinks();

      /*
       * Allows reloading the protected annotationLinks collection
       * from another instance of Screen. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadAnnotationLinks(Screen toCopy);
      omero::sys::CountMap getAnnotationLinksCountPerOwner();
      ScreenAnnotationLink linkAnnotation(Annotation addition);

      /*
       * Add the link to the current instance and if bothSides is true AND
       * the other side of the link is loaded, add the current instance to
       * it as well.
       */
      void addScreenAnnotationLinkToBoth(omero::model::ScreenAnnotationLink link, bool bothSides);
      ScreenAnnotationLinksSeq findScreenAnnotationLink(Annotation removal);
      void unlinkAnnotation(Annotation removal);

      /*
       * Remove the link from the current instance and if bothSides is true AND
       * the other side of the link is loaded, remove the current instance from
       * it as well.
       */
      void removeScreenAnnotationLinkFromBoth(omero::model::ScreenAnnotationLink link, bool bothSides);
      ScreenLinkedAnnotationSeq linkedAnnotationList();
      omero::RString name;
      omero::RString getName();
      void setName(omero::RString theName);
      omero::RString description;
      omero::RString getDescription();
      void setDescription(omero::RString theDescription);
    };
  };
};
#endif // SCREEN_ICE
