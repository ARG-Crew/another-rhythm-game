// Generated by Haxe 4.2.0
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_compressed_paletted_texture
#define INCLUDED_lime_graphics_opengl_ext_OES_compressed_paletted_texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_169dd139fd8d75fb_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_compressed_paletted_texture)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES OES_compressed_paletted_texture_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OES_compressed_paletted_texture_obj OBJ_;
		OES_compressed_paletted_texture_obj();

	public:
		enum { _hx_ClassId = 0x6506bab7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_compressed_paletted_texture")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.OES_compressed_paletted_texture"); }

		inline static ::hx::ObjectPtr< OES_compressed_paletted_texture_obj > __new() {
			::hx::ObjectPtr< OES_compressed_paletted_texture_obj > __this = new OES_compressed_paletted_texture_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OES_compressed_paletted_texture_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OES_compressed_paletted_texture_obj *__this = (OES_compressed_paletted_texture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OES_compressed_paletted_texture_obj), false, "lime.graphics.opengl.ext.OES_compressed_paletted_texture"));
			*(void **)__this = OES_compressed_paletted_texture_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_169dd139fd8d75fb_4_new)
HXLINE(  15)		( ( ::lime::graphics::opengl::ext::OES_compressed_paletted_texture)(__this) )->PALETTE8_RGB5_A1_OES = 35737;
HXLINE(  14)		( ( ::lime::graphics::opengl::ext::OES_compressed_paletted_texture)(__this) )->PALETTE8_RGBA4_OES = 35736;
HXLINE(  13)		( ( ::lime::graphics::opengl::ext::OES_compressed_paletted_texture)(__this) )->PALETTE8_R5_G6_B5_OES = 35735;
HXLINE(  12)		( ( ::lime::graphics::opengl::ext::OES_compressed_paletted_texture)(__this) )->PALETTE8_RGBA8_OES = 35734;
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::OES_compressed_paletted_texture)(__this) )->PALETTE8_RGB8_OES = 35733;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::OES_compressed_paletted_texture)(__this) )->PALETTE4_RGB5_A1_OES = 35732;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::OES_compressed_paletted_texture)(__this) )->PALETTE4_RGBA4_OES = 35731;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::OES_compressed_paletted_texture)(__this) )->PALETTE4_R5_G6_B5_OES = 35730;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::OES_compressed_paletted_texture)(__this) )->PALETTE4_RGBA8_OES = 35729;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::OES_compressed_paletted_texture)(__this) )->PALETTE4_RGB8_OES = 35728;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OES_compressed_paletted_texture_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OES_compressed_paletted_texture",a1,ed,5e,8e); }

		int PALETTE4_RGB8_OES;
		int PALETTE4_RGBA8_OES;
		int PALETTE4_R5_G6_B5_OES;
		int PALETTE4_RGBA4_OES;
		int PALETTE4_RGB5_A1_OES;
		int PALETTE8_RGB8_OES;
		int PALETTE8_RGBA8_OES;
		int PALETTE8_R5_G6_B5_OES;
		int PALETTE8_RGBA4_OES;
		int PALETTE8_RGB5_A1_OES;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_compressed_paletted_texture */ 
