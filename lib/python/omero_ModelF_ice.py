# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `ModelF.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()

# Start of module omero
_M_omero = Ice.openModule('omero')
__name__ = 'omero'

# Start of module omero.model
_M_omero.model = Ice.openModule('omero.model')
__name__ = 'omero.model'

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Arc'):
    _M_omero.model._t_Arc = IcePy.declareClass('::omero::model::Arc')
    _M_omero.model._t_ArcPrx = IcePy.declareProxy('::omero::model::Arc')

if not _M_omero.model.__dict__.has_key('BooleanAnnotation'):
    _M_omero.model._t_BooleanAnnotation = IcePy.declareClass('::omero::model::BooleanAnnotation')
    _M_omero.model._t_BooleanAnnotationPrx = IcePy.declareProxy('::omero::model::BooleanAnnotation')

if not _M_omero.model.__dict__.has_key('ChecksumAlgorithm'):
    _M_omero.model._t_ChecksumAlgorithm = IcePy.declareClass('::omero::model::ChecksumAlgorithm')
    _M_omero.model._t_ChecksumAlgorithmPrx = IcePy.declareProxy('::omero::model::ChecksumAlgorithm')

if not _M_omero.model.__dict__.has_key('Dataset'):
    _M_omero.model._t_Dataset = IcePy.declareClass('::omero::model::Dataset')
    _M_omero.model._t_DatasetPrx = IcePy.declareProxy('::omero::model::Dataset')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('Event'):
    _M_omero.model._t_Event = IcePy.declareClass('::omero::model::Event')
    _M_omero.model._t_EventPrx = IcePy.declareProxy('::omero::model::Event')

if not _M_omero.model.__dict__.has_key('EventLog'):
    _M_omero.model._t_EventLog = IcePy.declareClass('::omero::model::EventLog')
    _M_omero.model._t_EventLogPrx = IcePy.declareProxy('::omero::model::EventLog')

if not _M_omero.model.__dict__.has_key('Experimenter'):
    _M_omero.model._t_Experimenter = IcePy.declareClass('::omero::model::Experimenter')
    _M_omero.model._t_ExperimenterPrx = IcePy.declareProxy('::omero::model::Experimenter')

if not _M_omero.model.__dict__.has_key('ExperimenterGroup'):
    _M_omero.model._t_ExperimenterGroup = IcePy.declareClass('::omero::model::ExperimenterGroup')
    _M_omero.model._t_ExperimenterGroupPrx = IcePy.declareProxy('::omero::model::ExperimenterGroup')

if not _M_omero.model.__dict__.has_key('ExternalInfo'):
    _M_omero.model._t_ExternalInfo = IcePy.declareClass('::omero::model::ExternalInfo')
    _M_omero.model._t_ExternalInfoPrx = IcePy.declareProxy('::omero::model::ExternalInfo')

if not _M_omero.model.__dict__.has_key('Family'):
    _M_omero.model._t_Family = IcePy.declareClass('::omero::model::Family')
    _M_omero.model._t_FamilyPrx = IcePy.declareProxy('::omero::model::Family')

if not _M_omero.model.__dict__.has_key('Filament'):
    _M_omero.model._t_Filament = IcePy.declareClass('::omero::model::Filament')
    _M_omero.model._t_FilamentPrx = IcePy.declareProxy('::omero::model::Filament')

if not _M_omero.model.__dict__.has_key('Fileset'):
    _M_omero.model._t_Fileset = IcePy.declareClass('::omero::model::Fileset')
    _M_omero.model._t_FilesetPrx = IcePy.declareProxy('::omero::model::Fileset')

if not _M_omero.model.__dict__.has_key('FilesetJobLink'):
    _M_omero.model._t_FilesetJobLink = IcePy.declareClass('::omero::model::FilesetJobLink')
    _M_omero.model._t_FilesetJobLinkPrx = IcePy.declareProxy('::omero::model::FilesetJobLink')

if not _M_omero.model.__dict__.has_key('Format'):
    _M_omero.model._t_Format = IcePy.declareClass('::omero::model::Format')
    _M_omero.model._t_FormatPrx = IcePy.declareProxy('::omero::model::Format')

if not _M_omero.model.__dict__.has_key('IObject'):
    _M_omero.model._t_IObject = IcePy.declareClass('::omero::model::IObject')
    _M_omero.model._t_IObjectPrx = IcePy.declareProxy('::omero::model::IObject')

if not _M_omero.model.__dict__.has_key('Image'):
    _M_omero.model._t_Image = IcePy.declareClass('::omero::model::Image')
    _M_omero.model._t_ImagePrx = IcePy.declareProxy('::omero::model::Image')

if not _M_omero.model.__dict__.has_key('Instrument'):
    _M_omero.model._t_Instrument = IcePy.declareClass('::omero::model::Instrument')
    _M_omero.model._t_InstrumentPrx = IcePy.declareProxy('::omero::model::Instrument')

if not _M_omero.model.__dict__.has_key('Job'):
    _M_omero.model._t_Job = IcePy.declareClass('::omero::model::Job')
    _M_omero.model._t_JobPrx = IcePy.declareProxy('::omero::model::Job')

if not _M_omero.model.__dict__.has_key('JobStatus'):
    _M_omero.model._t_JobStatus = IcePy.declareClass('::omero::model::JobStatus')
    _M_omero.model._t_JobStatusPrx = IcePy.declareProxy('::omero::model::JobStatus')

if not _M_omero.model.__dict__.has_key('Laser'):
    _M_omero.model._t_Laser = IcePy.declareClass('::omero::model::Laser')
    _M_omero.model._t_LaserPrx = IcePy.declareProxy('::omero::model::Laser')

if not _M_omero.model.__dict__.has_key('LogicalChannel'):
    _M_omero.model._t_LogicalChannel = IcePy.declareClass('::omero::model::LogicalChannel')
    _M_omero.model._t_LogicalChannelPrx = IcePy.declareProxy('::omero::model::LogicalChannel')

if not _M_omero.model.__dict__.has_key('OriginalFile'):
    _M_omero.model._t_OriginalFile = IcePy.declareClass('::omero::model::OriginalFile')
    _M_omero.model._t_OriginalFilePrx = IcePy.declareProxy('::omero::model::OriginalFile')

if not _M_omero.model.__dict__.has_key('Permissions'):
    _M_omero.model._t_Permissions = IcePy.declareClass('::omero::model::Permissions')
    _M_omero.model._t_PermissionsPrx = IcePy.declareProxy('::omero::model::Permissions')

if not _M_omero.model.__dict__.has_key('Pixels'):
    _M_omero.model._t_Pixels = IcePy.declareClass('::omero::model::Pixels')
    _M_omero.model._t_PixelsPrx = IcePy.declareProxy('::omero::model::Pixels')

if not _M_omero.model.__dict__.has_key('PixelsType'):
    _M_omero.model._t_PixelsType = IcePy.declareClass('::omero::model::PixelsType')
    _M_omero.model._t_PixelsTypePrx = IcePy.declareProxy('::omero::model::PixelsType')

if not _M_omero.model.__dict__.has_key('PlaneInfo'):
    _M_omero.model._t_PlaneInfo = IcePy.declareClass('::omero::model::PlaneInfo')
    _M_omero.model._t_PlaneInfoPrx = IcePy.declareProxy('::omero::model::PlaneInfo')

if not _M_omero.model.__dict__.has_key('Plate'):
    _M_omero.model._t_Plate = IcePy.declareClass('::omero::model::Plate')
    _M_omero.model._t_PlatePrx = IcePy.declareProxy('::omero::model::Plate')

if not _M_omero.model.__dict__.has_key('Project'):
    _M_omero.model._t_Project = IcePy.declareClass('::omero::model::Project')
    _M_omero.model._t_ProjectPrx = IcePy.declareProxy('::omero::model::Project')

if not _M_omero.model.__dict__.has_key('QuantumDef'):
    _M_omero.model._t_QuantumDef = IcePy.declareClass('::omero::model::QuantumDef')
    _M_omero.model._t_QuantumDefPrx = IcePy.declareProxy('::omero::model::QuantumDef')

if not _M_omero.model.__dict__.has_key('RenderingDef'):
    _M_omero.model._t_RenderingDef = IcePy.declareClass('::omero::model::RenderingDef')
    _M_omero.model._t_RenderingDefPrx = IcePy.declareProxy('::omero::model::RenderingDef')

if not _M_omero.model.__dict__.has_key('RenderingModel'):
    _M_omero.model._t_RenderingModel = IcePy.declareClass('::omero::model::RenderingModel')
    _M_omero.model._t_RenderingModelPrx = IcePy.declareProxy('::omero::model::RenderingModel')

if not _M_omero.model.__dict__.has_key('Roi'):
    _M_omero.model._t_Roi = IcePy.declareClass('::omero::model::Roi')
    _M_omero.model._t_RoiPrx = IcePy.declareProxy('::omero::model::Roi')

if not _M_omero.model.__dict__.has_key('Screen'):
    _M_omero.model._t_Screen = IcePy.declareClass('::omero::model::Screen')
    _M_omero.model._t_ScreenPrx = IcePy.declareProxy('::omero::model::Screen')

if not _M_omero.model.__dict__.has_key('ScriptJob'):
    _M_omero.model._t_ScriptJob = IcePy.declareClass('::omero::model::ScriptJob')
    _M_omero.model._t_ScriptJobPrx = IcePy.declareProxy('::omero::model::ScriptJob')

if not _M_omero.model.__dict__.has_key('Shape'):
    _M_omero.model._t_Shape = IcePy.declareClass('::omero::model::Shape')
    _M_omero.model._t_ShapePrx = IcePy.declareProxy('::omero::model::Shape')

if not _M_omero.model.__dict__.has_key('Session'):
    _M_omero.model._t_Session = IcePy.declareClass('::omero::model::Session')
    _M_omero.model._t_SessionPrx = IcePy.declareProxy('::omero::model::Session')

if not _M_omero.model.__dict__.has_key('Share'):
    _M_omero.model._t_Share = IcePy.declareClass('::omero::model::Share')
    _M_omero.model._t_SharePrx = IcePy.declareProxy('::omero::model::Share')

if not _M_omero.model.__dict__.has_key('TextAnnotation'):
    _M_omero.model._t_TextAnnotation = IcePy.declareClass('::omero::model::TextAnnotation')
    _M_omero.model._t_TextAnnotationPrx = IcePy.declareProxy('::omero::model::TextAnnotation')

if not _M_omero.model.__dict__.has_key('Well'):
    _M_omero.model._t_Well = IcePy.declareClass('::omero::model::Well')
    _M_omero.model._t_WellPrx = IcePy.declareProxy('::omero::model::Well')

# End of module omero.model

__name__ = 'omero'

# End of module omero
