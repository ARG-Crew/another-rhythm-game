// Generated by Haxe 4.2.0
#ifndef INCLUDED_Settings
#define INCLUDED_Settings

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Settings)



class HXCPP_CLASS_ATTRIBUTES Settings_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Settings_obj OBJ_;
		Settings_obj();

	public:
		enum { _hx_ClassId = 0x17621127 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Settings")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Settings"); }

		inline static ::hx::ObjectPtr< Settings_obj > __new() {
			::hx::ObjectPtr< Settings_obj > __this = new Settings_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Settings_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Settings_obj *__this = (Settings_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Settings_obj), false, "Settings"));
			*(void **)__this = Settings_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Settings_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Settings",03,39,ef,64); }

		static void __boot();
		static ::String skin;
};


#endif /* INCLUDED_Settings */ 
