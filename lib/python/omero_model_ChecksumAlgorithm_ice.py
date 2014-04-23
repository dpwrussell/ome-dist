# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `ChecksumAlgorithm.ice'

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

# Start of module omero.model.enums
_M_omero.model.enums = Ice.openModule('omero.model.enums')
__name__ = 'omero.model.enums'

_M_omero.model.enums.ChecksumAlgorithmAdler32 = "Adler-32"

_M_omero.model.enums.ChecksumAlgorithmCRC32 = "CRC-32"

_M_omero.model.enums.ChecksumAlgorithmMD5128 = "MD5-128"

_M_omero.model.enums.ChecksumAlgorithmMurmur332 = "Murmur3-32"

_M_omero.model.enums.ChecksumAlgorithmMurmur3128 = "Murmur3-128"

_M_omero.model.enums.ChecksumAlgorithmSHA1160 = "SHA1-160"

# End of module omero.model.enums

__name__ = 'omero.model'

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('ChecksumAlgorithm'):
    _M_omero.model.ChecksumAlgorithm = Ice.createTempClass()
    class ChecksumAlgorithm(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _value=None):
            if __builtin__.type(self) == _M_omero.model.ChecksumAlgorithm:
                raise RuntimeError('omero.model.ChecksumAlgorithm is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._value = _value

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::ChecksumAlgorithm', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::ChecksumAlgorithm'

        def ice_staticId():
            return '::omero::model::ChecksumAlgorithm'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getValue(self, current=None):
        # def setValue(self, theValue, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_ChecksumAlgorithm)

        __repr__ = __str__

    _M_omero.model.ChecksumAlgorithmPrx = Ice.createTempClass()
    class ChecksumAlgorithmPrx(_M_omero.model.IObjectPrx):

        def getValue(self, _ctx=None):
            return _M_omero.model.ChecksumAlgorithm._op_getValue.invoke(self, ((), _ctx))

        def setValue(self, theValue, _ctx=None):
            return _M_omero.model.ChecksumAlgorithm._op_setValue.invoke(self, ((theValue, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.ChecksumAlgorithmPrx.ice_checkedCast(proxy, '::omero::model::ChecksumAlgorithm', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.ChecksumAlgorithmPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_ChecksumAlgorithmPrx = IcePy.defineProxy('::omero::model::ChecksumAlgorithm', ChecksumAlgorithmPrx)

    _M_omero.model._t_ChecksumAlgorithm = IcePy.declareClass('::omero::model::ChecksumAlgorithm')

    _M_omero.model._t_ChecksumAlgorithm = IcePy.defineClass('::omero::model::ChecksumAlgorithm', ChecksumAlgorithm, (), True, _M_omero.model._t_IObject, (), (('_value', (), _M_omero._t_RString),))
    ChecksumAlgorithm.ice_type = _M_omero.model._t_ChecksumAlgorithm

    ChecksumAlgorithm._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    ChecksumAlgorithm._op_setValue = IcePy.Operation('setValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.ChecksumAlgorithm = ChecksumAlgorithm
    del ChecksumAlgorithm

    _M_omero.model.ChecksumAlgorithmPrx = ChecksumAlgorithmPrx
    del ChecksumAlgorithmPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero