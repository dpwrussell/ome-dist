# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `XmlAnnotation.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_System_ice
import omero_Collections_ice
import omero_model_TextAnnotation_ice

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

if not _M_omero.model.__dict__.has_key('XmlAnnotation'):
    _M_omero.model.XmlAnnotation = Ice.createTempClass()
    class XmlAnnotation(_M_omero.model.TextAnnotation):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _ns=None, _description=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _textValue=None):
            if __builtin__.type(self) == _M_omero.model.XmlAnnotation:
                raise RuntimeError('omero.model.XmlAnnotation is an abstract class')
            _M_omero.model.TextAnnotation.__init__(self, _id, _details, _loaded, _version, _ns, _description, _annotationLinksSeq, _annotationLinksLoaded, _annotationLinksCountPerOwner, _textValue)

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Annotation', '::omero::model::IObject', '::omero::model::TextAnnotation', '::omero::model::XmlAnnotation')

        def ice_id(self, current=None):
            return '::omero::model::XmlAnnotation'

        def ice_staticId():
            return '::omero::model::XmlAnnotation'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_XmlAnnotation)

        __repr__ = __str__

    _M_omero.model.XmlAnnotationPrx = Ice.createTempClass()
    class XmlAnnotationPrx(_M_omero.model.TextAnnotationPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.XmlAnnotationPrx.ice_checkedCast(proxy, '::omero::model::XmlAnnotation', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.XmlAnnotationPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_XmlAnnotationPrx = IcePy.defineProxy('::omero::model::XmlAnnotation', XmlAnnotationPrx)

    _M_omero.model._t_XmlAnnotation = IcePy.declareClass('::omero::model::XmlAnnotation')

    _M_omero.model._t_XmlAnnotation = IcePy.defineClass('::omero::model::XmlAnnotation', XmlAnnotation, (), True, _M_omero.model._t_TextAnnotation, (), ())
    XmlAnnotation.ice_type = _M_omero.model._t_XmlAnnotation

    _M_omero.model.XmlAnnotation = XmlAnnotation
    del XmlAnnotation

    _M_omero.model.XmlAnnotationPrx = XmlAnnotationPrx
    del XmlAnnotationPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
