   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.ice for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef LASER_ICE
#define LASER_ICE
#include <omero/model/IObject.ice>
#include <omero/RTypes.ice>
#include <omero/System.ice>
#include <omero/Collections.ice>
#include <omero/model/LightSource.ice>
module omero {
  module model {
    class LaserType;
    class LaserMedium;
    class Pulse;
    class LightSource;
    class Instrument;
    class Details;
    ["protected"] class Laser
    extends omero::model::LightSource
    {
      omero::model::LaserType type;
      omero::model::LaserType getType();
      void setType(omero::model::LaserType theType);
      omero::model::LaserMedium laserMedium;
      omero::model::LaserMedium getLaserMedium();
      void setLaserMedium(omero::model::LaserMedium theLaserMedium);
      omero::RInt frequencyMultiplication;
      omero::RInt getFrequencyMultiplication();
      void setFrequencyMultiplication(omero::RInt theFrequencyMultiplication);
      omero::RBool tuneable;
      omero::RBool getTuneable();
      void setTuneable(omero::RBool theTuneable);
      omero::model::Pulse pulse;
      omero::model::Pulse getPulse();
      void setPulse(omero::model::Pulse thePulse);
      omero::RInt wavelength;
      omero::RInt getWavelength();
      void setWavelength(omero::RInt theWavelength);
      omero::RBool pockelCell;
      omero::RBool getPockelCell();
      void setPockelCell(omero::RBool thePockelCell);
      omero::model::LightSource pump;
      omero::model::LightSource getPump();
      void setPump(omero::model::LightSource thePump);
      omero::RDouble repetitionRate;
      omero::RDouble getRepetitionRate();
      void setRepetitionRate(omero::RDouble theRepetitionRate);
    };
  };
};
#endif // LASER_ICE
