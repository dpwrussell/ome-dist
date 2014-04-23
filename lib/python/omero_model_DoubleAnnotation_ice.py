# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `DoubleAnnotation.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_System_ice
import omero_Collections_ice
import omero_model_NumericAnnotation_ice

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

if not _M_omero.model.__dict__.has_key('DoubleAnnotation'):
    _M_omero.model.DoubleAnnotation = Ice.createTempClass()
    class DoubleAnnotation(_M_omero.model.NumericAnnotation):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _ns=None, _description=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _doubleValue=None):
            if __builtin__.type(self) == _M_omero.model.DoubleAnnotation:
                raise RuntimeError('omero.model.DoubleAnnotation is an abstract class')
            _M_omero.model.NumericAnnotation.__init__(self, _id, _details, _loaded, _version, _ns, _description, _annotationLinksSeq, _annotationLinksLoaded, _annotationLinksCountPerOwner)
            self._doubleValue = _doubleValue

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Annotation', '::omero::model::BasicAnnotation', '::omero::model::DoubleAnnotation', '::omero::model::IObject', '::omero::model::NumericAnnotation')

        def ice_id(self, current=None):
            return '::omero::model::DoubleAnnotation'

        def ice_staticId():
            return '::omero::model::DoubleAnnotation'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getDoubleValue(self, current=None):
        # def setDoubleValue(self, theDoubleValue, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_DoubleAnnotation)

        __repr__ = __str__

    _M_omero.model.DoubleAnnotationPrx = Ice.createTempClass()
    class DoubleAnnotationPrx(_M_omero.model.NumericAnnotationPrx):

        def getDoubleValue(self, _ctx=None):
            return _M_omero.model.DoubleAnnotation._op_getDoubleValue.invoke(self, ((), _ctx))

        def setDoubleValue(self, theDoubleValue, _ctx=None):
            return _M_omero.model.DoubleAnnotation._op_setDoubleValue.invoke(self, ((theDoubleValue, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.DoubleAnnotationPrx.ice_checkedCast(proxy, '::omero::model::DoubleAnnotation', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.DoubleAnnotationPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_DoubleAnnotationPrx = IcePy.defineProxy('::omero::model::DoubleAnnotation', DoubleAnnotationPrx)

    _M_omero.model._t_DoubleAnnotation = IcePy.declareClass('::omero::model::DoubleAnnotation')

    _M_omero.model._t_DoubleAnnotation = IcePy.defineClass('::omero::model::DoubleAnnotation', DoubleAnnotation, (), True, _M_omero.model._t_NumericAnnotation, (), (('_doubleValue', (), _M_omero._t_RDouble),))
    DoubleAnnotation.ice_type = _M_omero.model._t_DoubleAnnotation

    DoubleAnnotation._op_getDoubleValue = IcePy.Operation('getDoubleValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    DoubleAnnotation._op_setDoubleValue = IcePy.Operation('setDoubleValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())

    _M_omero.model.DoubleAnnotation = DoubleAnnotation
    del DoubleAnnotation

    _M_omero.model.DoubleAnnotationPrx = DoubleAnnotationPrx
    del DoubleAnnotationPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero