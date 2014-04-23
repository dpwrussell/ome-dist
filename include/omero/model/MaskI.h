   /*
   **   Generated by blitz/templates/resouces/combined.vm
   **   See ../../README.h for information on these types.
   **
   **   Copyright 2007, 2008 Glencoe Software, Inc. All rights reserved.
   **   Use is subject to license terms supplied in LICENSE.txt
   **
   */
#ifndef MASKI_H
#define MASKI_H
#include <omero/RTypes.h>
#include <omero/ClientErrors.h>
#include <omero/model/IObject.h>
#include <omero/model/DetailsI.h>
#include <omero/model/Mask.h>
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
    class OMERO_API MaskI;
  }
}
#if ICE_INT_VERSION / 100 >= 304
namespace IceInternal {
  OMERO_API ::Ice::Object* upCast(::omero::model::MaskI*);
}
#endif
namespace omero {
  namespace model {
#if ICE_INT_VERSION / 100 >= 304
  typedef IceInternal::Handle<MaskI> MaskIPtr;
#else
  typedef IceUtil::Handle<MaskI> MaskIPtr;
#endif
    class OMERO_API MaskI : virtual public Mask {
   public:
      static const std::string X;
      static const std::string Y;
      static const std::string WIDTH;
      static const std::string HEIGHT;
      static const std::string PIXELS;
      static const std::string TEXTVALUE;
      static const std::string BYTES;
      static const std::string THEZ;
      static const std::string THET;
      static const std::string THEC;
      static const std::string ROI;
      static const std::string LOCKED;
      static const std::string G;
      static const std::string TRANSFORM;
      static const std::string VECTOREFFECT;
      static const std::string VISIBILITY;
      static const std::string FILLCOLOR;
      static const std::string FILLRULE;
      static const std::string STROKECOLOR;
      static const std::string STROKEDASHARRAY;
      static const std::string STROKEDASHOFFSET;
      static const std::string STROKELINECAP;
      static const std::string STROKELINEJOIN;
      static const std::string STROKEMITERLIMIT;
      static const std::string STROKEWIDTH;
      static const std::string FONTFAMILY;
      static const std::string FONTSIZE;
      static const std::string FONTSTRETCH;
      static const std::string FONTSTYLE;
      static const std::string FONTVARIANT;
      static const std::string FONTWEIGHT;
      static const std::string DETAILS;
    protected:
      void errorIfUnloaded();
      void throwNullCollectionException(std::string propertyName);
      virtual void toggleCollectionsLoaded(bool load);
      virtual ~MaskI();
    public:
      MaskI();
      MaskI(omero::RLongPtr idPtr, bool isLoaded = false);
      MaskI(Ice::Long id, bool isLoaded = false);
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
      //  Mask.x
      //
      virtual void unloadX();
      virtual omero::RDoublePtr getX(const Ice::Current& current = Ice::Current());
      virtual void setX(const omero::RDoublePtr& _x, const Ice::Current& current = Ice::Current());

      //
      //  Mask.y
      //
      virtual void unloadY();
      virtual omero::RDoublePtr getY(const Ice::Current& current = Ice::Current());
      virtual void setY(const omero::RDoublePtr& _y, const Ice::Current& current = Ice::Current());

      //
      //  Mask.width
      //
      virtual void unloadWidth();
      virtual omero::RDoublePtr getWidth(const Ice::Current& current = Ice::Current());
      virtual void setWidth(const omero::RDoublePtr& _width, const Ice::Current& current = Ice::Current());

      //
      //  Mask.height
      //
      virtual void unloadHeight();
      virtual omero::RDoublePtr getHeight(const Ice::Current& current = Ice::Current());
      virtual void setHeight(const omero::RDoublePtr& _height, const Ice::Current& current = Ice::Current());

      //
      //  Mask.pixels
      //
      virtual void unloadPixels();
      virtual omero::model::PixelsPtr getPixels(const Ice::Current& current = Ice::Current());
      virtual void setPixels(const omero::model::PixelsPtr& _pixels, const Ice::Current& current = Ice::Current());

      //
      //  Mask.textValue
      //
      virtual void unloadTextValue();
      virtual omero::RStringPtr getTextValue(const Ice::Current& current = Ice::Current());
      virtual void setTextValue(const omero::RStringPtr& _textValue, const Ice::Current& current = Ice::Current());

      //
      //  Mask.bytes
      //
      virtual void unloadBytes();
      virtual Ice::ByteSeq getBytes(const Ice::Current& current = Ice::Current());
      virtual void setBytes(const Ice::ByteSeq& _bytes, const Ice::Current& current = Ice::Current());

      //
      //  Mask.theZ
      //
      virtual void unloadTheZ();
      virtual omero::RIntPtr getTheZ(const Ice::Current& current = Ice::Current());
      virtual void setTheZ(const omero::RIntPtr& _theZ, const Ice::Current& current = Ice::Current());

      //
      //  Mask.theT
      //
      virtual void unloadTheT();
      virtual omero::RIntPtr getTheT(const Ice::Current& current = Ice::Current());
      virtual void setTheT(const omero::RIntPtr& _theT, const Ice::Current& current = Ice::Current());

      //
      //  Mask.theC
      //
      virtual void unloadTheC();
      virtual omero::RIntPtr getTheC(const Ice::Current& current = Ice::Current());
      virtual void setTheC(const omero::RIntPtr& _theC, const Ice::Current& current = Ice::Current());

      //
      //  Mask.roi
      //
      virtual void unloadRoi();
      virtual omero::model::RoiPtr getRoi(const Ice::Current& current = Ice::Current());
      virtual void setRoi(const omero::model::RoiPtr& _roi, const Ice::Current& current = Ice::Current());

      //
      //  Mask.locked
      //
      virtual void unloadLocked();
      virtual omero::RBoolPtr getLocked(const Ice::Current& current = Ice::Current());
      virtual void setLocked(const omero::RBoolPtr& _locked, const Ice::Current& current = Ice::Current());

      //
      //  Mask.g
      //
      virtual void unloadG();
      virtual omero::RStringPtr getG(const Ice::Current& current = Ice::Current());
      virtual void setG(const omero::RStringPtr& _g, const Ice::Current& current = Ice::Current());

      //
      //  Mask.transform
      //
      virtual void unloadTransform();
      virtual omero::RStringPtr getTransform(const Ice::Current& current = Ice::Current());
      virtual void setTransform(const omero::RStringPtr& _transform, const Ice::Current& current = Ice::Current());

      //
      //  Mask.vectorEffect
      //
      virtual void unloadVectorEffect();
      virtual omero::RStringPtr getVectorEffect(const Ice::Current& current = Ice::Current());
      virtual void setVectorEffect(const omero::RStringPtr& _vectorEffect, const Ice::Current& current = Ice::Current());

      //
      //  Mask.visibility
      //
      virtual void unloadVisibility();
      virtual omero::RBoolPtr getVisibility(const Ice::Current& current = Ice::Current());
      virtual void setVisibility(const omero::RBoolPtr& _visibility, const Ice::Current& current = Ice::Current());

      //
      //  Mask.fillColor
      //
      virtual void unloadFillColor();
      virtual omero::RIntPtr getFillColor(const Ice::Current& current = Ice::Current());
      virtual void setFillColor(const omero::RIntPtr& _fillColor, const Ice::Current& current = Ice::Current());

      //
      //  Mask.fillRule
      //
      virtual void unloadFillRule();
      virtual omero::RStringPtr getFillRule(const Ice::Current& current = Ice::Current());
      virtual void setFillRule(const omero::RStringPtr& _fillRule, const Ice::Current& current = Ice::Current());

      //
      //  Mask.strokeColor
      //
      virtual void unloadStrokeColor();
      virtual omero::RIntPtr getStrokeColor(const Ice::Current& current = Ice::Current());
      virtual void setStrokeColor(const omero::RIntPtr& _strokeColor, const Ice::Current& current = Ice::Current());

      //
      //  Mask.strokeDashArray
      //
      virtual void unloadStrokeDashArray();
      virtual omero::RStringPtr getStrokeDashArray(const Ice::Current& current = Ice::Current());
      virtual void setStrokeDashArray(const omero::RStringPtr& _strokeDashArray, const Ice::Current& current = Ice::Current());

      //
      //  Mask.strokeDashOffset
      //
      virtual void unloadStrokeDashOffset();
      virtual omero::RIntPtr getStrokeDashOffset(const Ice::Current& current = Ice::Current());
      virtual void setStrokeDashOffset(const omero::RIntPtr& _strokeDashOffset, const Ice::Current& current = Ice::Current());

      //
      //  Mask.strokeLineCap
      //
      virtual void unloadStrokeLineCap();
      virtual omero::RStringPtr getStrokeLineCap(const Ice::Current& current = Ice::Current());
      virtual void setStrokeLineCap(const omero::RStringPtr& _strokeLineCap, const Ice::Current& current = Ice::Current());

      //
      //  Mask.strokeLineJoin
      //
      virtual void unloadStrokeLineJoin();
      virtual omero::RStringPtr getStrokeLineJoin(const Ice::Current& current = Ice::Current());
      virtual void setStrokeLineJoin(const omero::RStringPtr& _strokeLineJoin, const Ice::Current& current = Ice::Current());

      //
      //  Mask.strokeMiterLimit
      //
      virtual void unloadStrokeMiterLimit();
      virtual omero::RIntPtr getStrokeMiterLimit(const Ice::Current& current = Ice::Current());
      virtual void setStrokeMiterLimit(const omero::RIntPtr& _strokeMiterLimit, const Ice::Current& current = Ice::Current());

      //
      //  Mask.strokeWidth
      //
      virtual void unloadStrokeWidth();
      virtual omero::RIntPtr getStrokeWidth(const Ice::Current& current = Ice::Current());
      virtual void setStrokeWidth(const omero::RIntPtr& _strokeWidth, const Ice::Current& current = Ice::Current());

      //
      //  Mask.fontFamily
      //
      virtual void unloadFontFamily();
      virtual omero::RStringPtr getFontFamily(const Ice::Current& current = Ice::Current());
      virtual void setFontFamily(const omero::RStringPtr& _fontFamily, const Ice::Current& current = Ice::Current());

      //
      //  Mask.fontSize
      //
      virtual void unloadFontSize();
      virtual omero::RIntPtr getFontSize(const Ice::Current& current = Ice::Current());
      virtual void setFontSize(const omero::RIntPtr& _fontSize, const Ice::Current& current = Ice::Current());

      //
      //  Mask.fontStretch
      //
      virtual void unloadFontStretch();
      virtual omero::RStringPtr getFontStretch(const Ice::Current& current = Ice::Current());
      virtual void setFontStretch(const omero::RStringPtr& _fontStretch, const Ice::Current& current = Ice::Current());

      //
      //  Mask.fontStyle
      //
      virtual void unloadFontStyle();
      virtual omero::RStringPtr getFontStyle(const Ice::Current& current = Ice::Current());
      virtual void setFontStyle(const omero::RStringPtr& _fontStyle, const Ice::Current& current = Ice::Current());

      //
      //  Mask.fontVariant
      //
      virtual void unloadFontVariant();
      virtual omero::RStringPtr getFontVariant(const Ice::Current& current = Ice::Current());
      virtual void setFontVariant(const omero::RStringPtr& _fontVariant, const Ice::Current& current = Ice::Current());

      //
      //  Mask.fontWeight
      //
      virtual void unloadFontWeight();
      virtual omero::RStringPtr getFontWeight(const Ice::Current& current = Ice::Current());
      virtual void setFontWeight(const omero::RStringPtr& _fontWeight, const Ice::Current& current = Ice::Current());
 };

}}
#endif // MASKI_H
