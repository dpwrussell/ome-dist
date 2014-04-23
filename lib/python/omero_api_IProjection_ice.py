# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `IProjection.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ModelF_ice
import omero_ServicesF_ice
import omero_Collections_ice
import omero_Constants_ice

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Included module Ice
_M_Ice = Ice.openModule('Ice')

# Included module Glacier2
_M_Glacier2 = Ice.openModule('Glacier2')

# Included module omero.sys
_M_omero.sys = Ice.openModule('omero.sys')

# Included module omero.api
_M_omero.api = Ice.openModule('omero.api')

# Included module omero.grid
_M_omero.grid = Ice.openModule('omero.grid')

# Included module omero.constants
_M_omero.constants = Ice.openModule('omero.constants')

# Included module omero.constants.cluster
_M_omero.constants.cluster = Ice.openModule('omero.constants.cluster')

# Included module omero.constants.annotation
_M_omero.constants.annotation = Ice.openModule('omero.constants.annotation')

# Included module omero.constants.annotation.file
_M_omero.constants.annotation.file = Ice.openModule('omero.constants.annotation.file')

# Included module omero.constants.data
_M_omero.constants.data = Ice.openModule('omero.constants.data')

# Included module omero.constants.metadata
_M_omero.constants.metadata = Ice.openModule('omero.constants.metadata')

# Included module omero.constants.namespaces
_M_omero.constants.namespaces = Ice.openModule('omero.constants.namespaces')

# Included module omero.constants.analysis
_M_omero.constants.analysis = Ice.openModule('omero.constants.analysis')

# Included module omero.constants.analysis.flim
_M_omero.constants.analysis.flim = Ice.openModule('omero.constants.analysis.flim')

# Included module omero.constants.jobs
_M_omero.constants.jobs = Ice.openModule('omero.constants.jobs')

# Included module omero.constants.permissions
_M_omero.constants.permissions = Ice.openModule('omero.constants.permissions')

# Included module omero.constants.projection
_M_omero.constants.projection = Ice.openModule('omero.constants.projection')

# Included module omero.constants.topics
_M_omero.constants.topics = Ice.openModule('omero.constants.topics')

# Included module omero.constants.categories
_M_omero.constants.categories = Ice.openModule('omero.constants.categories')

# Start of module omero
__name__ = 'omero'

# Start of module omero.api
__name__ = 'omero.api'

if not _M_omero.api.__dict__.has_key('IProjection'):
    _M_omero.api.IProjection = Ice.createTempClass()
    class IProjection(_M_omero.api.ServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.IProjection:
                raise RuntimeError('omero.api.IProjection is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::IProjection', '::omero::api::ServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::IProjection'

        def ice_staticId():
            return '::omero::api::IProjection'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def projectStack_async(self, _cb, pixelsId, pixelsType, algorithm, timepoint, channelIndex, stepping, start, end, current=None):
        # def projectPixels_async(self, _cb, pixelsId, pixelsType, algorithm, tStart, tEnd, channelList, stepping, zStart, zEnd, name, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_IProjection)

        __repr__ = __str__

    _M_omero.api.IProjectionPrx = Ice.createTempClass()
    class IProjectionPrx(_M_omero.api.ServiceInterfacePrx):

        def projectStack(self, pixelsId, pixelsType, algorithm, timepoint, channelIndex, stepping, start, end, _ctx=None):
            return _M_omero.api.IProjection._op_projectStack.invoke(self, ((pixelsId, pixelsType, algorithm, timepoint, channelIndex, stepping, start, end), _ctx))

        def projectStack_async(self, _cb, pixelsId, pixelsType, algorithm, timepoint, channelIndex, stepping, start, end, _ctx=None):
            return _M_omero.api.IProjection._op_projectStack.invokeAsync(self, (_cb, (pixelsId, pixelsType, algorithm, timepoint, channelIndex, stepping, start, end), _ctx))

        def projectPixels(self, pixelsId, pixelsType, algorithm, tStart, tEnd, channelList, stepping, zStart, zEnd, name, _ctx=None):
            return _M_omero.api.IProjection._op_projectPixels.invoke(self, ((pixelsId, pixelsType, algorithm, tStart, tEnd, channelList, stepping, zStart, zEnd, name), _ctx))

        def projectPixels_async(self, _cb, pixelsId, pixelsType, algorithm, tStart, tEnd, channelList, stepping, zStart, zEnd, name, _ctx=None):
            return _M_omero.api.IProjection._op_projectPixels.invokeAsync(self, (_cb, (pixelsId, pixelsType, algorithm, tStart, tEnd, channelList, stepping, zStart, zEnd, name), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.IProjectionPrx.ice_checkedCast(proxy, '::omero::api::IProjection', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.IProjectionPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_IProjectionPrx = IcePy.defineProxy('::omero::api::IProjection', IProjectionPrx)

    _M_omero.api._t_IProjection = IcePy.defineClass('::omero::api::IProjection', IProjection, (), True, None, (_M_omero.api._t_ServiceInterface,), ())
    IProjection.ice_type = _M_omero.api._t_IProjection

    IProjection._op_projectStack = IcePy.Operation('projectStack', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero.model._t_PixelsType), ((), _M_omero.constants.projection._t_ProjectionType), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int)), (), _M_Ice._t_ByteSeq, (_M_omero._t_ServerError,))
    IProjection._op_projectPixels = IcePy.Operation('projectPixels', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), IcePy._t_long), ((), _M_omero.model._t_PixelsType), ((), _M_omero.constants.projection._t_ProjectionType), ((), IcePy._t_int), ((), IcePy._t_int), ((), _M_omero.sys._t_IntList), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_string)), (), IcePy._t_long, (_M_omero._t_ServerError,))

    _M_omero.api.IProjection = IProjection
    del IProjection

    _M_omero.api.IProjectionPrx = IProjectionPrx
    del IProjectionPrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
