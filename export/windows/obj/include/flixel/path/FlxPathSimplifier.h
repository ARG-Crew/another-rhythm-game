// Generated by Haxe 4.3.3
#ifndef INCLUDED_flixel_path_FlxPathSimplifier
#define INCLUDED_flixel_path_FlxPathSimplifier

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,path,FlxPathSimplifier)
HX_DECLARE_CLASS2(flixel,path,FlxTypedPathfinderData)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace path{


class FlxPathSimplifier_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxPathSimplifier_obj OBJ_;

	public:
		FlxPathSimplifier_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.path.FlxPathSimplifier",66,60,ee,ec); }
		::String __ToString() const { return HX_("FlxPathSimplifier.",f1,43,ad,4c) + _hx_tag; }

		static ::flixel::path::FlxPathSimplifier CUSTOM( ::Dynamic method);
		static ::Dynamic CUSTOM_dyn();
		static ::flixel::path::FlxPathSimplifier LINE;
		static inline ::flixel::path::FlxPathSimplifier LINE_dyn() { return LINE; }
		static ::flixel::path::FlxPathSimplifier NONE;
		static inline ::flixel::path::FlxPathSimplifier NONE_dyn() { return NONE; }
		static ::flixel::path::FlxPathSimplifier RAY;
		static inline ::flixel::path::FlxPathSimplifier RAY_dyn() { return RAY; }
		static ::flixel::path::FlxPathSimplifier RAY_BOX(Float width,Float height);
		static ::Dynamic RAY_BOX_dyn();
		static ::flixel::path::FlxPathSimplifier RAY_STEP(Float resolution);
		static ::Dynamic RAY_STEP_dyn();
};

} // end namespace flixel
} // end namespace path

#endif /* INCLUDED_flixel_path_FlxPathSimplifier */ 
