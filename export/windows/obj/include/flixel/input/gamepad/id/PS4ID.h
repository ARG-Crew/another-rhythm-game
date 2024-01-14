// Generated by Haxe 4.3.3
#ifndef INCLUDED_flixel_input_gamepad_id_PS4ID
#define INCLUDED_flixel_input_gamepad_id_PS4ID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS4(flixel,input,gamepad,id,PS4ID)

namespace flixel{
namespace input{
namespace gamepad{
namespace id{


class HXCPP_CLASS_ATTRIBUTES PS4ID_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PS4ID_obj OBJ_;
		PS4ID_obj();

	public:
		enum { _hx_ClassId = 0x126f915e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id.PS4ID")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.input.gamepad.id.PS4ID"); }

		inline static ::hx::ObjectPtr< PS4ID_obj > __new() {
			::hx::ObjectPtr< PS4ID_obj > __this = new PS4ID_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PS4ID_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PS4ID_obj *__this = (PS4ID_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PS4ID_obj), false, "flixel.input.gamepad.id.PS4ID"));
			*(void **)__this = PS4ID_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PS4ID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PS4ID",ec,d2,12,47); }

		static void __boot();
		static int X;
		static int CIRCLE;
		static int SQUARE;
		static int TRIANGLE;
		static int PS;
		static int OPTIONS;
		static int LEFT_STICK_CLICK;
		static int RIGHT_STICK_CLICK;
		static int L1;
		static int R1;
		static int SHARE;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick LEFT_ANALOG_STICK;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick RIGHT_ANALOG_STICK;
		static int TOUCHPAD_CLICK;
		static int L2;
		static int R2;
		static int DPAD_UP;
		static int DPAD_DOWN;
		static int DPAD_LEFT;
		static int DPAD_RIGHT;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id

#endif /* INCLUDED_flixel_input_gamepad_id_PS4ID */ 
