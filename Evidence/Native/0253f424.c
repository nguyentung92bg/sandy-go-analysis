/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$Fail
void Dino_BusSand_Sdk_UnityIapProvider__Fail (Dino_BusSand_Sdk_UnityIapProvider_o* __this, UnityEngine_Purchasing_Product_o* product, int32_t reason, System_String_o* why, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.UnityIapProvider$$Fail
   void Dino_BusSand_Sdk_UnityIapProvider__Fail (Dino_BusSand_Sdk_UnityIapProvider_o* __this,
   UnityEngine_Purchasing_Product_o* product, int32_t reason, System_String_o* why, const
   MethodInfo* method); */

void Dino_BusSand_Sdk_UnityIapProvider__Fail_243f424
               (long param_1,long param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  int iStack_64;
  
  puVar1 = PTR_DAT_04cbf720;
  if ((bRam0000000004f9cc98 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04cbf718);
    FUN_02132f7c(PTR_DAT_04cbf728);
    FUN_02132f7c(PTR_DAT_04cbf720);
    FUN_02132f7c(PTR_DAT_04caccc8);
    FUN_02132f7c(PTR_DAT_04cbf730);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9cc98 = 1;
  }
  iStack_64 = 0;
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar6,0);
  if (lVar6 == 0) {
LAB_0253f6a0:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(long *)(lVar6 + 0x10) = param_1;
  thunk_FUN_02134474((long *)(lVar6 + 0x10),param_1);
  puVar5 = PTR_DAT_04cbf730;
  puVar4 = PTR_DAT_04cbf718;
  puVar3 = PTR_DAT_04cad1f0;
  puVar2 = PTR_DAT_04caccc8;
  puVar1 = PTR_DAT_04ca9af8;
  puVar8 = (undefined8 *)PTR_DAT_04ca9c30;
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_0253f6a0;
    puVar8 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
  }
  puVar10 = (undefined8 *)(lVar6 + 0x18);
  *puVar10 = *puVar8;
  thunk_FUN_02134474(puVar10);
  uVar7 = System_String__Concat_46d30e8
                    (*(undefined8 *)puVar5,*puVar10,*(undefined8 *)puVar2,param_4,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  UnityEngine_Debug__LogWarning_4357a30(uVar7,0);
  uStack_80 = *(undefined8 *)puVar4;
  uStack_78 = 0xffffffffffffffff;
  iStack_70 = param_3;
  System_Enum__ToString_4863070(&uStack_80,0);
  uVar7 = Dino_BusSand_Sdk_UnityIapProvider__SnakeCase_243e410();
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar9);
    lVar9 = *(long *)puVar3;
  }
  puVar8 = (undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x20);
  *puVar8 = uVar7;
  thunk_FUN_02134474(puVar8,uVar7);
  iStack_64 = param_3;
  uVar7 = System_Int32__ToString_482d750(&iStack_64,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
  *puVar8 = uVar7;
  thunk_FUN_02134474(puVar8,uVar7);
  if ((((param_2 == 0) || (param_3 != 6)) || (*(long *)(param_2 + 0x10) == 0)) ||
     ((*(int *)(*(long *)(param_2 + 0x10) + 0x20) != 1 || (*(long *)(param_1 + 0x10) == 0)))) {
    Dino_BusSand_Sdk_UnityIapProvider__Complete_243e214(param_1,*puVar10,0);
  }
  else {
    uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
    System_Action_bool____ctor_35ee0e8(uVar7,lVar6,*(undefined8 *)PTR_DAT_04cbf728,0);
    Dino_BusSand_Sdk_UnityIapProvider__RefreshOwned_243e938(param_1,uVar7);
  }
  return;
}

