/* IL2CPP: Dino.BusSand.Sdk.SdkBootstrap.<>c__DisplayClass7_0$$<Install>b__3
void Dino_BusSand_Sdk_SdkBootstrap___c__DisplayClass7_0___Install_b__3 (Dino_BusSand_Sdk_SdkBootstrap___c__DisplayClass7_0_o* __this, MaxCmpError_o* error, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SdkBootstrap.<>c__DisplayClass7_0$$<Install>b__3
   void Dino_BusSand_Sdk_SdkBootstrap___c__DisplayClass7_0___Install_b__3
   (Dino_BusSand_Sdk_SdkBootstrap___c__DisplayClass7_0_o* __this, MaxCmpError_o* error, const
   MethodInfo* method); */

void Dino_BusSand_Sdk_SdkBootstrap___c__DisplayClass7_0___Install_b__3_243c914
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000004f9cc7d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbf5b0);
    bRam0000000004f9cc7d = 1;
  }
  puVar1 = PTR_DAT_04ca9af8;
  if (param_2 != 0) {
    uVar2 = System_String__Concat_46c82e0
                      (*(undefined8 *)PTR_DAT_04cbf5b0,*(undefined8 *)(param_2 + 0x18),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    UnityEngine_Debug__LogWarning_4357a30(uVar2,0);
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0253c9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    return;
  }
  return;
}

