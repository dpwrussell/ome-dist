# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `IUpdate.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_cmd_API_ice
import omero_ServicesF_ice
import omero_Collections_ice

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Included module Ice
_M_Ice = Ice.openModule('Ice')

# Included module Glacier2
_M_Glacier2 = Ice.openModule('Glacier2')

# Included module omero.sys
_M_omero.sys = Ice.openModule('omero.sys')

# Included module omero.api
_M_omero.api = Ice.openModule('omero.api')

# Included module omero.cmd
_M_omero.cmd = Ice.openModule('omero.cmd')

# Included module omero.grid
_M_omero.grid = Ice.openModule('omero.grid')

# Start of module omero
__name__ = 'omero'

# Start of module omero.api
__name__ = 'omero.api'

if not _M_omero.api.__dict__.has_key('IUpdate'):
    _M_omero.api.IUpdate = Ice.createTempClass()
    class IUpdate(_M_omero.api.ServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.IUpdate:
                raise RuntimeError('omero.api.IUpdate is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::IUpdate', '::omero::api::ServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::IUpdate'

        def ice_staticId():
            return '::omero::api::IUpdate'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def saveObject_async(self, _cb, obj, current=None):
        # def saveCollection_async(self, _cb, objs, current=None):
        # def saveAndReturnObject_async(self, _cb, obj, current=None):
        # def saveArray_async(self, _cb, graph, current=None):
        # def saveAndReturnArray_async(self, _cb, graph, current=None):
        # def saveAndReturnIds_async(self, _cb, graph, current=None):
        # def deleteObject_async(self, _cb, row, current=None):
        # def indexObject_async(self, _cb, row, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_IUpdate)

        __repr__ = __str__

    _M_omero.api.IUpdatePrx = Ice.createTempClass()
    class IUpdatePrx(_M_omero.api.ServiceInterfacePrx):

        def saveObject(self, obj, _ctx=None):
            return _M_omero.api.IUpdate._op_saveObject.invoke(self, ((obj, ), _ctx))

        def saveObject_async(self, _cb, obj, _ctx=None):
            return _M_omero.api.IUpdate._op_saveObject.invokeAsync(self, (_cb, (obj, ), _ctx))

        def saveCollection(self, objs, _ctx=None):
            return _M_omero.api.IUpdate._op_saveCollection.invoke(self, ((objs, ), _ctx))

        def saveCollection_async(self, _cb, objs, _ctx=None):
            return _M_omero.api.IUpdate._op_saveCollection.invokeAsync(self, (_cb, (objs, ), _ctx))

        def saveAndReturnObject(self, obj, _ctx=None):
            return _M_omero.api.IUpdate._op_saveAndReturnObject.invoke(self, ((obj, ), _ctx))

        def saveAndReturnObject_async(self, _cb, obj, _ctx=None):
            return _M_omero.api.IUpdate._op_saveAndReturnObject.invokeAsync(self, (_cb, (obj, ), _ctx))

        def saveArray(self, graph, _ctx=None):
            return _M_omero.api.IUpdate._op_saveArray.invoke(self, ((graph, ), _ctx))

        def saveArray_async(self, _cb, graph, _ctx=None):
            return _M_omero.api.IUpdate._op_saveArray.invokeAsync(self, (_cb, (graph, ), _ctx))

        def saveAndReturnArray(self, graph, _ctx=None):
            return _M_omero.api.IUpdate._op_saveAndReturnArray.invoke(self, ((graph, ), _ctx))

        def saveAndReturnArray_async(self, _cb, graph, _ctx=None):
            return _M_omero.api.IUpdate._op_saveAndReturnArray.invokeAsync(self, (_cb, (graph, ), _ctx))

        def saveAndReturnIds(self, graph, _ctx=None):
            return _M_omero.api.IUpdate._op_saveAndReturnIds.invoke(self, ((graph, ), _ctx))

        def saveAndReturnIds_async(self, _cb, graph, _ctx=None):
            return _M_omero.api.IUpdate._op_saveAndReturnIds.invokeAsync(self, (_cb, (graph, ), _ctx))

        def deleteObject(self, row, _ctx=None):
            return _M_omero.api.IUpdate._op_deleteObject.invoke(self, ((row, ), _ctx))

        def deleteObject_async(self, _cb, row, _ctx=None):
            return _M_omero.api.IUpdate._op_deleteObject.invokeAsync(self, (_cb, (row, ), _ctx))

        def indexObject(self, row, _ctx=None):
            return _M_omero.api.IUpdate._op_indexObject.invoke(self, ((row, ), _ctx))

        def indexObject_async(self, _cb, row, _ctx=None):
            return _M_omero.api.IUpdate._op_indexObject.invokeAsync(self, (_cb, (row, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.IUpdatePrx.ice_checkedCast(proxy, '::omero::api::IUpdate', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.IUpdatePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_IUpdatePrx = IcePy.defineProxy('::omero::api::IUpdate', IUpdatePrx)

    _M_omero.api._t_IUpdate = IcePy.defineClass('::omero::api::IUpdate', IUpdate, (), True, None, (_M_omero.api._t_ServiceInterface,), ())
    IUpdate.ice_type = _M_omero.api._t_IUpdate

    IUpdate._op_saveObject = IcePy.Operation('saveObject', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_IObject),), (), None, (_M_omero._t_ServerError,))
    IUpdate._op_saveCollection = IcePy.Operation('saveCollection', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_IObjectList),), (), None, (_M_omero._t_ServerError,))
    IUpdate._op_saveAndReturnObject = IcePy.Operation('saveAndReturnObject', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_IObject),), (), _M_omero.model._t_IObject, (_M_omero._t_ServerError,))
    IUpdate._op_saveArray = IcePy.Operation('saveArray', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_IObjectList),), (), None, (_M_omero._t_ServerError,))
    IUpdate._op_saveAndReturnArray = IcePy.Operation('saveAndReturnArray', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_IObjectList),), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    IUpdate._op_saveAndReturnIds = IcePy.Operation('saveAndReturnIds', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.api._t_IObjectList),), (), _M_omero.sys._t_LongList, (_M_omero._t_ServerError,))
    IUpdate._op_deleteObject = IcePy.Operation('deleteObject', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_IObject),), (), None, (_M_omero._t_ServerError,))
    IUpdate._op_indexObject = IcePy.Operation('indexObject', Ice.OperationMode.Normal, Ice.OperationMode.Normal, True, (), (((), _M_omero.model._t_IObject),), (), None, (_M_omero._t_ServerError,))

    _M_omero.api.IUpdate = IUpdate
    del IUpdate

    _M_omero.api.IUpdatePrx = IUpdatePrx
    del IUpdatePrx

if not _M_omero.api.__dict__.has_key('Save'):
    _M_omero.api.Save = Ice.createTempClass()
    class Save(_M_omero.cmd.Request):
        def __init__(self, obj=None):
            _M_omero.cmd.Request.__init__(self)
            self.obj = obj

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::Save', '::omero::cmd::Request')

        def ice_id(self, current=None):
            return '::omero::api::Save'

        def ice_staticId():
            return '::omero::api::Save'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_Save)

        __repr__ = __str__

    _M_omero.api.SavePrx = Ice.createTempClass()
    class SavePrx(_M_omero.cmd.RequestPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.SavePrx.ice_checkedCast(proxy, '::omero::api::Save', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.SavePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_SavePrx = IcePy.defineProxy('::omero::api::Save', SavePrx)

    _M_omero.api._t_Save = IcePy.declareClass('::omero::api::Save')

    _M_omero.api._t_Save = IcePy.defineClass('::omero::api::Save', Save, (), False, _M_omero.cmd._t_Request, (), (('obj', (), _M_omero.model._t_IObject),))
    Save.ice_type = _M_omero.api._t_Save

    _M_omero.api.Save = Save
    del Save

    _M_omero.api.SavePrx = SavePrx
    del SavePrx

if not _M_omero.api.__dict__.has_key('SaveRsp'):
    _M_omero.api.SaveRsp = Ice.createTempClass()
    class SaveRsp(_M_omero.cmd.Response):
        def __init__(self, obj=None):
            _M_omero.cmd.Response.__init__(self)
            self.obj = obj

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::SaveRsp', '::omero::cmd::Response')

        def ice_id(self, current=None):
            return '::omero::api::SaveRsp'

        def ice_staticId():
            return '::omero::api::SaveRsp'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_SaveRsp)

        __repr__ = __str__

    _M_omero.api.SaveRspPrx = Ice.createTempClass()
    class SaveRspPrx(_M_omero.cmd.ResponsePrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.SaveRspPrx.ice_checkedCast(proxy, '::omero::api::SaveRsp', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.SaveRspPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_SaveRspPrx = IcePy.defineProxy('::omero::api::SaveRsp', SaveRspPrx)

    _M_omero.api._t_SaveRsp = IcePy.declareClass('::omero::api::SaveRsp')

    _M_omero.api._t_SaveRsp = IcePy.defineClass('::omero::api::SaveRsp', SaveRsp, (), False, _M_omero.cmd._t_Response, (), (('obj', (), _M_omero.model._t_IObject),))
    SaveRsp.ice_type = _M_omero.api._t_SaveRsp

    _M_omero.api.SaveRsp = SaveRsp
    del SaveRsp

    _M_omero.api.SaveRspPrx = SaveRspPrx
    del SaveRspPrx

# End of module omero.api

__name__ = 'omero'

# End of module omero