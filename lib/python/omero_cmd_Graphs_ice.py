# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Graphs.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import omero_cmd_API_ice
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

# Start of module omero
__name__ = 'omero'

# Start of module omero.cmd
__name__ = 'omero.cmd'

if not _M_omero.cmd.__dict__.has_key('GraphModify'):
    _M_omero.cmd.GraphModify = Ice.createTempClass()
    class GraphModify(_M_omero.cmd.Request):
        def __init__(self, type='', id=0, options=None):
            _M_omero.cmd.Request.__init__(self)
            self.type = type
            self.id = id
            self.options = options

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::GraphModify', '::omero::cmd::Request')

        def ice_id(self, current=None):
            return '::omero::cmd::GraphModify'

        def ice_staticId():
            return '::omero::cmd::GraphModify'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_GraphModify)

        __repr__ = __str__

    _M_omero.cmd.GraphModifyPrx = Ice.createTempClass()
    class GraphModifyPrx(_M_omero.cmd.RequestPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.GraphModifyPrx.ice_checkedCast(proxy, '::omero::cmd::GraphModify', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.GraphModifyPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_GraphModifyPrx = IcePy.defineProxy('::omero::cmd::GraphModify', GraphModifyPrx)

    _M_omero.cmd._t_GraphModify = IcePy.defineClass('::omero::cmd::GraphModify', GraphModify, (), False, _M_omero.cmd._t_Request, (), (
        ('type', (), IcePy._t_string),
        ('id', (), IcePy._t_long),
        ('options', (), _M_omero.cmd._t_StringMap)
    ))
    GraphModify.ice_type = _M_omero.cmd._t_GraphModify

    _M_omero.cmd.GraphModify = GraphModify
    del GraphModify

    _M_omero.cmd.GraphModifyPrx = GraphModifyPrx
    del GraphModifyPrx

if not _M_omero.cmd.__dict__.has_key('GraphConstraintERR'):
    _M_omero.cmd.GraphConstraintERR = Ice.createTempClass()
    class GraphConstraintERR(_M_omero.cmd.ERR):
        def __init__(self, category='', name='', parameters=None, constraints=None):
            _M_omero.cmd.ERR.__init__(self, category, name, parameters)
            self.constraints = constraints

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::ERR', '::omero::cmd::GraphConstraintERR', '::omero::cmd::Response')

        def ice_id(self, current=None):
            return '::omero::cmd::GraphConstraintERR'

        def ice_staticId():
            return '::omero::cmd::GraphConstraintERR'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_GraphConstraintERR)

        __repr__ = __str__

    _M_omero.cmd.GraphConstraintERRPrx = Ice.createTempClass()
    class GraphConstraintERRPrx(_M_omero.cmd.ERRPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.GraphConstraintERRPrx.ice_checkedCast(proxy, '::omero::cmd::GraphConstraintERR', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.GraphConstraintERRPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_GraphConstraintERRPrx = IcePy.defineProxy('::omero::cmd::GraphConstraintERR', GraphConstraintERRPrx)

    _M_omero.cmd._t_GraphConstraintERR = IcePy.defineClass('::omero::cmd::GraphConstraintERR', GraphConstraintERR, (), False, _M_omero.cmd._t_ERR, (), (('constraints', (), _M_omero.api._t_IdListMap),))
    GraphConstraintERR.ice_type = _M_omero.cmd._t_GraphConstraintERR

    _M_omero.cmd.GraphConstraintERR = GraphConstraintERR
    del GraphConstraintERR

    _M_omero.cmd.GraphConstraintERRPrx = GraphConstraintERRPrx
    del GraphConstraintERRPrx

if not _M_omero.cmd.__dict__.has_key('_t_GraphModifyList'):
    _M_omero.cmd._t_GraphModifyList = IcePy.defineSequence('::omero::cmd::GraphModifyList', (), _M_omero.cmd._t_GraphModify)

if not _M_omero.cmd.__dict__.has_key('GraphSpecList'):
    _M_omero.cmd.GraphSpecList = Ice.createTempClass()
    class GraphSpecList(_M_omero.cmd.Request):
        def __init__(self):
            _M_omero.cmd.Request.__init__(self)

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::GraphSpecList', '::omero::cmd::Request')

        def ice_id(self, current=None):
            return '::omero::cmd::GraphSpecList'

        def ice_staticId():
            return '::omero::cmd::GraphSpecList'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_GraphSpecList)

        __repr__ = __str__

    _M_omero.cmd.GraphSpecListPrx = Ice.createTempClass()
    class GraphSpecListPrx(_M_omero.cmd.RequestPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.GraphSpecListPrx.ice_checkedCast(proxy, '::omero::cmd::GraphSpecList', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.GraphSpecListPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_GraphSpecListPrx = IcePy.defineProxy('::omero::cmd::GraphSpecList', GraphSpecListPrx)

    _M_omero.cmd._t_GraphSpecList = IcePy.defineClass('::omero::cmd::GraphSpecList', GraphSpecList, (), False, _M_omero.cmd._t_Request, (), ())
    GraphSpecList.ice_type = _M_omero.cmd._t_GraphSpecList

    _M_omero.cmd.GraphSpecList = GraphSpecList
    del GraphSpecList

    _M_omero.cmd.GraphSpecListPrx = GraphSpecListPrx
    del GraphSpecListPrx

if not _M_omero.cmd.__dict__.has_key('GraphSpecListRsp'):
    _M_omero.cmd.GraphSpecListRsp = Ice.createTempClass()
    class GraphSpecListRsp(_M_omero.cmd.Response):
        def __init__(self, list=None):
            _M_omero.cmd.Response.__init__(self)
            self.list = list

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::GraphSpecListRsp', '::omero::cmd::Response')

        def ice_id(self, current=None):
            return '::omero::cmd::GraphSpecListRsp'

        def ice_staticId():
            return '::omero::cmd::GraphSpecListRsp'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_GraphSpecListRsp)

        __repr__ = __str__

    _M_omero.cmd.GraphSpecListRspPrx = Ice.createTempClass()
    class GraphSpecListRspPrx(_M_omero.cmd.ResponsePrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.GraphSpecListRspPrx.ice_checkedCast(proxy, '::omero::cmd::GraphSpecListRsp', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.GraphSpecListRspPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_GraphSpecListRspPrx = IcePy.defineProxy('::omero::cmd::GraphSpecListRsp', GraphSpecListRspPrx)

    _M_omero.cmd._t_GraphSpecListRsp = IcePy.declareClass('::omero::cmd::GraphSpecListRsp')

    _M_omero.cmd._t_GraphSpecListRsp = IcePy.defineClass('::omero::cmd::GraphSpecListRsp', GraphSpecListRsp, (), False, _M_omero.cmd._t_Response, (), (('list', (), _M_omero.cmd._t_GraphModifyList),))
    GraphSpecListRsp.ice_type = _M_omero.cmd._t_GraphSpecListRsp

    _M_omero.cmd.GraphSpecListRsp = GraphSpecListRsp
    del GraphSpecListRsp

    _M_omero.cmd.GraphSpecListRspPrx = GraphSpecListRspPrx
    del GraphSpecListRspPrx

if not _M_omero.cmd.__dict__.has_key('Chgrp'):
    _M_omero.cmd.Chgrp = Ice.createTempClass()
    class Chgrp(_M_omero.cmd.GraphModify):
        def __init__(self, type='', id=0, options=None, grp=0):
            _M_omero.cmd.GraphModify.__init__(self, type, id, options)
            self.grp = grp

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::Chgrp', '::omero::cmd::GraphModify', '::omero::cmd::Request')

        def ice_id(self, current=None):
            return '::omero::cmd::Chgrp'

        def ice_staticId():
            return '::omero::cmd::Chgrp'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_Chgrp)

        __repr__ = __str__

    _M_omero.cmd.ChgrpPrx = Ice.createTempClass()
    class ChgrpPrx(_M_omero.cmd.GraphModifyPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.ChgrpPrx.ice_checkedCast(proxy, '::omero::cmd::Chgrp', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.ChgrpPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_ChgrpPrx = IcePy.defineProxy('::omero::cmd::Chgrp', ChgrpPrx)

    _M_omero.cmd._t_Chgrp = IcePy.defineClass('::omero::cmd::Chgrp', Chgrp, (), False, _M_omero.cmd._t_GraphModify, (), (('grp', (), IcePy._t_long),))
    Chgrp.ice_type = _M_omero.cmd._t_Chgrp

    _M_omero.cmd.Chgrp = Chgrp
    del Chgrp

    _M_omero.cmd.ChgrpPrx = ChgrpPrx
    del ChgrpPrx

if not _M_omero.cmd.__dict__.has_key('ChgrpRsp'):
    _M_omero.cmd.ChgrpRsp = Ice.createTempClass()
    class ChgrpRsp(_M_omero.cmd.Response):
        def __init__(self):
            _M_omero.cmd.Response.__init__(self)

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::ChgrpRsp', '::omero::cmd::Response')

        def ice_id(self, current=None):
            return '::omero::cmd::ChgrpRsp'

        def ice_staticId():
            return '::omero::cmd::ChgrpRsp'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_ChgrpRsp)

        __repr__ = __str__

    _M_omero.cmd.ChgrpRspPrx = Ice.createTempClass()
    class ChgrpRspPrx(_M_omero.cmd.ResponsePrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.ChgrpRspPrx.ice_checkedCast(proxy, '::omero::cmd::ChgrpRsp', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.ChgrpRspPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_ChgrpRspPrx = IcePy.defineProxy('::omero::cmd::ChgrpRsp', ChgrpRspPrx)

    _M_omero.cmd._t_ChgrpRsp = IcePy.defineClass('::omero::cmd::ChgrpRsp', ChgrpRsp, (), False, _M_omero.cmd._t_Response, (), ())
    ChgrpRsp.ice_type = _M_omero.cmd._t_ChgrpRsp

    _M_omero.cmd.ChgrpRsp = ChgrpRsp
    del ChgrpRsp

    _M_omero.cmd.ChgrpRspPrx = ChgrpRspPrx
    del ChgrpRspPrx

if not _M_omero.cmd.__dict__.has_key('Chmod'):
    _M_omero.cmd.Chmod = Ice.createTempClass()
    class Chmod(_M_omero.cmd.GraphModify):
        def __init__(self, type='', id=0, options=None, permissions=''):
            _M_omero.cmd.GraphModify.__init__(self, type, id, options)
            self.permissions = permissions

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::Chmod', '::omero::cmd::GraphModify', '::omero::cmd::Request')

        def ice_id(self, current=None):
            return '::omero::cmd::Chmod'

        def ice_staticId():
            return '::omero::cmd::Chmod'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_Chmod)

        __repr__ = __str__

    _M_omero.cmd.ChmodPrx = Ice.createTempClass()
    class ChmodPrx(_M_omero.cmd.GraphModifyPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.ChmodPrx.ice_checkedCast(proxy, '::omero::cmd::Chmod', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.ChmodPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_ChmodPrx = IcePy.defineProxy('::omero::cmd::Chmod', ChmodPrx)

    _M_omero.cmd._t_Chmod = IcePy.defineClass('::omero::cmd::Chmod', Chmod, (), False, _M_omero.cmd._t_GraphModify, (), (('permissions', (), IcePy._t_string),))
    Chmod.ice_type = _M_omero.cmd._t_Chmod

    _M_omero.cmd.Chmod = Chmod
    del Chmod

    _M_omero.cmd.ChmodPrx = ChmodPrx
    del ChmodPrx

if not _M_omero.cmd.__dict__.has_key('ChmodRsp'):
    _M_omero.cmd.ChmodRsp = Ice.createTempClass()
    class ChmodRsp(_M_omero.cmd.Response):
        def __init__(self):
            _M_omero.cmd.Response.__init__(self)

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::ChmodRsp', '::omero::cmd::Response')

        def ice_id(self, current=None):
            return '::omero::cmd::ChmodRsp'

        def ice_staticId():
            return '::omero::cmd::ChmodRsp'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_ChmodRsp)

        __repr__ = __str__

    _M_omero.cmd.ChmodRspPrx = Ice.createTempClass()
    class ChmodRspPrx(_M_omero.cmd.ResponsePrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.ChmodRspPrx.ice_checkedCast(proxy, '::omero::cmd::ChmodRsp', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.ChmodRspPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_ChmodRspPrx = IcePy.defineProxy('::omero::cmd::ChmodRsp', ChmodRspPrx)

    _M_omero.cmd._t_ChmodRsp = IcePy.defineClass('::omero::cmd::ChmodRsp', ChmodRsp, (), False, _M_omero.cmd._t_Response, (), ())
    ChmodRsp.ice_type = _M_omero.cmd._t_ChmodRsp

    _M_omero.cmd.ChmodRsp = ChmodRsp
    del ChmodRsp

    _M_omero.cmd.ChmodRspPrx = ChmodRspPrx
    del ChmodRspPrx

if not _M_omero.cmd.__dict__.has_key('Chown'):
    _M_omero.cmd.Chown = Ice.createTempClass()
    class Chown(_M_omero.cmd.GraphModify):
        def __init__(self, type='', id=0, options=None, user=0):
            _M_omero.cmd.GraphModify.__init__(self, type, id, options)
            self.user = user

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::Chown', '::omero::cmd::GraphModify', '::omero::cmd::Request')

        def ice_id(self, current=None):
            return '::omero::cmd::Chown'

        def ice_staticId():
            return '::omero::cmd::Chown'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_Chown)

        __repr__ = __str__

    _M_omero.cmd.ChownPrx = Ice.createTempClass()
    class ChownPrx(_M_omero.cmd.GraphModifyPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.ChownPrx.ice_checkedCast(proxy, '::omero::cmd::Chown', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.ChownPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_ChownPrx = IcePy.defineProxy('::omero::cmd::Chown', ChownPrx)

    _M_omero.cmd._t_Chown = IcePy.defineClass('::omero::cmd::Chown', Chown, (), False, _M_omero.cmd._t_GraphModify, (), (('user', (), IcePy._t_long),))
    Chown.ice_type = _M_omero.cmd._t_Chown

    _M_omero.cmd.Chown = Chown
    del Chown

    _M_omero.cmd.ChownPrx = ChownPrx
    del ChownPrx

if not _M_omero.cmd.__dict__.has_key('ChownRsp'):
    _M_omero.cmd.ChownRsp = Ice.createTempClass()
    class ChownRsp(_M_omero.cmd.Response):
        def __init__(self):
            _M_omero.cmd.Response.__init__(self)

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::ChownRsp', '::omero::cmd::Response')

        def ice_id(self, current=None):
            return '::omero::cmd::ChownRsp'

        def ice_staticId():
            return '::omero::cmd::ChownRsp'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_ChownRsp)

        __repr__ = __str__

    _M_omero.cmd.ChownRspPrx = Ice.createTempClass()
    class ChownRspPrx(_M_omero.cmd.ResponsePrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.ChownRspPrx.ice_checkedCast(proxy, '::omero::cmd::ChownRsp', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.ChownRspPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_ChownRspPrx = IcePy.defineProxy('::omero::cmd::ChownRsp', ChownRspPrx)

    _M_omero.cmd._t_ChownRsp = IcePy.defineClass('::omero::cmd::ChownRsp', ChownRsp, (), False, _M_omero.cmd._t_Response, (), ())
    ChownRsp.ice_type = _M_omero.cmd._t_ChownRsp

    _M_omero.cmd.ChownRsp = ChownRsp
    del ChownRsp

    _M_omero.cmd.ChownRspPrx = ChownRspPrx
    del ChownRspPrx

if not _M_omero.cmd.__dict__.has_key('Delete'):
    _M_omero.cmd.Delete = Ice.createTempClass()
    class Delete(_M_omero.cmd.GraphModify):
        def __init__(self, type='', id=0, options=None):
            _M_omero.cmd.GraphModify.__init__(self, type, id, options)

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::Delete', '::omero::cmd::GraphModify', '::omero::cmd::Request')

        def ice_id(self, current=None):
            return '::omero::cmd::Delete'

        def ice_staticId():
            return '::omero::cmd::Delete'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_Delete)

        __repr__ = __str__

    _M_omero.cmd.DeletePrx = Ice.createTempClass()
    class DeletePrx(_M_omero.cmd.GraphModifyPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.DeletePrx.ice_checkedCast(proxy, '::omero::cmd::Delete', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.DeletePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_DeletePrx = IcePy.defineProxy('::omero::cmd::Delete', DeletePrx)

    _M_omero.cmd._t_Delete = IcePy.defineClass('::omero::cmd::Delete', Delete, (), False, _M_omero.cmd._t_GraphModify, (), ())
    Delete.ice_type = _M_omero.cmd._t_Delete

    _M_omero.cmd.Delete = Delete
    del Delete

    _M_omero.cmd.DeletePrx = DeletePrx
    del DeletePrx

if not _M_omero.cmd.__dict__.has_key('DeleteRsp'):
    _M_omero.cmd.DeleteRsp = Ice.createTempClass()
    class DeleteRsp(_M_omero.cmd.OK):
        def __init__(self, warning='', undeletedFiles=None, steps=0, scheduledDeletes=0, actualDeletes=0):
            _M_omero.cmd.OK.__init__(self)
            self.warning = warning
            self.undeletedFiles = undeletedFiles
            self.steps = steps
            self.scheduledDeletes = scheduledDeletes
            self.actualDeletes = actualDeletes

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::cmd::DeleteRsp', '::omero::cmd::OK', '::omero::cmd::Response')

        def ice_id(self, current=None):
            return '::omero::cmd::DeleteRsp'

        def ice_staticId():
            return '::omero::cmd::DeleteRsp'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_omero.cmd._t_DeleteRsp)

        __repr__ = __str__

    _M_omero.cmd.DeleteRspPrx = Ice.createTempClass()
    class DeleteRspPrx(_M_omero.cmd.OKPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.cmd.DeleteRspPrx.ice_checkedCast(proxy, '::omero::cmd::DeleteRsp', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.cmd.DeleteRspPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.cmd._t_DeleteRspPrx = IcePy.defineProxy('::omero::cmd::DeleteRsp', DeleteRspPrx)

    _M_omero.cmd._t_DeleteRsp = IcePy.defineClass('::omero::cmd::DeleteRsp', DeleteRsp, (), False, _M_omero.cmd._t_OK, (), (
        ('warning', (), IcePy._t_string),
        ('undeletedFiles', (), _M_omero.api._t_IdListMap),
        ('steps', (), IcePy._t_int),
        ('scheduledDeletes', (), IcePy._t_long),
        ('actualDeletes', (), IcePy._t_long)
    ))
    DeleteRsp.ice_type = _M_omero.cmd._t_DeleteRsp

    _M_omero.cmd.DeleteRsp = DeleteRsp
    del DeleteRsp

    _M_omero.cmd.DeleteRspPrx = DeleteRspPrx
    del DeleteRspPrx

# End of module omero.cmd

__name__ = 'omero'

# End of module omero
