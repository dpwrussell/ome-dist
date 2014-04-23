# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `MicroscopeType.ice'

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

_M_omero.model.enums.MicroscopeTypeUpright = "Upright"

_M_omero.model.enums.MicroscopeTypeInverted = "Inverted"

_M_omero.model.enums.MicroscopeTypeDissection = "Dissection"

_M_omero.model.enums.MicroscopeTypeElectrophysiology = "Electrophysiology"

_M_omero.model.enums.MicroscopeTypeOther = "Other"

_M_omero.model.enums.MicroscopeTypeUnknown = "Unknown"

# End of module omero.model.enums

__name__ = 'omero.model'

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('MicroscopeType'):
    _M_omero.model.MicroscopeType = Ice.createTempClass()
    class MicroscopeType(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _value=None):
            if __builtin__.type(self) == _M_omero.model.MicroscopeType:
                raise RuntimeError('omero.model.MicroscopeType is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._value = _value

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::MicroscopeType')

        def ice_id(self, current=None):
            return '::omero::model::MicroscopeType'

        def ice_staticId():
            return '::omero::model::MicroscopeType'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getValue(self, current=None):
        # def setValue(self, theValue, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_MicroscopeType)

        __repr__ = __str__

    _M_omero.model.MicroscopeTypePrx = Ice.createTempClass()
    class MicroscopeTypePrx(_M_omero.model.IObjectPrx):

        def getValue(self, _ctx=None):
            return _M_omero.model.MicroscopeType._op_getValue.invoke(self, ((), _ctx))

        def setValue(self, theValue, _ctx=None):
            return _M_omero.model.MicroscopeType._op_setValue.invoke(self, ((theValue, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.MicroscopeTypePrx.ice_checkedCast(proxy, '::omero::model::MicroscopeType', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.MicroscopeTypePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_MicroscopeTypePrx = IcePy.defineProxy('::omero::model::MicroscopeType', MicroscopeTypePrx)

    _M_omero.model._t_MicroscopeType = IcePy.declareClass('::omero::model::MicroscopeType')

    _M_omero.model._t_MicroscopeType = IcePy.defineClass('::omero::model::MicroscopeType', MicroscopeType, (), True, _M_omero.model._t_IObject, (), (('_value', (), _M_omero._t_RString),))
    MicroscopeType.ice_type = _M_omero.model._t_MicroscopeType

    MicroscopeType._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    MicroscopeType._op_setValue = IcePy.Operation('setValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.MicroscopeType = MicroscopeType
    del MicroscopeType

    _M_omero.model.MicroscopeTypePrx = MicroscopeTypePrx
    del MicroscopeTypePrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
