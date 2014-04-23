# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `IQuery.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ModelF_ice
import omero_ServicesF_ice
import omero_System_ice
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

# Included module omero.grid
_M_omero.grid = Ice.openModule('omero.grid')

# Start of module omero
__name__ = 'omero'

# Start of module omero.api
__name__ = 'omero.api'

if not _M_omero.api.__dict__.has_key('IQuery'):
    _M_omero.api.IQuery = Ice.createTempClass()
    class IQuery(_M_omero.api.ServiceInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.api.IQuery:
                raise RuntimeError('omero.api.IQuery is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::api::IQuery', '::omero::api::ServiceInterface')

        def ice_id(self, current=None):
            return '::omero::api::IQuery'

        def ice_staticId():
            return '::omero::api::IQuery'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def get_async(self, _cb, klass, id, current=None):
        # def find_async(self, _cb, klass, id, current=None):
        # def findAll_async(self, _cb, klass, filter, current=None):
        # def findByExample_async(self, _cb, example, current=None):
        # def findAllByExample_async(self, _cb, example, filter, current=None):
        # def findByString_async(self, _cb, klass, field, value, current=None):
        # def findAllByString_async(self, _cb, klass, field, value, caseSensitive, filter, current=None):
        # def findByQuery_async(self, _cb, query, params, current=None):
        # def findAllByQuery_async(self, _cb, query, params, current=None):
        # def findAllByFullText_async(self, _cb, klass, query, params, current=None):
        # def projection_async(self, _cb, query, params, current=None):
        # def refresh_async(self, _cb, iObject, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.api._t_IQuery)

        __repr__ = __str__

    _M_omero.api.IQueryPrx = Ice.createTempClass()
    class IQueryPrx(_M_omero.api.ServiceInterfacePrx):

        def get(self, klass, id, _ctx=None):
            return _M_omero.api.IQuery._op_get.invoke(self, ((klass, id), _ctx))

        def get_async(self, _cb, klass, id, _ctx=None):
            return _M_omero.api.IQuery._op_get.invokeAsync(self, (_cb, (klass, id), _ctx))

        def find(self, klass, id, _ctx=None):
            return _M_omero.api.IQuery._op_find.invoke(self, ((klass, id), _ctx))

        def find_async(self, _cb, klass, id, _ctx=None):
            return _M_omero.api.IQuery._op_find.invokeAsync(self, (_cb, (klass, id), _ctx))

        def findAll(self, klass, filter, _ctx=None):
            return _M_omero.api.IQuery._op_findAll.invoke(self, ((klass, filter), _ctx))

        def findAll_async(self, _cb, klass, filter, _ctx=None):
            return _M_omero.api.IQuery._op_findAll.invokeAsync(self, (_cb, (klass, filter), _ctx))

        def findByExample(self, example, _ctx=None):
            return _M_omero.api.IQuery._op_findByExample.invoke(self, ((example, ), _ctx))

        def findByExample_async(self, _cb, example, _ctx=None):
            return _M_omero.api.IQuery._op_findByExample.invokeAsync(self, (_cb, (example, ), _ctx))

        def findAllByExample(self, example, filter, _ctx=None):
            return _M_omero.api.IQuery._op_findAllByExample.invoke(self, ((example, filter), _ctx))

        def findAllByExample_async(self, _cb, example, filter, _ctx=None):
            return _M_omero.api.IQuery._op_findAllByExample.invokeAsync(self, (_cb, (example, filter), _ctx))

        def findByString(self, klass, field, value, _ctx=None):
            return _M_omero.api.IQuery._op_findByString.invoke(self, ((klass, field, value), _ctx))

        def findByString_async(self, _cb, klass, field, value, _ctx=None):
            return _M_omero.api.IQuery._op_findByString.invokeAsync(self, (_cb, (klass, field, value), _ctx))

        def findAllByString(self, klass, field, value, caseSensitive, filter, _ctx=None):
            return _M_omero.api.IQuery._op_findAllByString.invoke(self, ((klass, field, value, caseSensitive, filter), _ctx))

        def findAllByString_async(self, _cb, klass, field, value, caseSensitive, filter, _ctx=None):
            return _M_omero.api.IQuery._op_findAllByString.invokeAsync(self, (_cb, (klass, field, value, caseSensitive, filter), _ctx))

        def findByQuery(self, query, params, _ctx=None):
            return _M_omero.api.IQuery._op_findByQuery.invoke(self, ((query, params), _ctx))

        def findByQuery_async(self, _cb, query, params, _ctx=None):
            return _M_omero.api.IQuery._op_findByQuery.invokeAsync(self, (_cb, (query, params), _ctx))

        def findAllByQuery(self, query, params, _ctx=None):
            return _M_omero.api.IQuery._op_findAllByQuery.invoke(self, ((query, params), _ctx))

        def findAllByQuery_async(self, _cb, query, params, _ctx=None):
            return _M_omero.api.IQuery._op_findAllByQuery.invokeAsync(self, (_cb, (query, params), _ctx))

        def findAllByFullText(self, klass, query, params, _ctx=None):
            return _M_omero.api.IQuery._op_findAllByFullText.invoke(self, ((klass, query, params), _ctx))

        def findAllByFullText_async(self, _cb, klass, query, params, _ctx=None):
            return _M_omero.api.IQuery._op_findAllByFullText.invokeAsync(self, (_cb, (klass, query, params), _ctx))

        def projection(self, query, params, _ctx=None):
            return _M_omero.api.IQuery._op_projection.invoke(self, ((query, params), _ctx))

        def projection_async(self, _cb, query, params, _ctx=None):
            return _M_omero.api.IQuery._op_projection.invokeAsync(self, (_cb, (query, params), _ctx))

        def refresh(self, iObject, _ctx=None):
            return _M_omero.api.IQuery._op_refresh.invoke(self, ((iObject, ), _ctx))

        def refresh_async(self, _cb, iObject, _ctx=None):
            return _M_omero.api.IQuery._op_refresh.invokeAsync(self, (_cb, (iObject, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.api.IQueryPrx.ice_checkedCast(proxy, '::omero::api::IQuery', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.api.IQueryPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.api._t_IQueryPrx = IcePy.defineProxy('::omero::api::IQuery', IQueryPrx)

    _M_omero.api._t_IQuery = IcePy.defineClass('::omero::api::IQuery', IQuery, (), True, None, (_M_omero.api._t_ServiceInterface,), ())
    IQuery.ice_type = _M_omero.api._t_IQuery

    IQuery._op_get = IcePy.Operation('get', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), IcePy._t_long)), (), _M_omero.model._t_IObject, (_M_omero._t_ServerError,))
    IQuery._op_find = IcePy.Operation('find', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), IcePy._t_long)), (), _M_omero.model._t_IObject, (_M_omero._t_ServerError,))
    IQuery._op_findAll = IcePy.Operation('findAll', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), _M_omero.sys._t_Filter)), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    IQuery._op_findByExample = IcePy.Operation('findByExample', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.model._t_IObject),), (), _M_omero.model._t_IObject, (_M_omero._t_ServerError,))
    IQuery._op_findAllByExample = IcePy.Operation('findAllByExample', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.model._t_IObject), ((), _M_omero.sys._t_Filter)), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    IQuery._op_findByString = IcePy.Operation('findByString', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), IcePy._t_string), ((), IcePy._t_string)), (), _M_omero.model._t_IObject, (_M_omero._t_ServerError,))
    IQuery._op_findAllByString = IcePy.Operation('findAllByString', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), IcePy._t_string), ((), IcePy._t_string), ((), IcePy._t_bool), ((), _M_omero.sys._t_Filter)), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    IQuery._op_findByQuery = IcePy.Operation('findByQuery', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), _M_omero.sys._t_Parameters)), (), _M_omero.model._t_IObject, (_M_omero._t_ServerError,))
    IQuery._op_findAllByQuery = IcePy.Operation('findAllByQuery', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), _M_omero.sys._t_Parameters)), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    IQuery._op_findAllByFullText = IcePy.Operation('findAllByFullText', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), IcePy._t_string), ((), _M_omero.sys._t_Parameters)), (), _M_omero.api._t_IObjectList, (_M_omero._t_ServerError,))
    IQuery._op_projection = IcePy.Operation('projection', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), IcePy._t_string), ((), _M_omero.sys._t_Parameters)), (), _M_omero._t_RTypeSeqSeq, (_M_omero._t_ServerError,))
    IQuery._op_refresh = IcePy.Operation('refresh', Ice.OperationMode.Idempotent, Ice.OperationMode.Idempotent, True, (), (((), _M_omero.model._t_IObject),), (), _M_omero.model._t_IObject, (_M_omero._t_ServerError,))

    _M_omero.api.IQuery = IQuery
    del IQuery

    _M_omero.api.IQueryPrx = IQueryPrx
    del IQueryPrx

# End of module omero.api

__name__ = 'omero'

# End of module omero
