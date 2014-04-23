# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `LaserMedium.ice'

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

_M_omero.model.enums.LaserMediumRhodamine6G = "Rhodamine6G"

_M_omero.model.enums.LaserMediumCoumarinC30 = "CoumarinC30"

_M_omero.model.enums.LaserMediumArFl = "ArFl"

_M_omero.model.enums.LaserMediumArCl = "ArCl"

_M_omero.model.enums.LaserMediumKrFl = "KrFl"

_M_omero.model.enums.LaserMediumKrCl = "KrCl"

_M_omero.model.enums.LaserMediumXeFl = "XeFl"

_M_omero.model.enums.LaserMediumXeCl = "XeCl"

_M_omero.model.enums.LaserMediumXeBr = "XeBr"

_M_omero.model.enums.LaserMediumGaAs = "GaAs"

_M_omero.model.enums.LaserMediumGaAlAs = "GaAlAs"

_M_omero.model.enums.LaserMediumEMinus = "EMinus"

_M_omero.model.enums.LaserMediumCu = "Cu"

_M_omero.model.enums.LaserMediumAg = "Ag"

_M_omero.model.enums.LaserMediumN = "N"

_M_omero.model.enums.LaserMediumAr = "Ar"

_M_omero.model.enums.LaserMediumKr = "Kr"

_M_omero.model.enums.LaserMediumXe = "Xe"

_M_omero.model.enums.LaserMediumHeNe = "HeNe"

_M_omero.model.enums.LaserMediumHeCd = "HeCd"

_M_omero.model.enums.LaserMediumCO = "CO"

_M_omero.model.enums.LaserMediumCO2 = "CO2"

_M_omero.model.enums.LaserMediumH2O = "H2O"

_M_omero.model.enums.LaserMediumHFl = "HFl"

_M_omero.model.enums.LaserMediumNdGlass = "NdGlass"

_M_omero.model.enums.LaserMediumNdYAG = "NdYAG"

_M_omero.model.enums.LaserMediumErGlass = "ErGlass"

_M_omero.model.enums.LaserMediumErYAG = "ErYAG"

_M_omero.model.enums.LaserMediumHoYLF = "HoYLF"

_M_omero.model.enums.LaserMediumHoYAG = "HoYAG"

_M_omero.model.enums.LaserMediumRuby = "Ruby"

_M_omero.model.enums.LaserMediumTiSapphire = "TiSapphire"

_M_omero.model.enums.LaserMediumAlexandrite = "Alexandrite"

_M_omero.model.enums.LaserMediumOther = "Other"

_M_omero.model.enums.LaserMediumUnknown = "Unknown"

# End of module omero.model.enums

__name__ = 'omero.model'

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('LaserMedium'):
    _M_omero.model.LaserMedium = Ice.createTempClass()
    class LaserMedium(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _value=None):
            if __builtin__.type(self) == _M_omero.model.LaserMedium:
                raise RuntimeError('omero.model.LaserMedium is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._value = _value

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::LaserMedium')

        def ice_id(self, current=None):
            return '::omero::model::LaserMedium'

        def ice_staticId():
            return '::omero::model::LaserMedium'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getValue(self, current=None):
        # def setValue(self, theValue, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_LaserMedium)

        __repr__ = __str__

    _M_omero.model.LaserMediumPrx = Ice.createTempClass()
    class LaserMediumPrx(_M_omero.model.IObjectPrx):

        def getValue(self, _ctx=None):
            return _M_omero.model.LaserMedium._op_getValue.invoke(self, ((), _ctx))

        def setValue(self, theValue, _ctx=None):
            return _M_omero.model.LaserMedium._op_setValue.invoke(self, ((theValue, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.LaserMediumPrx.ice_checkedCast(proxy, '::omero::model::LaserMedium', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.LaserMediumPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_LaserMediumPrx = IcePy.defineProxy('::omero::model::LaserMedium', LaserMediumPrx)

    _M_omero.model._t_LaserMedium = IcePy.declareClass('::omero::model::LaserMedium')

    _M_omero.model._t_LaserMedium = IcePy.defineClass('::omero::model::LaserMedium', LaserMedium, (), True, _M_omero.model._t_IObject, (), (('_value', (), _M_omero._t_RString),))
    LaserMedium.ice_type = _M_omero.model._t_LaserMedium

    LaserMedium._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    LaserMedium._op_setValue = IcePy.Operation('setValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.LaserMedium = LaserMedium
    del LaserMedium

    _M_omero.model.LaserMediumPrx = LaserMediumPrx
    del LaserMediumPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
