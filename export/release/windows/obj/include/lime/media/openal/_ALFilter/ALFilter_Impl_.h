// Generated by Haxe 4.2.0
#ifndef INCLUDED_lime_media_openal__ALFilter_ALFilter_Impl_
#define INCLUDED_lime_media_openal__ALFilter_ALFilter_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,media,openal,_ALFilter,ALFilter_Impl_)

namespace lime{
namespace media{
namespace openal{
namespace _ALFilter{


class HXCPP_CLASS_ATTRIBUTES ALFilter_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ALFilter_Impl__obj OBJ_;
		ALFilter_Impl__obj();

	public:
		enum { _hx_ClassId = 0x4b9e9ee1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.media.openal._ALFilter.ALFilter_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.media.openal._ALFilter.ALFilter_Impl_"); }

		inline static ::hx::ObjectPtr< ALFilter_Impl__obj > __new() {
			::hx::ObjectPtr< ALFilter_Impl__obj > __this = new ALFilter_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ALFilter_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			ALFilter_Impl__obj *__this = (ALFilter_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ALFilter_Impl__obj), false, "lime.media.openal._ALFilter.ALFilter_Impl_"));
			*(void **)__this = ALFilter_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ALFilter_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ALFilter_Impl_",e3,af,86,0f); }

		static  ::Dynamic _new( ::Dynamic handle);
		static ::Dynamic _new_dyn();

};

} // end namespace lime
} // end namespace media
} // end namespace openal
} // end namespace _ALFilter

#endif /* INCLUDED_lime_media_openal__ALFilter_ALFilter_Impl_ */ 
