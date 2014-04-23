# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `TextAnnotation.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_System_ice
import omero_Collections_ice
import omero_model_Annotation_ice

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

if not _M_omero.model.__dict__.has_key('TextAnnotation'):
    _M_omero.model.TextAnnotation = Ice.createTempClass()
    class TextAnnotation(_M_omero.model.Annotation):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _ns=None, _description=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _textValue=None):
            if __builtin__.type(self) == _M_omero.model.TextAnnotation:
                raise RuntimeError('omero.model.TextAnnotation is an abstract class')
            _M_omero.model.Annotation.__init__(self, _id, _details, _loaded, _version, _ns, _description, _annotationLinksSeq, _annotationLinksLoaded, _annotationLinksCountPerOwner)
            self._textValue = _textValue

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Annotation', '::omero::model::IObject', '::omero::model::TextAnnotation')

        def ice_id(self, current=None):
            return '::omero::model::TextAnnotation'

        def ice_staticId():
            return '::omero::model::TextAnnotation'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getTextValue(self, current=None):
        # def setTextValue(self, theTextValue, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_TextAnnotation)

        __repr__ = __str__

    _M_omero.model.TextAnnotationPrx = Ice.createTempClass()
    class TextAnnotationPrx(_M_omero.model.AnnotationPrx):

        def getTextValue(self, _ctx=None):
            return _M_omero.model.TextAnnotation._op_getTextValue.invoke(self, ((), _ctx))

        def setTextValue(self, theTextValue, _ctx=None):
            return _M_omero.model.TextAnnotation._op_setTextValue.invoke(self, ((theTextValue, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.TextAnnotationPrx.ice_checkedCast(proxy, '::omero::model::TextAnnotation', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.TextAnnotationPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_TextAnnotationPrx = IcePy.defineProxy('::omero::model::TextAnnotation', TextAnnotationPrx)

    _M_omero.model._t_TextAnnotation = IcePy.declareClass('::omero::model::TextAnnotation')

    _M_omero.model._t_TextAnnotation = IcePy.defineClass('::omero::model::TextAnnotation', TextAnnotation, (), True, _M_omero.model._t_Annotation, (), (('_textValue', (), _M_omero._t_RString),))
    TextAnnotation.ice_type = _M_omero.model._t_TextAnnotation

    TextAnnotation._op_getTextValue = IcePy.Operation('getTextValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    TextAnnotation._op_setTextValue = IcePy.Operation('setTextValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())

    _M_omero.model.TextAnnotation = TextAnnotation
    del TextAnnotation

    _M_omero.model.TextAnnotationPrx = TextAnnotationPrx
    del TextAnnotationPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
