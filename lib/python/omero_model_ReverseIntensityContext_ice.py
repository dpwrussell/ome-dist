# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `ReverseIntensityContext.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_System_ice
import omero_Collections_ice
import omero_model_CodomainMapContext_ice

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

if not _M_omero.model.__dict__.has_key('RenderingDef'):
    _M_omero.model._t_RenderingDef = IcePy.declareClass('::omero::model::RenderingDef')
    _M_omero.model._t_RenderingDefPrx = IcePy.declareProxy('::omero::model::RenderingDef')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('ReverseIntensityContext'):
    _M_omero.model.ReverseIntensityContext = Ice.createTempClass()
    class ReverseIntensityContext(_M_omero.model.CodomainMapContext):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _renderingDef=None, _reverse=None):
            if __builtin__.type(self) == _M_omero.model.ReverseIntensityContext:
                raise RuntimeError('omero.model.ReverseIntensityContext is an abstract class')
            _M_omero.model.CodomainMapContext.__init__(self, _id, _details, _loaded, _version, _renderingDef)
            self._reverse = _reverse

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::CodomainMapContext', '::omero::model::IObject', '::omero::model::ReverseIntensityContext')

        def ice_id(self, current=None):
            return '::omero::model::ReverseIntensityContext'

        def ice_staticId():
            return '::omero::model::ReverseIntensityContext'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getReverse(self, current=None):
        # def setReverse(self, theReverse, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_ReverseIntensityContext)

        __repr__ = __str__

    _M_omero.model.ReverseIntensityContextPrx = Ice.createTempClass()
    class ReverseIntensityContextPrx(_M_omero.model.CodomainMapContextPrx):

        def getReverse(self, _ctx=None):
            return _M_omero.model.ReverseIntensityContext._op_getReverse.invoke(self, ((), _ctx))

        def setReverse(self, theReverse, _ctx=None):
            return _M_omero.model.ReverseIntensityContext._op_setReverse.invoke(self, ((theReverse, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.ReverseIntensityContextPrx.ice_checkedCast(proxy, '::omero::model::ReverseIntensityContext', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.ReverseIntensityContextPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_ReverseIntensityContextPrx = IcePy.defineProxy('::omero::model::ReverseIntensityContext', ReverseIntensityContextPrx)

    _M_omero.model._t_ReverseIntensityContext = IcePy.declareClass('::omero::model::ReverseIntensityContext')

    _M_omero.model._t_ReverseIntensityContext = IcePy.defineClass('::omero::model::ReverseIntensityContext', ReverseIntensityContext, (), True, _M_omero.model._t_CodomainMapContext, (), (('_reverse', (), _M_omero._t_RBool),))
    ReverseIntensityContext.ice_type = _M_omero.model._t_ReverseIntensityContext

    ReverseIntensityContext._op_getReverse = IcePy.Operation('getReverse', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RBool, ())
    ReverseIntensityContext._op_setReverse = IcePy.Operation('setReverse', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RBool),), (), None, ())

    _M_omero.model.ReverseIntensityContext = ReverseIntensityContext
    del ReverseIntensityContext

    _M_omero.model.ReverseIntensityContextPrx = ReverseIntensityContextPrx
    del ReverseIntensityContextPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
