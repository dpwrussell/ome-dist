# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `QuantumDef.ice'

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

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('QuantumDef'):
    _M_omero.model.QuantumDef = Ice.createTempClass()
    class QuantumDef(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _cdStart=None, _cdEnd=None, _bitResolution=None):
            if __builtin__.type(self) == _M_omero.model.QuantumDef:
                raise RuntimeError('omero.model.QuantumDef is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._cdStart = _cdStart
            self._cdEnd = _cdEnd
            self._bitResolution = _bitResolution

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::QuantumDef')

        def ice_id(self, current=None):
            return '::omero::model::QuantumDef'

        def ice_staticId():
            return '::omero::model::QuantumDef'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getCdStart(self, current=None):
        # def setCdStart(self, theCdStart, current=None):
        # def getCdEnd(self, current=None):
        # def setCdEnd(self, theCdEnd, current=None):
        # def getBitResolution(self, current=None):
        # def setBitResolution(self, theBitResolution, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_QuantumDef)

        __repr__ = __str__

    _M_omero.model.QuantumDefPrx = Ice.createTempClass()
    class QuantumDefPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.QuantumDef._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.QuantumDef._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getCdStart(self, _ctx=None):
            return _M_omero.model.QuantumDef._op_getCdStart.invoke(self, ((), _ctx))

        def setCdStart(self, theCdStart, _ctx=None):
            return _M_omero.model.QuantumDef._op_setCdStart.invoke(self, ((theCdStart, ), _ctx))

        def getCdEnd(self, _ctx=None):
            return _M_omero.model.QuantumDef._op_getCdEnd.invoke(self, ((), _ctx))

        def setCdEnd(self, theCdEnd, _ctx=None):
            return _M_omero.model.QuantumDef._op_setCdEnd.invoke(self, ((theCdEnd, ), _ctx))

        def getBitResolution(self, _ctx=None):
            return _M_omero.model.QuantumDef._op_getBitResolution.invoke(self, ((), _ctx))

        def setBitResolution(self, theBitResolution, _ctx=None):
            return _M_omero.model.QuantumDef._op_setBitResolution.invoke(self, ((theBitResolution, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.QuantumDefPrx.ice_checkedCast(proxy, '::omero::model::QuantumDef', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.QuantumDefPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_QuantumDefPrx = IcePy.defineProxy('::omero::model::QuantumDef', QuantumDefPrx)

    _M_omero.model._t_QuantumDef = IcePy.declareClass('::omero::model::QuantumDef')

    _M_omero.model._t_QuantumDef = IcePy.defineClass('::omero::model::QuantumDef', QuantumDef, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_cdStart', (), _M_omero._t_RInt),
        ('_cdEnd', (), _M_omero._t_RInt),
        ('_bitResolution', (), _M_omero._t_RInt)
    ))
    QuantumDef.ice_type = _M_omero.model._t_QuantumDef

    QuantumDef._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    QuantumDef._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    QuantumDef._op_getCdStart = IcePy.Operation('getCdStart', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    QuantumDef._op_setCdStart = IcePy.Operation('setCdStart', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    QuantumDef._op_getCdEnd = IcePy.Operation('getCdEnd', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    QuantumDef._op_setCdEnd = IcePy.Operation('setCdEnd', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    QuantumDef._op_getBitResolution = IcePy.Operation('getBitResolution', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    QuantumDef._op_setBitResolution = IcePy.Operation('setBitResolution', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())

    _M_omero.model.QuantumDef = QuantumDef
    del QuantumDef

    _M_omero.model.QuantumDefPrx = QuantumDefPrx
    del QuantumDefPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
