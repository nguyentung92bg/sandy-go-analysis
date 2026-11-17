/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider$$WatchLostClose<__Il2CppFullySharedGenericType>
Cysharp_Threading_Tasks_UniTaskVoid_o Dino_BusSand_Sdk_DinoAdProvider__WatchLostClose___Il2CppFullySharedGenericType_ (Cysharp_Threading_Tasks_UniTaskCompletionSource_T__o* answer, Dino_BusSand_Sdk_DinoAdProvider_Show_o* show, System_Func_T__o* lost, System_Func_bool__o* displayed, System_Action_o* reload, System_String_o* what, const MethodInfo_2726BA8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider$$WatchLostClose<__Il2CppFullySharedGenericType>
   Cysharp_Threading_Tasks_UniTaskVoid_o
   Dino_BusSand_Sdk_DinoAdProvider__WatchLostClose___Il2CppFullySharedGenericType_
   (Cysharp_Threading_Tasks_UniTaskCompletionSource_T__o* answer,
   Dino_BusSand_Sdk_DinoAdProvider_Show_o* show, System_Func_T__o* lost, System_Func_bool__o*
   displayed, System_Action_o* reload, System_String_o* what, const MethodInfo_2726BA8* method); */

undefined8
Dino_BusSand_Sdk_DinoAdProvider__WatchLostClose___Il2CppFullySharedGenericType__2726ba8
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(param_7 + 0x38);
  if (plVar3 == (long *)0x0) {
    FUN_0216b4cc(param_7);
    plVar3 = *(long **)(param_7 + 0x38);
  }
  lVar6 = *plVar3;
  puVar4 = auStack_70 + -((ulong)*(uint *)(lVar6 + 0xfc) + 0xf & 0x1fffffff0);
  func_0x049b52e0(puVar4,0);
  FUN_01e830f0(puVar4,*(long *)(lVar6 + 0x80) + 0x20,0);
  FUN_01e830f0(puVar4,*(long *)(**(long **)(param_7 + 0x38) + 0x80) + 0x40,param_1);
  FUN_01e830f0(puVar4,*(long *)(**(long **)(param_7 + 0x38) + 0x80) + 0x80,param_2);
  FUN_01e830f0(puVar4,*(long *)(**(long **)(param_7 + 0x38) + 0x80) + 0xa0,param_3);
  FUN_01e830f0(puVar4,*(long *)(**(long **)(param_7 + 0x38) + 0x80) + 0x60,param_4);
  FUN_01e830f0(puVar4,*(long *)(**(long **)(param_7 + 0x38) + 0x80) + 0xe0,param_5);
  FUN_01e830f0(puVar4,*(long *)(**(long **)(param_7 + 0x38) + 0x80) + 0xc0,param_6);
  FUN_01e833c8(puVar4,*(undefined8 *)(**(long **)(param_7 + 0x38) + 0x80),0xffffffff);
  pcVar5 = *(code **)(*(long **)(param_7 + 0x38))[3];
  uVar2 = thunk_FUN_02190304(puVar4,*(long *)(**(long **)(param_7 + 0x38) + 0x80) + 0x20);
  (*pcVar5)(uVar2,puVar4,*(undefined8 *)(*(long *)(param_7 + 0x38) + 0x18));
  thunk_FUN_02190304(puVar4,*(long *)(**(long **)(param_7 + 0x38) + 0x80) + 0x20);
  if (*(long *)(lVar1 + 0x28) == lStack_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

