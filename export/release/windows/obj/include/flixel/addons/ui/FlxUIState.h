// Generated by Haxe 4.2.0
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#define INCLUDED_flixel_addons_ui_FlxUIState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUI)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUICursor)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITooltip)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITooltipManager)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFireTongue)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,events,Event)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUIState_obj : public  ::flixel::addons::transition::FlxTransitionableState_obj
{
	public:
		typedef  ::flixel::addons::transition::FlxTransitionableState_obj super;
		typedef FlxUIState_obj OBJ_;
		FlxUIState_obj();

	public:
		enum { _hx_ClassId = 0x23a57bae };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUIState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUIState"); }
		static ::hx::ObjectPtr< FlxUIState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< FlxUIState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUIState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		 ::Dynamic getRequest_3ab6d711(::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);

		void getEvent_72fc5da6(::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);
		::String __ToString() const { return HX_("FlxUIState",0b,3d,c1,77); }

		static void __boot();
		static ::Dynamic static_tongue;
		bool destroyed;
		 ::flixel::addons::ui::FlxUICursor cursor;
		bool hideCursorOnSubstate;
		bool _cursorHidden;
		 ::flixel::addons::ui::FlxUITooltipManager tooltips;
		::String _xml_id;
		bool _makeCursor;
		 ::haxe::ds::StringMap _ui_vars;
		 ::flixel::addons::ui::FlxUI _ui;
		::Dynamic _tongue;
		bool reload_ui_on_resize;
		bool _reload;
		int _reload_countdown;
		 ::Dynamic getTextFallback;
		Dynamic getTextFallback_dyn() { return getTextFallback;}
		virtual void create();

		virtual void update(Float elapsed);

		void cleanup();
		::Dynamic cleanup_dyn();

		void _cleanupUIVars();
		::Dynamic _cleanupUIVars_dyn();

		void setUIVariable(::String key,::String value);
		::Dynamic setUIVariable_dyn();

		void resizeScreen(::hx::Null< Float >  width,::hx::Null< Float >  height);
		::Dynamic resizeScreen_dyn();

		void openSubState( ::flixel::FlxSubState SubState);

		void closeSubState();

		void onResize(int Width,int Height);

		void onShowTooltip( ::flixel::addons::ui::FlxUITooltip t);
		::Dynamic onShowTooltip_dyn();

		void destroy();

		void forceFocus(bool b,::Dynamic thing);
		::Dynamic forceFocus_dyn();

		void onCursorEvent(::String code,::Dynamic target);
		::Dynamic onCursorEvent_dyn();

		void getEvent(::String id, ::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);
		::Dynamic getEvent_dyn();

		 ::Dynamic getRequest(::String id, ::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);
		::Dynamic getRequest_dyn();

		::String getText(::String Flag,::String Context,::hx::Null< bool >  Safe);
		::Dynamic getText_dyn();

		 ::flixel::addons::ui::FlxUICursor createCursor();
		::Dynamic createCursor_dyn();

		 ::flixel::addons::ui::FlxUI createUI( ::Xml data,::Dynamic ptr, ::flixel::addons::ui::FlxUI superIndex_,::Dynamic tongue_,::String liveFilePath_);
		::Dynamic createUI_dyn();

		void loadUIFromData( ::Xml data);
		::Dynamic loadUIFromData_dyn();

		void reloadUI( ::openfl::events::Event e);
		::Dynamic reloadUI_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIState */ 
