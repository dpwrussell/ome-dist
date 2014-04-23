# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `ROMIO.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ServerErrors_ice
import Ice_BuiltinSequences_ice

# Included module Ice
_M_Ice = Ice.openModule('Ice')

# Included module Glacier2
_M_Glacier2 = Ice.openModule('Glacier2')

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Included module omero.sys
_M_omero.sys = Ice.openModule('omero.sys')

# Included module omero.api
_M_omero.api = Ice.openModule('omero.api')

# Start of module omero
__name__ = 'omero'

# Start of module omero.romio
_M_omero.romio = Ice.openModule('omero.romio')
__name__ = 'omero.romio'

if not _M_omero.romio.__dict__.has_key('_t_RGBBands'):
    _M_omero.romio._t_RGBBands = IcePy.defineSequence('::omero::romio::RGBBands', (), _M_Ice._t_ByteSeq)

_M_omero.romio.RedBand = 0

_M_omero.romio.GreenBand = 1

_M_omero.romio.BlueBand = 2

if not _M_omero.romio.__dict__.has_key('RGBBuffer'):
    _M_omero.romio.RGBBuffer = Ice.createTempClass()
    class RGBBuffer(Ice.Object):
        def __init__(self, bands=None, sizeX1=0, sizeX2=0):
            self.bands = bands
            self.sizeX1 = sizeX1
            self.sizeX2 = sizeX2

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::romio::RGBBuffer')

        def ice_id(self, current=None):
            return '::omero::romio::RGBBuffer'

        def ice_staticId():
            return '::omero::romio::RGBBuffer'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.romio._t_RGBBuffer)

        __repr__ = __str__

    _M_omero.romio.RGBBufferPrx = Ice.createTempClass()
    class RGBBufferPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.romio.RGBBufferPrx.ice_checkedCast(proxy, '::omero::romio::RGBBuffer', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.romio.RGBBufferPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.romio._t_RGBBufferPrx = IcePy.defineProxy('::omero::romio::RGBBuffer', RGBBufferPrx)

    _M_omero.romio._t_RGBBuffer = IcePy.defineClass('::omero::romio::RGBBuffer', RGBBuffer, (), False, None, (), (
        ('bands', (), _M_omero.romio._t_RGBBands),
        ('sizeX1', (), IcePy._t_int),
        ('sizeX2', (), IcePy._t_int)
    ))
    RGBBuffer.ice_type = _M_omero.romio._t_RGBBuffer

    _M_omero.romio.RGBBuffer = RGBBuffer
    del RGBBuffer

    _M_omero.romio.RGBBufferPrx = RGBBufferPrx
    del RGBBufferPrx

if not _M_omero.romio.__dict__.has_key('RegionDef'):
    _M_omero.romio.RegionDef = Ice.createTempClass()
    class RegionDef(Ice.Object):
        def __init__(self, x=0, y=0, width=0, height=0):
            self.x = x
            self.y = y
            self.width = width
            self.height = height

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::romio::RegionDef')

        def ice_id(self, current=None):
            return '::omero::romio::RegionDef'

        def ice_staticId():
            return '::omero::romio::RegionDef'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.romio._t_RegionDef)

        __repr__ = __str__

    _M_omero.romio.RegionDefPrx = Ice.createTempClass()
    class RegionDefPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.romio.RegionDefPrx.ice_checkedCast(proxy, '::omero::romio::RegionDef', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.romio.RegionDefPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.romio._t_RegionDefPrx = IcePy.defineProxy('::omero::romio::RegionDef', RegionDefPrx)

    _M_omero.romio._t_RegionDef = IcePy.defineClass('::omero::romio::RegionDef', RegionDef, (), False, None, (), (
        ('x', (), IcePy._t_int),
        ('y', (), IcePy._t_int),
        ('width', (), IcePy._t_int),
        ('height', (), IcePy._t_int)
    ))
    RegionDef.ice_type = _M_omero.romio._t_RegionDef

    _M_omero.romio.RegionDef = RegionDef
    del RegionDef

    _M_omero.romio.RegionDefPrx = RegionDefPrx
    del RegionDefPrx

_M_omero.romio.XY = 0

_M_omero.romio.ZY = 1

_M_omero.romio.XZ = 2

if not _M_omero.romio.__dict__.has_key('PlaneDef'):
    _M_omero.romio.PlaneDef = Ice.createTempClass()
    class PlaneDef(Ice.Object):
        def __init__(self, slice=0, x=0, y=0, z=0, t=0, region=None, stride=0):
            self.slice = slice
            self.x = x
            self.y = y
            self.z = z
            self.t = t
            self.region = region
            self.stride = stride

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::romio::PlaneDef')

        def ice_id(self, current=None):
            return '::omero::romio::PlaneDef'

        def ice_staticId():
            return '::omero::romio::PlaneDef'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.romio._t_PlaneDef)

        __repr__ = __str__

    _M_omero.romio.PlaneDefPrx = Ice.createTempClass()
    class PlaneDefPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.romio.PlaneDefPrx.ice_checkedCast(proxy, '::omero::romio::PlaneDef', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.romio.PlaneDefPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.romio._t_PlaneDefPrx = IcePy.defineProxy('::omero::romio::PlaneDef', PlaneDefPrx)

    _M_omero.romio._t_PlaneDef = IcePy.declareClass('::omero::romio::PlaneDef')

    _M_omero.romio._t_PlaneDef = IcePy.defineClass('::omero::romio::PlaneDef', PlaneDef, (), False, None, (), (
        ('slice', (), IcePy._t_int),
        ('x', (), IcePy._t_int),
        ('y', (), IcePy._t_int),
        ('z', (), IcePy._t_int),
        ('t', (), IcePy._t_int),
        ('region', (), _M_omero.romio._t_RegionDef),
        ('stride', (), IcePy._t_int)
    ))
    PlaneDef.ice_type = _M_omero.romio._t_PlaneDef

    _M_omero.romio.PlaneDef = PlaneDef
    del PlaneDef

    _M_omero.romio.PlaneDefPrx = PlaneDefPrx
    del PlaneDefPrx

if not _M_omero.romio.__dict__.has_key('CodomainMapContext'):
    _M_omero.romio.CodomainMapContext = Ice.createTempClass()
    class CodomainMapContext(Ice.Object):
        def __init__(self):
            pass

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::romio::CodomainMapContext')

        def ice_id(self, current=None):
            return '::omero::romio::CodomainMapContext'

        def ice_staticId():
            return '::omero::romio::CodomainMapContext'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.romio._t_CodomainMapContext)

        __repr__ = __str__

    _M_omero.romio.CodomainMapContextPrx = Ice.createTempClass()
    class CodomainMapContextPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.romio.CodomainMapContextPrx.ice_checkedCast(proxy, '::omero::romio::CodomainMapContext', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.romio.CodomainMapContextPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.romio._t_CodomainMapContextPrx = IcePy.defineProxy('::omero::romio::CodomainMapContext', CodomainMapContextPrx)

    _M_omero.romio._t_CodomainMapContext = IcePy.defineClass('::omero::romio::CodomainMapContext', CodomainMapContext, (), False, None, (), ())
    CodomainMapContext.ice_type = _M_omero.romio._t_CodomainMapContext

    _M_omero.romio.CodomainMapContext = CodomainMapContext
    del CodomainMapContext

    _M_omero.romio.CodomainMapContextPrx = CodomainMapContextPrx
    del CodomainMapContextPrx

# End of module omero.romio

__name__ = 'omero'

# End of module omero
