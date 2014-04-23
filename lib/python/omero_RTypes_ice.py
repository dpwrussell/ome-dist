# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `RTypes.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_ModelF_ice

# Included module omero
_M_omero = Ice.openModule('omero')

# Included module omero.model
_M_omero.model = Ice.openModule('omero.model')

# Start of module omero
__name__ = 'omero'

if not _M_omero.__dict__.has_key('RType'):
    _M_omero.RType = Ice.createTempClass()
    class RType(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_omero.RType:
                raise RuntimeError('omero.RType is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RType'

        def ice_staticId():
            return '::omero::RType'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def compare(self, rhs, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RType)

        __repr__ = __str__

    _M_omero.RTypePrx = Ice.createTempClass()
    class RTypePrx(Ice.ObjectPrx):

        def compare(self, rhs, _ctx=None):
            return _M_omero.RType._op_compare.invoke(self, ((rhs, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RTypePrx.ice_checkedCast(proxy, '::omero::RType', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RTypePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RTypePrx = IcePy.defineProxy('::omero::RType', RTypePrx)

    _M_omero._t_RType = IcePy.defineClass('::omero::RType', RType, (), True, None, (), ())
    RType.ice_type = _M_omero._t_RType

    RType._op_compare = IcePy.Operation('compare', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RType),), (), IcePy._t_int, ())

    _M_omero.RType = RType
    del RType

    _M_omero.RTypePrx = RTypePrx
    del RTypePrx

if not _M_omero.__dict__.has_key('RBool'):
    _M_omero.RBool = Ice.createTempClass()
    class RBool(_M_omero.RType):
        def __init__(self, _val=False):
            if __builtin__.type(self) == _M_omero.RBool:
                raise RuntimeError('omero.RBool is an abstract class')
            _M_omero.RType.__init__(self)
            self._val = _val

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RBool', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RBool'

        def ice_staticId():
            return '::omero::RBool'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getValue(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RBool)

        __repr__ = __str__

    _M_omero.RBoolPrx = Ice.createTempClass()
    class RBoolPrx(_M_omero.RTypePrx):

        def getValue(self, _ctx=None):
            return _M_omero.RBool._op_getValue.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RBoolPrx.ice_checkedCast(proxy, '::omero::RBool', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RBoolPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RBoolPrx = IcePy.defineProxy('::omero::RBool', RBoolPrx)

    _M_omero._t_RBool = IcePy.defineClass('::omero::RBool', RBool, (), True, _M_omero._t_RType, (), (('_val', (), IcePy._t_bool),))
    RBool.ice_type = _M_omero._t_RBool

    RBool._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_bool, ())

    _M_omero.RBool = RBool
    del RBool

    _M_omero.RBoolPrx = RBoolPrx
    del RBoolPrx

if not _M_omero.__dict__.has_key('RDouble'):
    _M_omero.RDouble = Ice.createTempClass()
    class RDouble(_M_omero.RType):
        def __init__(self, _val=0.0):
            if __builtin__.type(self) == _M_omero.RDouble:
                raise RuntimeError('omero.RDouble is an abstract class')
            _M_omero.RType.__init__(self)
            self._val = _val

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RDouble', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RDouble'

        def ice_staticId():
            return '::omero::RDouble'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getValue(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RDouble)

        __repr__ = __str__

    _M_omero.RDoublePrx = Ice.createTempClass()
    class RDoublePrx(_M_omero.RTypePrx):

        def getValue(self, _ctx=None):
            return _M_omero.RDouble._op_getValue.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RDoublePrx.ice_checkedCast(proxy, '::omero::RDouble', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RDoublePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RDoublePrx = IcePy.defineProxy('::omero::RDouble', RDoublePrx)

    _M_omero._t_RDouble = IcePy.defineClass('::omero::RDouble', RDouble, (), True, _M_omero._t_RType, (), (('_val', (), IcePy._t_double),))
    RDouble.ice_type = _M_omero._t_RDouble

    RDouble._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_double, ())

    _M_omero.RDouble = RDouble
    del RDouble

    _M_omero.RDoublePrx = RDoublePrx
    del RDoublePrx

if not _M_omero.__dict__.has_key('RFloat'):
    _M_omero.RFloat = Ice.createTempClass()
    class RFloat(_M_omero.RType):
        def __init__(self, _val=0.0):
            if __builtin__.type(self) == _M_omero.RFloat:
                raise RuntimeError('omero.RFloat is an abstract class')
            _M_omero.RType.__init__(self)
            self._val = _val

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RFloat', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RFloat'

        def ice_staticId():
            return '::omero::RFloat'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getValue(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RFloat)

        __repr__ = __str__

    _M_omero.RFloatPrx = Ice.createTempClass()
    class RFloatPrx(_M_omero.RTypePrx):

        def getValue(self, _ctx=None):
            return _M_omero.RFloat._op_getValue.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RFloatPrx.ice_checkedCast(proxy, '::omero::RFloat', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RFloatPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RFloatPrx = IcePy.defineProxy('::omero::RFloat', RFloatPrx)

    _M_omero._t_RFloat = IcePy.defineClass('::omero::RFloat', RFloat, (), True, _M_omero._t_RType, (), (('_val', (), IcePy._t_float),))
    RFloat.ice_type = _M_omero._t_RFloat

    RFloat._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_float, ())

    _M_omero.RFloat = RFloat
    del RFloat

    _M_omero.RFloatPrx = RFloatPrx
    del RFloatPrx

if not _M_omero.__dict__.has_key('RInt'):
    _M_omero.RInt = Ice.createTempClass()
    class RInt(_M_omero.RType):
        def __init__(self, _val=0):
            if __builtin__.type(self) == _M_omero.RInt:
                raise RuntimeError('omero.RInt is an abstract class')
            _M_omero.RType.__init__(self)
            self._val = _val

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RInt', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RInt'

        def ice_staticId():
            return '::omero::RInt'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getValue(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RInt)

        __repr__ = __str__

    _M_omero.RIntPrx = Ice.createTempClass()
    class RIntPrx(_M_omero.RTypePrx):

        def getValue(self, _ctx=None):
            return _M_omero.RInt._op_getValue.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RIntPrx.ice_checkedCast(proxy, '::omero::RInt', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RIntPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RIntPrx = IcePy.defineProxy('::omero::RInt', RIntPrx)

    _M_omero._t_RInt = IcePy.defineClass('::omero::RInt', RInt, (), True, _M_omero._t_RType, (), (('_val', (), IcePy._t_int),))
    RInt.ice_type = _M_omero._t_RInt

    RInt._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())

    _M_omero.RInt = RInt
    del RInt

    _M_omero.RIntPrx = RIntPrx
    del RIntPrx

if not _M_omero.__dict__.has_key('RLong'):
    _M_omero.RLong = Ice.createTempClass()
    class RLong(_M_omero.RType):
        def __init__(self, _val=0):
            if __builtin__.type(self) == _M_omero.RLong:
                raise RuntimeError('omero.RLong is an abstract class')
            _M_omero.RType.__init__(self)
            self._val = _val

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RLong', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RLong'

        def ice_staticId():
            return '::omero::RLong'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getValue(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RLong)

        __repr__ = __str__

    _M_omero.RLongPrx = Ice.createTempClass()
    class RLongPrx(_M_omero.RTypePrx):

        def getValue(self, _ctx=None):
            return _M_omero.RLong._op_getValue.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RLongPrx.ice_checkedCast(proxy, '::omero::RLong', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RLongPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RLongPrx = IcePy.defineProxy('::omero::RLong', RLongPrx)

    _M_omero._t_RLong = IcePy.defineClass('::omero::RLong', RLong, (), True, _M_omero._t_RType, (), (('_val', (), IcePy._t_long),))
    RLong.ice_type = _M_omero._t_RLong

    RLong._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_long, ())

    _M_omero.RLong = RLong
    del RLong

    _M_omero.RLongPrx = RLongPrx
    del RLongPrx

if not _M_omero.__dict__.has_key('RString'):
    _M_omero.RString = Ice.createTempClass()
    class RString(_M_omero.RType):
        def __init__(self, _val=''):
            if __builtin__.type(self) == _M_omero.RString:
                raise RuntimeError('omero.RString is an abstract class')
            _M_omero.RType.__init__(self)
            self._val = _val

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RString', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RString'

        def ice_staticId():
            return '::omero::RString'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getValue(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RString)

        __repr__ = __str__

    _M_omero.RStringPrx = Ice.createTempClass()
    class RStringPrx(_M_omero.RTypePrx):

        def getValue(self, _ctx=None):
            return _M_omero.RString._op_getValue.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RStringPrx.ice_checkedCast(proxy, '::omero::RString', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RStringPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RStringPrx = IcePy.defineProxy('::omero::RString', RStringPrx)

    _M_omero._t_RString = IcePy.defineClass('::omero::RString', RString, (), True, _M_omero._t_RType, (), (('_val', (), IcePy._t_string),))
    RString.ice_type = _M_omero._t_RString

    RString._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_string, ())

    _M_omero.RString = RString
    del RString

    _M_omero.RStringPrx = RStringPrx
    del RStringPrx

if not _M_omero.__dict__.has_key('RClass'):
    _M_omero.RClass = Ice.createTempClass()
    class RClass(_M_omero.RString):
        def __init__(self, _val=''):
            if __builtin__.type(self) == _M_omero.RClass:
                raise RuntimeError('omero.RClass is an abstract class')
            _M_omero.RString.__init__(self, _val)

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RClass', '::omero::RString', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RClass'

        def ice_staticId():
            return '::omero::RClass'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RClass)

        __repr__ = __str__

    _M_omero.RClassPrx = Ice.createTempClass()
    class RClassPrx(_M_omero.RStringPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RClassPrx.ice_checkedCast(proxy, '::omero::RClass', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RClassPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RClassPrx = IcePy.defineProxy('::omero::RClass', RClassPrx)

    _M_omero._t_RClass = IcePy.defineClass('::omero::RClass', RClass, (), True, _M_omero._t_RString, (), ())
    RClass.ice_type = _M_omero._t_RClass

    _M_omero.RClass = RClass
    del RClass

    _M_omero.RClassPrx = RClassPrx
    del RClassPrx

if not _M_omero.__dict__.has_key('RTime'):
    _M_omero.RTime = Ice.createTempClass()
    class RTime(_M_omero.RType):
        def __init__(self, _val=0):
            if __builtin__.type(self) == _M_omero.RTime:
                raise RuntimeError('omero.RTime is an abstract class')
            _M_omero.RType.__init__(self)
            self._val = _val

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RTime', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RTime'

        def ice_staticId():
            return '::omero::RTime'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getValue(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RTime)

        __repr__ = __str__

    _M_omero.RTimePrx = Ice.createTempClass()
    class RTimePrx(_M_omero.RTypePrx):

        def getValue(self, _ctx=None):
            return _M_omero.RTime._op_getValue.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RTimePrx.ice_checkedCast(proxy, '::omero::RTime', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RTimePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RTimePrx = IcePy.defineProxy('::omero::RTime', RTimePrx)

    _M_omero._t_RTime = IcePy.defineClass('::omero::RTime', RTime, (), True, _M_omero._t_RType, (), (('_val', (), IcePy._t_long),))
    RTime.ice_type = _M_omero._t_RTime

    RTime._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_long, ())

    _M_omero.RTime = RTime
    del RTime

    _M_omero.RTimePrx = RTimePrx
    del RTimePrx

if not _M_omero.__dict__.has_key('RObject'):
    _M_omero.RObject = Ice.createTempClass()
    class RObject(_M_omero.RType):
        def __init__(self, _val=None):
            if __builtin__.type(self) == _M_omero.RObject:
                raise RuntimeError('omero.RObject is an abstract class')
            _M_omero.RType.__init__(self)
            self._val = _val

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RObject', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RObject'

        def ice_staticId():
            return '::omero::RObject'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getValue(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RObject)

        __repr__ = __str__

    _M_omero.RObjectPrx = Ice.createTempClass()
    class RObjectPrx(_M_omero.RTypePrx):

        def getValue(self, _ctx=None):
            return _M_omero.RObject._op_getValue.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RObjectPrx.ice_checkedCast(proxy, '::omero::RObject', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RObjectPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RObjectPrx = IcePy.defineProxy('::omero::RObject', RObjectPrx)

    _M_omero._t_RObject = IcePy.declareClass('::omero::RObject')

    _M_omero._t_RObject = IcePy.defineClass('::omero::RObject', RObject, (), True, _M_omero._t_RType, (), (('_val', (), _M_omero.model._t_IObject),))
    RObject.ice_type = _M_omero._t_RObject

    RObject._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_IObject, ())

    _M_omero.RObject = RObject
    del RObject

    _M_omero.RObjectPrx = RObjectPrx
    del RObjectPrx

if not _M_omero.__dict__.has_key('_t_RTypeSeq'):
    _M_omero._t_RTypeSeq = IcePy.defineSequence('::omero::RTypeSeq', (), _M_omero._t_RType)

if not _M_omero.__dict__.has_key('_t_RTypeSeqSeq'):
    _M_omero._t_RTypeSeqSeq = IcePy.defineSequence('::omero::RTypeSeqSeq', (), _M_omero._t_RTypeSeq)

if not _M_omero.__dict__.has_key('RCollection'):
    _M_omero.RCollection = Ice.createTempClass()
    class RCollection(_M_omero.RType):
        def __init__(self, _val=None):
            if __builtin__.type(self) == _M_omero.RCollection:
                raise RuntimeError('omero.RCollection is an abstract class')
            _M_omero.RType.__init__(self)
            self._val = _val

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RCollection', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RCollection'

        def ice_staticId():
            return '::omero::RCollection'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getValue(self, current=None):
        # def size(self, current=None):
        # def get(self, index, current=None):
        # def add(self, value, current=None):
        # def addAll(self, value, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RCollection)

        __repr__ = __str__

    _M_omero.RCollectionPrx = Ice.createTempClass()
    class RCollectionPrx(_M_omero.RTypePrx):

        def getValue(self, _ctx=None):
            return _M_omero.RCollection._op_getValue.invoke(self, ((), _ctx))

        def size(self, _ctx=None):
            return _M_omero.RCollection._op_size.invoke(self, ((), _ctx))

        def get(self, index, _ctx=None):
            return _M_omero.RCollection._op_get.invoke(self, ((index, ), _ctx))

        def add(self, value, _ctx=None):
            return _M_omero.RCollection._op_add.invoke(self, ((value, ), _ctx))

        def addAll(self, value, _ctx=None):
            return _M_omero.RCollection._op_addAll.invoke(self, ((value, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RCollectionPrx.ice_checkedCast(proxy, '::omero::RCollection', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RCollectionPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RCollectionPrx = IcePy.defineProxy('::omero::RCollection', RCollectionPrx)

    _M_omero._t_RCollection = IcePy.declareClass('::omero::RCollection')

    _M_omero._t_RCollection = IcePy.defineClass('::omero::RCollection', RCollection, (), True, _M_omero._t_RType, (), (('_val', (), _M_omero._t_RTypeSeq),))
    RCollection.ice_type = _M_omero._t_RCollection

    RCollection._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RTypeSeq, ())
    RCollection._op_size = IcePy.Operation('size', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    RCollection._op_get = IcePy.Operation('get', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int),), (), _M_omero._t_RType, ())
    RCollection._op_add = IcePy.Operation('add', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RType),), (), None, ())
    RCollection._op_addAll = IcePy.Operation('addAll', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RTypeSeq),), (), None, ())

    _M_omero.RCollection = RCollection
    del RCollection

    _M_omero.RCollectionPrx = RCollectionPrx
    del RCollectionPrx

if not _M_omero.__dict__.has_key('RArray'):
    _M_omero.RArray = Ice.createTempClass()
    class RArray(_M_omero.RCollection):
        def __init__(self, _val=None):
            if __builtin__.type(self) == _M_omero.RArray:
                raise RuntimeError('omero.RArray is an abstract class')
            _M_omero.RCollection.__init__(self, _val)

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RArray', '::omero::RCollection', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RArray'

        def ice_staticId():
            return '::omero::RArray'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RArray)

        __repr__ = __str__

    _M_omero.RArrayPrx = Ice.createTempClass()
    class RArrayPrx(_M_omero.RCollectionPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RArrayPrx.ice_checkedCast(proxy, '::omero::RArray', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RArrayPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RArrayPrx = IcePy.defineProxy('::omero::RArray', RArrayPrx)

    _M_omero._t_RArray = IcePy.declareClass('::omero::RArray')

    _M_omero._t_RArray = IcePy.defineClass('::omero::RArray', RArray, (), True, _M_omero._t_RCollection, (), ())
    RArray.ice_type = _M_omero._t_RArray

    _M_omero.RArray = RArray
    del RArray

    _M_omero.RArrayPrx = RArrayPrx
    del RArrayPrx

if not _M_omero.__dict__.has_key('RList'):
    _M_omero.RList = Ice.createTempClass()
    class RList(_M_omero.RCollection):
        def __init__(self, _val=None):
            if __builtin__.type(self) == _M_omero.RList:
                raise RuntimeError('omero.RList is an abstract class')
            _M_omero.RCollection.__init__(self, _val)

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RCollection', '::omero::RList', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RList'

        def ice_staticId():
            return '::omero::RList'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RList)

        __repr__ = __str__

    _M_omero.RListPrx = Ice.createTempClass()
    class RListPrx(_M_omero.RCollectionPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RListPrx.ice_checkedCast(proxy, '::omero::RList', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RListPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RListPrx = IcePy.defineProxy('::omero::RList', RListPrx)

    _M_omero._t_RList = IcePy.declareClass('::omero::RList')

    _M_omero._t_RList = IcePy.defineClass('::omero::RList', RList, (), True, _M_omero._t_RCollection, (), ())
    RList.ice_type = _M_omero._t_RList

    _M_omero.RList = RList
    del RList

    _M_omero.RListPrx = RListPrx
    del RListPrx

if not _M_omero.__dict__.has_key('RSet'):
    _M_omero.RSet = Ice.createTempClass()
    class RSet(_M_omero.RCollection):
        def __init__(self, _val=None):
            if __builtin__.type(self) == _M_omero.RSet:
                raise RuntimeError('omero.RSet is an abstract class')
            _M_omero.RCollection.__init__(self, _val)

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RCollection', '::omero::RSet', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RSet'

        def ice_staticId():
            return '::omero::RSet'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RSet)

        __repr__ = __str__

    _M_omero.RSetPrx = Ice.createTempClass()
    class RSetPrx(_M_omero.RCollectionPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RSetPrx.ice_checkedCast(proxy, '::omero::RSet', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RSetPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RSetPrx = IcePy.defineProxy('::omero::RSet', RSetPrx)

    _M_omero._t_RSet = IcePy.declareClass('::omero::RSet')

    _M_omero._t_RSet = IcePy.defineClass('::omero::RSet', RSet, (), True, _M_omero._t_RCollection, (), ())
    RSet.ice_type = _M_omero._t_RSet

    _M_omero.RSet = RSet
    del RSet

    _M_omero.RSetPrx = RSetPrx
    del RSetPrx

if not _M_omero.__dict__.has_key('_t_RTypeDict'):
    _M_omero._t_RTypeDict = IcePy.defineDictionary('::omero::RTypeDict', (), IcePy._t_string, _M_omero._t_RType)

if not _M_omero.__dict__.has_key('RMap'):
    _M_omero.RMap = Ice.createTempClass()
    class RMap(_M_omero.RType):
        def __init__(self, _val=None):
            if __builtin__.type(self) == _M_omero.RMap:
                raise RuntimeError('omero.RMap is an abstract class')
            _M_omero.RType.__init__(self)
            self._val = _val

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::RMap', '::omero::RType')

        def ice_id(self, current=None):
            return '::omero::RMap'

        def ice_staticId():
            return '::omero::RMap'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getValue(self, current=None):
        # def size(self, current=None):
        # def get(self, key, current=None):
        # def put(self, key, value, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero._t_RMap)

        __repr__ = __str__

    _M_omero.RMapPrx = Ice.createTempClass()
    class RMapPrx(_M_omero.RTypePrx):

        def getValue(self, _ctx=None):
            return _M_omero.RMap._op_getValue.invoke(self, ((), _ctx))

        def size(self, _ctx=None):
            return _M_omero.RMap._op_size.invoke(self, ((), _ctx))

        def get(self, key, _ctx=None):
            return _M_omero.RMap._op_get.invoke(self, ((key, ), _ctx))

        def put(self, key, value, _ctx=None):
            return _M_omero.RMap._op_put.invoke(self, ((key, value), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.RMapPrx.ice_checkedCast(proxy, '::omero::RMap', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.RMapPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero._t_RMapPrx = IcePy.defineProxy('::omero::RMap', RMapPrx)

    _M_omero._t_RMap = IcePy.declareClass('::omero::RMap')

    _M_omero._t_RMap = IcePy.defineClass('::omero::RMap', RMap, (), True, _M_omero._t_RType, (), (('_val', (), _M_omero._t_RTypeDict),))
    RMap.ice_type = _M_omero._t_RMap

    RMap._op_getValue = IcePy.Operation('getValue', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RTypeDict, ())
    RMap._op_size = IcePy.Operation('size', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), IcePy._t_int, ())
    RMap._op_get = IcePy.Operation('get', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string),), (), _M_omero._t_RType, ())
    RMap._op_put = IcePy.Operation('put', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string), ((), _M_omero._t_RType)), (), None, ())

    _M_omero.RMap = RMap
    del RMap

    _M_omero.RMapPrx = RMapPrx
    del RMapPrx

# End of module omero
