# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `CodomainMapContext.ice'

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

if not _M_omero.model.__dict__.has_key('RenderingDef'):
    _M_omero.model._t_RenderingDef = IcePy.declareClass('::omero::model::RenderingDef')
    _M_omero.model._t_RenderingDefPrx = IcePy.declareProxy('::omero::model::RenderingDef')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('CodomainMapContext'):
    _M_omero.model.CodomainMapContext = Ice.createTempClass()
    class CodomainMapContext(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _renderingDef=None):
            if __builtin__.type(self) == _M_omero.model.CodomainMapContext:
                raise RuntimeError('omero.model.CodomainMapContext is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._renderingDef = _renderingDef

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::CodomainMapContext', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::CodomainMapContext'

        def ice_staticId():
            return '::omero::model::CodomainMapContext'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getRenderingDef(self, current=None):
        # def setRenderingDef(self, theRenderingDef, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_CodomainMapContext)

        __repr__ = __str__

    _M_omero.model.CodomainMapContextPrx = Ice.createTempClass()
    class CodomainMapContextPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.CodomainMapContext._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.CodomainMapContext._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getRenderingDef(self, _ctx=None):
            return _M_omero.model.CodomainMapContext._op_getRenderingDef.invoke(self, ((), _ctx))

        def setRenderingDef(self, theRenderingDef, _ctx=None):
            return _M_omero.model.CodomainMapContext._op_setRenderingDef.invoke(self, ((theRenderingDef, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.CodomainMapContextPrx.ice_checkedCast(proxy, '::omero::model::CodomainMapContext', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.CodomainMapContextPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_CodomainMapContextPrx = IcePy.defineProxy('::omero::model::CodomainMapContext', CodomainMapContextPrx)

    _M_omero.model._t_CodomainMapContext = IcePy.declareClass('::omero::model::CodomainMapContext')

    _M_omero.model._t_CodomainMapContext = IcePy.defineClass('::omero::model::CodomainMapContext', CodomainMapContext, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_renderingDef', (), _M_omero.model._t_RenderingDef)
    ))
    CodomainMapContext.ice_type = _M_omero.model._t_CodomainMapContext

    CodomainMapContext._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    CodomainMapContext._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    CodomainMapContext._op_getRenderingDef = IcePy.Operation('getRenderingDef', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_RenderingDef, ())
    CodomainMapContext._op_setRenderingDef = IcePy.Operation('setRenderingDef', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_RenderingDef),), (), None, ())

    _M_omero.model.CodomainMapContext = CodomainMapContext
    del CodomainMapContext

    _M_omero.model.CodomainMapContextPrx = CodomainMapContextPrx
    del CodomainMapContextPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
