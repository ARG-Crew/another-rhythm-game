// Generated by Haxe 4.2.0
#ifndef INCLUDED_lime_media_openal__ALBuffer_ALBuffer_Impl_
#define INCLUDED_lime_media_openal__ALBuffer_ALBuffer_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,media,openal,_ALBuffer,ALBuffer_Impl_)

namespace lime{
namespace media{
namespace openal{
namespace _ALBuffer{


class HXCPP_CLASS_ATTRIBUTES ALBuffer_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ALBuffer_Impl__obj OBJ_;
		ALBuffer_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0528d291 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.media.openal._ALBuffer.ALBuffer_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.media.openal._ALBuffer.ALBuffer_Impl_"); }

		inline static ::hx::ObjectPtr< ALBuffer_Impl__obj > __new() {
			::hx::ObjectPtr< ALBuffer_Impl__obj > __this = new ALBuffer_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ALBuffer_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			ALBuffer_Impl__obj *__this = (ALBuffer_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ALBuffer_Impl__obj), false, "lime.media.openal._ALBuffer.ALBuffer_Impl_"));
			*(void **)__this = ALBuffer_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ALBuffer_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ALBuffer_Impl_",2b,73,03,08); }

		static  ::Dynamic _new( ::Dynamic handle);
		static ::Dynamic _new_dyn();

};

} // end namespace lime
} // end namespace media
} // end namespace openal
} // end namespace _ALBuffer

#endif /* INCLUDED_lime_media_openal__ALBuffer_ALBuffer_Impl_ */ 
