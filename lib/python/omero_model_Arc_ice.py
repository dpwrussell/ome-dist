# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Arc.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_System_ice
import omero_Collections_ice
import omero_model_LightSource_ice

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

if not _M_omero.model.__dict__.has_key('ArcType'):
    _M_omero.model._t_ArcType = IcePy.declareClass('::omero::model::ArcType')
    _M_omero.model._t_ArcTypePrx = IcePy.declareProxy('::omero::model::ArcType')

if not _M_omero.model.__dict__.has_key('Instrument'):
    _M_omero.model._t_Instrument = IcePy.declareClass('::omero::model::Instrument')
    _M_omero.model._t_InstrumentPrx = IcePy.declareProxy('::omero::model::Instrument')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('Arc'):
    _M_omero.model.Arc = Ice.createTempClass()
    class Arc(_M_omero.model.LightSource):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _manufacturer=None, _model=None, _power=None, _lotNumber=None, _serialNumber=None, _instrument=None, _type=None):
            if __builtin__.type(self) == _M_omero.model.Arc:
                raise RuntimeError('omero.model.Arc is an abstract class')
            _M_omero.model.LightSource.__init__(self, _id, _details, _loaded, _version, _manufacturer, _model, _power, _lotNumber, _serialNumber, _instrument)
            self._type = _type

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Arc', '::omero::model::IObject', '::omero::model::LightSource')

        def ice_id(self, current=None):
            return '::omero::model::Arc'

        def ice_staticId():
            return '::omero::model::Arc'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getType(self, current=None):
        # def setType(self, theType, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Arc)

        __repr__ = __str__

    _M_omero.model.ArcPrx = Ice.createTempClass()
    class ArcPrx(_M_omero.model.LightSourcePrx):

        def getType(self, _ctx=None):
            return _M_omero.model.Arc._op_getType.invoke(self, ((), _ctx))

        def setType(self, theType, _ctx=None):
            return _M_omero.model.Arc._op_setType.invoke(self, ((theType, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.ArcPrx.ice_checkedCast(proxy, '::omero::model::Arc', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.ArcPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_ArcPrx = IcePy.defineProxy('::omero::model::Arc', ArcPrx)

    _M_omero.model._t_Arc = IcePy.declareClass('::omero::model::Arc')

    _M_omero.model._t_Arc = IcePy.defineClass('::omero::model::Arc', Arc, (), True, _M_omero.model._t_LightSource, (), (('_type', (), _M_omero.model._t_ArcType),))
    Arc.ice_type = _M_omero.model._t_Arc

    Arc._op_getType = IcePy.Operation('getType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_ArcType, ())
    Arc._op_setType = IcePy.Operation('setType', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_ArcType),), (), None, ())

    _M_omero.model.Arc = Arc
    del Arc

    _M_omero.model.ArcPrx = ArcPrx
    del ArcPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
