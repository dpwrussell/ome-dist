# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `FilesetEntry.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_System_ice
import omero_Collections_ice

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Included module Ice
_M_Ice = Ice.openModule('Ice')

# Included module omero.sys
_M_omero.sys = Ice.openModule('omero.sys')

# Included module omero.api
_M_omero.api = Ice.openModule('omero.api')

# Start of module omero
__name__ = 'omero'

# Start of module omero.model
__name__ = 'omero.model'

if not _M_omero.model.__dict__.has_key('Fileset'):
    _M_omero.model._t_Fileset = IcePy.declareClass('::omero::model::Fileset')
    _M_omero.model._t_FilesetPrx = IcePy.declareProxy('::omero::model::Fileset')

if not _M_omero.model.__dict__.has_key('OriginalFile'):
    _M_omero.model._t_OriginalFile = IcePy.declareClass('::omero::model::OriginalFile')
    _M_omero.model._t_OriginalFilePrx = IcePy.declareProxy('::omero::model::OriginalFile')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('FilesetEntry'):
    _M_omero.model.FilesetEntry = Ice.createTempClass()
    class FilesetEntry(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _fileset=None, _originalFile=None, _clientPath=None):
            if __builtin__.type(self) == _M_omero.model.FilesetEntry:
                raise RuntimeError('omero.model.FilesetEntry is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._fileset = _fileset
            self._originalFile = _originalFile
            self._clientPath = _clientPath

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::FilesetEntry', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::FilesetEntry'

        def ice_staticId():
            return '::omero::model::FilesetEntry'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getFileset(self, current=None):
        # def setFileset(self, theFileset, current=None):
        # def getOriginalFile(self, current=None):
        # def setOriginalFile(self, theOriginalFile, current=None):
        # def getClientPath(self, current=None):
        # def setClientPath(self, theClientPath, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_FilesetEntry)

        __repr__ = __str__

    _M_omero.model.FilesetEntryPrx = Ice.createTempClass()
    class FilesetEntryPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.FilesetEntry._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.FilesetEntry._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getFileset(self, _ctx=None):
            return _M_omero.model.FilesetEntry._op_getFileset.invoke(self, ((), _ctx))

        def setFileset(self, theFileset, _ctx=None):
            return _M_omero.model.FilesetEntry._op_setFileset.invoke(self, ((theFileset, ), _ctx))

        def getOriginalFile(self, _ctx=None):
            return _M_omero.model.FilesetEntry._op_getOriginalFile.invoke(self, ((), _ctx))

        def setOriginalFile(self, theOriginalFile, _ctx=None):
            return _M_omero.model.FilesetEntry._op_setOriginalFile.invoke(self, ((theOriginalFile, ), _ctx))

        def getClientPath(self, _ctx=None):
            return _M_omero.model.FilesetEntry._op_getClientPath.invoke(self, ((), _ctx))

        def setClientPath(self, theClientPath, _ctx=None):
            return _M_omero.model.FilesetEntry._op_setClientPath.invoke(self, ((theClientPath, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.FilesetEntryPrx.ice_checkedCast(proxy, '::omero::model::FilesetEntry', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.FilesetEntryPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_FilesetEntryPrx = IcePy.defineProxy('::omero::model::FilesetEntry', FilesetEntryPrx)

    _M_omero.model._t_FilesetEntry = IcePy.declareClass('::omero::model::FilesetEntry')

    _M_omero.model._t_FilesetEntry = IcePy.defineClass('::omero::model::FilesetEntry', FilesetEntry, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_fileset', (), _M_omero.model._t_Fileset),
        ('_originalFile', (), _M_omero.model._t_OriginalFile),
        ('_clientPath', (), _M_omero._t_RString)
    ))
    FilesetEntry.ice_type = _M_omero.model._t_FilesetEntry

    FilesetEntry._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    FilesetEntry._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    FilesetEntry._op_getFileset = IcePy.Operation('getFileset', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Fileset, ())
    FilesetEntry._op_setFileset = IcePy.Operation('setFileset', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Fileset),), (), None, ())
    FilesetEntry._op_getOriginalFile = IcePy.Operation('getOriginalFile', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_OriginalFile, ())
    FilesetEntry._op_setOriginalFile = IcePy.Operation('setOriginalFile', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFile),), (), None, ())
    FilesetEntry._op_getClientPath = IcePy.Operation('getClientPath', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    FilesetEntry._op_setClientPath = IcePy.Operation('setClientPath', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.FilesetEntry = FilesetEntry
    del FilesetEntry

    _M_omero.model.FilesetEntryPrx = FilesetEntryPrx
    del FilesetEntryPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
