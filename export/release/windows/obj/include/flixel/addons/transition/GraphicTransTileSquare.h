// Generated by Haxe 4.2.0
#ifndef INCLUDED_flixel_addons_transition_GraphicTransTileSquare
#define INCLUDED_flixel_addons_transition_GraphicTransTileSquare

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
HX_DECLARE_CLASS3(flixel,addons,transition,GraphicTransTileSquare)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace addons{
namespace transition{


class HXCPP_CLASS_ATTRIBUTES GraphicTransTileSquare_obj : public  ::openfl::display::BitmapData_obj
{
	public:
		typedef  ::openfl::display::BitmapData_obj super;
		typedef GraphicTransTileSquare_obj OBJ_;
		GraphicTransTileSquare_obj();

	public:
		enum { _hx_ClassId = 0x26767837 };

		void __construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.transition.GraphicTransTileSquare")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.transition.GraphicTransTileSquare"); }
		static ::hx::ObjectPtr< GraphicTransTileSquare_obj > __new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static ::hx::ObjectPtr< GraphicTransTileSquare_obj > __alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GraphicTransTileSquare_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GraphicTransTileSquare",0b,d3,33,22); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace flixel
} // end namespace addons
} // end namespace transition

#endif /* INCLUDED_flixel_addons_transition_GraphicTransTileSquare */ 
