   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.ice for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef METADATAIMPORTJOB_ICE
#define METADATAIMPORTJOB_ICE
#include <omero/model/IObject.ice>
#include <omero/RTypes.ice>
#include <omero/System.ice>
#include <omero/Collections.ice>
#include <omero/model/Job.ice>
module omero {
  module model {
    class FilesetVersionInfo;
    class JobStatus;
    class JobOriginalFileLink;
    class OriginalFile;
    class Details;
    ["protected"] class MetadataImportJob
    extends omero::model::Job
    {
      omero::model::FilesetVersionInfo versionInfo;
      omero::model::FilesetVersionInfo getVersionInfo();
      void setVersionInfo(omero::model::FilesetVersionInfo theVersionInfo);
    };
  };
};
#endif // METADATAIMPORTJOB_ICE
