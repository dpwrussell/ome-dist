   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.ice for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef EXPERIMENTERGROUP_ICE
#define EXPERIMENTERGROUP_ICE
#include <omero/model/IObject.ice>
#include <omero/RTypes.ice>
#include <omero/System.ice>
#include <omero/Collections.ice>
module omero {
  module model {
    class GroupExperimenterMap;
    class Experimenter;
    class ExperimenterGroupAnnotationLink;
    class Annotation;
    class Details;
    ["java:type:java.util.ArrayList"] sequence<omero::model::GroupExperimenterMap> ExperimenterGroupGroupExperimenterMapSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::Experimenter> ExperimenterGroupLinkedExperimenterSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::ExperimenterGroupAnnotationLink> ExperimenterGroupAnnotationLinksSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::Annotation> ExperimenterGroupLinkedAnnotationSeq;
    ["protected"] class ExperimenterGroup
    extends omero::model::IObject
    {
      omero::RInt version;
      omero::RInt getVersion();
      void setVersion(omero::RInt theVersion);
      omero::RString name;
      omero::RString getName();
      void setName(omero::RString theName);
      ExperimenterGroupGroupExperimenterMapSeq groupExperimenterMapSeq;
      bool groupExperimenterMapLoaded;
      /*
       * Unloads the groupExperimenterMap collection. Any access to this
       * collection will throw an omero.UnloadedCollectionException.
       *
       * See sizeOfGroupExperimenterMap() on how to test for unloaded collections.
       * See reloadGroupExperimenterMap() on how to reset the value.
       *
       */
      void unloadGroupExperimenterMap();
      int sizeOfGroupExperimenterMap();
      ExperimenterGroupGroupExperimenterMapSeq copyGroupExperimenterMap();
      // See language-specific iterator methods
      void addGroupExperimenterMap(GroupExperimenterMap target);
      /*
       * Adds all the members of the ExperimenterGroupGroupExperimenterMapSeq sequence to
       * the groupExperimenterMapSeq field.
       */
      void addAllGroupExperimenterMapSet(ExperimenterGroupGroupExperimenterMapSeq targets);
      void removeGroupExperimenterMap(GroupExperimenterMap theTarget);
      /*
       * Removes all the members of the ExperimenterGroupGroupExperimenterMapSeq sequence from
       * the groupExperimenterMapSeq field.
       */
      void removeAllGroupExperimenterMapSet(ExperimenterGroupGroupExperimenterMapSeq targets);
      void clearGroupExperimenterMap();

      /*
       * Allows reloading the protected groupExperimenterMap collection
       * from another instance of ExperimenterGroup. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadGroupExperimenterMap(ExperimenterGroup toCopy);
      GroupExperimenterMap linkExperimenter(Experimenter addition);

      /*
       * Add the link to the current instance and if bothSides is true AND
       * the other side of the link is loaded, add the current instance to
       * it as well.
       */
      void addGroupExperimenterMapToBoth(omero::model::GroupExperimenterMap link, bool bothSides);
      ExperimenterGroupGroupExperimenterMapSeq findGroupExperimenterMap(Experimenter removal);
      void unlinkExperimenter(Experimenter removal);

      /*
       * Remove the link from the current instance and if bothSides is true AND
       * the other side of the link is loaded, remove the current instance from
       * it as well.
       */
      void removeGroupExperimenterMapFromBoth(omero::model::GroupExperimenterMap link, bool bothSides);
      ExperimenterGroupLinkedExperimenterSeq linkedExperimenterList();
      ExperimenterGroupAnnotationLinksSeq annotationLinksSeq;
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
      ExperimenterGroupAnnotationLinksSeq copyAnnotationLinks();
      // See language-specific iterator methods
      void addExperimenterGroupAnnotationLink(ExperimenterGroupAnnotationLink target);
      /*
       * Adds all the members of the ExperimenterGroupAnnotationLinksSeq sequence to
       * the annotationLinksSeq field.
       */
      void addAllExperimenterGroupAnnotationLinkSet(ExperimenterGroupAnnotationLinksSeq targets);
      void removeExperimenterGroupAnnotationLink(ExperimenterGroupAnnotationLink theTarget);
      /*
       * Removes all the members of the ExperimenterGroupAnnotationLinksSeq sequence from
       * the annotationLinksSeq field.
       */
      void removeAllExperimenterGroupAnnotationLinkSet(ExperimenterGroupAnnotationLinksSeq targets);
      void clearAnnotationLinks();

      /*
       * Allows reloading the protected annotationLinks collection
       * from another instance of ExperimenterGroup. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadAnnotationLinks(ExperimenterGroup toCopy);
      omero::sys::CountMap getAnnotationLinksCountPerOwner();
      ExperimenterGroupAnnotationLink linkAnnotation(Annotation addition);

      /*
       * Add the link to the current instance and if bothSides is true AND
       * the other side of the link is loaded, add the current instance to
       * it as well.
       */
      void addExperimenterGroupAnnotationLinkToBoth(omero::model::ExperimenterGroupAnnotationLink link, bool bothSides);
      ExperimenterGroupAnnotationLinksSeq findExperimenterGroupAnnotationLink(Annotation removal);
      void unlinkAnnotation(Annotation removal);

      /*
       * Remove the link from the current instance and if bothSides is true AND
       * the other side of the link is loaded, remove the current instance from
       * it as well.
       */
      void removeExperimenterGroupAnnotationLinkFromBoth(omero::model::ExperimenterGroupAnnotationLink link, bool bothSides);
      ExperimenterGroupLinkedAnnotationSeq linkedAnnotationList();
      omero::RString description;
      omero::RString getDescription();
      void setDescription(omero::RString theDescription);
    };
  };
};
#endif // EXPERIMENTERGROUP_ICE