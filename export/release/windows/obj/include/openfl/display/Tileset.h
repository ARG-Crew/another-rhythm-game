// Generated by Haxe 4.2.0
#ifndef INCLUDED_openfl_display_Tileset
#define INCLUDED_openfl_display_Tileset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Tileset)
HX_DECLARE_CLASS3(openfl,display,_Tileset,TileData)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Tileset_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Tileset_obj OBJ_;
		Tileset_obj();

	public:
		enum { _hx_ClassId = 0x2af078e2 };

		void __construct( ::openfl::display::BitmapData bitmapData,::Array< ::Dynamic> rects);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.Tileset")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.Tileset"); }
		static ::hx::ObjectPtr< Tileset_obj > __new( ::openfl::display::BitmapData bitmapData,::Array< ::Dynamic> rects);
		static ::hx::ObjectPtr< Tileset_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::BitmapData bitmapData,::Array< ::Dynamic> rects);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tileset_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tileset",14,a9,e4,12); }

		 ::openfl::_Vector::FloatVector rectData;
		 ::openfl::display::BitmapData _hx___bitmapData;
		::Array< ::Dynamic> _hx___data;
		int addRect( ::openfl::geom::Rectangle rect);
		::Dynamic addRect_dyn();

		 ::openfl::display::Tileset clone();
		::Dynamic clone_dyn();

		bool hasRect( ::openfl::geom::Rectangle rect);
		::Dynamic hasRect_dyn();

		 ::openfl::geom::Rectangle getRect(int id);
		::Dynamic getRect_dyn();

		 ::Dynamic getRectID( ::openfl::geom::Rectangle rect);
		::Dynamic getRectID_dyn();

		 ::openfl::display::BitmapData get_bitmapData();
		::Dynamic get_bitmapData_dyn();

		 ::openfl::display::BitmapData set_bitmapData( ::openfl::display::BitmapData value);
		::Dynamic set_bitmapData_dyn();

		int get_numRects();
		::Dynamic get_numRects_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Tileset */ 
