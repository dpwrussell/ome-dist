"""
   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
"""
import Ice
import IceImport
import omero
IceImport.load("omero_model_DetailsI")
IceImport.load("omero_model_Dataset_ice")
from omero.rtypes import rlong
_omero = Ice.openModule("omero")
_omero_model = Ice.openModule("omero.model")
__name__ = "omero.model"
class DatasetI(_omero_model.Dataset):

      PROJECTLINKS =  "ome.model.containers.Dataset_projectLinks"
      IMAGELINKS =  "ome.model.containers.Dataset_imageLinks"
      ANNOTATIONLINKS =  "ome.model.containers.Dataset_annotationLinks"
      NAME =  "ome.model.containers.Dataset_name"
      DESCRIPTION =  "ome.model.containers.Dataset_description"
      DETAILS =  "ome.model.containers.Dataset_details"
      def errorIfUnloaded(self):
          if not self._loaded:
              raise _omero.UnloadedEntityException("Object unloaded:"+str(self))

      def throwNullCollectionException(self,propertyName):
          raise _omero.UnloadedEntityException(""+
          "Error updating collection:" + propertyName +"\n"+
          "Collection is currently null. This can be seen\n" +
          "by testing \""+ propertyName +"Loaded\". This implies\n"+
          "that this collection was unloaded. Please refresh this object\n"+
          "in order to update this collection.\n")

      def _toggleCollectionsLoaded(self,load):
          if load:
              self._projectLinksSeq = []
              self._projectLinksLoaded = True;
          else:
              self._projectLinksSeq = []
              self._projectLinksLoaded = False;

          if load:
              self._imageLinksSeq = []
              self._imageLinksLoaded = True;
          else:
              self._imageLinksSeq = []
              self._imageLinksLoaded = False;

          if load:
              self._annotationLinksSeq = []
              self._annotationLinksLoaded = True;
          else:
              self._annotationLinksSeq = []
              self._annotationLinksLoaded = False;

          pass

      def __init__(self, id = None, loaded = True):
          super(DatasetI, self).__init__()
          # Relying on omero.rtypes.rlong's error-handling
          self._id = rlong(id)
          self._loaded = loaded
          if self._loaded:
             self._details = _omero_model.DetailsI()
             self._toggleCollectionsLoaded(True)

      def unload(self, current = None):
          self._loaded = False
          self.unloadProjectLinks( )
          self.unloadImageLinks( )
          self.unloadAnnotationLinks( )
          self.unloadName( )
          self.unloadDescription( )
          self.unloadDetails( )

      def isLoaded(self, current = None):
          return self._loaded
      def unloadCollections(self, current = None):
          self._toggleCollectionsLoaded( False )
      def isGlobal(self, current = None):
          return  False ;
      def isMutable(self, current = None):
          return  True ;
      def isAnnotated(self, current = None):
          return  True ;
      def isLink(self, current = None):
          return  False ;
      def shallowCopy(self, current = None):
            if not self._loaded: return self.proxy()
            copy = DatasetI()
            copy._id = self._id;
            copy._version = self._version;
            copy._details = None  # Unloading for the moment.
            raise omero.ClientError("NYI")
      def proxy(self, current = None):
          if self._id is None: raise omero.ClientError("Proxies require an id")
          return DatasetI( self._id.getValue(), False )

      def getDetails(self, current = None):
          self.errorIfUnloaded()
          return self._details

      def unloadDetails(self, current = None):
          self._details = None

      def getId(self, current = None):
          return self._id

      def setId(self, _id, current = None):
          self._id = _id

      def checkUnloadedProperty(self, value, loadedField):
          if value == None:
              self.__dict__[loadedField] = False
          else:
              self.__dict__[loadedField] = True

      def getVersion(self, current = None):
          self.errorIfUnloaded()
          return self._version

      def setVersion(self, version, current = None):
          self.errorIfUnloaded()
          self._version = version

      def unloadProjectLinks(self, current = None):
          self._projectLinksLoaded = False
          self._projectLinksSeq = None;

      def _getProjectLinks(self, current = None):
          self.errorIfUnloaded()
          return self._projectLinksSeq

      def _setProjectLinks(self, _projectLinks, current = None):
          self.errorIfUnloaded()
          self._projectLinksSeq = _projectLinks
          self.checkUnloadedProperty(_projectLinks,'projectLinksLoaded')

      def isProjectLinksLoaded(self):
          return self._projectLinksLoaded

      def sizeOfProjectLinks(self, current = None):
          self.errorIfUnloaded()
          if not self._projectLinksLoaded: return -1
          return len(self._projectLinksSeq)

      def copyProjectLinks(self, current = None):
          self.errorIfUnloaded()
          if not self._projectLinksLoaded: self.throwNullCollectionException("projectLinksSeq")
          return list(self._projectLinksSeq)

      def iterateProjectLinks(self):
          self.errorIfUnloaded()
          if not self._projectLinksLoaded: self.throwNullCollectionException("projectLinksSeq")
          return iter(self._projectLinksSeq)

      def addProjectDatasetLink(self, target, current = None):
          self.errorIfUnloaded()
          if not self._projectLinksLoaded: self.throwNullCollectionException("projectLinksSeq")
          self._projectLinksSeq.append( target );
          target.setChild( self )

      def addAllProjectDatasetLinkSet(self, targets, current = None):
          self.errorIfUnloaded()
          if  not self._projectLinksLoaded: self.throwNullCollectionException("projectLinksSeq")
          self._projectLinksSeq.extend( targets )
          for target in targets:
              target.setChild( self )

      def removeProjectDatasetLink(self, target, current = None):
          self.errorIfUnloaded()
          if not self._projectLinksLoaded: self.throwNullCollectionException("projectLinksSeq")
          self._projectLinksSeq.remove( target )
          target.setChild( None )

      def removeAllProjectDatasetLinkSet(self, targets, current = None):
          self.errorIfUnloaded()
          if not self._projectLinksLoaded: self.throwNullCollectionException("projectLinksSeq")
          for elt in targets:
              elt.setChild( None )
              self._projectLinksSeq.remove( elt )

      def clearProjectLinks(self, current = None):
          self.errorIfUnloaded()
          if not self._projectLinksLoaded: self.throwNullCollectionException("projectLinksSeq")
          for elt in self._projectLinksSeq:
              elt.setChild( None )
          self._projectLinksSeq = list()

      def reloadProjectLinks(self, toCopy, current = None):
          self.errorIfUnloaded()
          if self._projectLinksLoaded:
              raise omero.ClientError("Cannot reload active collection: projectLinksSeq")
          if not toCopy:
              raise omero.ClientError("Argument cannot be null")
          if toCopy.getId().getValue() != self.getId().getValue():
             raise omero.ClientError("Argument must have the same id as this instance")
          if toCopy.getDetails().getUpdateEvent().getId().getValue() < self.getDetails().getUpdateEvent().getId().getValue():
             raise omero.ClientError("Argument may not be older than this instance")
          copy = toCopy.copyProjectLinks() # May also throw
          for elt in copy:
              elt.setChild( self )
          self._projectLinksSeq = copy
          toCopy.unloadProjectLinks()
          self._projectLinksLoaded = True

      def getProjectLinksCountPerOwner(self, current = None):
          return self._projectLinksCountPerOwner

      def linkProject(self, addition, current = None):
          self.errorIfUnloaded()
          if not self._projectLinksLoaded: self.throwNullCollectionException("projectLinksSeq")
          link = _omero_model.ProjectDatasetLinkI()
          link.link( addition, self );
          self.addProjectDatasetLinkToBoth( link, True )
          return link

      def addProjectDatasetLinkToBoth(self, link, bothSides):
          self.errorIfUnloaded()
          if not self._projectLinksLoaded: self.throwNullCollectionException("projectLinksSeq")
          self._projectLinksSeq.append( link )
          if bothSides and link.getParent().isLoaded():
              link.getParent().addProjectDatasetLinkToBoth( link, False )

      def findProjectDatasetLink(self, removal, current = None):
          self.errorIfUnloaded()
          if not self._projectLinksLoaded: self.throwNullCollectionException("projectLinksSeq")
          result = list()
          for link in self._projectLinksSeq:
              if link.getParent() == removal: result.append(link)
          return result

      def unlinkProject(self, removal, current = None):
          self.errorIfUnloaded()
          if not self._projectLinksLoaded: self.throwNullCollectionException("projectLinksSeq")
          toRemove = self.findProjectDatasetLink(removal)
          for next in toRemove:
              self.removeProjectDatasetLinkFromBoth( next, True )

      def removeProjectDatasetLinkFromBoth(self, link, bothSides, current = None):
          self.errorIfUnloaded()
          if not self._projectLinksLoaded: self.throwNullCollectionException("projectLinksSeq")
          self._projectLinksSeq.remove( link )
          if bothSides and link.getParent().isLoaded():
              link.getParent().removeProjectDatasetLinkFromBoth(link, False)

      def linkedProjectList(self, current = None):
          self.errorIfUnloaded()
          if not self.projectLinksLoaded: self.throwNullCollectionException("ProjectLinks")
          linked = []
          for link in self._projectLinksSeq:
              linked.append( link.getParent() )
          return linked

      def unloadImageLinks(self, current = None):
          self._imageLinksLoaded = False
          self._imageLinksSeq = None;

      def _getImageLinks(self, current = None):
          self.errorIfUnloaded()
          return self._imageLinksSeq

      def _setImageLinks(self, _imageLinks, current = None):
          self.errorIfUnloaded()
          self._imageLinksSeq = _imageLinks
          self.checkUnloadedProperty(_imageLinks,'imageLinksLoaded')

      def isImageLinksLoaded(self):
          return self._imageLinksLoaded

      def sizeOfImageLinks(self, current = None):
          self.errorIfUnloaded()
          if not self._imageLinksLoaded: return -1
          return len(self._imageLinksSeq)

      def copyImageLinks(self, current = None):
          self.errorIfUnloaded()
          if not self._imageLinksLoaded: self.throwNullCollectionException("imageLinksSeq")
          return list(self._imageLinksSeq)

      def iterateImageLinks(self):
          self.errorIfUnloaded()
          if not self._imageLinksLoaded: self.throwNullCollectionException("imageLinksSeq")
          return iter(self._imageLinksSeq)

      def addDatasetImageLink(self, target, current = None):
          self.errorIfUnloaded()
          if not self._imageLinksLoaded: self.throwNullCollectionException("imageLinksSeq")
          self._imageLinksSeq.append( target );
          target.setParent( self )

      def addAllDatasetImageLinkSet(self, targets, current = None):
          self.errorIfUnloaded()
          if  not self._imageLinksLoaded: self.throwNullCollectionException("imageLinksSeq")
          self._imageLinksSeq.extend( targets )
          for target in targets:
              target.setParent( self )

      def removeDatasetImageLink(self, target, current = None):
          self.errorIfUnloaded()
          if not self._imageLinksLoaded: self.throwNullCollectionException("imageLinksSeq")
          self._imageLinksSeq.remove( target )
          target.setParent( None )

      def removeAllDatasetImageLinkSet(self, targets, current = None):
          self.errorIfUnloaded()
          if not self._imageLinksLoaded: self.throwNullCollectionException("imageLinksSeq")
          for elt in targets:
              elt.setParent( None )
              self._imageLinksSeq.remove( elt )

      def clearImageLinks(self, current = None):
          self.errorIfUnloaded()
          if not self._imageLinksLoaded: self.throwNullCollectionException("imageLinksSeq")
          for elt in self._imageLinksSeq:
              elt.setParent( None )
          self._imageLinksSeq = list()

      def reloadImageLinks(self, toCopy, current = None):
          self.errorIfUnloaded()
          if self._imageLinksLoaded:
              raise omero.ClientError("Cannot reload active collection: imageLinksSeq")
          if not toCopy:
              raise omero.ClientError("Argument cannot be null")
          if toCopy.getId().getValue() != self.getId().getValue():
             raise omero.ClientError("Argument must have the same id as this instance")
          if toCopy.getDetails().getUpdateEvent().getId().getValue() < self.getDetails().getUpdateEvent().getId().getValue():
             raise omero.ClientError("Argument may not be older than this instance")
          copy = toCopy.copyImageLinks() # May also throw
          for elt in copy:
              elt.setParent( self )
          self._imageLinksSeq = copy
          toCopy.unloadImageLinks()
          self._imageLinksLoaded = True

      def getImageLinksCountPerOwner(self, current = None):
          return self._imageLinksCountPerOwner

      def linkImage(self, addition, current = None):
          self.errorIfUnloaded()
          if not self._imageLinksLoaded: self.throwNullCollectionException("imageLinksSeq")
          link = _omero_model.DatasetImageLinkI()
          link.link( self, addition );
          self.addDatasetImageLinkToBoth( link, True )
          return link

      def addDatasetImageLinkToBoth(self, link, bothSides):
          self.errorIfUnloaded()
          if not self._imageLinksLoaded: self.throwNullCollectionException("imageLinksSeq")
          self._imageLinksSeq.append( link )
          if bothSides and link.getChild().isLoaded():
              link.getChild().addDatasetImageLinkToBoth( link, False )

      def findDatasetImageLink(self, removal, current = None):
          self.errorIfUnloaded()
          if not self._imageLinksLoaded: self.throwNullCollectionException("imageLinksSeq")
          result = list()
          for link in self._imageLinksSeq:
              if link.getChild() == removal: result.append(link)
          return result

      def unlinkImage(self, removal, current = None):
          self.errorIfUnloaded()
          if not self._imageLinksLoaded: self.throwNullCollectionException("imageLinksSeq")
          toRemove = self.findDatasetImageLink(removal)
          for next in toRemove:
              self.removeDatasetImageLinkFromBoth( next, True )

      def removeDatasetImageLinkFromBoth(self, link, bothSides, current = None):
          self.errorIfUnloaded()
          if not self._imageLinksLoaded: self.throwNullCollectionException("imageLinksSeq")
          self._imageLinksSeq.remove( link )
          if bothSides and link.getChild().isLoaded():
              link.getChild().removeDatasetImageLinkFromBoth(link, False)

      def linkedImageList(self, current = None):
          self.errorIfUnloaded()
          if not self.imageLinksLoaded: self.throwNullCollectionException("ImageLinks")
          linked = []
          for link in self._imageLinksSeq:
              linked.append( link.getChild() )
          return linked

      def unloadAnnotationLinks(self, current = None):
          self._annotationLinksLoaded = False
          self._annotationLinksSeq = None;

      def _getAnnotationLinks(self, current = None):
          self.errorIfUnloaded()
          return self._annotationLinksSeq

      def _setAnnotationLinks(self, _annotationLinks, current = None):
          self.errorIfUnloaded()
          self._annotationLinksSeq = _annotationLinks
          self.checkUnloadedProperty(_annotationLinks,'annotationLinksLoaded')

      def isAnnotationLinksLoaded(self):
          return self._annotationLinksLoaded

      def sizeOfAnnotationLinks(self, current = None):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: return -1
          return len(self._annotationLinksSeq)

      def copyAnnotationLinks(self, current = None):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          return list(self._annotationLinksSeq)

      def iterateAnnotationLinks(self):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          return iter(self._annotationLinksSeq)

      def addDatasetAnnotationLink(self, target, current = None):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          self._annotationLinksSeq.append( target );
          target.setParent( self )

      def addAllDatasetAnnotationLinkSet(self, targets, current = None):
          self.errorIfUnloaded()
          if  not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          self._annotationLinksSeq.extend( targets )
          for target in targets:
              target.setParent( self )

      def removeDatasetAnnotationLink(self, target, current = None):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          self._annotationLinksSeq.remove( target )
          target.setParent( None )

      def removeAllDatasetAnnotationLinkSet(self, targets, current = None):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          for elt in targets:
              elt.setParent( None )
              self._annotationLinksSeq.remove( elt )

      def clearAnnotationLinks(self, current = None):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          for elt in self._annotationLinksSeq:
              elt.setParent( None )
          self._annotationLinksSeq = list()

      def reloadAnnotationLinks(self, toCopy, current = None):
          self.errorIfUnloaded()
          if self._annotationLinksLoaded:
              raise omero.ClientError("Cannot reload active collection: annotationLinksSeq")
          if not toCopy:
              raise omero.ClientError("Argument cannot be null")
          if toCopy.getId().getValue() != self.getId().getValue():
             raise omero.ClientError("Argument must have the same id as this instance")
          if toCopy.getDetails().getUpdateEvent().getId().getValue() < self.getDetails().getUpdateEvent().getId().getValue():
             raise omero.ClientError("Argument may not be older than this instance")
          copy = toCopy.copyAnnotationLinks() # May also throw
          for elt in copy:
              elt.setParent( self )
          self._annotationLinksSeq = copy
          toCopy.unloadAnnotationLinks()
          self._annotationLinksLoaded = True

      def getAnnotationLinksCountPerOwner(self, current = None):
          return self._annotationLinksCountPerOwner

      def linkAnnotation(self, addition, current = None):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          link = _omero_model.DatasetAnnotationLinkI()
          link.link( self, addition );
          self.addDatasetAnnotationLinkToBoth( link, True )
          return link

      def addDatasetAnnotationLinkToBoth(self, link, bothSides):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          self._annotationLinksSeq.append( link )

      def findDatasetAnnotationLink(self, removal, current = None):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          result = list()
          for link in self._annotationLinksSeq:
              if link.getChild() == removal: result.append(link)
          return result

      def unlinkAnnotation(self, removal, current = None):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          toRemove = self.findDatasetAnnotationLink(removal)
          for next in toRemove:
              self.removeDatasetAnnotationLinkFromBoth( next, True )

      def removeDatasetAnnotationLinkFromBoth(self, link, bothSides, current = None):
          self.errorIfUnloaded()
          if not self._annotationLinksLoaded: self.throwNullCollectionException("annotationLinksSeq")
          self._annotationLinksSeq.remove( link )

      def linkedAnnotationList(self, current = None):
          self.errorIfUnloaded()
          if not self.annotationLinksLoaded: self.throwNullCollectionException("AnnotationLinks")
          linked = []
          for link in self._annotationLinksSeq:
              linked.append( link.getChild() )
          return linked

      def unloadName(self, ):
          self._nameLoaded = False
          self._name = None;

      def getName(self, current = None):
          self.errorIfUnloaded()
          return self._name

      def setName(self, _name, current = None):
          self.errorIfUnloaded()
          self._name = _name
          pass

      def unloadDescription(self, ):
          self._descriptionLoaded = False
          self._description = None;

      def getDescription(self, current = None):
          self.errorIfUnloaded()
          return self._description

      def setDescription(self, _description, current = None):
          self.errorIfUnloaded()
          self._description = _description
          pass


      def ice_postUnmarshal(self):
          """
          Provides additional initialization once all data loaded
          """
          pass # Currently unused


      def ice_preMarshal(self):
          """
          Provides additional validation before data is sent
          """
          pass # Currently unused

      def __getattr__(self, name):
          import __builtin__
          """
          Reroutes all access to object.field through object.getField() or object.isField()
          """
          field  = "_" + name
          capitalized = name[0].capitalize() + name[1:]
          getter = "get" + capitalized
          questn = "is" + capitalized
          try:
              self.__dict__[field]
              if hasattr(self, getter):
                  method = getattr(self, getter)
                  return method()
              elif hasattr(self, questn):
                  method = getattr(self, questn)
                  return method()
          except:
              pass
          raise AttributeError("'%s' object has no attribute '%s' or '%s'" % (self.__class__.__name__, getter, questn))

      def __setattr__(self, name, value):
          """
          Reroutes all access to object.field through object.getField(), with the caveat
          that all sets on variables starting with "_" are permitted directly.
          """
          if name.startswith("_"):
              self.__dict__[name] = value
              return
          else:
              field  = "_" + name
              setter = "set" + name[0].capitalize() + name[1:]
              if hasattr(self, field) and hasattr(self, setter):
                  method = getattr(self, setter)
                  return method(value)
          raise AttributeError("'%s' object has no attribute '%s'" % (self.__class__.__name__, setter))

_omero_model.DatasetI = DatasetI
