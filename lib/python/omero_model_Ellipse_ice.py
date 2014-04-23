# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Ellipse.ice'

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

if not _M_omero.model.__dict__.has_key('Ellipse'):
    _M_omero.model.Ellipse = Ice.createTempClass()
    class Ellipse(_M_omero.model.Shape):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _theZ=None, _theT=None, _theC=None, _roi=None, _locked=None, _g=None, _transform=None, _vectorEffect=None, _visibility=None, _fillColor=None, _fillRule=None, _strokeColor=None, _strokeDashArray=None, _strokeDashOffset=None, _strokeLineCap=None, _strokeLineJoin=None, _strokeMiterLimit=None, _strokeWidth=None, _fontFamily=None, _fontSize=None, _fontStretch=None, _fontStyle=None, _fontVariant=None, _fontWeight=None, _cx=None, _cy=None, _rx=None, _ry=None, _textValue=None):
            if __builtin__.type(self) == _M_omero.model.Ellipse:
                raise RuntimeError('omero.model.Ellipse is an abstract class')
            _M_omero.model.Shape.__init__(self, _id, _details, _loaded, _version, _theZ, _theT, _theC, _roi, _locked, _g, _transform, _vectorEffect, _visibility, _fillColor, _fillRule, _strokeColor, _strokeDashArray, _strokeDashOffset, _strokeLineCap, _strokeLineJoin, _strokeMiterLimit, _strokeWidth, _fontFamily, _fontSize, _fontStretch, _fontStyle, _fontVariant, _fontWeight)
            self._cx = _cx
            self._cy = _cy
            self._rx = _rx
            self._ry = _ry
            self._textValue = _textValue

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Ellipse', '::omero::model::IObject', '::omero::model::Shape')

        def ice_id(self, current=None):
            return '::omero::model::Ellipse'

        def ice_staticId():
            return '::omero::model::Ellipse'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getCx(self, current=None):
        # def setCx(self, theCx, current=None):
        # def getCy(self, current=None):
        # def setCy(self, theCy, current=None):
        # def getRx(self, current=None):
        # def setRx(self, theRx, current=None):
        # def getRy(self, current=None):
        # def setRy(self, theRy, current=None):
        # def getTextValue(self, current=None):
        # def setTextValue(self, theTextValue, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Ellipse)

        __repr__ = __str__

    _M_omero.model.EllipsePrx = Ice.createTempClass()
    class EllipsePrx(_M_omero.model.ShapePrx):

        def getCx(self, _ctx=None):
            return _M_omero.model.Ellipse._op_getCx.invoke(self, ((), _ctx))

        def setCx(self, theCx, _ctx=None):
            return _M_omero.model.Ellipse._op_setCx.invoke(self, ((theCx, ), _ctx))

        def getCy(self, _ctx=None):
            return _M_omero.model.Ellipse._op_getCy.invoke(self, ((), _ctx))

        def setCy(self, theCy, _ctx=None):
            return _M_omero.model.Ellipse._op_setCy.invoke(self, ((theCy, ), _ctx))

        def getRx(self, _ctx=None):
            return _M_omero.model.Ellipse._op_getRx.invoke(self, ((), _ctx))

        def setRx(self, theRx, _ctx=None):
            return _M_omero.model.Ellipse._op_setRx.invoke(self, ((theRx, ), _ctx))

        def getRy(self, _ctx=None):
            return _M_omero.model.Ellipse._op_getRy.invoke(self, ((), _ctx))

        def setRy(self, theRy, _ctx=None):
            return _M_omero.model.Ellipse._op_setRy.invoke(self, ((theRy, ), _ctx))

        def getTextValue(self, _ctx=None):
            return _M_omero.model.Ellipse._op_getTextValue.invoke(self, ((), _ctx))

        def setTextValue(self, theTextValue, _ctx=None):
            return _M_omero.model.Ellipse._op_setTextValue.invoke(self, ((theTextValue, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.EllipsePrx.ice_checkedCast(proxy, '::omero::model::Ellipse', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.EllipsePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_EllipsePrx = IcePy.defineProxy('::omero::model::Ellipse', EllipsePrx)

    _M_omero.model._t_Ellipse = IcePy.declareClass('::omero::model::Ellipse')

    _M_omero.model._t_Ellipse = IcePy.defineClass('::omero::model::Ellipse', Ellipse, (), True, _M_omero.model._t_Shape, (), (
        ('_cx', (), _M_omero._t_RDouble),
        ('_cy', (), _M_omero._t_RDouble),
        ('_rx', (), _M_omero._t_RDouble),
        ('_ry', (), _M_omero._t_RDouble),
        ('_textValue', (), _M_omero._t_RString)
    ))
    Ellipse.ice_type = _M_omero.model._t_Ellipse

    Ellipse._op_getCx = IcePy.Operation('getCx', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Ellipse._op_setCx = IcePy.Operation('setCx', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Ellipse._op_getCy = IcePy.Operation('getCy', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Ellipse._op_setCy = IcePy.Operation('setCy', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Ellipse._op_getRx = IcePy.Operation('getRx', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Ellipse._op_setRx = IcePy.Operation('setRx', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Ellipse._op_getRy = IcePy.Operation('getRy', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Ellipse._op_setRy = IcePy.Operation('setRy', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Ellipse._op_getTextValue = IcePy.Operation('getTextValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Ellipse._op_setTextValue = IcePy.Operation('setTextValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.Ellipse = Ellipse
    del Ellipse

    _M_omero.model.EllipsePrx = EllipsePrx
    del EllipsePrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
