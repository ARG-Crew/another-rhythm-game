// Generated by Haxe 4.2.0
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalHandler
#define INCLUDED_flixel_util__FlxSignal_FlxSignalHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignalHandler)

namespace flixel{
namespace util{
namespace _FlxSignal{


class HXCPP_CLASS_ATTRIBUTES FlxSignalHandler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxSignalHandler_obj OBJ_;
		FlxSignalHandler_obj();

	public:
		enum { _hx_ClassId = 0x17dd82ad };

		void __construct( ::Dynamic listener,bool dispatchOnce);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.util._FlxSignal.FlxSignalHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.util._FlxSignal.FlxSignalHandler"); }
		static ::hx::ObjectPtr< FlxSignalHandler_obj > __new( ::Dynamic listener,bool dispatchOnce);
		static ::hx::ObjectPtr< FlxSignalHandler_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic listener,bool dispatchOnce);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxSignalHandler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxSignalHandler",90,ce,e2,c2); }

		 ::Dynamic listener;
		bool dispatchOnce;
		void destroy();
		::Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal

#endif /* INCLUDED_flixel_util__FlxSignal_FlxSignalHandler */ 
