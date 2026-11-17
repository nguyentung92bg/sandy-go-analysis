/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$ShowBuySuccess
void Dino_BusSand_App_UI_PassportUi__ShowBuySuccess (System_Action_o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$ShowBuySuccess
   void Dino_BusSand_App_UI_PassportUi__ShowBuySuccess (System_Action_o* done, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_PassportUi__ShowBuySuccess_21cd600(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plVar11;
  
  puVar2 = PTR_DAT_04cb0260;
  if ((bRam0000000004f9bb85 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0268);
    FUN_02132f7c(PTR_DAT_04cb0260);
    FUN_02132f7c(PTR_DAT_04cb0270);
    FUN_02132f7c(PTR_DAT_04cb0278);
    FUN_02132f7c(PTR_DAT_04cb0280);
    bRam0000000004f9bb85 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar4,0);
  puVar2 = PTR_DAT_04caba50;
  if (lVar4 == 0) goto LAB_022cd8e0;
  puVar10 = (ulong *)(lVar4 + 0x18);
  *puVar10 = param_1;
  thunk_FUN_02134474(puVar10,param_1);
  lVar5 = Dino_BusSand_App_UI_PassportUi__get_F_21daeb0();
  plVar11 = (long *)(lVar4 + 0x10);
  *plVar11 = lVar5;
  thunk_FUN_02134474(plVar11,lVar5);
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar5 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar2;
  }
  lVar6 = **(long **)(lVar6 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  if ((uVar7 & 1) == 0) {
    bVar3 = true;
  }
  else {
    if (lVar6 == 0) goto LAB_022cd8e0;
    bVar3 = *(char *)(lVar6 + 0x38) == '\0';
  }
  if (*plVar11 != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
    if ((uVar7 & 1) == 0) {
      if (lVar5 == 0) goto LAB_022cd8e0;
      uVar7 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                        (lVar5,*(undefined8 *)PTR_DAT_04cb0270);
      if ((uVar7 & 1) == 0) {
        if (bVar3) {
          uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
          System_Action___ctor_47b5ed0(uVar7,lVar4,*(undefined8 *)PTR_DAT_04cb0268,0);
        }
        else {
          if (*plVar11 == 0) {
LAB_022cd8e0:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          Dino_BusSand_App_Meta_PassportFeature__OnGivePurchaseReward_2249918(*plVar11,0,0,0);
          if (*plVar11 == 0) goto LAB_022cd8e0;
          Dino_BusSand_App_Meta_PassportFeature__QueueResultCommand_224a7e0(*plVar11,0);
          uVar7 = *puVar10;
        }
        uVar8 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar5,*(undefined8 *)PTR_DAT_04cb0280,4,uVar7,
                           *(undefined8 *)PTR_DAT_04cb0278);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
        if (uVar7 == 0) {
          return;
        }
        uVar9 = uVar9 & 1;
        goto joined_r0x022cd8c8;
      }
    }
  }
  uVar7 = *puVar10;
  uVar9 = uVar7;
joined_r0x022cd8c8:
  if (uVar9 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x022cd810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(uVar7 + 0x18))(*(undefined8 *)(uVar7 + 0x40),*(undefined8 *)(uVar7 + 0x28));
  return;
}

