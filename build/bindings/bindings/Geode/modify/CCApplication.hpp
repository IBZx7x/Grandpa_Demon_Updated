#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedApplication
		#define GEODE_STATICS_sharedApplication
		GEODE_AS_STATIC_FUNCTION(sharedApplication) 
	#endif

	#ifndef GEODE_STATICS_run
		#define GEODE_STATICS_run
		GEODE_AS_STATIC_FUNCTION(run) 
	#endif

	#ifndef GEODE_STATICS_setAnimationInterval
		#define GEODE_STATICS_setAnimationInterval
		GEODE_AS_STATIC_FUNCTION(setAnimationInterval) 
	#endif

	#ifndef GEODE_STATICS_getCurrentLanguage
		#define GEODE_STATICS_getCurrentLanguage
		GEODE_AS_STATIC_FUNCTION(getCurrentLanguage) 
	#endif

	#ifndef GEODE_STATICS_getTargetPlatform
		#define GEODE_STATICS_getTargetPlatform
		GEODE_AS_STATIC_FUNCTION(getTargetPlatform) 
	#endif

	#ifndef GEODE_STATICS_openURL
		#define GEODE_STATICS_openURL
		GEODE_AS_STATIC_FUNCTION(openURL) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedApplication
		#define GEODE_CONCEPT_CHECK_sharedApplication
		GEODE_CONCEPT_FUNCTION_CHECK(sharedApplication) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_run
		#define GEODE_CONCEPT_CHECK_run
		GEODE_CONCEPT_FUNCTION_CHECK(run) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAnimationInterval
		#define GEODE_CONCEPT_CHECK_setAnimationInterval
		GEODE_CONCEPT_FUNCTION_CHECK(setAnimationInterval) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCurrentLanguage
		#define GEODE_CONCEPT_CHECK_getCurrentLanguage
		GEODE_CONCEPT_FUNCTION_CHECK(getCurrentLanguage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetPlatform
		#define GEODE_CONCEPT_CHECK_getTargetPlatform
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetPlatform) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openURL
		#define GEODE_CONCEPT_CHECK_openURL
		GEODE_CONCEPT_FUNCTION_CHECK(openURL) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCApplication> : ModifyBase<ModifyDerive<Der, cocos2d::CCApplication>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCApplication>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCApplication>>::ModifyBase;
		using Base = cocos2d::CCApplication;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getNonVirtual(Resolve<>::func(&cocos2d::CCApplication::sharedApplication)), Default, cocos2d::CCApplication, sharedApplication, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(reinterpret_cast<uintptr_t>(GetProcAddress(GetModuleHandleA("libcocos2d.dll"), "??1CCApplication@cocos2d@@UEAA@XZ")), Thiscall, cocos2d::CCApplication)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCApplication::run)), Thiscall, cocos2d::CCApplication, run, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<double>::func(&cocos2d::CCApplication::setAnimationInterval)), Thiscall, cocos2d::CCApplication, setAnimationInterval, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCApplication::getCurrentLanguage)), Thiscall, cocos2d::CCApplication, getCurrentLanguage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<>::func(&cocos2d::CCApplication::getTargetPlatform)), Thiscall, cocos2d::CCApplication, getTargetPlatform, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(addresser::getVirtual(Resolve<char const*>::func(&cocos2d::CCApplication::openURL)), Thiscall, cocos2d::CCApplication, openURL, char const*)
		}
	};
}
