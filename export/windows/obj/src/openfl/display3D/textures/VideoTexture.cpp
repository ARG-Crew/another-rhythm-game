// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_VideoTexture
#include <openfl/display3D/textures/VideoTexture.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_NetStream
#include <openfl/net/NetStream.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8bd748bb3c8a0c13_61_new,"openfl.display3D.textures.VideoTexture","new",0x6f95260f,"openfl.display3D.textures.VideoTexture.new","openfl/display3D/textures/VideoTexture.hx",61,0x1fe25aa2)
HX_LOCAL_STACK_FRAME(_hx_pos_8bd748bb3c8a0c13_92_attachNetStream,"openfl.display3D.textures.VideoTexture","attachNetStream",0x7bd9e067,"openfl.display3D.textures.VideoTexture.attachNetStream","openfl/display3D/textures/VideoTexture.hx",92,0x1fe25aa2)
HX_LOCAL_STACK_FRAME(_hx_pos_8bd748bb3c8a0c13_130_dispose,"openfl.display3D.textures.VideoTexture","dispose",0x317bd9ce,"openfl.display3D.textures.VideoTexture.dispose","openfl/display3D/textures/VideoTexture.hx",130,0x1fe25aa2)
HX_LOCAL_STACK_FRAME(_hx_pos_8bd748bb3c8a0c13_162___getTexture,"openfl.display3D.textures.VideoTexture","__getTexture",0x7429c676,"openfl.display3D.textures.VideoTexture.__getTexture","openfl/display3D/textures/VideoTexture.hx",162,0x1fe25aa2)
HX_LOCAL_STACK_FRAME(_hx_pos_8bd748bb3c8a0c13_166___textureReady,"openfl.display3D.textures.VideoTexture","__textureReady",0x47bb8b59,"openfl.display3D.textures.VideoTexture.__textureReady","openfl/display3D/textures/VideoTexture.hx",166,0x1fe25aa2)
namespace openfl{
namespace display3D{
namespace textures{

void VideoTexture_obj::__construct( ::openfl::display3D::Context3D context){
            	HX_STACKFRAME(&_hx_pos_8bd748bb3c8a0c13_61_new)
HXLINE(  62)		super::__construct(context);
HXLINE(  64)		this->_hx___textureTarget = this->_hx___context->gl->TEXTURE_2D;
            	}

Dynamic VideoTexture_obj::__CreateEmpty() { return new VideoTexture_obj; }

void *VideoTexture_obj::_hx_vtable = 0;

Dynamic VideoTexture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VideoTexture_obj > _hx_result = new VideoTexture_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool VideoTexture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3247d979) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x3247d979;
		}
	} else {
		return inClassId==(int)0x3f050bf7;
	}
}

void VideoTexture_obj::attachNetStream( ::openfl::net::NetStream netStream){
            	HX_STACKFRAME(&_hx_pos_8bd748bb3c8a0c13_92_attachNetStream)
HXLINE( 100)		this->_hx___cacheTime = ( (Float)(-1) );
HXLINE( 101)		this->_hx___netStream = netStream;
HXLINE( 103)		bool _hx_tmp = ::hx::IsNotNull( this->_hx___netStream );
            	}


HX_DEFINE_DYNAMIC_FUNC1(VideoTexture_obj,attachNetStream,(void))

void VideoTexture_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_8bd748bb3c8a0c13_130_dispose)
HXDLIN( 130)		this->super::dispose();
            	}


 ::lime::graphics::opengl::GLObject VideoTexture_obj::_hx___getTexture(){
            	HX_STACKFRAME(&_hx_pos_8bd748bb3c8a0c13_162___getTexture)
HXDLIN( 162)		return this->_hx___textureID;
            	}


void VideoTexture_obj::_hx___textureReady(){
            	HX_GC_STACKFRAME(&_hx_pos_8bd748bb3c8a0c13_166___textureReady)
HXLINE( 172)		 ::openfl::events::Event event = null();
HXLINE( 178)		event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("textureReady",88,4d,5a,df),null(),null());
HXLINE( 181)		this->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoTexture_obj,_hx___textureReady,(void))


::hx::ObjectPtr< VideoTexture_obj > VideoTexture_obj::__new( ::openfl::display3D::Context3D context) {
	::hx::ObjectPtr< VideoTexture_obj > __this = new VideoTexture_obj();
	__this->__construct(context);
	return __this;
}

::hx::ObjectPtr< VideoTexture_obj > VideoTexture_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context) {
	VideoTexture_obj *__this = (VideoTexture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VideoTexture_obj), true, "openfl.display3D.textures.VideoTexture"));
	*(void **)__this = VideoTexture_obj::_hx_vtable;
	__this->__construct(context);
	return __this;
}

VideoTexture_obj::VideoTexture_obj()
{
}

void VideoTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VideoTexture);
	HX_MARK_MEMBER_NAME(videoHeight,"videoHeight");
	HX_MARK_MEMBER_NAME(videoWidth,"videoWidth");
	HX_MARK_MEMBER_NAME(_hx___cacheTime,"__cacheTime");
	HX_MARK_MEMBER_NAME(_hx___netStream,"__netStream");
	 ::openfl::display3D::textures::TextureBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VideoTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(videoHeight,"videoHeight");
	HX_VISIT_MEMBER_NAME(videoWidth,"videoWidth");
	HX_VISIT_MEMBER_NAME(_hx___cacheTime,"__cacheTime");
	HX_VISIT_MEMBER_NAME(_hx___netStream,"__netStream");
	 ::openfl::display3D::textures::TextureBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VideoTexture_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"videoWidth") ) { return ::hx::Val( videoWidth ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoHeight") ) { return ::hx::Val( videoHeight ); }
		if (HX_FIELD_EQ(inName,"__cacheTime") ) { return ::hx::Val( _hx___cacheTime ); }
		if (HX_FIELD_EQ(inName,"__netStream") ) { return ::hx::Val( _hx___netStream ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__getTexture") ) { return ::hx::Val( _hx___getTexture_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__textureReady") ) { return ::hx::Val( _hx___textureReady_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"attachNetStream") ) { return ::hx::Val( attachNetStream_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VideoTexture_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"videoWidth") ) { videoWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoHeight") ) { videoHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cacheTime") ) { _hx___cacheTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__netStream") ) { _hx___netStream=inValue.Cast<  ::openfl::net::NetStream >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VideoTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("videoHeight",c2,9e,f3,7a));
	outFields->push(HX_("videoWidth",8b,f3,30,a6));
	outFields->push(HX_("__cacheTime",4f,24,de,76));
	outFields->push(HX_("__netStream",9d,c5,49,80));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VideoTexture_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(VideoTexture_obj,videoHeight),HX_("videoHeight",c2,9e,f3,7a)},
	{::hx::fsInt,(int)offsetof(VideoTexture_obj,videoWidth),HX_("videoWidth",8b,f3,30,a6)},
	{::hx::fsFloat,(int)offsetof(VideoTexture_obj,_hx___cacheTime),HX_("__cacheTime",4f,24,de,76)},
	{::hx::fsObject /*  ::openfl::net::NetStream */ ,(int)offsetof(VideoTexture_obj,_hx___netStream),HX_("__netStream",9d,c5,49,80)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VideoTexture_obj_sStaticStorageInfo = 0;
#endif

static ::String VideoTexture_obj_sMemberFields[] = {
	HX_("videoHeight",c2,9e,f3,7a),
	HX_("videoWidth",8b,f3,30,a6),
	HX_("__cacheTime",4f,24,de,76),
	HX_("__netStream",9d,c5,49,80),
	HX_("attachNetStream",38,40,d7,16),
	HX_("dispose",9f,80,4c,bb),
	HX_("__getTexture",05,ca,d5,26),
	HX_("__textureReady",a8,d0,1a,00),
	::String(null()) };

::hx::Class VideoTexture_obj::__mClass;

void VideoTexture_obj::__register()
{
	VideoTexture_obj _hx_dummy;
	VideoTexture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D.textures.VideoTexture",9d,72,4f,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VideoTexture_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VideoTexture_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VideoTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VideoTexture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
