# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `TagAnnotation.ice'

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

if not _M_omero.model.__dict__.has_key('TagAnnotation'):
    _M_omero.model.TagAnnotation = Ice.createTempClass()
    class TagAnnotation(_M_omero.model.TextAnnotation):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _ns=None, _description=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _textValue=None):
            if __builtin__.type(self) == _M_omero.model.TagAnnotation:
                raise RuntimeError('omero.model.TagAnnotation is an abstract class')
            _M_omero.model.TextAnnotation.__init__(self, _id, _details, _loaded, _version, _ns, _description, _annotationLinksSeq, _annotationLinksLoaded, _annotationLinksCountPerOwner, _textValue)

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Annotation', '::omero::model::IObject', '::omero::model::TagAnnotation', '::omero::model::TextAnnotation')

        def ice_id(self, current=None):
            return '::omero::model::TagAnnotation'

        def ice_staticId():
            return '::omero::model::TagAnnotation'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_TagAnnotation)

        __repr__ = __str__

    _M_omero.model.TagAnnotationPrx = Ice.createTempClass()
    class TagAnnotationPrx(_M_omero.model.TextAnnotationPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.TagAnnotationPrx.ice_checkedCast(proxy, '::omero::model::TagAnnotation', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.TagAnnotationPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_TagAnnotationPrx = IcePy.defineProxy('::omero::model::TagAnnotation', TagAnnotationPrx)

    _M_omero.model._t_TagAnnotation = IcePy.declareClass('::omero::model::TagAnnotation')

    _M_omero.model._t_TagAnnotation = IcePy.defineClass('::omero::model::TagAnnotation', TagAnnotation, (), True, _M_omero.model._t_TextAnnotation, (), ())
    TagAnnotation.ice_type = _M_omero.model._t_TagAnnotation

    _M_omero.model.TagAnnotation = TagAnnotation
    del TagAnnotation

    _M_omero.model.TagAnnotationPrx = TagAnnotationPrx
    del TagAnnotationPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero