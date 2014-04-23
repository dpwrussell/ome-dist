   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.ice for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef NODEANNOTATIONLINK_ICE
#define NODEANNOTATIONLINK_ICE
#include <omero/model/IObject.ice>
#include <omero/RTypes.ice>
#include <omero/System.ice>
#include <omero/Collections.ice>
module omero {
  module model {
    class Node;
    class Annotation;
    class Details;
    ["protected"] class NodeAnnotationLink
    extends omero::model::IObject
    {
      omero::RInt version;
      omero::RInt getVersion();
      void setVersion(omero::RInt theVersion);
      omero::model::Node parent;
      omero::model::Node getParent();
      void setParent(omero::model::Node theParent);
      omero::model::Annotation child;
      omero::model::Annotation getChild();
      void setChild(omero::model::Annotation theChild);
      void link(Node theParent, Annotation theChild);
    };
  };
};
#endif // NODEANNOTATIONLINK_ICE