   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.ice for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef EXPERIMENTERANNOTATIONLINK_ICE
#define EXPERIMENTERANNOTATIONLINK_ICE
#include <omero/model/IObject.ice>
#include <omero/RTypes.ice>
#include <omero/System.ice>
#include <omero/Collections.ice>
module omero {
  module model {
    class Experimenter;
    class Annotation;
    class Details;
    ["protected"] class ExperimenterAnnotationLink
    extends omero::model::IObject
    {
      omero::RInt version;
      omero::RInt getVersion();
      void setVersion(omero::RInt theVersion);
      omero::model::Experimenter parent;
      omero::model::Experimenter getParent();
      void setParent(omero::model::Experimenter theParent);
      omero::model::Annotation child;
      omero::model::Annotation getChild();
      void setChild(omero::model::Annotation theChild);
      void link(Experimenter theParent, Annotation theChild);
    };
  };
};
#endif // EXPERIMENTERANNOTATIONLINK_ICE