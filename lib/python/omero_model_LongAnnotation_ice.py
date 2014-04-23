# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `LongAnnotation.ice'

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

if not _M_omero.model.__dict__.has_key('LongAnnotation'):
    _M_omero.model.LongAnnotation = Ice.createTempClass()
    class LongAnnotation(_M_omero.model.NumericAnnotation):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _ns=None, _description=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _longValue=None):
            if __builtin__.type(self) == _M_omero.model.LongAnnotation:
                raise RuntimeError('omero.model.LongAnnotation is an abstract class')
            _M_omero.model.NumericAnnotation.__init__(self, _id, _details, _loaded, _version, _ns, _description, _annotationLinksSeq, _annotationLinksLoaded, _annotationLinksCountPerOwner)
            self._longValue = _longValue

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Annotation', '::omero::model::BasicAnnotation', '::omero::model::IObject', '::omero::model::LongAnnotation', '::omero::model::NumericAnnotation')

        def ice_id(self, current=None):
            return '::omero::model::LongAnnotation'

        def ice_staticId():
            return '::omero::model::LongAnnotation'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getLongValue(self, current=None):
        # def setLongValue(self, theLongValue, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_LongAnnotation)

        __repr__ = __str__

    _M_omero.model.LongAnnotationPrx = Ice.createTempClass()
    class LongAnnotationPrx(_M_omero.model.NumericAnnotationPrx):

        def getLongValue(self, _ctx=None):
            return _M_omero.model.LongAnnotation._op_getLongValue.invoke(self, ((), _ctx))

        def setLongValue(self, theLongValue, _ctx=None):
            return _M_omero.model.LongAnnotation._op_setLongValue.invoke(self, ((theLongValue, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.LongAnnotationPrx.ice_checkedCast(proxy, '::omero::model::LongAnnotation', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.LongAnnotationPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_LongAnnotationPrx = IcePy.defineProxy('::omero::model::LongAnnotation', LongAnnotationPrx)

    _M_omero.model._t_LongAnnotation = IcePy.declareClass('::omero::model::LongAnnotation')

    _M_omero.model._t_LongAnnotation = IcePy.defineClass('::omero::model::LongAnnotation', LongAnnotation, (), True, _M_omero.model._t_NumericAnnotation, (), (('_longValue', (), _M_omero._t_RLong),))
    LongAnnotation.ice_type = _M_omero.model._t_LongAnnotation

    LongAnnotation._op_getLongValue = IcePy.Operation('getLongValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RLong, ())
    LongAnnotation._op_setLongValue = IcePy.Operation('setLongValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RLong),), (), None, ())

    _M_omero.model.LongAnnotation = LongAnnotation
    del LongAnnotation

    _M_omero.model.LongAnnotationPrx = LongAnnotationPrx
    del LongAnnotationPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
