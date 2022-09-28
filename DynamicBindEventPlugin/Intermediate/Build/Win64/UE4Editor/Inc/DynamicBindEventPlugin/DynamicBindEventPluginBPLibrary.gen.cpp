// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicBindEventPlugin/Public/DynamicBindEventPluginBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicBindEventPluginBPLibrary() {}
// Cross Module References
	DYNAMICBINDEVENTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_DynamicBindEventPlugin_BindActionEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DynamicBindEventPlugin();
	DYNAMICBINDEVENTPLUGIN_API UClass* Z_Construct_UClass_UDynamicBindEventPluginBPLibrary_NoRegister();
	DYNAMICBINDEVENTPLUGIN_API UClass* Z_Construct_UClass_UDynamicBindEventPluginBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DYNAMICBINDEVENTPLUGIN_API UClass* Z_Construct_UClass_USupportBindObject_NoRegister();
	DYNAMICBINDEVENTPLUGIN_API UClass* Z_Construct_UClass_USupportBindObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DynamicBindEventPlugin_BindActionEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DynamicBindEventPlugin_BindActionEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "ModuleRelativePath", "Public/DynamicBindEventPluginBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DynamicBindEventPlugin_BindActionEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DynamicBindEventPlugin, nullptr, "BindActionEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DynamicBindEventPlugin_BindActionEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DynamicBindEventPlugin_BindActionEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DynamicBindEventPlugin_BindActionEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DynamicBindEventPlugin_BindActionEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UDynamicBindEventPluginBPLibrary::execReturnBinder)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USupportBindObject**)Z_Param__Result=UDynamicBindEventPluginBPLibrary::ReturnBinder(Z_Param_Object);
		P_NATIVE_END;
	}
	void UDynamicBindEventPluginBPLibrary::StaticRegisterNativesUDynamicBindEventPluginBPLibrary()
	{
		UClass* Class = UDynamicBindEventPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReturnBinder", &UDynamicBindEventPluginBPLibrary::execReturnBinder },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDynamicBindEventPluginBPLibrary_ReturnBinder_Statics
	{
		struct DynamicBindEventPluginBPLibrary_eventReturnBinder_Parms
		{
			UObject* Object;
			USupportBindObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicBindEventPluginBPLibrary_ReturnBinder_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicBindEventPluginBPLibrary_eventReturnBinder_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicBindEventPluginBPLibrary_ReturnBinder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicBindEventPluginBPLibrary_eventReturnBinder_Parms, ReturnValue), Z_Construct_UClass_USupportBindObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicBindEventPluginBPLibrary_ReturnBinder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicBindEventPluginBPLibrary_ReturnBinder_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicBindEventPluginBPLibrary_ReturnBinder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicBindEventPluginBPLibrary_ReturnBinder_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicBindEventPluginTesting" },
		{ "DisplayName", "ReturnBinder" },
		{ "Keywords", "DynamicBindEventPlugin sample test testing" },
		{ "ModuleRelativePath", "Public/DynamicBindEventPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicBindEventPluginBPLibrary_ReturnBinder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicBindEventPluginBPLibrary, nullptr, "ReturnBinder", nullptr, nullptr, sizeof(DynamicBindEventPluginBPLibrary_eventReturnBinder_Parms), Z_Construct_UFunction_UDynamicBindEventPluginBPLibrary_ReturnBinder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicBindEventPluginBPLibrary_ReturnBinder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicBindEventPluginBPLibrary_ReturnBinder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicBindEventPluginBPLibrary_ReturnBinder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicBindEventPluginBPLibrary_ReturnBinder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicBindEventPluginBPLibrary_ReturnBinder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDynamicBindEventPluginBPLibrary_NoRegister()
	{
		return UDynamicBindEventPluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicBindEventPluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicBindEventPluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicBindEventPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDynamicBindEventPluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicBindEventPluginBPLibrary_ReturnBinder, "ReturnBinder" }, // 1364355620
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicBindEventPluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DynamicBindEventPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/DynamicBindEventPluginBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicBindEventPluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicBindEventPluginBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDynamicBindEventPluginBPLibrary_Statics::ClassParams = {
		&UDynamicBindEventPluginBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicBindEventPluginBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicBindEventPluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicBindEventPluginBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDynamicBindEventPluginBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDynamicBindEventPluginBPLibrary, 1935271373);
	template<> DYNAMICBINDEVENTPLUGIN_API UClass* StaticClass<UDynamicBindEventPluginBPLibrary>()
	{
		return UDynamicBindEventPluginBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDynamicBindEventPluginBPLibrary(Z_Construct_UClass_UDynamicBindEventPluginBPLibrary, &UDynamicBindEventPluginBPLibrary::StaticClass, TEXT("/Script/DynamicBindEventPlugin"), TEXT("UDynamicBindEventPluginBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicBindEventPluginBPLibrary);
	DEFINE_FUNCTION(USupportBindObject::execOnInputAction)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInputAction(FBindActionEvent(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USupportBindObject::execAddAction)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FByteProperty,Z_Param_EventType);
		P_GET_UBOOL(Z_Param_bConsume);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAction(Z_Param_Name,EInputEvent(Z_Param_EventType),Z_Param_bConsume,FBindActionEvent(Z_Param_Callback),Z_Param_Actor);
		P_NATIVE_END;
	}
	void USupportBindObject::StaticRegisterNativesUSupportBindObject()
	{
		UClass* Class = USupportBindObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAction", &USupportBindObject::execAddAction },
			{ "OnInputAction", &USupportBindObject::execOnInputAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USupportBindObject_AddAction_Statics
	{
		struct SupportBindObject_eventAddAction_Parms
		{
			FName Name;
			TEnumAsByte<EInputEvent> EventType;
			bool bConsume;
			FScriptDelegate Callback;
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType;
		static void NewProp_bConsume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConsume;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USupportBindObject_AddAction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SupportBindObject_eventAddAction_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USupportBindObject_AddAction_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SupportBindObject_eventAddAction_Parms, EventType), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USupportBindObject_AddAction_Statics::NewProp_bConsume_SetBit(void* Obj)
	{
		((SupportBindObject_eventAddAction_Parms*)Obj)->bConsume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USupportBindObject_AddAction_Statics::NewProp_bConsume = { "bConsume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SupportBindObject_eventAddAction_Parms), &Z_Construct_UFunction_USupportBindObject_AddAction_Statics::NewProp_bConsume_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USupportBindObject_AddAction_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SupportBindObject_eventAddAction_Parms, Callback), Z_Construct_UDelegateFunction_DynamicBindEventPlugin_BindActionEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USupportBindObject_AddAction_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SupportBindObject_eventAddAction_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USupportBindObject_AddAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USupportBindObject_AddAction_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USupportBindObject_AddAction_Statics::NewProp_EventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USupportBindObject_AddAction_Statics::NewProp_bConsume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USupportBindObject_AddAction_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USupportBindObject_AddAction_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USupportBindObject_AddAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicBindEventPluginTesting" },
		{ "DisplayName", "AddAction" },
		{ "Keywords", "DynamicBindEventPlugin sample test testing" },
		{ "ModuleRelativePath", "Public/DynamicBindEventPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USupportBindObject_AddAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USupportBindObject, nullptr, "AddAction", nullptr, nullptr, sizeof(SupportBindObject_eventAddAction_Parms), Z_Construct_UFunction_USupportBindObject_AddAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USupportBindObject_AddAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USupportBindObject_AddAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USupportBindObject_AddAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USupportBindObject_AddAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USupportBindObject_AddAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USupportBindObject_OnInputAction_Statics
	{
		struct SupportBindObject_eventOnInputAction_Parms
		{
			FScriptDelegate Callback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USupportBindObject_OnInputAction_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SupportBindObject_eventOnInputAction_Parms, Callback), Z_Construct_UDelegateFunction_DynamicBindEventPlugin_BindActionEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USupportBindObject_OnInputAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USupportBindObject_OnInputAction_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USupportBindObject_OnInputAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DynamicBindEventPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USupportBindObject_OnInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USupportBindObject, nullptr, "OnInputAction", nullptr, nullptr, sizeof(SupportBindObject_eventOnInputAction_Parms), Z_Construct_UFunction_USupportBindObject_OnInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USupportBindObject_OnInputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USupportBindObject_OnInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USupportBindObject_OnInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USupportBindObject_OnInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USupportBindObject_OnInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USupportBindObject_NoRegister()
	{
		return USupportBindObject::StaticClass();
	}
	struct Z_Construct_UClass_USupportBindObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USupportBindObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicBindEventPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USupportBindObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USupportBindObject_AddAction, "AddAction" }, // 3884785573
		{ &Z_Construct_UFunction_USupportBindObject_OnInputAction, "OnInputAction" }, // 1549194641
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USupportBindObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DynamicBindEventPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/DynamicBindEventPluginBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USupportBindObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USupportBindObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USupportBindObject_Statics::ClassParams = {
		&USupportBindObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USupportBindObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USupportBindObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USupportBindObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USupportBindObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USupportBindObject, 3680097482);
	template<> DYNAMICBINDEVENTPLUGIN_API UClass* StaticClass<USupportBindObject>()
	{
		return USupportBindObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USupportBindObject(Z_Construct_UClass_USupportBindObject, &USupportBindObject::StaticClass, TEXT("/Script/DynamicBindEventPlugin"), TEXT("USupportBindObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USupportBindObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
