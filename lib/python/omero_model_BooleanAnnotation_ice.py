# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `BooleanAnnotation.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_System_ice
import omero_Collections_ice
import omero_model_BasicAnnotation_ice

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

if not _M_omero.model.__dict__.has_key('AnnotationAnnotationLink'):
    _M_omero.model._t_AnnotationAnnotationLink = IcePy.declareClass('::omero::model::AnnotationAnnotationLink')
    _M_omero.model._t_AnnotationAnnotationLinkPrx = IcePy.declareProxy('::omero::model::AnnotationAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('BooleanAnnotation'):
    _M_omero.model.BooleanAnnotation = Ice.createTempClass()
    class BooleanAnnotation(_M_omero.model.BasicAnnotation):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _ns=None, _description=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _boolValue=None):
            if __builtin__.type(self) == _M_omero.model.BooleanAnnotation:
                raise RuntimeError('omero.model.BooleanAnnotation is an abstract class')
            _M_omero.model.BasicAnnotation.__init__(self, _id, _details, _loaded, _version, _ns, _description, _annotationLinksSeq, _annotationLinksLoaded, _annotationLinksCountPerOwner)
            self._boolValue = _boolValue

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Annotation', '::omero::model::BasicAnnotation', '::omero::model::BooleanAnnotation', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::BooleanAnnotation'

        def ice_staticId():
            return '::omero::model::BooleanAnnotation'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getBoolValue(self, current=None):
        # def setBoolValue(self, theBoolValue, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_BooleanAnnotation)

        __repr__ = __str__

    _M_omero.model.BooleanAnnotationPrx = Ice.createTempClass()
    class BooleanAnnotationPrx(_M_omero.model.BasicAnnotationPrx):

        def getBoolValue(self, _ctx=None):
            return _M_omero.model.BooleanAnnotation._op_getBoolValue.invoke(self, ((), _ctx))

        def setBoolValue(self, theBoolValue, _ctx=None):
            return _M_omero.model.BooleanAnnotation._op_setBoolValue.invoke(self, ((theBoolValue, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.BooleanAnnotationPrx.ice_checkedCast(proxy, '::omero::model::BooleanAnnotation', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.BooleanAnnotationPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_BooleanAnnotationPrx = IcePy.defineProxy('::omero::model::BooleanAnnotation', BooleanAnnotationPrx)

    _M_omero.model._t_BooleanAnnotation = IcePy.declareClass('::omero::model::BooleanAnnotation')

    _M_omero.model._t_BooleanAnnotation = IcePy.defineClass('::omero::model::BooleanAnnotation', BooleanAnnotation, (), True, _M_omero.model._t_BasicAnnotation, (), (('_boolValue', (), _M_omero._t_RBool),))
    BooleanAnnotation.ice_type = _M_omero.model._t_BooleanAnnotation

    BooleanAnnotation._op_getBoolValue = IcePy.Operation('getBoolValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RBool, ())
    BooleanAnnotation._op_setBoolValue = IcePy.Operation('setBoolValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RBool),), (), None, ())

    _M_omero.model.BooleanAnnotation = BooleanAnnotation
    del BooleanAnnotation

    _M_omero.model.BooleanAnnotationPrx = BooleanAnnotationPrx
    del BooleanAnnotationPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
