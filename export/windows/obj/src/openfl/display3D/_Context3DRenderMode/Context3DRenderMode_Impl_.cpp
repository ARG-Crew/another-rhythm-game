// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DRenderMode_Context3DRenderMode_Impl_
#include <openfl/display3D/_Context3DRenderMode/Context3DRenderMode_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_dd05e46d4e88f0f8_34_fromString,"openfl.display3D._Context3DRenderMode.Context3DRenderMode_Impl_","fromString",0x77bca1ab,"openfl.display3D._Context3DRenderMode.Context3DRenderMode_Impl_.fromString","openfl/display3D/Context3DRenderMode.hx",34,0xec19e320)
HX_LOCAL_STACK_FRAME(_hx_pos_dd05e46d4e88f0f8_44_toString,"openfl.display3D._Context3DRenderMode.Context3DRenderMode_Impl_","toString",0xace3b07c,"openfl.display3D._Context3DRenderMode.Context3DRenderMode_Impl_.toString","openfl/display3D/Context3DRenderMode.hx",44,0xec19e320)
HX_LOCAL_STACK_FRAME(_hx_pos_dd05e46d4e88f0f8_23_boot,"openfl.display3D._Context3DRenderMode.Context3DRenderMode_Impl_","boot",0x14103c02,"openfl.display3D._Context3DRenderMode.Context3DRenderMode_Impl_.boot","openfl/display3D/Context3DRenderMode.hx",23,0xec19e320)
HX_LOCAL_STACK_FRAME(_hx_pos_dd05e46d4e88f0f8_30_boot,"openfl.display3D._Context3DRenderMode.Context3DRenderMode_Impl_","boot",0x14103c02,"openfl.display3D._Context3DRenderMode.Context3DRenderMode_Impl_.boot","openfl/display3D/Context3DRenderMode.hx",30,0xec19e320)
namespace openfl{
namespace display3D{
namespace _Context3DRenderMode{

void Context3DRenderMode_Impl__obj::__construct() { }

Dynamic Context3DRenderMode_Impl__obj::__CreateEmpty() { return new Context3DRenderMode_Impl__obj; }

void *Context3DRenderMode_Impl__obj::_hx_vtable = 0;

Dynamic Context3DRenderMode_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DRenderMode_Impl__obj > _hx_result = new Context3DRenderMode_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DRenderMode_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c5a8b5c;
}

 ::Dynamic Context3DRenderMode_Impl__obj::AUTO;

 ::Dynamic Context3DRenderMode_Impl__obj::SOFTWARE;

 ::Dynamic Context3DRenderMode_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_dd05e46d4e88f0f8_34_fromString)
HXDLIN(  34)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("auto",6f,df,76,40)) ){
HXLINE(  36)			return 0;
HXDLIN(  36)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("software",27,3c,4c,9b)) ){
HXLINE(  37)			return 1;
HXDLIN(  37)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  38)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  34)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DRenderMode_Impl__obj,fromString,return )

::String Context3DRenderMode_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_dd05e46d4e88f0f8_44_toString)
HXDLIN(  44)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  46)			return HX_("auto",6f,df,76,40);
HXDLIN(  46)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  47)			return HX_("software",27,3c,4c,9b);
HXDLIN(  47)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  48)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  44)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DRenderMode_Impl__obj,toString,return )


Context3DRenderMode_Impl__obj::Context3DRenderMode_Impl__obj()
{
}

bool Context3DRenderMode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *Context3DRenderMode_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Context3DRenderMode_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DRenderMode_Impl__obj::AUTO,HX_("AUTO",6f,a7,37,2b)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DRenderMode_Impl__obj::SOFTWARE,HX_("SOFTWARE",27,cc,d1,f4)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Context3DRenderMode_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DRenderMode_Impl__obj::AUTO,"AUTO");
	HX_MARK_MEMBER_NAME(Context3DRenderMode_Impl__obj::SOFTWARE,"SOFTWARE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DRenderMode_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DRenderMode_Impl__obj::AUTO,"AUTO");
	HX_VISIT_MEMBER_NAME(Context3DRenderMode_Impl__obj::SOFTWARE,"SOFTWARE");
};

#endif

::hx::Class Context3DRenderMode_Impl__obj::__mClass;

static ::String Context3DRenderMode_Impl__obj_sStaticFields[] = {
	HX_("AUTO",6f,a7,37,2b),
	HX_("SOFTWARE",27,cc,d1,f4),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Context3DRenderMode_Impl__obj::__register()
{
	Context3DRenderMode_Impl__obj _hx_dummy;
	Context3DRenderMode_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D._Context3DRenderMode.Context3DRenderMode_Impl_",9e,ba,ba,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DRenderMode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DRenderMode_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DRenderMode_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DRenderMode_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DRenderMode_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DRenderMode_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DRenderMode_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DRenderMode_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_dd05e46d4e88f0f8_23_boot)
HXDLIN(  23)		AUTO = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dd05e46d4e88f0f8_30_boot)
HXDLIN(  30)		SOFTWARE = 1;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DRenderMode
