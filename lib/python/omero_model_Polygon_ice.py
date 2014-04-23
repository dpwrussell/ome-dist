# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Polygon.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_System_ice
import omero_Collections_ice
import omero_model_Shape_ice

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

if not _M_omero.model.__dict__.has_key('Roi'):
    _M_omero.model._t_Roi = IcePy.declareClass('::omero::model::Roi')
    _M_omero.model._t_RoiPrx = IcePy.declareProxy('::omero::model::Roi')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('Polygon'):
    _M_omero.model.Polygon = Ice.createTempClass()
    class Polygon(_M_omero.model.Shape):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _theZ=None, _theT=None, _theC=None, _roi=None, _locked=None, _g=None, _transform=None, _vectorEffect=None, _visibility=None, _fillColor=None, _fillRule=None, _strokeColor=None, _strokeDashArray=None, _strokeDashOffset=None, _strokeLineCap=None, _strokeLineJoin=None, _strokeMiterLimit=None, _strokeWidth=None, _fontFamily=None, _fontSize=None, _fontStretch=None, _fontStyle=None, _fontVariant=None, _fontWeight=None, _points=None, _textValue=None):
            if __builtin__.type(self) == _M_omero.model.Polygon:
                raise RuntimeError('omero.model.Polygon is an abstract class')
            _M_omero.model.Shape.__init__(self, _id, _details, _loaded, _version, _theZ, _theT, _theC, _roi, _locked, _g, _transform, _vectorEffect, _visibility, _fillColor, _fillRule, _strokeColor, _strokeDashArray, _strokeDashOffset, _strokeLineCap, _strokeLineJoin, _strokeMiterLimit, _strokeWidth, _fontFamily, _fontSize, _fontStretch, _fontStyle, _fontVariant, _fontWeight)
            self._points = _points
            self._textValue = _textValue

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Polygon', '::omero::model::Shape')

        def ice_id(self, current=None):
            return '::omero::model::Polygon'

        def ice_staticId():
            return '::omero::model::Polygon'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getPoints(self, current=None):
        # def setPoints(self, thePoints, current=None):
        # def getTextValue(self, current=None):
        # def setTextValue(self, theTextValue, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Polygon)

        __repr__ = __str__

    _M_omero.model.PolygonPrx = Ice.createTempClass()
    class PolygonPrx(_M_omero.model.ShapePrx):

        def getPoints(self, _ctx=None):
            return _M_omero.model.Polygon._op_getPoints.invoke(self, ((), _ctx))

        def setPoints(self, thePoints, _ctx=None):
            return _M_omero.model.Polygon._op_setPoints.invoke(self, ((thePoints, ), _ctx))

        def getTextValue(self, _ctx=None):
            return _M_omero.model.Polygon._op_getTextValue.invoke(self, ((), _ctx))

        def setTextValue(self, theTextValue, _ctx=None):
            return _M_omero.model.Polygon._op_setTextValue.invoke(self, ((theTextValue, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.PolygonPrx.ice_checkedCast(proxy, '::omero::model::Polygon', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.PolygonPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_PolygonPrx = IcePy.defineProxy('::omero::model::Polygon', PolygonPrx)

    _M_omero.model._t_Polygon = IcePy.declareClass('::omero::model::Polygon')

    _M_omero.model._t_Polygon = IcePy.defineClass('::omero::model::Polygon', Polygon, (), True, _M_omero.model._t_Shape, (), (
        ('_points', (), _M_omero._t_RString),
        ('_textValue', (), _M_omero._t_RString)
    ))
    Polygon.ice_type = _M_omero.model._t_Polygon

    Polygon._op_getPoints = IcePy.Operation('getPoints', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Polygon._op_setPoints = IcePy.Operation('setPoints', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Polygon._op_getTextValue = IcePy.Operation('getTextValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Polygon._op_setTextValue = IcePy.Operation('setTextValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.Polygon = Polygon
    del Polygon

    _M_omero.model.PolygonPrx = PolygonPrx
    del PolygonPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero