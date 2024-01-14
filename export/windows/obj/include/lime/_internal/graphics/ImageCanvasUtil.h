// Generated by Haxe 4.3.3
#ifndef INCLUDED_lime__internal_graphics_ImageCanvasUtil
#define INCLUDED_lime__internal_graphics_ImageCanvasUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,_internal,graphics,ImageCanvasUtil)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,ImageChannel)
HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,math,Vector2)
HX_DECLARE_CLASS2(lime,_hx_system,Endian)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,BytePointerData)

namespace lime{
namespace _internal{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES ImageCanvasUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ImageCanvasUtil_obj OBJ_;
		ImageCanvasUtil_obj();

	public:
		enum { _hx_ClassId = 0x608a0907 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.graphics.ImageCanvasUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime._internal.graphics.ImageCanvasUtil"); }

		inline static ::hx::ObjectPtr< ImageCanvasUtil_obj > __new() {
			::hx::ObjectPtr< ImageCanvasUtil_obj > __this = new ImageCanvasUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ImageCanvasUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ImageCanvasUtil_obj *__this = (ImageCanvasUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageCanvasUtil_obj), false, "lime._internal.graphics.ImageCanvasUtil"));
			*(void **)__this = ImageCanvasUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImageCanvasUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImageCanvasUtil",15,30,04,51); }

		static void colorTransform( ::lime::graphics::Image image, ::lime::math::Rectangle rect, ::lime::utils::ArrayBufferView colorMatrix);
		static ::Dynamic colorTransform_dyn();

		static void convertToCanvas( ::lime::graphics::Image image,::hx::Null< bool >  clear);
		static ::Dynamic convertToCanvas_dyn();

		static void convertToData( ::lime::graphics::Image image,::hx::Null< bool >  clear);
		static ::Dynamic convertToData_dyn();

		static void copyChannel( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint, ::lime::graphics::ImageChannel sourceChannel, ::lime::graphics::ImageChannel destChannel);
		static ::Dynamic copyChannel_dyn();

		static void copyPixels( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint, ::lime::graphics::Image alphaImage, ::lime::math::Vector2 alphaPoint,::hx::Null< bool >  mergeAlpha);
		static ::Dynamic copyPixels_dyn();

		static void createCanvas( ::lime::graphics::Image image,int width,int height);
		static ::Dynamic createCanvas_dyn();

		static void createImageData( ::lime::graphics::Image image);
		static ::Dynamic createImageData_dyn();

		static void fillRect( ::lime::graphics::Image image, ::lime::math::Rectangle rect,int color,int format);
		static ::Dynamic fillRect_dyn();

		static void floodFill( ::lime::graphics::Image image,int x,int y,int color,int format);
		static ::Dynamic floodFill_dyn();

		static int getPixel( ::lime::graphics::Image image,int x,int y,int format);
		static ::Dynamic getPixel_dyn();

		static int getPixel32( ::lime::graphics::Image image,int x,int y,int format);
		static ::Dynamic getPixel32_dyn();

		static  ::haxe::io::Bytes getPixels( ::lime::graphics::Image image, ::lime::math::Rectangle rect,int format);
		static ::Dynamic getPixels_dyn();

		static void merge( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier);
		static ::Dynamic merge_dyn();

		static void resize( ::lime::graphics::Image image,int newWidth,int newHeight);
		static ::Dynamic resize_dyn();

		static void scroll( ::lime::graphics::Image image,int x,int y);
		static ::Dynamic scroll_dyn();

		static void setPixel( ::lime::graphics::Image image,int x,int y,int color,int format);
		static ::Dynamic setPixel_dyn();

		static void setPixel32( ::lime::graphics::Image image,int x,int y,int color,int format);
		static ::Dynamic setPixel32_dyn();

		static void setPixels( ::lime::graphics::Image image, ::lime::math::Rectangle rect, ::lime::utils::BytePointerData bytePointer,int format, ::lime::_hx_system::Endian endian);
		static ::Dynamic setPixels_dyn();

		static void sync( ::lime::graphics::Image image,bool clear);
		static ::Dynamic sync_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace graphics

#endif /* INCLUDED_lime__internal_graphics_ImageCanvasUtil */ 
