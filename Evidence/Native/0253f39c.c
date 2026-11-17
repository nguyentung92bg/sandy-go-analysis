/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$OnPurchaseFailed
void Dino_BusSand_Sdk_UnityIapProvider__OnPurchaseFailed (Dino_BusSand_Sdk_UnityIapProvider_o* __this, UnityEngine_Purchasing_Product_o* product, int32_t reason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$OnPurchaseFailed
   void Dino_BusSand_Sdk_UnityIapProvider__OnPurchaseFailed (Dino_BusSand_Sdk_UnityIapProvider_o*
   __this, UnityEngine_Purchasing_Product_o* product, int32_t reason, const MethodInfo* method); */

void Dino_BusSand_Sdk_UnityIapProvider__OnPurchaseFailed_243f39c
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar1 = PTR_DAT_04cbf718;
  if ((bRam0000000004f9cc97 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf718);
    bRam0000000004f9cc97 = 1;
  }
  uStack_48 = *(undefined8 *)puVar1;
  uStack_40 = 0xffffffffffffffff;
  uStack_38 = param_3;
  uVar2 = System_Enum__ToString_4863070(&uStack_48,0);
  Dino_BusSand_Sdk_UnityIapProvider__Fail_243f424(param_1,param_2,param_3,uVar2);
  return;
}

