// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Collections.ice'

#ifndef __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_Collections_h__
#define __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_Collections_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <omero/ModelF.h>
#include <omero/RTypes.h>
#include <omero/System.h>
#include <Ice/BuiltinSequences.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 303
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace IceProxy
{

}

namespace IceInternal
{

}

namespace omero
{

namespace api
{

typedef ::std::map< ::std::string, ::omero::model::AnnotationPtr> SearchMetadata;
void __writeSearchMetadata(::IceInternal::BasicStream*, const SearchMetadata&);
void __readSearchMetadata(::IceInternal::BasicStream*, SearchMetadata&);

typedef ::std::vector< ::std::string> StringSet;

typedef ::std::vector< ::Ice::Long> LongList;

typedef ::std::vector< ::Ice::Int> IntegerList;

typedef ::std::vector< ::omero::api::SearchMetadata> SearchMetadataList;
void __writeSearchMetadataList(::IceInternal::BasicStream*, const ::omero::api::SearchMetadata*, const ::omero::api::SearchMetadata*);
void __readSearchMetadataList(::IceInternal::BasicStream*, SearchMetadataList&);

typedef ::std::vector< ::omero::model::ExperimenterPtr> ExperimenterList;
void __writeExperimenterList(::IceInternal::BasicStream*, const ::omero::model::ExperimenterPtr*, const ::omero::model::ExperimenterPtr*);
void __readExperimenterList(::IceInternal::BasicStream*, ExperimenterList&);

typedef ::std::vector< ::omero::model::ExperimenterGroupPtr> ExperimenterGroupList;
void __writeExperimenterGroupList(::IceInternal::BasicStream*, const ::omero::model::ExperimenterGroupPtr*, const ::omero::model::ExperimenterGroupPtr*);
void __readExperimenterGroupList(::IceInternal::BasicStream*, ExperimenterGroupList&);

typedef ::std::vector< ::omero::model::EventPtr> EventList;
void __writeEventList(::IceInternal::BasicStream*, const ::omero::model::EventPtr*, const ::omero::model::EventPtr*);
void __readEventList(::IceInternal::BasicStream*, EventList&);

typedef ::std::vector< ::omero::model::EventLogPtr> EventLogList;
void __writeEventLogList(::IceInternal::BasicStream*, const ::omero::model::EventLogPtr*, const ::omero::model::EventLogPtr*);
void __readEventLogList(::IceInternal::BasicStream*, EventLogList&);

typedef ::std::vector< ::omero::model::AnnotationPtr> AnnotationList;
void __writeAnnotationList(::IceInternal::BasicStream*, const ::omero::model::AnnotationPtr*, const ::omero::model::AnnotationPtr*);
void __readAnnotationList(::IceInternal::BasicStream*, AnnotationList&);

typedef ::std::vector< ::omero::model::SessionPtr> SessionList;
void __writeSessionList(::IceInternal::BasicStream*, const ::omero::model::SessionPtr*, const ::omero::model::SessionPtr*);
void __readSessionList(::IceInternal::BasicStream*, SessionList&);

typedef ::std::vector< ::omero::model::IObjectPtr> IObjectList;
void __writeIObjectList(::IceInternal::BasicStream*, const ::omero::model::IObjectPtr*, const ::omero::model::IObjectPtr*);
void __readIObjectList(::IceInternal::BasicStream*, IObjectList&);

typedef ::std::vector< ::omero::model::ProjectPtr> ProjectList;
void __writeProjectList(::IceInternal::BasicStream*, const ::omero::model::ProjectPtr*, const ::omero::model::ProjectPtr*);
void __readProjectList(::IceInternal::BasicStream*, ProjectList&);

typedef ::std::vector< ::omero::model::DatasetPtr> DatasetList;
void __writeDatasetList(::IceInternal::BasicStream*, const ::omero::model::DatasetPtr*, const ::omero::model::DatasetPtr*);
void __readDatasetList(::IceInternal::BasicStream*, DatasetList&);

typedef ::std::vector< ::omero::model::ImagePtr> ImageList;
void __writeImageList(::IceInternal::BasicStream*, const ::omero::model::ImagePtr*, const ::omero::model::ImagePtr*);
void __readImageList(::IceInternal::BasicStream*, ImageList&);

typedef ::std::vector< ::omero::model::LogicalChannelPtr> LogicalChannelList;
void __writeLogicalChannelList(::IceInternal::BasicStream*, const ::omero::model::LogicalChannelPtr*, const ::omero::model::LogicalChannelPtr*);
void __readLogicalChannelList(::IceInternal::BasicStream*, LogicalChannelList&);

typedef ::std::vector< ::omero::model::OriginalFilePtr> OriginalFileList;
void __writeOriginalFileList(::IceInternal::BasicStream*, const ::omero::model::OriginalFilePtr*, const ::omero::model::OriginalFilePtr*);
void __readOriginalFileList(::IceInternal::BasicStream*, OriginalFileList&);

typedef ::std::vector< ::omero::model::PixelsPtr> PixelsList;
void __writePixelsList(::IceInternal::BasicStream*, const ::omero::model::PixelsPtr*, const ::omero::model::PixelsPtr*);
void __readPixelsList(::IceInternal::BasicStream*, PixelsList&);

typedef ::std::vector< ::omero::model::PixelsTypePtr> PixelsTypeList;
void __writePixelsTypeList(::IceInternal::BasicStream*, const ::omero::model::PixelsTypePtr*, const ::omero::model::PixelsTypePtr*);
void __readPixelsTypeList(::IceInternal::BasicStream*, PixelsTypeList&);

typedef ::std::vector< ::omero::model::RoiPtr> RoiList;
void __writeRoiList(::IceInternal::BasicStream*, const ::omero::model::RoiPtr*, const ::omero::model::RoiPtr*);
void __readRoiList(::IceInternal::BasicStream*, RoiList&);

typedef ::std::vector< ::omero::model::ScriptJobPtr> ScriptJobList;
void __writeScriptJobList(::IceInternal::BasicStream*, const ::omero::model::ScriptJobPtr*, const ::omero::model::ScriptJobPtr*);
void __readScriptJobList(::IceInternal::BasicStream*, ScriptJobList&);

typedef ::std::vector< ::omero::model::ShapePtr> ShapeList;
void __writeShapeList(::IceInternal::BasicStream*, const ::omero::model::ShapePtr*, const ::omero::model::ShapePtr*);
void __readShapeList(::IceInternal::BasicStream*, ShapeList&);

typedef ::std::vector< ::omero::model::ChecksumAlgorithmPtr> ChecksumAlgorithmList;
void __writeChecksumAlgorithmList(::IceInternal::BasicStream*, const ::omero::model::ChecksumAlgorithmPtr*, const ::omero::model::ChecksumAlgorithmPtr*);
void __readChecksumAlgorithmList(::IceInternal::BasicStream*, ChecksumAlgorithmList&);

typedef ::std::vector<bool> BoolArray;

typedef ::std::vector< ::Ice::Byte> ByteArray;

typedef ::std::vector< ::Ice::Short> ShortArray;

typedef ::std::vector< ::Ice::Int> IntegerArray;

typedef ::std::vector< ::Ice::Long> LongArray;

typedef ::std::vector< ::Ice::Float> FloatArray;

typedef ::std::vector< ::Ice::Double> DoubleArray;

typedef ::std::vector< ::std::string> StringArray;

typedef ::std::vector< ::omero::api::ByteArray> ByteArrayArray;
void __writeByteArrayArray(::IceInternal::BasicStream*, const ::omero::api::ByteArray*, const ::omero::api::ByteArray*);
void __readByteArrayArray(::IceInternal::BasicStream*, ByteArrayArray&);

typedef ::std::vector< ::omero::api::ShortArray> ShortArrayArray;
void __writeShortArrayArray(::IceInternal::BasicStream*, const ::omero::api::ShortArray*, const ::omero::api::ShortArray*);
void __readShortArrayArray(::IceInternal::BasicStream*, ShortArrayArray&);

typedef ::std::vector< ::omero::api::IntegerArray> IntegerArrayArray;
void __writeIntegerArrayArray(::IceInternal::BasicStream*, const ::omero::api::IntegerArray*, const ::omero::api::IntegerArray*);
void __readIntegerArrayArray(::IceInternal::BasicStream*, IntegerArrayArray&);

typedef ::std::vector< ::omero::api::IntegerArrayArray> IntegerArrayArrayArray;
void __writeIntegerArrayArrayArray(::IceInternal::BasicStream*, const ::omero::api::IntegerArrayArray*, const ::omero::api::IntegerArrayArray*);
void __readIntegerArrayArrayArray(::IceInternal::BasicStream*, IntegerArrayArrayArray&);

typedef ::std::vector< ::omero::api::LongArray> LongArrayArray;
void __writeLongArrayArray(::IceInternal::BasicStream*, const ::omero::api::LongArray*, const ::omero::api::LongArray*);
void __readLongArrayArray(::IceInternal::BasicStream*, LongArrayArray&);

typedef ::std::vector< ::omero::api::FloatArray> FloatArrayArray;
void __writeFloatArrayArray(::IceInternal::BasicStream*, const ::omero::api::FloatArray*, const ::omero::api::FloatArray*);
void __readFloatArrayArray(::IceInternal::BasicStream*, FloatArrayArray&);

typedef ::std::vector< ::omero::api::FloatArrayArray> FloatArrayArrayArray;
void __writeFloatArrayArrayArray(::IceInternal::BasicStream*, const ::omero::api::FloatArrayArray*, const ::omero::api::FloatArrayArray*);
void __readFloatArrayArrayArray(::IceInternal::BasicStream*, FloatArrayArrayArray&);

typedef ::std::vector< ::omero::api::DoubleArray> DoubleArrayArray;
void __writeDoubleArrayArray(::IceInternal::BasicStream*, const ::omero::api::DoubleArray*, const ::omero::api::DoubleArray*);
void __readDoubleArrayArray(::IceInternal::BasicStream*, DoubleArrayArray&);

typedef ::std::vector< ::omero::api::DoubleArrayArray> DoubleArrayArrayArray;
void __writeDoubleArrayArrayArray(::IceInternal::BasicStream*, const ::omero::api::DoubleArrayArray*, const ::omero::api::DoubleArrayArray*);
void __readDoubleArrayArrayArray(::IceInternal::BasicStream*, DoubleArrayArrayArray&);

typedef ::std::vector< ::omero::api::StringArray> StringArrayArray;
void __writeStringArrayArray(::IceInternal::BasicStream*, const ::omero::api::StringArray*, const ::omero::api::StringArray*);
void __readStringArrayArray(::IceInternal::BasicStream*, StringArrayArray&);

typedef ::std::vector< ::omero::RTypeDict> RTypeDictArray;
void __writeRTypeDictArray(::IceInternal::BasicStream*, const ::omero::RTypeDict*, const ::omero::RTypeDict*);
void __readRTypeDictArray(::IceInternal::BasicStream*, RTypeDictArray&);

typedef ::std::map< ::Ice::Long, ::std::string> LongStringMap;
void __writeLongStringMap(::IceInternal::BasicStream*, const LongStringMap&);
void __readLongStringMap(::IceInternal::BasicStream*, LongStringMap&);

typedef ::std::map< ::Ice::Long, ::Ice::Int> LongIntMap;
void __writeLongIntMap(::IceInternal::BasicStream*, const LongIntMap&);
void __readLongIntMap(::IceInternal::BasicStream*, LongIntMap&);

typedef ::std::map< ::Ice::Long, ::omero::api::ByteArray> LongByteArrayMap;
void __writeLongByteArrayMap(::IceInternal::BasicStream*, const LongByteArrayMap&);
void __readLongByteArrayMap(::IceInternal::BasicStream*, LongByteArrayMap&);

typedef ::std::map< ::Ice::Long, ::omero::model::PixelsPtr> LongPixelsMap;
void __writeLongPixelsMap(::IceInternal::BasicStream*, const LongPixelsMap&);
void __readLongPixelsMap(::IceInternal::BasicStream*, LongPixelsMap&);

typedef ::std::map< ::Ice::Int, ::std::string> IntStringMap;
void __writeIntStringMap(::IceInternal::BasicStream*, const IntStringMap&);
void __readIntStringMap(::IceInternal::BasicStream*, IntStringMap&);

typedef ::std::map< ::std::string, ::omero::RTypePtr> StringRTypeMap;
void __writeStringRTypeMap(::IceInternal::BasicStream*, const StringRTypeMap&);
void __readStringRTypeMap(::IceInternal::BasicStream*, StringRTypeMap&);

typedef ::std::map< ::std::string, ::omero::model::ExperimenterPtr> UserMap;
void __writeUserMap(::IceInternal::BasicStream*, const UserMap&);
void __readUserMap(::IceInternal::BasicStream*, UserMap&);

typedef ::std::map< ::std::string, ::omero::model::OriginalFilePtr> OriginalFileMap;
void __writeOriginalFileMap(::IceInternal::BasicStream*, const OriginalFileMap&);
void __readOriginalFileMap(::IceInternal::BasicStream*, OriginalFileMap&);

typedef ::std::map< ::std::string, ::std::string> StringStringMap;
void __writeStringStringMap(::IceInternal::BasicStream*, const StringStringMap&);
void __readStringStringMap(::IceInternal::BasicStream*, StringStringMap&);

typedef ::std::map< ::std::string, ::omero::api::StringArray> StringStringArrayMap;
void __writeStringStringArrayMap(::IceInternal::BasicStream*, const StringStringArrayMap&);
void __readStringStringArrayMap(::IceInternal::BasicStream*, StringStringArrayMap&);

typedef ::std::map< ::std::string, ::Ice::Long> StringLongMap;
void __writeStringLongMap(::IceInternal::BasicStream*, const StringLongMap&);
void __readStringLongMap(::IceInternal::BasicStream*, StringLongMap&);

typedef ::std::map< ::std::string, ::Ice::Int> StringIntMap;
void __writeStringIntMap(::IceInternal::BasicStream*, const StringIntMap&);
void __readStringIntMap(::IceInternal::BasicStream*, StringIntMap&);

typedef ::std::map< ::std::string, ::Ice::LongSeq> IdListMap;
void __writeIdListMap(::IceInternal::BasicStream*, const IdListMap&);
void __readIdListMap(::IceInternal::BasicStream*, IdListMap&);

typedef ::std::map< ::std::string, ::omero::api::LongList> StringLongListMap;
void __writeStringLongListMap(::IceInternal::BasicStream*, const StringLongListMap&);
void __readStringLongListMap(::IceInternal::BasicStream*, StringLongListMap&);

typedef ::std::map<bool, ::omero::api::LongList> BooleanLongListMap;
void __writeBooleanLongListMap(::IceInternal::BasicStream*, const BooleanLongListMap&);
void __readBooleanLongListMap(::IceInternal::BasicStream*, BooleanLongListMap&);

typedef ::std::map<bool, ::omero::sys::LongList> BooleanIdListMap;
void __writeBooleanIdListMap(::IceInternal::BasicStream*, const BooleanIdListMap&);
void __readBooleanIdListMap(::IceInternal::BasicStream*, BooleanIdListMap&);

typedef ::std::map< ::std::string, ::omero::api::IObjectList> IObjectListMap;
void __writeIObjectListMap(::IceInternal::BasicStream*, const IObjectListMap&);
void __readIObjectListMap(::IceInternal::BasicStream*, IObjectListMap&);

typedef ::std::map< ::Ice::Long, ::omero::api::IObjectList> LongIObjectListMap;
void __writeLongIObjectListMap(::IceInternal::BasicStream*, const LongIObjectListMap&);
void __readLongIObjectListMap(::IceInternal::BasicStream*, LongIObjectListMap&);

typedef ::std::map< ::std::string, ::omero::api::ShapeList> StringShapeListMap;
void __writeStringShapeListMap(::IceInternal::BasicStream*, const StringShapeListMap&);
void __readStringShapeListMap(::IceInternal::BasicStream*, StringShapeListMap&);

typedef ::std::map< ::Ice::Long, ::omero::api::ShapeList> LongShapeListMap;
void __writeLongShapeListMap(::IceInternal::BasicStream*, const LongShapeListMap&);
void __readLongShapeListMap(::IceInternal::BasicStream*, LongShapeListMap&);

typedef ::std::map< ::Ice::Int, ::omero::api::ShapeList> IntShapeListMap;
void __writeIntShapeListMap(::IceInternal::BasicStream*, const IntShapeListMap&);
void __readIntShapeListMap(::IceInternal::BasicStream*, IntShapeListMap&);

typedef ::std::map< ::Ice::Long, ::omero::api::AnnotationList> LongAnnotationListMap;
void __writeLongAnnotationListMap(::IceInternal::BasicStream*, const LongAnnotationListMap&);
void __readLongAnnotationListMap(::IceInternal::BasicStream*, LongAnnotationListMap&);

typedef ::std::map< ::Ice::Long, ::omero::api::BooleanLongListMap> IdBooleanLongListMapMap;
void __writeIdBooleanLongListMapMap(::IceInternal::BasicStream*, const IdBooleanLongListMapMap&);
void __readIdBooleanLongListMapMap(::IceInternal::BasicStream*, IdBooleanLongListMapMap&);

}

}

namespace IceProxy
{

}

namespace IceDelegate
{

}

namespace IceDelegateM
{

}

namespace IceDelegateD
{

}

#endif