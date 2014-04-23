# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `FileAnnotation.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_System_ice
import omero_Collections_ice
import omero_model_TypeAnnotation_ice

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

if not _M_omero.model.__dict__.has_key('OriginalFile'):
    _M_omero.model._t_OriginalFile = IcePy.declareClass('::omero::model::OriginalFile')
    _M_omero.model._t_OriginalFilePrx = IcePy.declareProxy('::omero::model::OriginalFile')

if not _M_omero.model.__dict__.has_key('AnnotationAnnotationLink'):
    _M_omero.model._t_AnnotationAnnotationLink = IcePy.declareClass('::omero::model::AnnotationAnnotationLink')
    _M_omero.model._t_AnnotationAnnotationLinkPrx = IcePy.declareProxy('::omero::model::AnnotationAnnotationLink')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('FileAnnotation'):
    _M_omero.model.FileAnnotation = Ice.createTempClass()
    class FileAnnotation(_M_omero.model.TypeAnnotation):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _ns=None, _description=None, _annotationLinksSeq=None, _annotationLinksLoaded=False, _annotationLinksCountPerOwner=None, _file=None):
            if __builtin__.type(self) == _M_omero.model.FileAnnotation:
                raise RuntimeError('omero.model.FileAnnotation is an abstract class')
            _M_omero.model.TypeAnnotation.__init__(self, _id, _details, _loaded, _version, _ns, _description, _annotationLinksSeq, _annotationLinksLoaded, _annotationLinksCountPerOwner)
            self._file = _file

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::Annotation', '::omero::model::FileAnnotation', '::omero::model::IObject', '::omero::model::TypeAnnotation')

        def ice_id(self, current=None):
            return '::omero::model::FileAnnotation'

        def ice_staticId():
            return '::omero::model::FileAnnotation'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getFile(self, current=None):
        # def setFile(self, theFile, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_FileAnnotation)

        __repr__ = __str__

    _M_omero.model.FileAnnotationPrx = Ice.createTempClass()
    class FileAnnotationPrx(_M_omero.model.TypeAnnotationPrx):

        def getFile(self, _ctx=None):
            return _M_omero.model.FileAnnotation._op_getFile.invoke(self, ((), _ctx))

        def setFile(self, theFile, _ctx=None):
            return _M_omero.model.FileAnnotation._op_setFile.invoke(self, ((theFile, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.FileAnnotationPrx.ice_checkedCast(proxy, '::omero::model::FileAnnotation', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.FileAnnotationPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_FileAnnotationPrx = IcePy.defineProxy('::omero::model::FileAnnotation', FileAnnotationPrx)

    _M_omero.model._t_FileAnnotation = IcePy.declareClass('::omero::model::FileAnnotation')

    _M_omero.model._t_FileAnnotation = IcePy.defineClass('::omero::model::FileAnnotation', FileAnnotation, (), True, _M_omero.model._t_TypeAnnotation, (), (('_file', (), _M_omero.model._t_OriginalFile),))
    FileAnnotation.ice_type = _M_omero.model._t_FileAnnotation

    FileAnnotation._op_getFile = IcePy.Operation('getFile', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_OriginalFile, ())
    FileAnnotation._op_setFile = IcePy.Operation('setFile', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_OriginalFile),), (), None, ())

    _M_omero.model.FileAnnotation = FileAnnotation
    del FileAnnotation

    _M_omero.model.FileAnnotationPrx = FileAnnotationPrx
    del FileAnnotationPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
