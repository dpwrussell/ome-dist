   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.ice for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef NAMESPACE_ICE
#define NAMESPACE_ICE
#include <omero/model/IObject.ice>
#include <omero/RTypes.ice>
#include <omero/System.ice>
#include <omero/Collections.ice>
module omero {
  module model {
    class NamespaceAnnotationLink;
    class Annotation;
    class Details;
    ["java:type:java.util.ArrayList"] sequence<omero::model::NamespaceAnnotationLink> NamespaceAnnotationLinksSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::Annotation> NamespaceLinkedAnnotationSeq;
    ["protected"] class Namespace
    extends omero::model::IObject
    {
      omero::RInt version;
      omero::RInt getVersion();
      void setVersion(omero::RInt theVersion);
      omero::api::StringArray keywords;
      omero::api::StringArray getKeywords();
      void setKeywords(omero::api::StringArray theKeywords);
      omero::RBool multivalued;
      omero::RBool getMultivalued();
      void setMultivalued(omero::RBool theMultivalued);
      omero::RBool display;
      omero::RBool getDisplay();
      void setDisplay(omero::RBool theDisplay);
      NamespaceAnnotationLinksSeq annotationLinksSeq;
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
      NamespaceAnnotationLinksSeq copyAnnotationLinks();
      // See language-specific iterator methods
      void addNamespaceAnnotationLink(NamespaceAnnotationLink target);
      /*
       * Adds all the members of the NamespaceAnnotationLinksSeq sequence to
       * the annotationLinksSeq field.
       */
      void addAllNamespaceAnnotationLinkSet(NamespaceAnnotationLinksSeq targets);
      void removeNamespaceAnnotationLink(NamespaceAnnotationLink theTarget);
      /*
       * Removes all the members of the NamespaceAnnotationLinksSeq sequence from
       * the annotationLinksSeq field.
       */
      void removeAllNamespaceAnnotationLinkSet(NamespaceAnnotationLinksSeq targets);
      void clearAnnotationLinks();

      /*
       * Allows reloading the protected annotationLinks collection
       * from another instance of Namespace. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadAnnotationLinks(Namespace toCopy);
      omero::sys::CountMap getAnnotationLinksCountPerOwner();
      NamespaceAnnotationLink linkAnnotation(Annotation addition);

      /*
       * Add the link to the current instance and if bothSides is true AND
       * the other side of the link is loaded, add the current instance to
       * it as well.
       */
      void addNamespaceAnnotationLinkToBoth(omero::model::NamespaceAnnotationLink link, bool bothSides);
      NamespaceAnnotationLinksSeq findNamespaceAnnotationLink(Annotation removal);
      void unlinkAnnotation(Annotation removal);

      /*
       * Remove the link from the current instance and if bothSides is true AND
       * the other side of the link is loaded, remove the current instance from
       * it as well.
       */
      void removeNamespaceAnnotationLinkFromBoth(omero::model::NamespaceAnnotationLink link, bool bothSides);
      NamespaceLinkedAnnotationSeq linkedAnnotationList();
      omero::RString name;
      omero::RString getName();
      void setName(omero::RString theName);
      omero::RString description;
      omero::RString getDescription();
      void setDescription(omero::RString theDescription);
    };
  };
};
#endif // NAMESPACE_ICE
