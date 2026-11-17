/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$OnInitializeFailed
void Dino_BusSand_Sdk_UnityIapProvider__OnInitializeFailed (Dino_BusSand_Sdk_UnityIapProvider_o* __this, int32_t error, System_String_o* message, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$OnInitializeFailed
   void Dino_BusSand_Sdk_UnityIapProvider__OnInitializeFailed (Dino_BusSand_Sdk_UnityIapProvider_o*
   __this, int32_t error, System_String_o* message, const MethodInfo* method); */

void Dino_BusSand_Sdk_UnityIapProvider__OnInitializeFailed_243f128
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar4 = PTR_DAT_04cbf708;
  puVar3 = PTR_DAT_04cbf700;
  puVar2 = PTR_DAT_04cab270;
  puVar1 = PTR_DAT_04ca9af8;
  if ((bRam0000000004f9cc95 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbf700);
    FUN_02132f7c(PTR_DAT_04cab270);
    FUN_02132f7c(PTR_DAT_04cbf708);
    bRam0000000004f9cc95 = 1;
  }
  uStack_68 = *(undefined8 *)puVar3;
  *(undefined1 *)(param_1 + 0x31) = 1;
  uStack_60 = 0xffffffffffffffff;
  uStack_58 = param_2;
  uVar5 = System_Enum__ToString_4863070(&uStack_68,0);
  uVar5 = System_String__Concat_46d30e8(*(undefined8 *)puVar4,uVar5,*(undefined8 *)puVar2,param_3,0)
  ;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  UnityEngine_Debug__LogWarning_4357a30(uVar5,0);
  return;
}

