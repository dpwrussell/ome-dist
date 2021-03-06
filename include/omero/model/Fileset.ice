   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.ice for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef FILESET_ICE
#define FILESET_ICE
#include <omero/model/IObject.ice>
#include <omero/RTypes.ice>
#include <omero/System.ice>
#include <omero/Collections.ice>
module omero {
  module model {
    class FilesetEntry;
    class Image;
    class FilesetJobLink;
    class Job;
    class FilesetAnnotationLink;
    class Annotation;
    class Details;
    ["java:type:java.util.ArrayList"] sequence<omero::model::FilesetEntry> FilesetUsedFilesSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::Image> FilesetImagesSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::FilesetJobLink> FilesetJobLinksSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::Job> FilesetLinkedJobSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::FilesetAnnotationLink> FilesetAnnotationLinksSeq;
    ["java:type:java.util.ArrayList"] sequence<omero::model::Annotation> FilesetLinkedAnnotationSeq;
    ["protected"] class Fileset
    extends omero::model::IObject
    {
      omero::RInt version;
      omero::RInt getVersion();
      void setVersion(omero::RInt theVersion);
      FilesetUsedFilesSeq usedFilesSeq;
      bool usedFilesLoaded;
      /*
       * Unloads the usedFiles collection. Any access to this
       * collection will throw an omero.UnloadedCollectionException.
       *
       * See sizeOfUsedFiles() on how to test for unloaded collections.
       * See reloadUsedFiles() on how to reset the value.
       *
       */
      void unloadUsedFiles();
      int sizeOfUsedFiles();
      FilesetUsedFilesSeq copyUsedFiles();
      // See language-specific iterator methods
      void addFilesetEntry(FilesetEntry target);
      /*
       * Adds all the members of the FilesetUsedFilesSeq sequence to
       * the usedFilesSeq field.
       */
      void addAllFilesetEntrySet(FilesetUsedFilesSeq targets);
      void removeFilesetEntry(FilesetEntry theTarget);
      /*
       * Removes all the members of the FilesetUsedFilesSeq sequence from
       * the usedFilesSeq field.
       */
      void removeAllFilesetEntrySet(FilesetUsedFilesSeq targets);
      void clearUsedFiles();

      /*
       * Allows reloading the protected usedFiles collection
       * from another instance of Fileset. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadUsedFiles(Fileset toCopy);
      FilesetEntry getFilesetEntry(int index);
      FilesetEntry setFilesetEntry(int index, FilesetEntry theElement);
      FilesetEntry getPrimaryFilesetEntry();
      FilesetEntry setPrimaryFilesetEntry(FilesetEntry theElement);
      FilesetImagesSeq imagesSeq;
      bool imagesLoaded;
      /*
       * Unloads the images collection. Any access to this
       * collection will throw an omero.UnloadedCollectionException.
       *
       * See sizeOfImages() on how to test for unloaded collections.
       * See reloadImages() on how to reset the value.
       *
       */
      void unloadImages();
      int sizeOfImages();
      FilesetImagesSeq copyImages();
      // See language-specific iterator methods
      void addImage(Image target);
      /*
       * Adds all the members of the FilesetImagesSeq sequence to
       * the imagesSeq field.
       */
      void addAllImageSet(FilesetImagesSeq targets);
      void removeImage(Image theTarget);
      /*
       * Removes all the members of the FilesetImagesSeq sequence from
       * the imagesSeq field.
       */
      void removeAllImageSet(FilesetImagesSeq targets);
      void clearImages();

      /*
       * Allows reloading the protected images collection
       * from another instance of Fileset. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadImages(Fileset toCopy);
      FilesetJobLinksSeq jobLinksSeq;
      bool jobLinksLoaded;
      omero::sys::CountMap jobLinksCountPerOwner;
      /*
       * Unloads the jobLinks collection. Any access to this
       * collection will throw an omero.UnloadedCollectionException.
       *
       * See sizeOfJobLinks() on how to test for unloaded collections.
       * See reloadJobLinks() on how to reset the value.
       *
       */
      void unloadJobLinks();
      int sizeOfJobLinks();
      FilesetJobLinksSeq copyJobLinks();
      // See language-specific iterator methods
      void addFilesetJobLink(FilesetJobLink target);
      /*
       * Adds all the members of the FilesetJobLinksSeq sequence to
       * the jobLinksSeq field.
       */
      void addAllFilesetJobLinkSet(FilesetJobLinksSeq targets);
      void removeFilesetJobLink(FilesetJobLink theTarget);
      /*
       * Removes all the members of the FilesetJobLinksSeq sequence from
       * the jobLinksSeq field.
       */
      void removeAllFilesetJobLinkSet(FilesetJobLinksSeq targets);
      void clearJobLinks();

      /*
       * Allows reloading the protected jobLinks collection
       * from another instance of Fileset. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadJobLinks(Fileset toCopy);
      FilesetJobLink getFilesetJobLink(int index);
      FilesetJobLink setFilesetJobLink(int index, FilesetJobLink theElement);
      FilesetJobLink getPrimaryFilesetJobLink();
      FilesetJobLink setPrimaryFilesetJobLink(FilesetJobLink theElement);
      omero::sys::CountMap getJobLinksCountPerOwner();
      FilesetJobLink linkJob(Job addition);

      /*
       * Add the link to the current instance and if bothSides is true AND
       * the other side of the link is loaded, add the current instance to
       * it as well.
       */
      void addFilesetJobLinkToBoth(omero::model::FilesetJobLink link, bool bothSides);
      FilesetJobLinksSeq findFilesetJobLink(Job removal);
      void unlinkJob(Job removal);

      /*
       * Remove the link from the current instance and if bothSides is true AND
       * the other side of the link is loaded, remove the current instance from
       * it as well.
       */
      void removeFilesetJobLinkFromBoth(omero::model::FilesetJobLink link, bool bothSides);
      FilesetLinkedJobSeq linkedJobList();
      omero::RString templatePrefix;
      omero::RString getTemplatePrefix();
      void setTemplatePrefix(omero::RString theTemplatePrefix);
      FilesetAnnotationLinksSeq annotationLinksSeq;
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
      FilesetAnnotationLinksSeq copyAnnotationLinks();
      // See language-specific iterator methods
      void addFilesetAnnotationLink(FilesetAnnotationLink target);
      /*
       * Adds all the members of the FilesetAnnotationLinksSeq sequence to
       * the annotationLinksSeq field.
       */
      void addAllFilesetAnnotationLinkSet(FilesetAnnotationLinksSeq targets);
      void removeFilesetAnnotationLink(FilesetAnnotationLink theTarget);
      /*
       * Removes all the members of the FilesetAnnotationLinksSeq sequence from
       * the annotationLinksSeq field.
       */
      void removeAllFilesetAnnotationLinkSet(FilesetAnnotationLinksSeq targets);
      void clearAnnotationLinks();

      /*
       * Allows reloading the protected annotationLinks collection
       * from another instance of Fileset. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadAnnotationLinks(Fileset toCopy);
      omero::sys::CountMap getAnnotationLinksCountPerOwner();
      FilesetAnnotationLink linkAnnotation(Annotation addition);

      /*
       * Add the link to the current instance and if bothSides is true AND
       * the other side of the link is loaded, add the current instance to
       * it as well.
       */
      void addFilesetAnnotationLinkToBoth(omero::model::FilesetAnnotationLink link, bool bothSides);
      FilesetAnnotationLinksSeq findFilesetAnnotationLink(Annotation removal);
      void unlinkAnnotation(Annotation removal);

      /*
       * Remove the link from the current instance and if bothSides is true AND
       * the other side of the link is loaded, remove the current instance from
       * it as well.
       */
      void removeFilesetAnnotationLinkFromBoth(omero::model::FilesetAnnotationLink link, bool bothSides);
      FilesetLinkedAnnotationSeq linkedAnnotationList();
    };
  };
};
#endif // FILESET_ICE
