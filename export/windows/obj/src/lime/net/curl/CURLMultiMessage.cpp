// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_lime_net_curl_CURL
#include <lime/net/curl/CURL.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURLMultiMessage
#include <lime/net/curl/CURLMultiMessage.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f8b11b28b57de893_10_new,"lime.net.curl.CURLMultiMessage","new",0xa1daa5a4,"lime.net.curl.CURLMultiMessage.new","lime/net/curl/CURLMultiMessage.hx",10,0x497c096d)
namespace lime{
namespace net{
namespace curl{

void CURLMultiMessage_obj::__construct( ::lime::net::curl::CURL curl,int result){
            	HX_STACKFRAME(&_hx_pos_f8b11b28b57de893_10_new)
HXLINE(  11)		this->curl = curl;
HXLINE(  12)		this->result = result;
            	}

Dynamic CURLMultiMessage_obj::__CreateEmpty() { return new CURLMultiMessage_obj; }

void *CURLMultiMessage_obj::_hx_vtable = 0;

Dynamic CURLMultiMessage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CURLMultiMessage_obj > _hx_result = new CURLMultiMessage_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CURLMultiMessage_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x26eca06e;
}


::hx::ObjectPtr< CURLMultiMessage_obj > CURLMultiMessage_obj::__new( ::lime::net::curl::CURL curl,int result) {
	::hx::ObjectPtr< CURLMultiMessage_obj > __this = new CURLMultiMessage_obj();
	__this->__construct(curl,result);
	return __this;
}

::hx::ObjectPtr< CURLMultiMessage_obj > CURLMultiMessage_obj::__alloc(::hx::Ctx *_hx_ctx, ::lime::net::curl::CURL curl,int result) {
	CURLMultiMessage_obj *__this = (CURLMultiMessage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CURLMultiMessage_obj), true, "lime.net.curl.CURLMultiMessage"));
	*(void **)__this = CURLMultiMessage_obj::_hx_vtable;
	__this->__construct(curl,result);
	return __this;
}

CURLMultiMessage_obj::CURLMultiMessage_obj()
{
}

void CURLMultiMessage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CURLMultiMessage);
	HX_MARK_MEMBER_NAME(curl,"curl");
	HX_MARK_MEMBER_NAME(result,"result");
	HX_MARK_END_CLASS();
}

void CURLMultiMessage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curl,"curl");
	HX_VISIT_MEMBER_NAME(result,"result");
}

::hx::Val CURLMultiMessage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"curl") ) { return ::hx::Val( curl ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { return ::hx::Val( result ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CURLMultiMessage_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"curl") ) { curl=inValue.Cast<  ::lime::net::curl::CURL >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { result=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CURLMultiMessage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curl",ec,4a,c9,41));
	outFields->push(HX_("result",dd,68,84,08));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CURLMultiMessage_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::lime::net::curl::CURL */ ,(int)offsetof(CURLMultiMessage_obj,curl),HX_("curl",ec,4a,c9,41)},
	{::hx::fsInt,(int)offsetof(CURLMultiMessage_obj,result),HX_("result",dd,68,84,08)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CURLMultiMessage_obj_sStaticStorageInfo = 0;
#endif

static ::String CURLMultiMessage_obj_sMemberFields[] = {
	HX_("curl",ec,4a,c9,41),
	HX_("result",dd,68,84,08),
	::String(null()) };

::hx::Class CURLMultiMessage_obj::__mClass;

void CURLMultiMessage_obj::__register()
{
	CURLMultiMessage_obj _hx_dummy;
	CURLMultiMessage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.net.curl.CURLMultiMessage",b2,43,ee,9d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CURLMultiMessage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CURLMultiMessage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CURLMultiMessage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CURLMultiMessage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace net
} // end namespace curl
