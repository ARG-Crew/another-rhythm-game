// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__PixelSnapping_PixelSnapping_Impl_
#include <openfl/display/_PixelSnapping/PixelSnapping_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0f3cf3c73141d162_40_fromString,"openfl.display._PixelSnapping.PixelSnapping_Impl_","fromString",0xc7730368,"openfl.display._PixelSnapping.PixelSnapping_Impl_.fromString","openfl/display/PixelSnapping.hx",40,0x71d03308)
HX_LOCAL_STACK_FRAME(_hx_pos_0f3cf3c73141d162_51_toString,"openfl.display._PixelSnapping.PixelSnapping_Impl_","toString",0xd1c938f9,"openfl.display._PixelSnapping.PixelSnapping_Impl_.toString","openfl/display/PixelSnapping.hx",51,0x71d03308)
HX_LOCAL_STACK_FRAME(_hx_pos_0f3cf3c73141d162_19_boot,"openfl.display._PixelSnapping.PixelSnapping_Impl_","boot",0x4f8e81ff,"openfl.display._PixelSnapping.PixelSnapping_Impl_.boot","openfl/display/PixelSnapping.hx",19,0x71d03308)
HX_LOCAL_STACK_FRAME(_hx_pos_0f3cf3c73141d162_30_boot,"openfl.display._PixelSnapping.PixelSnapping_Impl_","boot",0x4f8e81ff,"openfl.display._PixelSnapping.PixelSnapping_Impl_.boot","openfl/display/PixelSnapping.hx",30,0x71d03308)
HX_LOCAL_STACK_FRAME(_hx_pos_0f3cf3c73141d162_36_boot,"openfl.display._PixelSnapping.PixelSnapping_Impl_","boot",0x4f8e81ff,"openfl.display._PixelSnapping.PixelSnapping_Impl_.boot","openfl/display/PixelSnapping.hx",36,0x71d03308)
namespace openfl{
namespace display{
namespace _PixelSnapping{

void PixelSnapping_Impl__obj::__construct() { }

Dynamic PixelSnapping_Impl__obj::__CreateEmpty() { return new PixelSnapping_Impl__obj; }

void *PixelSnapping_Impl__obj::_hx_vtable = 0;

Dynamic PixelSnapping_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PixelSnapping_Impl__obj > _hx_result = new PixelSnapping_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PixelSnapping_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1c0bf939;
}

 ::Dynamic PixelSnapping_Impl__obj::ALWAYS;

 ::Dynamic PixelSnapping_Impl__obj::AUTO;

 ::Dynamic PixelSnapping_Impl__obj::NEVER;

 ::Dynamic PixelSnapping_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_0f3cf3c73141d162_40_fromString)
HXDLIN(  40)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("always",cf,0e,d7,46)) ){
HXLINE(  42)			return 0;
HXDLIN(  42)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("auto",6f,df,76,40)) ){
HXLINE(  43)			return 1;
HXDLIN(  43)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("never",8c,3e,30,99)) ){
HXLINE(  44)			return 2;
HXDLIN(  44)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  45)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  40)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PixelSnapping_Impl__obj,fromString,return )

::String PixelSnapping_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0f3cf3c73141d162_51_toString)
HXDLIN(  51)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  53)			return HX_("always",cf,0e,d7,46);
HXDLIN(  53)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  54)			return HX_("auto",6f,df,76,40);
HXDLIN(  54)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  55)			return HX_("never",8c,3e,30,99);
HXDLIN(  55)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  56)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  51)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PixelSnapping_Impl__obj,toString,return )


PixelSnapping_Impl__obj::PixelSnapping_Impl__obj()
{
}

bool PixelSnapping_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PixelSnapping_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo PixelSnapping_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &PixelSnapping_Impl__obj::ALWAYS,HX_("ALWAYS",cf,ba,59,f9)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &PixelSnapping_Impl__obj::AUTO,HX_("AUTO",6f,a7,37,2b)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &PixelSnapping_Impl__obj::NEVER,HX_("NEVER",6c,76,1e,17)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void PixelSnapping_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PixelSnapping_Impl__obj::ALWAYS,"ALWAYS");
	HX_MARK_MEMBER_NAME(PixelSnapping_Impl__obj::AUTO,"AUTO");
	HX_MARK_MEMBER_NAME(PixelSnapping_Impl__obj::NEVER,"NEVER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PixelSnapping_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PixelSnapping_Impl__obj::ALWAYS,"ALWAYS");
	HX_VISIT_MEMBER_NAME(PixelSnapping_Impl__obj::AUTO,"AUTO");
	HX_VISIT_MEMBER_NAME(PixelSnapping_Impl__obj::NEVER,"NEVER");
};

#endif

::hx::Class PixelSnapping_Impl__obj::__mClass;

static ::String PixelSnapping_Impl__obj_sStaticFields[] = {
	HX_("ALWAYS",cf,ba,59,f9),
	HX_("AUTO",6f,a7,37,2b),
	HX_("NEVER",6c,76,1e,17),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void PixelSnapping_Impl__obj::__register()
{
	PixelSnapping_Impl__obj _hx_dummy;
	PixelSnapping_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._PixelSnapping.PixelSnapping_Impl_",c1,35,7c,a1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PixelSnapping_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PixelSnapping_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PixelSnapping_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PixelSnapping_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PixelSnapping_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PixelSnapping_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PixelSnapping_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PixelSnapping_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0f3cf3c73141d162_19_boot)
HXDLIN(  19)		ALWAYS = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f3cf3c73141d162_30_boot)
HXDLIN(  30)		AUTO = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f3cf3c73141d162_36_boot)
HXDLIN(  36)		NEVER = 2;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _PixelSnapping
