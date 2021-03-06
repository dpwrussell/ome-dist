   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.ice for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef PLATE_ICE
#define PLATE_ICE
#include <omero/model/IObject.ice>
#include <omero/RTypes.ice>
#include <omero/System.ice>
#include <omero/Collections.ice>
module omero {
  module model {
    class ScreenPlateLink;
    class Screen;
    class Well;
    class PlateAcquisition;
    class PlateAnnotationLink;
    class Annotation;
    class Details;
    ["java:type:java.util.ArrayList"] sequence<omero::model::ScreenPlateLink> PlateScreenLinksSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::Screen> PlateLinkedScreenSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::Well> PlateWellsSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::PlateAcquisition> PlatePlateAcquisitionsSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::PlateAnnotationLink> PlateAnnotationLinksSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::Annotation> PlateLinkedAnnotationSeq;
    ["protected"] class Plate
    extends omero::model::IObject
    {
      omero::RInt version;
      omero::RInt getVersion();
      void setVersion(omero::RInt theVersion);
      omero::RInt defaultSample;
      omero::RInt getDefaultSample();
      void setDefaultSample(omero::RInt theDefaultSample);
      omero::RString columnNamingConvention;
      omero::RString getColumnNamingConvention();
      void setColumnNamingConvention(omero::RString theColumnNamingConvention);
      omero::RString rowNamingConvention;
      omero::RString getRowNamingConvention();
      void setRowNamingConvention(omero::RString theRowNamingConvention);
      omero::RDouble wellOriginX;
      omero::RDouble getWellOriginX();
      void setWellOriginX(omero::RDouble theWellOriginX);
      omero::RDouble wellOriginY;
      omero::RDouble getWellOriginY();
      void setWellOriginY(omero::RDouble theWellOriginY);
      omero::RInt rows;
      omero::RInt getRows();
      void setRows(omero::RInt theRows);
      omero::RInt columns;
      omero::RInt getColumns();
      void setColumns(omero::RInt theColumns);
      omero::RString status;
      omero::RString getStatus();
      void setStatus(omero::RString theStatus);
      omero::RString externalIdentifier;
      omero::RString getExternalIdentifier();
      void setExternalIdentifier(omero::RString theExternalIdentifier);
      PlateScreenLinksSeq screenLinksSeq;
      bool screenLinksLoaded;
      omero::sys::CountMap screenLinksCountPerOwner;
      /*
       * Unloads the screenLinks collection. Any access to this
       * collection will throw an omero.UnloadedCollectionException.
       *
       * See sizeOfScreenLinks() on how to test for unloaded collections.
       * See reloadScreenLinks() on how to reset the value.
       *
       */
      void unloadScreenLinks();
      int sizeOfScreenLinks();
      PlateScreenLinksSeq copyScreenLinks();
      // See language-specific iterator methods
      void addScreenPlateLink(ScreenPlateLink target);
      /*
       * Adds all the members of the PlateScreenLinksSeq sequence to
       * the screenLinksSeq field.
       */
      void addAllScreenPlateLinkSet(PlateScreenLinksSeq targets);
      void removeScreenPlateLink(ScreenPlateLink theTarget);
      /*
       * Removes all the members of the PlateScreenLinksSeq sequence from
       * the screenLinksSeq field.
       */
      void removeAllScreenPlateLinkSet(PlateScreenLinksSeq targets);
      void clearScreenLinks();

      /*
       * Allows reloading the protected screenLinks collection
       * from another instance of Plate. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadScreenLinks(Plate toCopy);
      omero::sys::CountMap getScreenLinksCountPerOwner();
      ScreenPlateLink linkScreen(Screen addition);

      /*
       * Add the link to the current instance and if bothSides is true AND
       * the other side of the link is loaded, add the current instance to
       * it as well.
       */
      void addScreenPlateLinkToBoth(omero::model::ScreenPlateLink link, bool bothSides);
      PlateScreenLinksSeq findScreenPlateLink(Screen removal);
      void unlinkScreen(Screen removal);

      /*
       * Remove the link from the current instance and if bothSides is true AND
       * the other side of the link is loaded, remove the current instance from
       * it as well.
       */
      void removeScreenPlateLinkFromBoth(omero::model::ScreenPlateLink link, bool bothSides);
      PlateLinkedScreenSeq linkedScreenList();
      PlateWellsSeq wellsSeq;
      bool wellsLoaded;
      /*
       * Unloads the wells collection. Any access to this
       * collection will throw an omero.UnloadedCollectionException.
       *
       * See sizeOfWells() on how to test for unloaded collections.
       * See reloadWells() on how to reset the value.
       *
       */
      void unloadWells();
      int sizeOfWells();
      PlateWellsSeq copyWells();
      // See language-specific iterator methods
      void addWell(Well target);
      /*
       * Adds all the members of the PlateWellsSeq sequence to
       * the wellsSeq field.
       */
      void addAllWellSet(PlateWellsSeq targets);
      void removeWell(Well theTarget);
      /*
       * Removes all the members of the PlateWellsSeq sequence from
       * the wellsSeq field.
       */
      void removeAllWellSet(PlateWellsSeq targets);
      void clearWells();

      /*
       * Allows reloading the protected wells collection
       * from another instance of Plate. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadWells(Plate toCopy);
      PlatePlateAcquisitionsSeq plateAcquisitionsSeq;
      bool plateAcquisitionsLoaded;
      /*
       * Unloads the plateAcquisitions collection. Any access to this
       * collection will throw an omero.UnloadedCollectionException.
       *
       * See sizeOfPlateAcquisitions() on how to test for unloaded collections.
       * See reloadPlateAcquisitions() on how to reset the value.
       *
       */
      void unloadPlateAcquisitions();
      int sizeOfPlateAcquisitions();
      PlatePlateAcquisitionsSeq copyPlateAcquisitions();
      // See language-specific iterator methods
      void addPlateAcquisition(PlateAcquisition target);
      /*
       * Adds all the members of the PlatePlateAcquisitionsSeq sequence to
       * the plateAcquisitionsSeq field.
       */
      void addAllPlateAcquisitionSet(PlatePlateAcquisitionsSeq targets);
      void removePlateAcquisition(PlateAcquisition theTarget);
      /*
       * Removes all the members of the PlatePlateAcquisitionsSeq sequence from
       * the plateAcquisitionsSeq field.
       */
      void removeAllPlateAcquisitionSet(PlatePlateAcquisitionsSeq targets);
      void clearPlateAcquisitions();

      /*
       * Allows reloading the protected plateAcquisitions collection
       * from another instance of Plate. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadPlateAcquisitions(Plate toCopy);
      PlateAnnotationLinksSeq annotationLinksSeq;
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
      PlateAnnotationLinksSeq copyAnnotationLinks();
      // See language-specific iterator methods
      void addPlateAnnotationLink(PlateAnnotationLink target);
      /*
       * Adds all the members of the PlateAnnotationLinksSeq sequence to
       * the annotationLinksSeq field.
       */
      void addAllPlateAnnotationLinkSet(PlateAnnotationLinksSeq targets);
      void removePlateAnnotationLink(PlateAnnotationLink theTarget);
      /*
       * Removes all the members of the PlateAnnotationLinksSeq sequence from
       * the annotationLinksSeq field.
       */
      void removeAllPlateAnnotationLinkSet(PlateAnnotationLinksSeq targets);
      void clearAnnotationLinks();

      /*
       * Allows reloading the protected annotationLinks collection
       * from another instance of Plate. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadAnnotationLinks(Plate toCopy);
      omero::sys::CountMap getAnnotationLinksCountPerOwner();
      PlateAnnotationLink linkAnnotation(Annotation addition);

      /*
       * Add the link to the current instance and if bothSides is true AND
       * the other side of the link is loaded, add the current instance to
       * it as well.
       */
      void addPlateAnnotationLinkToBoth(omero::model::PlateAnnotationLink link, bool bothSides);
      PlateAnnotationLinksSeq findPlateAnnotationLink(Annotation removal);
      void unlinkAnnotation(Annotation removal);

      /*
       * Remove the link from the current instance and if bothSides is true AND
       * the other side of the link is loaded, remove the current instance from
       * it as well.
       */
      void removePlateAnnotationLinkFromBoth(omero::model::PlateAnnotationLink link, bool bothSides);
      PlateLinkedAnnotationSeq linkedAnnotationList();
      omero::RString name;
      omero::RString getName();
      void setName(omero::RString theName);
      omero::RString description;
      omero::RString getDescription();
      void setDescription(omero::RString theDescription);
    };
  };
};
#endif // PLATE_ICE
