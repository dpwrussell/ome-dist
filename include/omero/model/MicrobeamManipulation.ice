   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.ice for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef MICROBEAMMANIPULATION_ICE
#define MICROBEAMMANIPULATION_ICE
#include <omero/model/IObject.ice>
#include <omero/RTypes.ice>
#include <omero/System.ice>
#include <omero/Collections.ice>
module omero {
  module model {
    class MicrobeamManipulationType;
    class LightSettings;
    class Experiment;
    class Details;
    ["java:type:java.util.ArrayList"] sequence<omero::model::LightSettings> MicrobeamManipulationLightSourceSettingsSeq;
    ["protected"] class MicrobeamManipulation
    extends omero::model::IObject
    {
      omero::RInt version;
      omero::RInt getVersion();
      void setVersion(omero::RInt theVersion);
      omero::model::MicrobeamManipulationType type;
      omero::model::MicrobeamManipulationType getType();
      void setType(omero::model::MicrobeamManipulationType theType);
      MicrobeamManipulationLightSourceSettingsSeq lightSourceSettingsSeq;
      bool lightSourceSettingsLoaded;
      /*
       * Unloads the lightSourceSettings collection. Any access to this
       * collection will throw an omero.UnloadedCollectionException.
       *
       * See sizeOfLightSourceSettings() on how to test for unloaded collections.
       * See reloadLightSourceSettings() on how to reset the value.
       *
       */
      void unloadLightSourceSettings();
      int sizeOfLightSourceSettings();
      MicrobeamManipulationLightSourceSettingsSeq copyLightSourceSettings();
      // See language-specific iterator methods
      void addLightSettings(LightSettings target);
      /*
       * Adds all the members of the MicrobeamManipulationLightSourceSettingsSeq sequence to
       * the lightSourceSettingsSeq field.
       */
      void addAllLightSettingsSet(MicrobeamManipulationLightSourceSettingsSeq targets);
      void removeLightSettings(LightSettings theTarget);
      /*
       * Removes all the members of the MicrobeamManipulationLightSourceSettingsSeq sequence from
       * the lightSourceSettingsSeq field.
       */
      void removeAllLightSettingsSet(MicrobeamManipulationLightSourceSettingsSeq targets);
      void clearLightSourceSettings();

      /*
       * Allows reloading the protected lightSourceSettings collection
       * from another instance of MicrobeamManipulation. The argument's collection
       * will be unloaded and all member entities will have their
       * inverse property altered.
       *
       * The argument's id must match and it's update id must be present and
       * greater than or equal to that of the current object.
       */
      void reloadLightSourceSettings(MicrobeamManipulation toCopy);
      omero::model::Experiment experiment;
      omero::model::Experiment getExperiment();
      void setExperiment(omero::model::Experiment theExperiment);
      omero::RString description;
      omero::RString getDescription();
      void setDescription(omero::RString theDescription);
    };
  };
};
#endif // MICROBEAMMANIPULATION_ICE
