   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.ice for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef REAGENT_ICE
#define REAGENT_ICE
#include <omero/model/IObject.ice>
#include <omero/RTypes.ice>
#include <omero/System.ice>
#include <omero/Collections.ice>
module omero {
  module model {
    class Screen;
    class WellReagentLink;
    class Well;
    class ReagentAnnotationLink;
    class Annotation;
    class Details;
    ["java:type:java.util.ArrayList"] sequence<omero::model::WellReagentLink> ReagentWellLinksSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::Well> ReagentLinkedWellSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::ReagentAnnotationLink> ReagentAnnotationLinksSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::Annotation> ReagentLinkedAnnotationSeq;
    ["protected"] class Reagent
    extends omero::model::IObject
    {
      omero::RInt version;
      omero::RInt getVersion();
      void setVersion(omero::RInt theVersion);
      omero::RString name;
      omero::RString getName();
      void setName(omero::RString theName);
      omero::RString reagentIdentifier;
      omero::RString getReagentIdentifier();
      void setReagentIdentifier(omero::RString theReagentIdentifier);
      omero::model::Screen screen;
      omero::model::Screen getScreen();
      void setScreen(omero::model::Screen theScreen);
      ReagentWellLinksSeq wellLinksSeq;
      bool wellLinksLoaded;
      omero::sys::CountMap wellLinksCountPerOwner;
      /*
       * Unloads the wellLinks collection. Any access to this
       * collection will throw an omero.UnloadedCollectionException.
       *
       * See sizeOfWellLinks() on how to test for unloaded collections.
       * See reloadWellLinks() on how to reset the value.
       *
       */
      void unloadWellLinks();
      int sizeOfWellLinks();
      ReagentWellLinksSeq copyWellLinks();
      // See language-specific iterator methods
      void addWellReagentLink(WellReagentLink target);
      /*
       * Adds all the members of the ReagentWellLinksSeq sequence to
       * the wellLinksSeq field.
       */
      void addAllWellReagentLinkSet(ReagentWellLinksSeq targets);
      void removeWellReagentLink(WellReagentLink theTarget);
      /*
       * Removes all the members of the ReagentWellLinksSeq sequence from
       * the wellLinksSeq field.
       */
      void removeAllWellReagentLinkSet(ReagentWellLinksSeq targets);
      void clearWellLinks();

      /*
       * Allows reloading the protected wellLinks collection
       * from another instance of Reagent. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadWellLinks(Reagent toCopy);
      omero::sys::CountMap getWellLinksCountPerOwner();
      WellReagentLink linkWell(Well addition);

      /*
       * Add the link to the current instance and if bothSides is true AND
       * the other side of the link is loaded, add the current instance to
       * it as well.
       */
      void addWellReagentLinkToBoth(omero::model::WellReagentLink link, bool bothSides);
      ReagentWellLinksSeq findWellReagentLink(Well removal);
      void unlinkWell(Well removal);

      /*
       * Remove the link from the current instance and if bothSides is true AND
       * the other side of the link is loaded, remove the current instance from
       * it as well.
       */
      void removeWellReagentLinkFromBoth(omero::model::WellReagentLink link, bool bothSides);
      ReagentLinkedWellSeq linkedWellList();
      ReagentAnnotationLinksSeq annotationLinksSeq;
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
      ReagentAnnotationLinksSeq copyAnnotationLinks();
      // See language-specific iterator methods
      void addReagentAnnotationLink(ReagentAnnotationLink target);
      /*
       * Adds all the members of the ReagentAnnotationLinksSeq sequence to
       * the annotationLinksSeq field.
       */
      void addAllReagentAnnotationLinkSet(ReagentAnnotationLinksSeq targets);
      void removeReagentAnnotationLink(ReagentAnnotationLink theTarget);
      /*
       * Removes all the members of the ReagentAnnotationLinksSeq sequence from
       * the annotationLinksSeq field.
       */
      void removeAllReagentAnnotationLinkSet(ReagentAnnotationLinksSeq targets);
      void clearAnnotationLinks();

      /*
       * Allows reloading the protected annotationLinks collection
       * from another instance of Reagent. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadAnnotationLinks(Reagent toCopy);
      omero::sys::CountMap getAnnotationLinksCountPerOwner();
      ReagentAnnotationLink linkAnnotation(Annotation addition);

      /*
       * Add the link to the current instance and if bothSides is true AND
       * the other side of the link is loaded, add the current instance to
       * it as well.
       */
      void addReagentAnnotationLinkToBoth(omero::model::ReagentAnnotationLink link, bool bothSides);
      ReagentAnnotationLinksSeq findReagentAnnotationLink(Annotation removal);
      void unlinkAnnotation(Annotation removal);

      /*
       * Remove the link from the current instance and if bothSides is true AND
       * the other side of the link is loaded, remove the current instance from
       * it as well.
       */
      void removeReagentAnnotationLinkFromBoth(omero::model::ReagentAnnotationLink link, bool bothSides);
      ReagentLinkedAnnotationSeq linkedAnnotationList();
      omero::RString description;
      omero::RString getDescription();
      void setDescription(omero::RString theDescription);
    };
  };
};
#endif // REAGENT_ICE
