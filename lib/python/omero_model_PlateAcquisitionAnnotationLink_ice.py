# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `PlateAcquisitionAnnotationLink.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_model_IObject_ice
import omero_RTypes_ice
import omero_System_ice
import omero_Collections_ice

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

if not _M_omero.model.__dict__.has_key('PlateAcquisition'):
    _M_omero.model._t_PlateAcquisition = IcePy.declareClass('::omero::model::PlateAcquisition')
    _M_omero.model._t_PlateAcquisitionPrx = IcePy.declareProxy('::omero::model::PlateAcquisition')

if not _M_omero.model.__dict__.has_key('Annotation'):
    _M_omero.model._t_Annotation = IcePy.declareClass('::omero::model::Annotation')
    _M_omero.model._t_AnnotationPrx = IcePy.declareProxy('::omero::model::Annotation')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('PlateAcquisitionAnnotationLink'):
    _M_omero.model.PlateAcquisitionAnnotationLink = Ice.createTempClass()
    class PlateAcquisitionAnnotationLink(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _parent=None, _child=None):
            if __builtin__.type(self) == _M_omero.model.PlateAcquisitionAnnotationLink:
                raise RuntimeError('omero.model.PlateAcquisitionAnnotationLink is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._parent = _parent
            self._child = _child

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::PlateAcquisitionAnnotationLink')

        def ice_id(self, current=None):
            return '::omero::model::PlateAcquisitionAnnotationLink'

        def ice_staticId():
            return '::omero::model::PlateAcquisitionAnnotationLink'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getParent(self, current=None):
        # def setParent(self, theParent, current=None):
        # def getChild(self, current=None):
        # def setChild(self, theChild, current=None):
        # def link(self, theParent, theChild, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_PlateAcquisitionAnnotationLink)

        __repr__ = __str__

    _M_omero.model.PlateAcquisitionAnnotationLinkPrx = Ice.createTempClass()
    class PlateAcquisitionAnnotationLinkPrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.PlateAcquisitionAnnotationLink._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.PlateAcquisitionAnnotationLink._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getParent(self, _ctx=None):
            return _M_omero.model.PlateAcquisitionAnnotationLink._op_getParent.invoke(self, ((), _ctx))

        def setParent(self, theParent, _ctx=None):
            return _M_omero.model.PlateAcquisitionAnnotationLink._op_setParent.invoke(self, ((theParent, ), _ctx))

        def getChild(self, _ctx=None):
            return _M_omero.model.PlateAcquisitionAnnotationLink._op_getChild.invoke(self, ((), _ctx))

        def setChild(self, theChild, _ctx=None):
            return _M_omero.model.PlateAcquisitionAnnotationLink._op_setChild.invoke(self, ((theChild, ), _ctx))

        def link(self, theParent, theChild, _ctx=None):
            return _M_omero.model.PlateAcquisitionAnnotationLink._op_link.invoke(self, ((theParent, theChild), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.PlateAcquisitionAnnotationLinkPrx.ice_checkedCast(proxy, '::omero::model::PlateAcquisitionAnnotationLink', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.PlateAcquisitionAnnotationLinkPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_PlateAcquisitionAnnotationLinkPrx = IcePy.defineProxy('::omero::model::PlateAcquisitionAnnotationLink', PlateAcquisitionAnnotationLinkPrx)

    _M_omero.model._t_PlateAcquisitionAnnotationLink = IcePy.declareClass('::omero::model::PlateAcquisitionAnnotationLink')

    _M_omero.model._t_PlateAcquisitionAnnotationLink = IcePy.defineClass('::omero::model::PlateAcquisitionAnnotationLink', PlateAcquisitionAnnotationLink, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_parent', (), _M_omero.model._t_PlateAcquisition),
        ('_child', (), _M_omero.model._t_Annotation)
    ))
    PlateAcquisitionAnnotationLink.ice_type = _M_omero.model._t_PlateAcquisitionAnnotationLink

    PlateAcquisitionAnnotationLink._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    PlateAcquisitionAnnotationLink._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    PlateAcquisitionAnnotationLink._op_getParent = IcePy.Operation('getParent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_PlateAcquisition, ())
    PlateAcquisitionAnnotationLink._op_setParent = IcePy.Operation('setParent', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAcquisition),), (), None, ())
    PlateAcquisitionAnnotationLink._op_getChild = IcePy.Operation('getChild', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Annotation, ())
    PlateAcquisitionAnnotationLink._op_setChild = IcePy.Operation('setChild', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Annotation),), (), None, ())
    PlateAcquisitionAnnotationLink._op_link = IcePy.Operation('link', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_PlateAcquisition), ((), _M_omero.model._t_Annotation)), (), None, ())

    _M_omero.model.PlateAcquisitionAnnotationLink = PlateAcquisitionAnnotationLink
    del PlateAcquisitionAnnotationLink

    _M_omero.model.PlateAcquisitionAnnotationLinkPrx = PlateAcquisitionAnnotationLinkPrx
    del PlateAcquisitionAnnotationLinkPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero