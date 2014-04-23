   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.ice for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef CONTRASTMETHOD_ICE
#define CONTRASTMETHOD_ICE
#include <omero/model/IObject.ice>
#include <omero/RTypes.ice>
#include <omero/System.ice>
#include <omero/Collections.ice>
module omero {
  module model {

    module enums {
        const string ContrastMethodBrightfield = "Brightfield";
        const string ContrastMethodPhase = "Phase";
        const string ContrastMethodDIC = "DIC";
        const string ContrastMethodHoffmanModulation = "HoffmanModulation";
        const string ContrastMethodObliqueIllumination = "ObliqueIllumination";
        const string ContrastMethodPolarizedLight = "PolarizedLight";
        const string ContrastMethodDarkfield = "Darkfield";
        const string ContrastMethodFluorescence = "Fluorescence";
        const string ContrastMethodOther = "Other";
        const string ContrastMethodUnknown = "Unknown";
    };

    class Details;
    ["protected"] class ContrastMethod
    extends omero::model::IObject
    {
      omero::RString value;
      omero::RString getValue();
      void setValue(omero::RString theValue);
    };
  };
};
#endif // CONTRASTMETHOD_ICE
