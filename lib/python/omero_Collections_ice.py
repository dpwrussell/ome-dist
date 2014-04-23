# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Collections.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ModelF_ice
import omero_RTypes_ice
import omero_System_ice
import Ice_BuiltinSequences_ice

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Included module Ice
_M_Ice = Ice.openModule('Ice')

# Included module omero.sys
_M_omero.sys = Ice.openModule('omero.sys')

# Start of module omero
__name__ = 'omero'

# Start of module omero.api
_M_omero.api = Ice.openModule('omero.api')
__name__ = 'omero.api'

if not _M_omero.api.__dict__.has_key('_t_SearchMetadata'):
    _M_omero.api._t_SearchMetadata = IcePy.defineDictionary('::omero::api::SearchMetadata', (), IcePy._t_string, _M_omero.model._t_Annotation)

if not _M_omero.api.__dict__.has_key('_t_StringSet'):
    _M_omero.api._t_StringSet = IcePy.defineSequence('::omero::api::StringSet', (), IcePy._t_string)

if not _M_omero.api.__dict__.has_key('_t_LongList'):
    _M_omero.api._t_LongList = IcePy.defineSequence('::omero::api::LongList', (), IcePy._t_long)

if not _M_omero.api.__dict__.has_key('_t_IntegerList'):
    _M_omero.api._t_IntegerList = IcePy.defineSequence('::omero::api::IntegerList', (), IcePy._t_int)

if not _M_omero.api.__dict__.has_key('_t_SearchMetadataList'):
    _M_omero.api._t_SearchMetadataList = IcePy.defineSequence('::omero::api::SearchMetadataList', (), _M_omero.api._t_SearchMetadata)

if not _M_omero.api.__dict__.has_key('_t_ExperimenterList'):
    _M_omero.api._t_ExperimenterList = IcePy.defineSequence('::omero::api::ExperimenterList', (), _M_omero.model._t_Experimenter)

if not _M_omero.api.__dict__.has_key('_t_ExperimenterGroupList'):
    _M_omero.api._t_ExperimenterGroupList = IcePy.defineSequence('::omero::api::ExperimenterGroupList', (), _M_omero.model._t_ExperimenterGroup)

if not _M_omero.api.__dict__.has_key('_t_EventList'):
    _M_omero.api._t_EventList = IcePy.defineSequence('::omero::api::EventList', (), _M_omero.model._t_Event)

if not _M_omero.api.__dict__.has_key('_t_EventLogList'):
    _M_omero.api._t_EventLogList = IcePy.defineSequence('::omero::api::EventLogList', (), _M_omero.model._t_EventLog)

if not _M_omero.api.__dict__.has_key('_t_AnnotationList'):
    _M_omero.api._t_AnnotationList = IcePy.defineSequence('::omero::api::AnnotationList', (), _M_omero.model._t_Annotation)

if not _M_omero.api.__dict__.has_key('_t_SessionList'):
    _M_omero.api._t_SessionList = IcePy.defineSequence('::omero::api::SessionList', (), _M_omero.model._t_Session)

if not _M_omero.api.__dict__.has_key('_t_IObjectList'):
    _M_omero.api._t_IObjectList = IcePy.defineSequence('::omero::api::IObjectList', (), _M_omero.model._t_IObject)

if not _M_omero.api.__dict__.has_key('_t_ProjectList'):
    _M_omero.api._t_ProjectList = IcePy.defineSequence('::omero::api::ProjectList', (), _M_omero.model._t_Project)

if not _M_omero.api.__dict__.has_key('_t_DatasetList'):
    _M_omero.api._t_DatasetList = IcePy.defineSequence('::omero::api::DatasetList', (), _M_omero.model._t_Dataset)

if not _M_omero.api.__dict__.has_key('_t_ImageList'):
    _M_omero.api._t_ImageList = IcePy.defineSequence('::omero::api::ImageList', (), _M_omero.model._t_Image)

if not _M_omero.api.__dict__.has_key('_t_LogicalChannelList'):
    _M_omero.api._t_LogicalChannelList = IcePy.defineSequence('::omero::api::LogicalChannelList', (), _M_omero.model._t_LogicalChannel)

if not _M_omero.api.__dict__.has_key('_t_OriginalFileList'):
    _M_omero.api._t_OriginalFileList = IcePy.defineSequence('::omero::api::OriginalFileList', (), _M_omero.model._t_OriginalFile)

if not _M_omero.api.__dict__.has_key('_t_PixelsList'):
    _M_omero.api._t_PixelsList = IcePy.defineSequence('::omero::api::PixelsList', (), _M_omero.model._t_Pixels)

if not _M_omero.api.__dict__.has_key('_t_PixelsTypeList'):
    _M_omero.api._t_PixelsTypeList = IcePy.defineSequence('::omero::api::PixelsTypeList', (), _M_omero.model._t_PixelsType)

if not _M_omero.api.__dict__.has_key('_t_RoiList'):
    _M_omero.api._t_RoiList = IcePy.defineSequence('::omero::api::RoiList', (), _M_omero.model._t_Roi)

if not _M_omero.api.__dict__.has_key('_t_ScriptJobList'):
    _M_omero.api._t_ScriptJobList = IcePy.defineSequence('::omero::api::ScriptJobList', (), _M_omero.model._t_ScriptJob)

if not _M_omero.api.__dict__.has_key('_t_ShapeList'):
    _M_omero.api._t_ShapeList = IcePy.defineSequence('::omero::api::ShapeList', (), _M_omero.model._t_Shape)

if not _M_omero.api.__dict__.has_key('_t_ChecksumAlgorithmList'):
    _M_omero.api._t_ChecksumAlgorithmList = IcePy.defineSequence('::omero::api::ChecksumAlgorithmList', (), _M_omero.model._t_ChecksumAlgorithm)

if not _M_omero.api.__dict__.has_key('_t_BoolArray'):
    _M_omero.api._t_BoolArray = IcePy.defineSequence('::omero::api::BoolArray', (), IcePy._t_bool)

if not _M_omero.api.__dict__.has_key('_t_ByteArray'):
    _M_omero.api._t_ByteArray = IcePy.defineSequence('::omero::api::ByteArray', (), IcePy._t_byte)

if not _M_omero.api.__dict__.has_key('_t_ShortArray'):
    _M_omero.api._t_ShortArray = IcePy.defineSequence('::omero::api::ShortArray', (), IcePy._t_short)

if not _M_omero.api.__dict__.has_key('_t_IntegerArray'):
    _M_omero.api._t_IntegerArray = IcePy.defineSequence('::omero::api::IntegerArray', (), IcePy._t_int)

if not _M_omero.api.__dict__.has_key('_t_LongArray'):
    _M_omero.api._t_LongArray = IcePy.defineSequence('::omero::api::LongArray', (), IcePy._t_long)

if not _M_omero.api.__dict__.has_key('_t_FloatArray'):
    _M_omero.api._t_FloatArray = IcePy.defineSequence('::omero::api::FloatArray', (), IcePy._t_float)

if not _M_omero.api.__dict__.has_key('_t_DoubleArray'):
    _M_omero.api._t_DoubleArray = IcePy.defineSequence('::omero::api::DoubleArray', (), IcePy._t_double)

if not _M_omero.api.__dict__.has_key('_t_StringArray'):
    _M_omero.api._t_StringArray = IcePy.defineSequence('::omero::api::StringArray', (), IcePy._t_string)

if not _M_omero.api.__dict__.has_key('_t_ByteArrayArray'):
    _M_omero.api._t_ByteArrayArray = IcePy.defineSequence('::omero::api::ByteArrayArray', (), _M_omero.api._t_ByteArray)

if not _M_omero.api.__dict__.has_key('_t_ShortArrayArray'):
    _M_omero.api._t_ShortArrayArray = IcePy.defineSequence('::omero::api::ShortArrayArray', (), _M_omero.api._t_ShortArray)

if not _M_omero.api.__dict__.has_key('_t_IntegerArrayArray'):
    _M_omero.api._t_IntegerArrayArray = IcePy.defineSequence('::omero::api::IntegerArrayArray', (), _M_omero.api._t_IntegerArray)

if not _M_omero.api.__dict__.has_key('_t_IntegerArrayArrayArray'):
    _M_omero.api._t_IntegerArrayArrayArray = IcePy.defineSequence('::omero::api::IntegerArrayArrayArray', (), _M_omero.api._t_IntegerArrayArray)

if not _M_omero.api.__dict__.has_key('_t_LongArrayArray'):
    _M_omero.api._t_LongArrayArray = IcePy.defineSequence('::omero::api::LongArrayArray', (), _M_omero.api._t_LongArray)

if not _M_omero.api.__dict__.has_key('_t_FloatArrayArray'):
    _M_omero.api._t_FloatArrayArray = IcePy.defineSequence('::omero::api::FloatArrayArray', (), _M_omero.api._t_FloatArray)

if not _M_omero.api.__dict__.has_key('_t_FloatArrayArrayArray'):
    _M_omero.api._t_FloatArrayArrayArray = IcePy.defineSequence('::omero::api::FloatArrayArrayArray', (), _M_omero.api._t_FloatArrayArray)

if not _M_omero.api.__dict__.has_key('_t_DoubleArrayArray'):
    _M_omero.api._t_DoubleArrayArray = IcePy.defineSequence('::omero::api::DoubleArrayArray', (), _M_omero.api._t_DoubleArray)

if not _M_omero.api.__dict__.has_key('_t_DoubleArrayArrayArray'):
    _M_omero.api._t_DoubleArrayArrayArray = IcePy.defineSequence('::omero::api::DoubleArrayArrayArray', (), _M_omero.api._t_DoubleArrayArray)

if not _M_omero.api.__dict__.has_key('_t_StringArrayArray'):
    _M_omero.api._t_StringArrayArray = IcePy.defineSequence('::omero::api::StringArrayArray', (), _M_omero.api._t_StringArray)

if not _M_omero.api.__dict__.has_key('_t_RTypeDictArray'):
    _M_omero.api._t_RTypeDictArray = IcePy.defineSequence('::omero::api::RTypeDictArray', (), _M_omero._t_RTypeDict)

if not _M_omero.api.__dict__.has_key('_t_LongStringMap'):
    _M_omero.api._t_LongStringMap = IcePy.defineDictionary('::omero::api::LongStringMap', (), IcePy._t_long, IcePy._t_string)

if not _M_omero.api.__dict__.has_key('_t_LongIntMap'):
    _M_omero.api._t_LongIntMap = IcePy.defineDictionary('::omero::api::LongIntMap', (), IcePy._t_long, IcePy._t_int)

if not _M_omero.api.__dict__.has_key('_t_LongByteArrayMap'):
    _M_omero.api._t_LongByteArrayMap = IcePy.defineDictionary('::omero::api::LongByteArrayMap', (), IcePy._t_long, _M_omero.api._t_ByteArray)

if not _M_omero.api.__dict__.has_key('_t_LongPixelsMap'):
    _M_omero.api._t_LongPixelsMap = IcePy.defineDictionary('::omero::api::LongPixelsMap', (), IcePy._t_long, _M_omero.model._t_Pixels)

if not _M_omero.api.__dict__.has_key('_t_IntStringMap'):
    _M_omero.api._t_IntStringMap = IcePy.defineDictionary('::omero::api::IntStringMap', (), IcePy._t_int, IcePy._t_string)

if not _M_omero.api.__dict__.has_key('_t_StringRTypeMap'):
    _M_omero.api._t_StringRTypeMap = IcePy.defineDictionary('::omero::api::StringRTypeMap', (), IcePy._t_string, _M_omero._t_RType)

if not _M_omero.api.__dict__.has_key('_t_UserMap'):
    _M_omero.api._t_UserMap = IcePy.defineDictionary('::omero::api::UserMap', (), IcePy._t_string, _M_omero.model._t_Experimenter)

if not _M_omero.api.__dict__.has_key('_t_OriginalFileMap'):
    _M_omero.api._t_OriginalFileMap = IcePy.defineDictionary('::omero::api::OriginalFileMap', (), IcePy._t_string, _M_omero.model._t_OriginalFile)

if not _M_omero.api.__dict__.has_key('_t_StringStringMap'):
    _M_omero.api._t_StringStringMap = IcePy.defineDictionary('::omero::api::StringStringMap', (), IcePy._t_string, IcePy._t_string)

if not _M_omero.api.__dict__.has_key('_t_StringStringArrayMap'):
    _M_omero.api._t_StringStringArrayMap = IcePy.defineDictionary('::omero::api::StringStringArrayMap', (), IcePy._t_string, _M_omero.api._t_StringArray)

if not _M_omero.api.__dict__.has_key('_t_StringLongMap'):
    _M_omero.api._t_StringLongMap = IcePy.defineDictionary('::omero::api::StringLongMap', (), IcePy._t_string, IcePy._t_long)

if not _M_omero.api.__dict__.has_key('_t_StringIntMap'):
    _M_omero.api._t_StringIntMap = IcePy.defineDictionary('::omero::api::StringIntMap', (), IcePy._t_string, IcePy._t_int)

if not _M_omero.api.__dict__.has_key('_t_IdListMap'):
    _M_omero.api._t_IdListMap = IcePy.defineDictionary('::omero::api::IdListMap', (), IcePy._t_string, _M_Ice._t_LongSeq)

if not _M_omero.api.__dict__.has_key('_t_StringLongListMap'):
    _M_omero.api._t_StringLongListMap = IcePy.defineDictionary('::omero::api::StringLongListMap', (), IcePy._t_string, _M_omero.api._t_LongList)

if not _M_omero.api.__dict__.has_key('_t_BooleanLongListMap'):
    _M_omero.api._t_BooleanLongListMap = IcePy.defineDictionary('::omero::api::BooleanLongListMap', (), IcePy._t_bool, _M_omero.api._t_LongList)

if not _M_omero.api.__dict__.has_key('_t_BooleanIdListMap'):
    _M_omero.api._t_BooleanIdListMap = IcePy.defineDictionary('::omero::api::BooleanIdListMap', (), IcePy._t_bool, _M_omero.sys._t_LongList)

if not _M_omero.api.__dict__.has_key('_t_IObjectListMap'):
    _M_omero.api._t_IObjectListMap = IcePy.defineDictionary('::omero::api::IObjectListMap', (), IcePy._t_string, _M_omero.api._t_IObjectList)

if not _M_omero.api.__dict__.has_key('_t_LongIObjectListMap'):
    _M_omero.api._t_LongIObjectListMap = IcePy.defineDictionary('::omero::api::LongIObjectListMap', (), IcePy._t_long, _M_omero.api._t_IObjectList)

if not _M_omero.api.__dict__.has_key('_t_StringShapeListMap'):
    _M_omero.api._t_StringShapeListMap = IcePy.defineDictionary('::omero::api::StringShapeListMap', (), IcePy._t_string, _M_omero.api._t_ShapeList)

if not _M_omero.api.__dict__.has_key('_t_LongShapeListMap'):
    _M_omero.api._t_LongShapeListMap = IcePy.defineDictionary('::omero::api::LongShapeListMap', (), IcePy._t_long, _M_omero.api._t_ShapeList)

if not _M_omero.api.__dict__.has_key('_t_IntShapeListMap'):
    _M_omero.api._t_IntShapeListMap = IcePy.defineDictionary('::omero::api::IntShapeListMap', (), IcePy._t_int, _M_omero.api._t_ShapeList)

if not _M_omero.api.__dict__.has_key('_t_LongAnnotationListMap'):
    _M_omero.api._t_LongAnnotationListMap = IcePy.defineDictionary('::omero::api::LongAnnotationListMap', (), IcePy._t_long, _M_omero.api._t_AnnotationList)

if not _M_omero.api.__dict__.has_key('_t_IdBooleanLongListMapMap'):
    _M_omero.api._t_IdBooleanLongListMapMap = IcePy.defineDictionary('::omero::api::IdBooleanLongListMapMap', (), IcePy._t_long, _M_omero.api._t_BooleanLongListMap)

# End of module omero.api

__name__ = 'omero'

# End of module omero
