/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel$$Refresh
void Dino_BusSand_App_UI_BattleRoyaleResultPanel__Refresh (Dino_BusSand_App_UI_BattleRoyaleResultPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel$$Refresh
   void Dino_BusSand_App_UI_BattleRoyaleResultPanel__Refresh
   (Dino_BusSand_App_UI_BattleRoyaleResultPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleResultPanel__Refresh_218fcd0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined4 uStack_68;
  int iStack_64;
  
  puVar4 = PTR_DAT_04cadf78;
  puVar3 = PTR_DAT_04cadf70;
  puVar2 = PTR_DAT_04cadf68;
  puVar1 = PTR_DAT_04cadf48;
  if ((bRam0000000004f9b99f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadef8);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04cadf80);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cadf88);
    FUN_02132f7c(PTR_DAT_04cadda0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadf48);
    FUN_02132f7c(PTR_DAT_04cadf90);
    FUN_02132f7c(PTR_DAT_04cadf68);
    FUN_02132f7c(PTR_DAT_04cadf98);
                    /* try { // try from 0228fdac to 02390033 has its CatchHandler @ 0228fdac
                       catch() { ... } // from try @ 0228fdac with catch @ 0228fdac
                       catch() { ... } // from try @ 0229007c with catch @ 0228fdac */
    FUN_02132f7c(PTR_DAT_04cadfa0);
    FUN_02132f7c(PTR_DAT_04cadf70);
    FUN_02132f7c(PTR_DAT_04cadfa8);
    FUN_02132f7c(PTR_DAT_04cadf78);
    FUN_02132f7c(PTR_DAT_04cadfb0);
    FUN_02132f7c(PTR_DAT_04cadfb8);
    bRam0000000004f9b99f = 1;
  }
  iStack_64 = 0;
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar2,0,0);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar1,0,0);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar3,0,0);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar4,0,0);
  puVar5 = PTR_DAT_04cadfa8;
  puVar4 = PTR_DAT_04cadfa0;
  puVar3 = PTR_DAT_04cadf98;
  puVar2 = PTR_DAT_04cadef8;
  puVar1 = PTR_DAT_04ca9ae8;
  lVar12 = *(long *)(param_1 + 0x40);
  if (lVar12 == 0) {
    return;
  }
  uVar6 = Dino_BusSand_App_UI_BattleRoyaleUi__get_MyHeadId_219bd74(0);
  lVar12 = Dino_BusSand_App_Meta_BattleRoyaleCore__LivePlayers_22245b8(lVar12,5,0,2,uVar6,0);
  uVar7 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar5,0);
  lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
  iVar13 = 0;
  do {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
    uVar14 = 0;
    if ((uVar9 & 1) != 0) {
      iStack_64 = iVar13 + 1;
      uVar14 = System_Int32__ToString_482d750(&iStack_64,0);
      uVar14 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,uVar14,0);
      if (lVar8 == 0) goto LAB_0229016c;
      uVar14 = UnityEngine_Transform__Find_43d4bec(lVar8,uVar14,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar14,0,0);
    if ((uVar9 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
      if ((uVar9 & 1) == 0) {
        uVar14 = Dino_BusSand_App_UI_BattleRoyaleUi__SpawnHead_219ccf8(uVar7,uVar14,0);
        if (lVar12 == 0) goto LAB_0229016c;
        if (iVar13 < *(int *)(lVar12 + 0x18)) {
          lVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                             (lVar12,iVar13,*(undefined8 *)PTR_DAT_04cadf88);
        }
        else {
          lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
          Dino_BusSand_App_Meta_BattleRoyalePerson___ctor_22245a8(lVar10,0);
          if (lVar10 == 0) goto LAB_0229016c;
          *(int *)(lVar10 + 0x10) = iVar13 + 999;
          *(undefined4 *)(lVar10 + 0x14) = 0xffffffff;
        }
        Dino_BusSand_App_UI_BattleRoyaleUi__SetHead_219c98c(uVar14,lVar10,0);
      }
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 != 5);
  uVar7 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cadf90,0);
                    /* try { // try from 02290034 to 02390043 has its CatchHandler @ 022900ec */
  plVar11 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
  if (*(long *)(param_1 + 0x40) != 0) {
    uStack_68 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_LivePersonNum_22212dc
                          (*(long *)(param_1 + 0x40),0);
                    /* try { // try from 0229006c to 0239007b has its CatchHandler @ 02290100 */
    lVar12 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_68);
    if (plVar11 != (long *)0x0) {
                    /* try { // try from 0229007c to 0239011b has its CatchHandler @ 0228fdac */
      if ((lVar12 != 0) &&
         (lVar8 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0)) {
        uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar7,0);
      }
      if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar11[4] = lVar12;
      thunk_FUN_02134474(plVar11 + 4,lVar12);
      uVar14 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                         (*(undefined8 *)PTR_DAT_04cadfb0,plVar11,0);
      Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar7,uVar14,0);
      if ((*(long *)(param_1 + 0x40) != 0) &&
         (lVar12 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_FinalRewardItems_2221834
                             (*(long *)(param_1 + 0x40),0), lVar12 != 0)) {
                    /* catch() { ... } // from try @ 02290034 with catch @ 022900ec */
        if (*(int *)(lVar12 + 0x18) < 1) {
          return;
        }
                    /* catch() { ... } // from try @ 0229006c with catch @ 02290100 */
        auVar15 = System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                            (lVar12,0,*(undefined8 *)PTR_DAT_04cadda0);
        puVar1 = PTR_DAT_04cadfb8;
        *(undefined1 (*) [16])(param_1 + 0x60) = auVar15;
        *(undefined1 *)(param_1 + 0x70) = 1;
        uVar7 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar1,0);
        uVar14 = Dino_BusSand_App_UI_BattleRoyaleUi__Amount_219b820
                           (*(undefined8 *)(param_1 + 0x68),0);
        Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar7,uVar14,0);
        return;
      }
    }
  }
LAB_0229016c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

