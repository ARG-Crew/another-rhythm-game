// Generated by Haxe 4.2.0
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_color_buffer_half_float
#define INCLUDED_lime_graphics_opengl_ext_EXT_color_buffer_half_float

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_15fbe66fa7b31d40_5_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_color_buffer_half_float)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_color_buffer_half_float_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_color_buffer_half_float_obj OBJ_;
		EXT_color_buffer_half_float_obj();

	public:
		enum { _hx_ClassId = 0x6360f823 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_color_buffer_half_float")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_color_buffer_half_float"); }

		inline static ::hx::ObjectPtr< EXT_color_buffer_half_float_obj > __new() {
			::hx::ObjectPtr< EXT_color_buffer_half_float_obj > __this = new EXT_color_buffer_half_float_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_color_buffer_half_float_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_color_buffer_half_float_obj *__this = (EXT_color_buffer_half_float_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_color_buffer_half_float_obj), false, "lime.graphics.opengl.ext.EXT_color_buffer_half_float"));
			*(void **)__this = EXT_color_buffer_half_float_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_15fbe66fa7b31d40_5_new)
HXLINE(  14)		( ( ::lime::graphics::opengl::ext::EXT_color_buffer_half_float)(__this) )->UNSIGNED_NORMALIZED_EXT = 35863;
HXLINE(  13)		( ( ::lime::graphics::opengl::ext::EXT_color_buffer_half_float)(__this) )->FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT = 33297;
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::EXT_color_buffer_half_float)(__this) )->R16F_EXT = 33325;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::EXT_color_buffer_half_float)(__this) )->RG16F_EXT = 33327;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::EXT_color_buffer_half_float)(__this) )->RGB16F_EXT = 34843;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::EXT_color_buffer_half_float)(__this) )->RGBA16F_EXT = 34842;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_color_buffer_half_float_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_color_buffer_half_float",d5,e8,0a,44); }

		int RGBA16F_EXT;
		int RGB16F_EXT;
		int RG16F_EXT;
		int R16F_EXT;
		int FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT;
		int UNSIGNED_NORMALIZED_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_color_buffer_half_float */ 
