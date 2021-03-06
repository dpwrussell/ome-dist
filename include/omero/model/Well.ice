   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.ice for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef WELL_ICE
#define WELL_ICE
#include <omero/model/IObject.ice>
#include <omero/RTypes.ice>
#include <omero/System.ice>
#include <omero/Collections.ice>
module omero {
  module model {
    class WellReagentLink;
    class Reagent;
    class WellSample;
    class Plate;
    class WellAnnotationLink;
    class Annotation;
    class Details;
    ["java:type:java.util.ArrayList"] sequence<omero::model::WellReagentLink> WellReagentLinksSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::Reagent> WellLinkedReagentSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::WellSample> WellWellSamplesSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::WellAnnotationLink> WellAnnotationLinksSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::Annotation> WellLinkedAnnotationSeq;
    ["protected"] class Well
    extends omero::model::IObject
    {
      omero::RInt version;
      omero::RInt getVersion();
      void setVersion(omero::RInt theVersion);
      omero::RString status;
      omero::RString getStatus();
      void setStatus(omero::RString theStatus);
      omero::RInt column;
      omero::RInt getColumn();
      void setColumn(omero::RInt theColumn);
      omero::RInt row;
      omero::RInt getRow();
      void setRow(omero::RInt theRow);
      omero::RInt red;
      omero::RInt getRed();
      void setRed(omero::RInt theRed);
      omero::RInt green;
      omero::RInt getGreen();
      void setGreen(omero::RInt theGreen);
      omero::RInt blue;
      omero::RInt getBlue();
      void setBlue(omero::RInt theBlue);
      omero::RInt alpha;
      omero::RInt getAlpha();
      void setAlpha(omero::RInt theAlpha);
      WellReagentLinksSeq reagentLinksSeq;
      bool reagentLinksLoaded;
      omero::sys::CountMap reagentLinksCountPerOwner;
      /*
       * Unloads the reagentLinks collection. Any access to this
       * collection will throw an omero.UnloadedCollectionException.
       *
       * See sizeOfReagentLinks() on how to test for unloaded collections.
       * See reloadReagentLinks() on how to reset the value.
       *
       */
      void unloadReagentLinks();
      int sizeOfReagentLinks();
      WellReagentLinksSeq copyReagentLinks();
      // See language-specific iterator methods
      void addWellReagentLink(WellReagentLink target);
      /*
       * Adds all the members of the WellReagentLinksSeq sequence to
       * the reagentLinksSeq field.
       */
      void addAllWellReagentLinkSet(WellReagentLinksSeq targets);
      void removeWellReagentLink(WellReagentLink theTarget);
      /*
       * Removes all the members of the WellReagentLinksSeq sequence from
       * the reagentLinksSeq field.
       */
      void removeAllWellReagentLinkSet(WellReagentLinksSeq targets);
      void clearReagentLinks();

      /*
       * Allows reloading the protected reagentLinks collection
       * from another instance of Well. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadReagentLinks(Well toCopy);
      omero::sys::CountMap getReagentLinksCountPerOwner();
      WellReagentLink linkReagent(Reagent addition);

      /*
       * Add the link to the current instance and if bothSides is true AND
       * the other side of the link is loaded, add the current instance to
       * it as well.
       */
      void addWellReagentLinkToBoth(omero::model::WellReagentLink link, bool bothSides);
      WellReagentLinksSeq findWellReagentLink(Reagent removal);
      void unlinkReagent(Reagent removal);

      /*
       * Remove the link from the current instance and if bothSides is true AND
       * the other side of the link is loaded, remove the current instance from
       * it as well.
       */
      void removeWellReagentLinkFromBoth(omero::model::WellReagentLink link, bool bothSides);
      WellLinkedReagentSeq linkedReagentList();
      omero::RString externalDescription;
      omero::RString getExternalDescription();
      void setExternalDescription(omero::RString theExternalDescription);
      omero::RString externalIdentifier;
      omero::RString getExternalIdentifier();
      void setExternalIdentifier(omero::RString theExternalIdentifier);
      omero::RString type;
      omero::RString getType();
      void setType(omero::RString theType);
      WellWellSamplesSeq wellSamplesSeq;
      bool wellSamplesLoaded;
      /*
       * Unloads the wellSamples collection. Any access to this
       * collection will throw an omero.UnloadedCollectionException.
       *
       * See sizeOfWellSamples() on how to test for unloaded collections.
       * See reloadWellSamples() on how to reset the value.
       *
       */
      void unloadWellSamples();
      int sizeOfWellSamples();
      WellWellSamplesSeq copyWellSamples();
      // See language-specific iterator methods
      void addWellSample(WellSample target);
      /*
       * Adds all the members of the WellWellSamplesSeq sequence to
       * the wellSamplesSeq field.
       */
      void addAllWellSampleSet(WellWellSamplesSeq targets);
      void removeWellSample(WellSample theTarget);
      /*
       * Removes all the members of the WellWellSamplesSeq sequence from
       * the wellSamplesSeq field.
       */
      void removeAllWellSampleSet(WellWellSamplesSeq targets);
      void clearWellSamples();

      /*
       * Allows reloading the protected wellSamples collection
       * from another instance of Well. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadWellSamples(Well toCopy);
      WellSample getWellSample(int index);
      WellSample setWellSample(int index, WellSample theElement);
      WellSample getPrimaryWellSample();
      WellSample setPrimaryWellSample(WellSample theElement);
      omero::model::Plate plate;
      omero::model::Plate getPlate();
      void setPlate(omero::model::Plate thePlate);
      WellAnnotationLinksSeq annotationLinksSeq;
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
      WellAnnotationLinksSeq copyAnnotationLinks();
      // See language-specific iterator methods
      void addWellAnnotationLink(WellAnnotationLink target);
      /*
       * Adds all the members of the WellAnnotationLinksSeq sequence to
       * the annotationLinksSeq field.
       */
      void addAllWellAnnotationLinkSet(WellAnnotationLinksSeq targets);
      void removeWellAnnotationLink(WellAnnotationLink theTarget);
      /*
       * Removes all the members of the WellAnnotationLinksSeq sequence from
       * the annotationLinksSeq field.
       */
      void removeAllWellAnnotationLinkSet(WellAnnotationLinksSeq targets);
      void clearAnnotationLinks();

      /*
       * Allows reloading the protected annotationLinks collection
       * from another instance of Well. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadAnnotationLinks(Well toCopy);
      omero::sys::CountMap getAnnotationLinksCountPerOwner();
      WellAnnotationLink linkAnnotation(Annotation addition);

      /*
       * Add the link to the current instance and if bothSides is true AND
       * the other side of the link is loaded, add the current instance to
       * it as well.
       */
      void addWellAnnotationLinkToBoth(omero::model::WellAnnotationLink link, bool bothSides);
      WellAnnotationLinksSeq findWellAnnotationLink(Annotation removal);
      void unlinkAnnotation(Annotation removal);

      /*
       * Remove the link from the current instance and if bothSides is true AND
       * the other side of the link is loaded, remove the current instance from
       * it as well.
       */
      void removeWellAnnotationLinkFromBoth(omero::model::WellAnnotationLink link, bool bothSides);
      WellLinkedAnnotationSeq linkedAnnotationList();
    };
  };
};
#endif // WELL_ICE
