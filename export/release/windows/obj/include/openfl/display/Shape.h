// Generated by Haxe 4.2.0
#ifndef INCLUDED_openfl_display_Shape
#define INCLUDED_openfl_display_Shape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Shape_obj : public  ::openfl::display::DisplayObject_obj
{
	public:
		typedef  ::openfl::display::DisplayObject_obj super;
		typedef Shape_obj OBJ_;
		Shape_obj();

	public:
		enum { _hx_ClassId = 0x4a85ffb3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.Shape")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.Shape"); }
		static ::hx::ObjectPtr< Shape_obj > __new();
		static ::hx::ObjectPtr< Shape_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Shape_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Shape",01,53,4a,0f); }

		 ::openfl::display::Graphics get_graphics();
		::Dynamic get_graphics_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Shape */ 
