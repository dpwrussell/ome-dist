# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Objective.ice'

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

if not _M_omero.model.__dict__.has_key('Immersion'):
    _M_omero.model._t_Immersion = IcePy.declareClass('::omero::model::Immersion')
    _M_omero.model._t_ImmersionPrx = IcePy.declareProxy('::omero::model::Immersion')

if not _M_omero.model.__dict__.has_key('Correction'):
    _M_omero.model._t_Correction = IcePy.declareClass('::omero::model::Correction')
    _M_omero.model._t_CorrectionPrx = IcePy.declareProxy('::omero::model::Correction')

if not _M_omero.model.__dict__.has_key('Instrument'):
    _M_omero.model._t_Instrument = IcePy.declareClass('::omero::model::Instrument')
    _M_omero.model._t_InstrumentPrx = IcePy.declareProxy('::omero::model::Instrument')

if not _M_omero.model.__dict__.has_key('Details'):
    _M_omero.model._t_Details = IcePy.declareClass('::omero::model::Details')
    _M_omero.model._t_DetailsPrx = IcePy.declareProxy('::omero::model::Details')

if not _M_omero.model.__dict__.has_key('Objective'):
    _M_omero.model.Objective = Ice.createTempClass()
    class Objective(_M_omero.model.IObject):
        def __init__(self, _id=None, _details=None, _loaded=False, _version=None, _manufacturer=None, _model=None, _lotNumber=None, _serialNumber=None, _nominalMagnification=None, _calibratedMagnification=None, _lensNA=None, _immersion=None, _correction=None, _workingDistance=None, _iris=None, _instrument=None):
            if __builtin__.type(self) == _M_omero.model.Objective:
                raise RuntimeError('omero.model.Objective is an abstract class')
            _M_omero.model.IObject.__init__(self, _id, _details, _loaded)
            self._version = _version
            self._manufacturer = _manufacturer
            self._model = _model
            self._lotNumber = _lotNumber
            self._serialNumber = _serialNumber
            self._nominalMagnification = _nominalMagnification
            self._calibratedMagnification = _calibratedMagnification
            self._lensNA = _lensNA
            self._immersion = _immersion
            self._correction = _correction
            self._workingDistance = _workingDistance
            self._iris = _iris
            self._instrument = _instrument

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::omero::model::IObject', '::omero::model::Objective')

        def ice_id(self, current=None):
            return '::omero::model::Objective'

        def ice_staticId():
            return '::omero::model::Objective'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def getVersion(self, current=None):
        # def setVersion(self, theVersion, current=None):
        # def getManufacturer(self, current=None):
        # def setManufacturer(self, theManufacturer, current=None):
        # def getModel(self, current=None):
        # def setModel(self, theModel, current=None):
        # def getLotNumber(self, current=None):
        # def setLotNumber(self, theLotNumber, current=None):
        # def getSerialNumber(self, current=None):
        # def setSerialNumber(self, theSerialNumber, current=None):
        # def getNominalMagnification(self, current=None):
        # def setNominalMagnification(self, theNominalMagnification, current=None):
        # def getCalibratedMagnification(self, current=None):
        # def setCalibratedMagnification(self, theCalibratedMagnification, current=None):
        # def getLensNA(self, current=None):
        # def setLensNA(self, theLensNA, current=None):
        # def getImmersion(self, current=None):
        # def setImmersion(self, theImmersion, current=None):
        # def getCorrection(self, current=None):
        # def setCorrection(self, theCorrection, current=None):
        # def getWorkingDistance(self, current=None):
        # def setWorkingDistance(self, theWorkingDistance, current=None):
        # def getIris(self, current=None):
        # def setIris(self, theIris, current=None):
        # def getInstrument(self, current=None):
        # def setInstrument(self, theInstrument, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_omero.model._t_Objective)

        __repr__ = __str__

    _M_omero.model.ObjectivePrx = Ice.createTempClass()
    class ObjectivePrx(_M_omero.model.IObjectPrx):

        def getVersion(self, _ctx=None):
            return _M_omero.model.Objective._op_getVersion.invoke(self, ((), _ctx))

        def setVersion(self, theVersion, _ctx=None):
            return _M_omero.model.Objective._op_setVersion.invoke(self, ((theVersion, ), _ctx))

        def getManufacturer(self, _ctx=None):
            return _M_omero.model.Objective._op_getManufacturer.invoke(self, ((), _ctx))

        def setManufacturer(self, theManufacturer, _ctx=None):
            return _M_omero.model.Objective._op_setManufacturer.invoke(self, ((theManufacturer, ), _ctx))

        def getModel(self, _ctx=None):
            return _M_omero.model.Objective._op_getModel.invoke(self, ((), _ctx))

        def setModel(self, theModel, _ctx=None):
            return _M_omero.model.Objective._op_setModel.invoke(self, ((theModel, ), _ctx))

        def getLotNumber(self, _ctx=None):
            return _M_omero.model.Objective._op_getLotNumber.invoke(self, ((), _ctx))

        def setLotNumber(self, theLotNumber, _ctx=None):
            return _M_omero.model.Objective._op_setLotNumber.invoke(self, ((theLotNumber, ), _ctx))

        def getSerialNumber(self, _ctx=None):
            return _M_omero.model.Objective._op_getSerialNumber.invoke(self, ((), _ctx))

        def setSerialNumber(self, theSerialNumber, _ctx=None):
            return _M_omero.model.Objective._op_setSerialNumber.invoke(self, ((theSerialNumber, ), _ctx))

        def getNominalMagnification(self, _ctx=None):
            return _M_omero.model.Objective._op_getNominalMagnification.invoke(self, ((), _ctx))

        def setNominalMagnification(self, theNominalMagnification, _ctx=None):
            return _M_omero.model.Objective._op_setNominalMagnification.invoke(self, ((theNominalMagnification, ), _ctx))

        def getCalibratedMagnification(self, _ctx=None):
            return _M_omero.model.Objective._op_getCalibratedMagnification.invoke(self, ((), _ctx))

        def setCalibratedMagnification(self, theCalibratedMagnification, _ctx=None):
            return _M_omero.model.Objective._op_setCalibratedMagnification.invoke(self, ((theCalibratedMagnification, ), _ctx))

        def getLensNA(self, _ctx=None):
            return _M_omero.model.Objective._op_getLensNA.invoke(self, ((), _ctx))

        def setLensNA(self, theLensNA, _ctx=None):
            return _M_omero.model.Objective._op_setLensNA.invoke(self, ((theLensNA, ), _ctx))

        def getImmersion(self, _ctx=None):
            return _M_omero.model.Objective._op_getImmersion.invoke(self, ((), _ctx))

        def setImmersion(self, theImmersion, _ctx=None):
            return _M_omero.model.Objective._op_setImmersion.invoke(self, ((theImmersion, ), _ctx))

        def getCorrection(self, _ctx=None):
            return _M_omero.model.Objective._op_getCorrection.invoke(self, ((), _ctx))

        def setCorrection(self, theCorrection, _ctx=None):
            return _M_omero.model.Objective._op_setCorrection.invoke(self, ((theCorrection, ), _ctx))

        def getWorkingDistance(self, _ctx=None):
            return _M_omero.model.Objective._op_getWorkingDistance.invoke(self, ((), _ctx))

        def setWorkingDistance(self, theWorkingDistance, _ctx=None):
            return _M_omero.model.Objective._op_setWorkingDistance.invoke(self, ((theWorkingDistance, ), _ctx))

        def getIris(self, _ctx=None):
            return _M_omero.model.Objective._op_getIris.invoke(self, ((), _ctx))

        def setIris(self, theIris, _ctx=None):
            return _M_omero.model.Objective._op_setIris.invoke(self, ((theIris, ), _ctx))

        def getInstrument(self, _ctx=None):
            return _M_omero.model.Objective._op_getInstrument.invoke(self, ((), _ctx))

        def setInstrument(self, theInstrument, _ctx=None):
            return _M_omero.model.Objective._op_setInstrument.invoke(self, ((theInstrument, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_omero.model.ObjectivePrx.ice_checkedCast(proxy, '::omero::model::Objective', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_omero.model.ObjectivePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_omero.model._t_ObjectivePrx = IcePy.defineProxy('::omero::model::Objective', ObjectivePrx)

    _M_omero.model._t_Objective = IcePy.declareClass('::omero::model::Objective')

    _M_omero.model._t_Objective = IcePy.defineClass('::omero::model::Objective', Objective, (), True, _M_omero.model._t_IObject, (), (
        ('_version', (), _M_omero._t_RInt),
        ('_manufacturer', (), _M_omero._t_RString),
        ('_model', (), _M_omero._t_RString),
        ('_lotNumber', (), _M_omero._t_RString),
        ('_serialNumber', (), _M_omero._t_RString),
        ('_nominalMagnification', (), _M_omero._t_RDouble),
        ('_calibratedMagnification', (), _M_omero._t_RDouble),
        ('_lensNA', (), _M_omero._t_RDouble),
        ('_immersion', (), _M_omero.model._t_Immersion),
        ('_correction', (), _M_omero.model._t_Correction),
        ('_workingDistance', (), _M_omero._t_RDouble),
        ('_iris', (), _M_omero._t_RBool),
        ('_instrument', (), _M_omero.model._t_Instrument)
    ))
    Objective.ice_type = _M_omero.model._t_Objective

    Objective._op_getVersion = IcePy.Operation('getVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RInt, ())
    Objective._op_setVersion = IcePy.Operation('setVersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RInt),), (), None, ())
    Objective._op_getManufacturer = IcePy.Operation('getManufacturer', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Objective._op_setManufacturer = IcePy.Operation('setManufacturer', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Objective._op_getModel = IcePy.Operation('getModel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Objective._op_setModel = IcePy.Operation('setModel', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Objective._op_getLotNumber = IcePy.Operation('getLotNumber', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Objective._op_setLotNumber = IcePy.Operation('setLotNumber', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Objective._op_getSerialNumber = IcePy.Operation('getSerialNumber', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RString, ())
    Objective._op_setSerialNumber = IcePy.Operation('setSerialNumber', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RString),), (), None, ())
    Objective._op_getNominalMagnification = IcePy.Operation('getNominalMagnification', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Objective._op_setNominalMagnification = IcePy.Operation('setNominalMagnification', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Objective._op_getCalibratedMagnification = IcePy.Operation('getCalibratedMagnification', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Objective._op_setCalibratedMagnification = IcePy.Operation('setCalibratedMagnification', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Objective._op_getLensNA = IcePy.Operation('getLensNA', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Objective._op_setLensNA = IcePy.Operation('setLensNA', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Objective._op_getImmersion = IcePy.Operation('getImmersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Immersion, ())
    Objective._op_setImmersion = IcePy.Operation('setImmersion', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Immersion),), (), None, ())
    Objective._op_getCorrection = IcePy.Operation('getCorrection', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Correction, ())
    Objective._op_setCorrection = IcePy.Operation('setCorrection', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Correction),), (), None, ())
    Objective._op_getWorkingDistance = IcePy.Operation('getWorkingDistance', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RDouble, ())
    Objective._op_setWorkingDistance = IcePy.Operation('setWorkingDistance', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RDouble),), (), None, ())
    Objective._op_getIris = IcePy.Operation('getIris', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero._t_RBool, ())
    Objective._op_setIris = IcePy.Operation('setIris', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero._t_RBool),), (), None, ())
    Objective._op_getInstrument = IcePy.Operation('getInstrument', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), _M_omero.model._t_Instrument, ())
    Objective._op_setInstrument = IcePy.Operation('setInstrument', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_omero.model._t_Instrument),), (), None, ())

    _M_omero.model.Objective = Objective
    del Objective

    _M_omero.model.ObjectivePrx = ObjectivePrx
    del ObjectivePrx

# End of module omero.model

__name__ = 'omero'

# End of module omero
