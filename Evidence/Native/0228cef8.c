/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$Refresh
void Dino_BusSand_App_UI_BattleRoyalePanel__Refresh (Dino_BusSand_App_UI_BattleRoyalePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$Refresh
   void Dino_BusSand_App_UI_BattleRoyalePanel__Refresh (Dino_BusSand_App_UI_BattleRoyalePanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyalePanel__Refresh_218cef8(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 extraout_x1;
  long lVar16;
  long lVar17;
  int iStack_54;
  
  if ((bRam0000000004f9b98a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cadda0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadda8);
    FUN_02132f7c(PTR_DAT_04caddb0);
    FUN_02132f7c(PTR_DAT_04caddb8);
    FUN_02132f7c(PTR_DAT_04caddc0);
    FUN_02132f7c(PTR_DAT_04caddc8);
    FUN_02132f7c(PTR_DAT_04caddd0);
    FUN_02132f7c(PTR_DAT_04cadd80);
    FUN_02132f7c(PTR_DAT_04caddd8);
    FUN_02132f7c(PTR_DAT_04cadd88);
    FUN_02132f7c(PTR_DAT_04cadde0);
    FUN_02132f7c(PTR_DAT_04cadde8);
    FUN_02132f7c(PTR_DAT_04caddf0);
    FUN_02132f7c(PTR_DAT_04caddf8);
    FUN_02132f7c(PTR_DAT_04cade00);
    FUN_02132f7c(PTR_DAT_04cade08);
    FUN_02132f7c(PTR_DAT_04cade10);
    bRam0000000004f9b98a = 1;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    return;
  }
  iVar9 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150
                    (*(long *)(param_1 + 0x40),0);
  if (*(long *)(param_1 + 0x40) != 0) {
    iVar10 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc
                       (*(long *)(param_1 + 0x40),0);
    puVar3 = PTR_DAT_04cadda8;
    puVar4 = PTR_DAT_04ca9d18;
    if (*(long *)(param_1 + 0x38) != 0) {
      iVar2 = *(int *)(*(long *)(param_1 + 0x38) + 0x10);
      bVar1 = iVar2 != 1;
      Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04cadd80,bVar1,0);
      Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar3,iVar2 == 1,0);
      if (iVar2 == 1) {
        Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04cadd88,1,0);
        Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04caddf8,0,0);
        Dino_BusSand_App_UI_BattleRoyalePanel__RefreshLose_218d500(param_1);
      }
      else {
        Dino_BusSand_App_UI_UIPanel__Show_21f4018
                  (param_1,*(undefined8 *)PTR_DAT_04cadd88,iVar2 == 2 && iVar9 != iVar10 + -1,0);
        Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04caddf8,bVar1,0);
        Dino_BusSand_App_UI_BattleRoyalePanel__RefreshNormal_218d61c(param_1);
      }
      lVar17 = *(long *)puVar4;
      lVar16 = *(long *)(lVar17 + 0x38);
      if (lVar16 == 0) {
        FUN_0216b4cc(lVar17);
        lVar16 = *(long *)(lVar17 + 0x38);
      }
      lVar16 = *(long *)(lVar16 + 0x10);
      if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_0216b470();
      }
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar8 = PTR_DAT_04cade08;
      puVar7 = PTR_DAT_04cadde8;
      puVar6 = PTR_DAT_04cadde0;
      puVar5 = PTR_DAT_04caddd0;
      puVar3 = PTR_DAT_04ca9c20;
      lVar16 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
      if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_0216b470();
      }
      uVar12 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                         (*(undefined8 *)puVar8,**(undefined8 **)(lVar16 + 0xb8),0);
      lVar16 = System_String__Concat_46d2b84(*(undefined8 *)puVar6,uVar12,*(undefined8 *)puVar7,0);
      uVar12 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar5,0);
      plVar13 = (long *)FUN_02133068(*(undefined8 *)puVar3,1);
      if (plVar13 != (long *)0x0) {
        if ((lVar16 != 0) &&
           (lVar17 = thunk_FUN_0216e7a0(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar17 == 0)) {
LAB_0228d4f4:
          uVar12 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar12,0);
        }
        puVar5 = PTR_DAT_04caddc8;
        if ((int)plVar13[3] == 0) {
LAB_0228d4f0:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar13[4] = lVar16;
        thunk_FUN_02134474(plVar13 + 4,lVar16);
        uVar14 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060(*(undefined8 *)puVar5,plVar13,0);
        Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar12,uVar14,0);
        if ((*(long *)(param_1 + 0x40) != 0) &&
           (lVar16 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_RewardPool_22210ac
                               (*(long *)(param_1 + 0x40),0), puVar6 = PTR_DAT_04caddb0,
           puVar5 = PTR_DAT_04cadda0, lVar16 != 0)) {
          if (0 < *(int *)(lVar16 + 0x18)) {
            uVar11 = System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                               (lVar16,0,*(undefined8 *)PTR_DAT_04cadda0);
            if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac7b8);
            }
            uVar12 = Dino_BusSand_App_UI_CommerceUi__ItemIcon_22a80e8(uVar11,1,0);
            if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
            }
            uVar15 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
            if ((uVar15 & 1) != 0) {
              Dino_BusSand_App_UI_UIPanel__Img_2200bc8
                        (param_1,*(undefined8 *)PTR_DAT_04caddf0,uVar12,0);
            }
            uVar12 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                               (param_1,*(undefined8 *)PTR_DAT_04cade10,0);
            System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                      (lVar16,0,*(undefined8 *)puVar5);
            uVar14 = Dino_BusSand_App_UI_BattleRoyaleUi__Amount_219b820(extraout_x1,0);
            Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar12,uVar14,0);
          }
          uVar12 = *(undefined8 *)puVar6;
          if (iVar2 == 2) {
            lVar17 = *(long *)puVar4;
            lVar16 = *(long *)(lVar17 + 0x38);
            if (lVar16 == 0) {
              FUN_0216b4cc(lVar17);
              lVar16 = *(long *)(lVar17 + 0x38);
            }
            lVar16 = *(long *)(lVar16 + 0x10);
            if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = FUN_0216b470();
            }
            if (*(int *)(lVar16 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar16 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
            if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = FUN_0216b470();
            }
            plVar13 = (long *)**(long **)(lVar16 + 0xb8);
            uVar14 = *(undefined8 *)PTR_DAT_04caddd8;
          }
          else {
            plVar13 = (long *)FUN_02133068(*(undefined8 *)puVar3,1);
            iStack_54 = iVar10 - iVar9;
            lVar16 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_54);
            if (plVar13 == (long *)0x0) goto LAB_0228d4ec;
            if ((lVar16 != 0) &&
               (lVar17 = thunk_FUN_0216e7a0(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar17 == 0))
            goto LAB_0228d4f4;
            if ((int)plVar13[3] == 0) goto LAB_0228d4f0;
            plVar13[4] = lVar16;
            thunk_FUN_02134474(plVar13 + 4,lVar16);
            uVar14 = *(undefined8 *)PTR_DAT_04caddb8;
          }
          uVar14 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060(uVar14,plVar13,0);
          puVar3 = PTR_DAT_04cade00;
          puVar4 = PTR_DAT_04caddc0;
          Dino_BusSand_App_UI_UIPanel__Txt_2200924(param_1,uVar12,uVar14,0);
          Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar4,0,0);
          Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar3,0,0);
          return;
        }
      }
    }
  }
LAB_0228d4ec:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

