/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider.<InitAsync>d__10$$SetStateMachine
void Dino_BusSand_Sdk_UnityIapProvider__InitAsync_d__10__SetStateMachine (Dino_BusSand_Sdk_UnityIapProvider__InitAsync_d__10_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider.<InitAsync>d__10$$SetStateMachine
   void Dino_BusSand_Sdk_UnityIapProvider__InitAsync_d__10__SetStateMachine
   (Dino_BusSand_Sdk_UnityIapProvider__InitAsync_d__10_o __this,
   System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method); */

void Dino_BusSand_Sdk_UnityIapProvider__InitAsync_d__10__SetStateMachine_2440160
               (long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)(param_1 + 0x10);
  if (param_2 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cbe5c8,0,0);
    uVar2 = thunk_FUN_0216e89c();
    uVar3 = thunk_FUN_021985a8(PTR_DAT_04cc3be0);
    System_ArgumentNullException___ctor_47afb54(uVar2,uVar3,0);
    uVar3 = thunk_FUN_021985a8(PTR_DAT_04d0e5b0);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar2,uVar3);
  }
  if (*plVar1 == 0) {
    *plVar1 = param_2;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)plVar1 >> 0xc & 0x3f),
                   ((ulong)plVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  uVar2 = thunk_FUN_021985a8(PTR_DAT_04d0e5b8,param_2,0);
  uVar2 = System_Environment__GetResourceString_486fa00(uVar2,0);
  thunk_FUN_021985a8(PTR_DAT_04caa348);
  uVar3 = thunk_FUN_0216e89c();
  System_InvalidOperationException___ctor_482ff30(uVar3,uVar2,0);
  uVar2 = thunk_FUN_021985a8(PTR_DAT_04d0e5b0);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar3,uVar2);
}

