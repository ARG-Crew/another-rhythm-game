// Generated by Haxe 4.3.3
#ifndef INCLUDED_haxe__CallStack_CallStack_Impl_
#define INCLUDED_haxe__CallStack_CallStack_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS1(haxe,StackItem)
HX_DECLARE_CLASS2(haxe,_CallStack,CallStack_Impl_)

namespace haxe{
namespace _CallStack{


class HXCPP_CLASS_ATTRIBUTES CallStack_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CallStack_Impl__obj OBJ_;
		CallStack_Impl__obj();

	public:
		enum { _hx_ClassId = 0x29a173d9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe._CallStack.CallStack_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe._CallStack.CallStack_Impl_"); }

		inline static ::hx::ObjectPtr< CallStack_Impl__obj > __new() {
			::hx::ObjectPtr< CallStack_Impl__obj > __this = new CallStack_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CallStack_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			CallStack_Impl__obj *__this = (CallStack_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CallStack_Impl__obj), false, "haxe._CallStack.CallStack_Impl_"));
			*(void **)__this = CallStack_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CallStack_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CallStack_Impl_",ca,79,56,8f); }

		static ::Array< ::Dynamic> callStack();
		static ::Dynamic callStack_dyn();

		static ::Array< ::Dynamic> exceptionStack(::hx::Null< bool >  fullStack);
		static ::Dynamic exceptionStack_dyn();

		static ::String toString(::Array< ::Dynamic> stack);
		static ::Dynamic toString_dyn();

		static ::Array< ::Dynamic> subtract(::Array< ::Dynamic> this1,::Array< ::Dynamic> stack);
		static ::Dynamic subtract_dyn();

		static bool equalItems( ::haxe::StackItem item1, ::haxe::StackItem item2);
		static ::Dynamic equalItems_dyn();

		static void itemToString( ::StringBuf b, ::haxe::StackItem s);
		static ::Dynamic itemToString_dyn();

};

} // end namespace haxe
} // end namespace _CallStack

#endif /* INCLUDED_haxe__CallStack_CallStack_Impl_ */ 
