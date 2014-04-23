   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.ice for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef IMPORTJOB_ICE
#define IMPORTJOB_ICE
#include <omero/model/IObject.ice>
#include <omero/RTypes.ice>
#include <omero/System.ice>
#include <omero/Collections.ice>
#include <omero/model/Job.ice>
module omero {
  module model {
    class JobStatus;
    class JobOriginalFileLink;
    class OriginalFile;
    class Details;
    ["protected"] class ImportJob
    extends omero::model::Job
    {
      omero::RString imageName;
      omero::RString getImageName();
      void setImageName(omero::RString theImageName);
      omero::RString imageDescription;
      omero::RString getImageDescription();
      void setImageDescription(omero::RString theImageDescription);
    };
  };
};
#endif // IMPORTJOB_ICE
