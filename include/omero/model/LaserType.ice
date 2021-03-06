   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.ice for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef LASERTYPE_ICE
#define LASERTYPE_ICE
#include <omero/model/IObject.ice>
#include <omero/RTypes.ice>
#include <omero/System.ice>
#include <omero/Collections.ice>
module omero {
  module model {

    module enums {
        const string LaserTypeExcimer = "Excimer";
        const string LaserTypeGas = "Gas";
        const string LaserTypeMetalVapor = "MetalVapor";
        const string LaserTypeSolidState = "SolidState";
        const string LaserTypeDye = "Dye";
        const string LaserTypeSemiconductor = "Semiconductor";
        const string LaserTypeFreeElectron = "FreeElectron";
        const string LaserTypeOther = "Other";
        const string LaserTypeUnknown = "Unknown";
    };

    class Details;
    ["protected"] class LaserType
    extends omero::model::IObject
    {
      omero::RString value;
      omero::RString getValue();
      void setValue(omero::RString theValue);
    };
  };
};
#endif // LASERTYPE_ICE
