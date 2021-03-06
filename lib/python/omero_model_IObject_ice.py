# **********************************************************************
#
# Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************
#
# Ice version 3.5.1
#
# <auto-generated>
#
# Generated from file `IObject.ice'
#
# Warning: do not edit this file.
#
# </auto-generated>
#

import Ice, IcePy
import omero_RTypes_ice

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Start of module omero
__name__ = 'omero'

# Start of module omero.model
__name__ = 'omero.model'

if 'IObject' not in _M_omero.model.__dict__:
    _M_omero.model.IObject = Ice.createTempClass()
    class IObject(Ice.Object):
        '''Base class of all model types. On the
server, the interface ome.model.IObject
unifies the model. In Ice, interfaces have
a more remote connotation.'''
        def __init__(self, _id=None, _details=None, _loaded=False):
            if Ice.getType(self) == _M_omero.model.IObject:
                raise RuntimeError('omero.model.IObject is an abstract class')
            self._id = _id
            self._details = _details
            self._loaded = _loaded

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject')

        def ice_id(self, current=None):
            return '::omero::model::IObject'

        def ice_staticId():
            return '::omero::model::IObject'
        ice_staticId = staticmethod(ice_staticId)

        def getId(self, current=None):
            pass

        def setId(self, id, current=None):
            pass

        def getDetails(self, current=None):
            pass

        def proxy(self, current=None):
            '''Return another instance of the same type as this instance
constructed as if by: new InstanceI( this.id.val, false );'''
            pass

        def shallowCopy(self, current=None):
            '''Return another instance of the same type as this instance
with all single-value entities unloaded and all members of
collections also unloaded.'''
            pass

        def unload(self, current=None):
            '''Sets the loaded boolean to false and empties all state
from this entity to make sending it over the network
less costly.'''
            pass

        def unloadCollections(self, current=None):
            '''Each collection can also be unloaded, independently
of the object itself. To unload all collections, use:

object.unloadCollections();

This is useful when it is possible that a collection no
longer represents the state in the database, and passing the
collections back to the server might delete some entities.

Sending back empty collections can also save a significant
amount of bandwidth, when working with large data graphs.'''
            pass

        def unloadDetails(self, current=None):
            '''As with collections, the objects under details can link
to many other objects. Unloading the details can same
bandwidth and simplify the server logic.'''
            pass

        def isLoaded(self, current=None):
            '''Tests for unloadedness. If this value is false, then
any method call on this instance other than getId
or setId will result in an exception.'''
            pass

        def isGlobal(self, current=None):
            '''Marker interface which means that special rules apply
for both reading and writing these instances.'''
            pass

        def isLink(self, current=None):
            '''A link between two other types.
Methods provided:

- getParent()
- getChild()'''
            pass

        def isMutable(self, current=None):
            '''The server will persist changes made to these types.
Methods provided:

- getVersion()
- setVersion()'''
            pass

        def isAnnotated(self, current=None):
            '''Allows for the attachment of any omero.model.Annotation
subclasses. Methods provided are:

- linkAnnotation(Annotation)
-'''
            pass

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_IObject)

        __repr__ = __str__

    _M_omero.model.IObjectPrx = Ice.createTempClass()
    class IObjectPrx(Ice.ObjectPrx):

        def getId(self, _ctx=None):
            return _M_omero.model.IObject._op_getId.invoke(self, ((), _ctx))

        def begin_getId(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.IObject._op_getId.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getId(self, _r):
            return _M_omero.model.IObject._op_getId.end(self, _r)

        def setId(self, id, _ctx=None):
            return _M_omero.model.IObject._op_setId.invoke(self, ((id, ), _ctx))

        def begin_setId(self, id, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.IObject._op_setId.begin(self, ((id, ), _response, _ex, _sent, _ctx))

        def end_setId(self, _r):
            return _M_omero.model.IObject._op_setId.end(self, _r)

        def getDetails(self, _ctx=None):
            return _M_omero.model.IObject._op_getDetails.invoke(self, ((), _ctx))

        def begin_getDetails(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.IObject._op_getDetails.begin(self, ((), _response, _ex, _sent, _ctx))

        def end_getDetails(self, _r):
            return _M_omero.model.IObject._op_getDetails.end(self, _r)

        '''Return another instance of the same type as this instance
constructed as if by: new InstanceI( this.id.val, false );'''
        def proxy(self, _ctx=None):
            return _M_omero.model.IObject._op_proxy.invoke(self, ((), _ctx))

        '''Return another instance of the same type as this instance
constructed as if by: new InstanceI( this.id.val, false );'''
        def begin_proxy(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.IObject._op_proxy.begin(self, ((), _response, _ex, _sent, _ctx))

        '''Return another instance of the same type as this instance
constructed as if by: new InstanceI( this.id.val, false );'''
        def end_proxy(self, _r):
            return _M_omero.model.IObject._op_proxy.end(self, _r)

        '''Return another instance of the same type as this instance
with all single-value entities unloaded and all members of
collections also unloaded.'''
        def shallowCopy(self, _ctx=None):
            return _M_omero.model.IObject._op_shallowCopy.invoke(self, ((), _ctx))

        '''Return another instance of the same type as this instance
with all single-value entities unloaded and all members of
collections also unloaded.'''
        def begin_shallowCopy(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.IObject._op_shallowCopy.begin(self, ((), _response, _ex, _sent, _ctx))

        '''Return another instance of the same type as this instance
with all single-value entities unloaded and all members of
collections also unloaded.'''
        def end_shallowCopy(self, _r):
            return _M_omero.model.IObject._op_shallowCopy.end(self, _r)

        '''Sets the loaded boolean to false and empties all state
from this entity to make sending it over the network
less costly.'''
        def unload(self, _ctx=None):
            return _M_omero.model.IObject._op_unload.invoke(self, ((), _ctx))

        '''Sets the loaded boolean to false and empties all state
from this entity to make sending it over the network
less costly.'''
        def begin_unload(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.IObject._op_unload.begin(self, ((), _response, _ex, _sent, _ctx))

        '''Sets the loaded boolean to false and empties all state
from this entity to make sending it over the network
less costly.'''
        def end_unload(self, _r):
            return _M_omero.model.IObject._op_unload.end(self, _r)

        '''Each collection can also be unloaded, independently
of the object itself. To unload all collections, use:

object.unloadCollections();

This is useful when it is possible that a collection no
longer represents the state in the database, and passing the
collections back to the server might delete some entities.

Sending back empty collections can also save a significant
amount of bandwidth, when working with large data graphs.'''
        def unloadCollections(self, _ctx=None):
            return _M_omero.model.IObject._op_unloadCollections.invoke(self, ((), _ctx))

        '''Each collection can also be unloaded, independently
of the object itself. To unload all collections, use:

object.unloadCollections();

This is useful when it is possible that a collection no
longer represents the state in the database, and passing the
collections back to the server might delete some entities.

Sending back empty collections can also save a significant
amount of bandwidth, when working with large data graphs.'''
        def begin_unloadCollections(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.IObject._op_unloadCollections.begin(self, ((), _response, _ex, _sent, _ctx))

        '''Each collection can also be unloaded, independently
of the object itself. To unload all collections, use:

object.unloadCollections();

This is useful when it is possible that a collection no
longer represents the state in the database, and passing the
collections back to the server might delete some entities.

Sending back empty collections can also save a significant
amount of bandwidth, when working with large data graphs.'''
        def end_unloadCollections(self, _r):
            return _M_omero.model.IObject._op_unloadCollections.end(self, _r)

        '''As with collections, the objects under details can link
to many other objects. Unloading the details can same
bandwidth and simplify the server logic.'''
        def unloadDetails(self, _ctx=None):
            return _M_omero.model.IObject._op_unloadDetails.invoke(self, ((), _ctx))

        '''As with collections, the objects under details can link
to many other objects. Unloading the details can same
bandwidth and simplify the server logic.'''
        def begin_unloadDetails(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.IObject._op_unloadDetails.begin(self, ((), _response, _ex, _sent, _ctx))

        '''As with collections, the objects under details can link
to many other objects. Unloading the details can same
bandwidth and simplify the server logic.'''
        def end_unloadDetails(self, _r):
            return _M_omero.model.IObject._op_unloadDetails.end(self, _r)

        '''Tests for unloadedness. If this value is false, then
any method call on this instance other than getId
or setId will result in an exception.'''
        def isLoaded(self, _ctx=None):
            return _M_omero.model.IObject._op_isLoaded.invoke(self, ((), _ctx))

        '''Tests for unloadedness. If this value is false, then
any method call on this instance other than getId
or setId will result in an exception.'''
        def begin_isLoaded(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.IObject._op_isLoaded.begin(self, ((), _response, _ex, _sent, _ctx))

        '''Tests for unloadedness. If this value is false, then
any method call on this instance other than getId
or setId will result in an exception.'''
        def end_isLoaded(self, _r):
            return _M_omero.model.IObject._op_isLoaded.end(self, _r)

        '''Marker interface which means that special rules apply
for both reading and writing these instances.'''
        def isGlobal(self, _ctx=None):
            return _M_omero.model.IObject._op_isGlobal.invoke(self, ((), _ctx))

        '''Marker interface which means that special rules apply
for both reading and writing these instances.'''
        def begin_isGlobal(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.IObject._op_isGlobal.begin(self, ((), _response, _ex, _sent, _ctx))

        '''Marker interface which means that special rules apply
for both reading and writing these instances.'''
        def end_isGlobal(self, _r):
            return _M_omero.model.IObject._op_isGlobal.end(self, _r)

        '''A link between two other types.
Methods provided:

- getParent()
- getChild()'''
        def isLink(self, _ctx=None):
            return _M_omero.model.IObject._op_isLink.invoke(self, ((), _ctx))

        '''A link between two other types.
Methods provided:

- getParent()
- getChild()'''
        def begin_isLink(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.IObject._op_isLink.begin(self, ((), _response, _ex, _sent, _ctx))

        '''A link between two other types.
Methods provided:

- getParent()
- getChild()'''
        def end_isLink(self, _r):
            return _M_omero.model.IObject._op_isLink.end(self, _r)

        '''The server will persist changes made to these types.
Methods provided:

- getVersion()
- setVersion()'''
        def isMutable(self, _ctx=None):
            return _M_omero.model.IObject._op_isMutable.invoke(self, ((), _ctx))

        '''The server will persist changes made to these types.
Methods provided:

- getVersion()
- setVersion()'''
        def begin_isMutable(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.IObject._op_isMutable.begin(self, ((), _response, _ex, _sent, _ctx))

        '''The server will persist changes made to these types.
Methods provided:

- getVersion()
- setVersion()'''
        def end_isMutable(self, _r):
            return _M_omero.model.IObject._op_isMutable.end(self, _r)

        '''Allows for the attachment of any omero.model.Annotation
subclasses. Methods provided are:

- linkAnnotation(Annotation)
-'''
        def isAnnotated(self, _ctx=None):
            return _M_omero.model.IObject._op_isAnnotated.invoke(self, ((), _ctx))

        '''Allows for the attachment of any omero.model.Annotation
subclasses. Methods provided are:

- linkAnnotation(Annotation)
-'''
        def begin_isAnnotated(self, _response=None, _ex=None, _sent=None, _ctx=None):
            return _M_omero.model.IObject._op_isAnnotated.begin(self, ((), _response, _ex, _sent, _ctx))

        '''Allows for the attachment of any omero.model.Annotation
subclasses. Methods provided are:

- linkAnnotation(Annotation)
-'''
        def end_isAnnotated(self, _r):
            return _M_omero.model.IObject._op_isAnnotated.end(self, _r)

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.IObjectPrx.ice_checkedCast(proxy, '::omero::model::IObject', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.IObjectPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_IObjectPrx = IcePy.defineProxy('::omero::model::IObject', IObjectPrx)

    _M_omero.model._t_IObject = IcePy.declareClass('::omero::model::IObject')

    _M_omero.model._t_IObject = IcePy.defineClass('::omero::model::IObject', IObject, -1, (), True, False, None, (), (
        ('_id', (), _M_omero._t_RLong, False, 0),
        ('_details', (), _M_omero.model._t_Details, False, 0),
        ('_loaded', (), IcePy._t_bool, False, 0)
    ))
    IObject._ice_type = _M_omero.model._t_IObject

    IObject._op_getId = IcePy.Operation('getId', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero._t_RLong, False, 0), ())
    IObject._op_setId = IcePy.Operation('setId', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (((), _M_omero._t_RLong, False, 0),), (), None, ())
    IObject._op_getDetails = IcePy.Operation('getDetails', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero.model._t_Details, False, 0), ())
    IObject._op_proxy = IcePy.Operation('proxy', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero.model._t_IObject, False, 0), ())
    IObject._op_shallowCopy = IcePy.Operation('shallowCopy', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), _M_omero.model._t_IObject, False, 0), ())
    IObject._op_unload = IcePy.Operation('unload', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), None, ())
    IObject._op_unloadCollections = IcePy.Operation('unloadCollections', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), None, ())
    IObject._op_unloadDetails = IcePy.Operation('unloadDetails', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), None, ())
    IObject._op_isLoaded = IcePy.Operation('isLoaded', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), IcePy._t_bool, False, 0), ())
    IObject._op_isGlobal = IcePy.Operation('isGlobal', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), IcePy._t_bool, False, 0), ())
    IObject._op_isLink = IcePy.Operation('isLink', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), IcePy._t_bool, False, 0), ())
    IObject._op_isMutable = IcePy.Operation('isMutable', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), IcePy._t_bool, False, 0), ())
    IObject._op_isAnnotated = IcePy.Operation('isAnnotated', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, None, (), (), (), ((), IcePy._t_bool, False, 0), ())

    _M_omero.model.IObject = IObject
    del IObject

    _M_omero.model.IObjectPrx = IObjectPrx
    del IObjectPrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
