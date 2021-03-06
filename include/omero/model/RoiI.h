   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.h for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef ROII_H
#define ROII_H
#include <omero/RTypes.h>
#include <omero/ClientErrors.h>
#include <omero/model/IObject.h>
#include <omero/model/DetailsI.h>
#include <omero/model/Roi.h>
#include <omero/templates.h>
#include <IceUtil/Config.h>
#if ICE_INT_VERSION / 100 >= 304
#   include <Ice/Handle.h>
#else
#   include <IceUtil/Handle.h>
#endif
#ifndef OMERO_API
#   ifdef OMERO_API_EXPORTS
#       define OMERO_API ICE_DECLSPEC_EXPORT
#   else
#       define OMERO_API ICE_DECLSPEC_IMPORT
#   endif
#endif
namespace omero {
  namespace model {
    class OMERO_API RoiI;
  }
}
#if ICE_INT_VERSION / 100 >= 304
namespace IceInternal {
  OMERO_API ::Ice::Object* upCast(::omero::model::RoiI*);
}
#endif
namespace omero {
  namespace model {
#if ICE_INT_VERSION / 100 >= 304
  typedef IceInternal::Handle<RoiI> RoiIPtr;
#else
  typedef IceUtil::Handle<RoiI> RoiIPtr;
#endif
    class OMERO_API RoiI : virtual public Roi {
   public:
      static const std::string SHAPES;
      static const std::string IMAGE;
      static const std::string SOURCE;
      static const std::string NAMESPACES;
      static const std::string KEYWORDS;
      static const std::string ANNOTATIONLINKS;
      static const std::string DESCRIPTION;
      static const std::string DETAILS;
    protected:
      void errorIfUnloaded();
      void throwNullCollectionException(std::string propertyName);
      virtual void toggleCollectionsLoaded(bool load);
      virtual ~RoiI();
    public:
      RoiI();
      RoiI(omero::RLongPtr idPtr, bool isLoaded = false);
      RoiI(Ice::Long id, bool isLoaded = false);
      virtual void unload(const Ice::Current& current = Ice::Current());
      virtual bool isLoaded(const Ice::Current& current = Ice::Current());
      virtual void unloadCollections(const Ice::Current& current = Ice::Current());
      virtual bool isGlobal(const Ice::Current& current = Ice::Current());
      virtual bool isMutable(const Ice::Current& current = Ice::Current());
      virtual bool isAnnotated(const Ice::Current& current = Ice::Current());
      virtual bool isLink(const Ice::Current& current = Ice::Current());
      virtual omero::model::IObjectPtr shallowCopy(const Ice::Current& current = Ice::Current());
      virtual omero::model::IObjectPtr proxy(const Ice::Current& current = Ice::Current());
      virtual omero::model::DetailsPtr getDetails(const Ice::Current& current = Ice::Current());
      virtual void unloadDetails(const Ice::Current& current = Ice::Current());
      virtual omero::RLongPtr getId(const Ice::Current& current = Ice::Current());
      virtual void setId( const omero::RLongPtr& id, const Ice::Current& current = Ice::Current() );
      virtual omero::RIntPtr getVersion(const Ice::Current& current = Ice::Current());
      virtual void setVersion( const omero::RIntPtr& version, const Ice::Current& current = Ice::Current() );

      //
      //  Roi.shapes
      //
      virtual void unloadShapes(const Ice::Current& current = Ice::Current());
    protected:
      virtual RoiShapesSeq getShapes(const Ice::Current& current = Ice::Current());
      virtual void setShapes(const RoiShapesSeq& _shapes, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isShapesLoaded();
      virtual Ice::Int sizeOfShapes(const Ice::Current& current = Ice::Current());
      virtual RoiShapesSeq copyShapes(const Ice::Current& current = Ice::Current());
      virtual RoiShapesSeq::iterator beginShapes();
      virtual RoiShapesSeq::iterator endShapes();
      virtual void addShape(const ShapePtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllShapeSet(const RoiShapesSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removeShape(const ShapePtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllShapeSet(const RoiShapesSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearShapes(const Ice::Current& current = Ice::Current());
      virtual void reloadShapes(const RoiPtr& toCopy, const Ice::Current& current = Ice::Current());
      virtual ShapePtr getShape(int index, const Ice::Current& current = Ice::Current());
      virtual ShapePtr setShape(int index, const ShapePtr& element, const Ice::Current& current = Ice::Current());
      virtual ShapePtr getPrimaryShape(const Ice::Current& current = Ice::Current());
      virtual ShapePtr setPrimaryShape(const ShapePtr& element, const Ice::Current& current = Ice::Current());

      //
      //  Roi.image
      //
      virtual void unloadImage();
      virtual omero::model::ImagePtr getImage(const Ice::Current& current = Ice::Current());
      virtual void setImage(const omero::model::ImagePtr& _image, const Ice::Current& current = Ice::Current());

      //
      //  Roi.source
      //
      virtual void unloadSource();
      virtual omero::model::OriginalFilePtr getSource(const Ice::Current& current = Ice::Current());
      virtual void setSource(const omero::model::OriginalFilePtr& _source, const Ice::Current& current = Ice::Current());

      //
      //  Roi.namespaces
      //
      virtual void unloadNamespaces();
      virtual omero::api::StringArray getNamespaces(const Ice::Current& current = Ice::Current());
      virtual void setNamespaces(const omero::api::StringArray& _namespaces, const Ice::Current& current = Ice::Current());

      //
      //  Roi.keywords
      //
      virtual void unloadKeywords();
      virtual omero::api::StringArrayArray getKeywords(const Ice::Current& current = Ice::Current());
      virtual void setKeywords(const omero::api::StringArrayArray& _keywords, const Ice::Current& current = Ice::Current());

      //
      //  Roi.annotationLinks
      //
      virtual void unloadAnnotationLinks(const Ice::Current& current = Ice::Current());
    protected:
      virtual RoiAnnotationLinksSeq getAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual void setAnnotationLinks(const RoiAnnotationLinksSeq& _annotationLinks, const Ice::Current& current = Ice::Current());
    public:
      virtual bool isAnnotationLinksLoaded();
      virtual Ice::Int sizeOfAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual RoiAnnotationLinksSeq copyAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual RoiAnnotationLinksSeq::iterator beginAnnotationLinks();
      virtual RoiAnnotationLinksSeq::iterator endAnnotationLinks();
      virtual void addRoiAnnotationLink(const RoiAnnotationLinkPtr& target, const Ice::Current& current = Ice::Current());
      virtual void addAllRoiAnnotationLinkSet(const RoiAnnotationLinksSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void removeRoiAnnotationLink(const RoiAnnotationLinkPtr& target, const Ice::Current& current = Ice::Current());
      virtual void removeAllRoiAnnotationLinkSet(const RoiAnnotationLinksSeq& targets, const Ice::Current& current = Ice::Current());
      virtual void clearAnnotationLinks(const Ice::Current& current = Ice::Current());
      virtual void reloadAnnotationLinks(const RoiPtr& toCopy, const Ice::Current& current = Ice::Current());
      virtual omero::sys::CountMap getAnnotationLinksCountPerOwner(const Ice::Current& current = Ice::Current());
      virtual RoiAnnotationLinkPtr linkAnnotation(const AnnotationPtr& addition, const Ice::Current& current = Ice::Current());
      virtual void addRoiAnnotationLinkToBoth(const RoiAnnotationLinkPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
      virtual RoiAnnotationLinksSeq findRoiAnnotationLink(const AnnotationPtr& removal, const Ice::Current& current = Ice::Current());
      virtual void unlinkAnnotation(const AnnotationPtr& removal, const Ice::Current& current = Ice::Current());
      virtual void removeRoiAnnotationLinkFromBoth(const RoiAnnotationLinkPtr& link, bool bothSides, const Ice::Current& current = Ice::Current());
       virtual RoiLinkedAnnotationSeq linkedAnnotationList(const Ice::Current& current = Ice::Current());

      //
      //  Roi.description
      //
      virtual void unloadDescription();
      virtual omero::RStringPtr getDescription(const Ice::Current& current = Ice::Current());
      virtual void setDescription(const omero::RStringPtr& _description, const Ice::Current& current = Ice::Current());
 };

}}
#endif // ROII_H
