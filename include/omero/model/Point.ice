   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.ice for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef POINT_ICE
#define POINT_ICE
#include <omero/model/IObject.ice>
#include <omero/RTypes.ice>
#include <omero/System.ice>
#include <omero/Collections.ice>
#include <omero/model/Shape.ice>
module omero {
  module model {
    class Roi;
    class Details;
    ["protected"] class Point
    extends omero::model::Shape
    {
      omero::RDouble cx;
      omero::RDouble getCx();
      void setCx(omero::RDouble theCx);
      omero::RDouble cy;
      omero::RDouble getCy();
      void setCy(omero::RDouble theCy);
      omero::RString textValue;
      omero::RString getTextValue();
      void setTextValue(omero::RString theTextValue);
    };
  };
};
#endif // POINT_ICE
