# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Correction.ice'

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

_M_omero.model.enums.CorrectionUV = "UV"

_M_omero.model.enums.CorrectionPlanApo = "PlanApo"

_M_omero.model.enums.CorrectionPlanFluor = "PlanFluor"

_M_omero.model.enums.CorrectionSuperFluor = "SuperFluor"

_M_omero.model.enums.CorrectionVioletCorrected = "VioletCorrected"

_M_omero.model.enums.CorrectionAchro = "Achro"

_M_omero.model.enums.CorrectionAchromat = "Achromat"

_M_omero.model.enums.CorrectionFluor = "Fluor"

_M_omero.model.enums.CorrectionFl = "Fl"

_M_omero.model.enums.CorrectionFluar = "Fluar"

_M_omero.model.enums.CorrectionNeofluar = "Neofluar"

_M_omero.model.enums.CorrectionFluotar = "Fluotar"

_M_omero.model.enums.CorrectionApo = "Apo"

_M_omero.model.enums.CorrectionOther = "Other"

_M_omero.model.enums.CorrectionUnknown = "Unknown"

# End of module omero.model.enums

__name__ = 'omero.model'

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('Correction'):
    _M_omero.model.Correction = Ice.createTempClass()
    class Correction(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _value=None):
            if __builtin__.type(self) == _M_omero.model.Correction:
                raise RuntimeError('omero.model.Correction is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._value = _value

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Correction', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::Correction'

        def ice_staticId():
            return '::omero::model::Correction'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getValue(self, current=None):
        # def setValue(self, theValue, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Correction)

        __repr__ = __str__

    _M_omero.model.CorrectionPrx = Ice.createTempClass()
    class CorrectionPrx(_M_omero.model.IObjectPrx):

        def getValue(self, _ctx=None):
            return _M_omero.model.Correction._op_getValue.invoke(self, ((), _ctx))

        def setValue(self, theValue, _ctx=None):
            return _M_omero.model.Correction._op_setValue.invoke(self, ((theValue, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.CorrectionPrx.ice_checkedCast(proxy, '::omero::model::Correction', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.CorrectionPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_CorrectionPrx = IcePy.defineProxy('::omero::model::Correction', CorrectionPrx)

    _M_omero.model._t_Correction = IcePy.declareClass('::omero::model::Correction')

    _M_omero.model._t_Correction = IcePy.defineClass('::omero::model::Correction', Correction, (), True, _M_omero.model._t_IObject, (), (('_value', (), _M_omero._t_RString),))
    Correction.ice_type = _M_omero.model._t_Correction

    Correction._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Correction._op_setValue = IcePy.Operation('setValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.Correction = Correction
    del Correction

    _M_omero.model.CorrectionPrx = CorrectionPrx
    del CorrectionPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
