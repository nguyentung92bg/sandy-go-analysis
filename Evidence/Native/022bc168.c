/* IL2CPP: Dino.BusSand.App.UI.CupView$$Entry
Dino_BusSand_App_UI_EventRow_o* Dino_BusSand_App_UI_CupView__Entry (Dino_BusSand_App_Meta_CupEntry_o* e, int32_t rank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CupView$$Entry
   Dino_BusSand_App_UI_EventRow_o* Dino_BusSand_App_UI_CupView__Entry
   (Dino_BusSand_App_Meta_CupEntry_o* e, int32_t rank, const MethodInfo* method); */

long Dino_BusSand_App_UI_CupView__Entry_21bc168(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 uStack_54;
  
  puVar4 = PTR_DAT_04caf678;
  uStack_54 = param_2;
  if ((bRam0000000004f9bac5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caf810);
    FUN_02132f7c(PTR_DAT_04caf678);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cabd78);
    FUN_02132f7c(PTR_DAT_04caf768);
    FUN_02132f7c(PTR_DAT_04caf770);
    FUN_02132f7c(PTR_DAT_04cab270);
    FUN_02132f7c(PTR_DAT_04caf8a8);
    bRam0000000004f9bac5 = 1;
  }
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  Dino_BusSand_App_UI_EventRow___ctor_21b5adc();
  uVar8 = System_Int32__ToString_482d750(&uStack_54,0);
  puVar4 = PTR_DAT_04caf810;
  if (param_1 != 0) {
    uVar10 = *(undefined8 *)PTR_DAT_04cab270;
    uVar11 = *(undefined8 *)PTR_DAT_04cabd78;
    if (*(char *)(param_1 + 0x18) == '\0') {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_04caf810 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar13 = Dino_BusSand_App_Meta_Ev07Rewards__Name_222ee78(uVar1,0);
    }
    else {
      lVar12 = *(long *)PTR_DAT_04ca9d18;
      lVar9 = *(long *)(lVar12 + 0x38);
      if (lVar9 == 0) {
        FUN_0216b4cc(lVar12);
        lVar9 = *(long *)(lVar12 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0216b470();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar3 = PTR_DAT_04cad330;
      lVar9 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0216b470();
      }
      puVar6 = PTR_DAT_04caf770;
      puVar5 = PTR_DAT_04caf768;
      uVar13 = **(undefined8 **)(lVar9 + 0xb8);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar13 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                         (*(undefined8 *)puVar5,*(undefined8 *)puVar6,uVar13,0);
    }
    uVar8 = System_String__Concat_46d30e8(uVar11,uVar8,uVar10,uVar13,0);
    puVar3 = PTR_DAT_04caf8a8;
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x10) = uVar8;
      thunk_FUN_02134474();
      uVar8 = System_Int32__ToString_482d750(param_1 + 0x14,0);
      uVar8 = System_String__Concat_46c82e0(uVar8,*(undefined8 *)puVar3,0);
      *(undefined8 *)(lVar7 + 0x18) = uVar8;
      thunk_FUN_02134474((undefined8 *)(lVar7 + 0x18),uVar8);
      uVar2 = *(undefined1 *)(param_1 + 0x18);
      *(undefined4 *)(lVar7 + 0x28) = 3;
      *(undefined1 *)(lVar7 + 0x2c) = uVar2;
      uVar8 = Dino_BusSand_App_Meta_WeeklyCupModel__RewardForRank_223150c(uStack_54,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar4);
      }
      uVar8 = Dino_BusSand_App_Meta_Ev07Rewards__Pairs_222ebe4(uVar8,0);
      *(undefined8 *)(lVar7 + 0x20) = uVar8;
      thunk_FUN_02134474();
      return lVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

