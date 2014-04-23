   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.ice for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef PLANEINFO_ICE
#define PLANEINFO_ICE
#include <omero/model/IObject.ice>
#include <omero/RTypes.ice>
#include <omero/System.ice>
#include <omero/Collections.ice>
module omero {
  module model {
    class Pixels;
    class PlaneInfoAnnotationLink;
    class Annotation;
    class Details;
    ["java:type:java.util.ArrayList"] sequence<omero::model::PlaneInfoAnnotationLink> PlaneInfoAnnotationLinksSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::Annotation> PlaneInfoLinkedAnnotationSeq;
    ["protected"] class PlaneInfo
    extends omero::model::IObject
    {
      omero::RInt version;
      omero::RInt getVersion();
      void setVersion(omero::RInt theVersion);
      omero::model::Pixels pixels;
      omero::model::Pixels getPixels();
      void setPixels(omero::model::Pixels thePixels);
      omero::RInt theZ;
      omero::RInt getTheZ();
      void setTheZ(omero::RInt theTheZ);
      omero::RInt theC;
      omero::RInt getTheC();
      void setTheC(omero::RInt theTheC);
      omero::RInt theT;
      omero::RInt getTheT();
      void setTheT(omero::RInt theTheT);
      omero::RDouble deltaT;
      omero::RDouble getDeltaT();
      void setDeltaT(omero::RDouble theDeltaT);
      omero::RDouble positionX;
      omero::RDouble getPositionX();
      void setPositionX(omero::RDouble thePositionX);
      omero::RDouble positionY;
      omero::RDouble getPositionY();
      void setPositionY(omero::RDouble thePositionY);
      omero::RDouble positionZ;
      omero::RDouble getPositionZ();
      void setPositionZ(omero::RDouble thePositionZ);
      omero::RDouble exposureTime;
      omero::RDouble getExposureTime();
      void setExposureTime(omero::RDouble theExposureTime);
      PlaneInfoAnnotationLinksSeq annotationLinksSeq;
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
      PlaneInfoAnnotationLinksSeq copyAnnotationLinks();
      // See language-specific iterator methods
      void addPlaneInfoAnnotationLink(PlaneInfoAnnotationLink target);
      /*
       * Adds all the members of the PlaneInfoAnnotationLinksSeq sequence to
       * the annotationLinksSeq field.
       */
      void addAllPlaneInfoAnnotationLinkSet(PlaneInfoAnnotationLinksSeq targets);
      void removePlaneInfoAnnotationLink(PlaneInfoAnnotationLink theTarget);
      /*
       * Removes all the members of the PlaneInfoAnnotationLinksSeq sequence from
       * the annotationLinksSeq field.
       */
      void removeAllPlaneInfoAnnotationLinkSet(PlaneInfoAnnotationLinksSeq targets);
      void clearAnnotationLinks();

      /*
       * Allows reloading the protected annotationLinks collection
       * from another instance of PlaneInfo. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadAnnotationLinks(PlaneInfo toCopy);
      omero::sys::CountMap getAnnotationLinksCountPerOwner();
      PlaneInfoAnnotationLink linkAnnotation(Annotation addition);

      /*
       * Add the link to the current instance and if bothSides is true AND
       * the other side of the link is loaded, add the current instance to
       * it as well.
       */
      void addPlaneInfoAnnotationLinkToBoth(omero::model::PlaneInfoAnnotationLink link, bool bothSides);
      PlaneInfoAnnotationLinksSeq findPlaneInfoAnnotationLink(Annotation removal);
      void unlinkAnnotation(Annotation removal);

      /*
       * Remove the link from the current instance and if bothSides is true AND
       * the other side of the link is loaded, remove the current instance from
       * it as well.
       */
      void removePlaneInfoAnnotationLinkFromBoth(omero::model::PlaneInfoAnnotationLink link, bool bothSides);
      PlaneInfoLinkedAnnotationSeq linkedAnnotationList();
    };
  };
};
#endif // PLANEINFO_ICE
