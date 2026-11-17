/* IL2CPP: Dino.BusSand.App.UI.GoldenView$$Rows
System_Collections_Generic_List_EventRow__o* Dino_BusSand_App_UI_GoldenView__Rows (Dino_BusSand_App_UI_GoldenView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenView$$Rows
   System_Collections_Generic_List_EventRow__o* Dino_BusSand_App_UI_GoldenView__Rows
   (Dino_BusSand_App_UI_GoldenView_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_GoldenView__Rows_21b9858(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined1 auVar21 [12];
  undefined4 uStack_64;
  
  puVar4 = PTR_DAT_04caf670;
  puVar3 = PTR_DAT_04caf668;
  if ((bRam0000000004f9bab5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf678);
    FUN_02132f7c(PTR_DAT_04caf680);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caf690);
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04caf670);
    FUN_02132f7c(PTR_DAT_04caf048);
    FUN_02132f7c(PTR_DAT_04caf540);
    FUN_02132f7c(PTR_DAT_04caf0a8);
    FUN_02132f7c(PTR_DAT_04caf668);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04caf6d8);
    FUN_02132f7c(PTR_DAT_04caf6e0);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf6e8);
    FUN_02132f7c(PTR_DAT_04caf6f0);
    bRam0000000004f9bab5 = 1;
  }
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar8,*(undefined8 *)puVar4);
  puVar3 = PTR_DAT_04caec48;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar6 = Dino_BusSand_App_Meta_GiftPackFeature__get_GoldenPackId_223b618
                      (*(long *)(param_1 + 0x10),0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    lVar9 = Dino_BusSand_App_Meta_GiftPackFeature__GoldenStages_223b83c(uVar6,0);
    puVar4 = PTR_DAT_04caf0a8;
    puVar3 = PTR_DAT_04cad860;
    if (lVar9 != 0) {
      iVar17 = *(int *)(lVar9 + 0x18);
      if (iVar17 < 1) {
        uVar7 = 0xffffffff;
      }
      else {
        iVar20 = 0;
        iVar18 = 0;
        do {
          if ((*(long *)(param_1 + 0x10) == 0) ||
             (lVar10 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc
                                 (*(long *)(param_1 + 0x10),0), lVar10 == 0)) goto LAB_022b9d08;
          lVar10 = *(long *)(lVar10 + 0x30);
          uVar11 = System_Collections_Generic_List_GiftPackFeature_GoldenStage___get_Item_3b3abc4
                             (lVar9,iVar18,*(undefined8 *)puVar4);
          if (lVar10 == 0) goto LAB_022b9d08;
          uVar12 = System_Collections_Generic_List_int___Contains_3a2c3ec
                             (lVar10,uVar11,*(undefined8 *)puVar3);
          iVar17 = *(int *)(lVar9 + 0x18);
          iVar1 = iVar18 + 1;
          if ((uVar12 & 1) != 0) {
            iVar20 = iVar18 + 1;
          }
          iVar18 = iVar1;
        } while (iVar1 < iVar17);
        uVar7 = iVar20 - 1;
      }
      uVar19 = iVar17 - 6U & ((int)(iVar17 - 6U) >> 0x1f ^ 0xffffffffU);
      uVar2 = uVar7;
      if ((int)uVar19 <= (int)uVar7) {
        uVar2 = uVar19;
      }
      uVar19 = 0;
      if (-1 < (int)uVar7) {
        uVar19 = uVar2;
      }
      if ((int)uVar19 < iVar17) {
        if (lVar8 == 0) goto LAB_022b9d08;
        do {
          if (5 < *(int *)(lVar8 + 0x18)) {
            return lVar8;
          }
          lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caf6e0);
          System_Object___ctor_4870e5c(lVar10,0);
          if (lVar10 == 0) goto LAB_022b9d08;
          *(long *)(lVar10 + 0x20) = param_1;
          thunk_FUN_02134474((long *)(lVar10 + 0x20),param_1);
          auVar21 = System_Collections_Generic_List_GiftPackFeature_GoldenStage___get_Item_3b3abc4
                              (lVar9,uVar19,*(undefined8 *)puVar4);
          *(undefined1 (*) [12])(lVar10 + 0x10) = auVar21;
          if (((*(long *)(param_1 + 0x10) == 0) ||
              (lVar13 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc
                                  (*(long *)(param_1 + 0x10),0), lVar13 == 0)) ||
             (*(long *)(lVar13 + 0x30) == 0)) goto LAB_022b9d08;
          uVar12 = System_Collections_Generic_List_int___Contains_3a2c3ec
                             (*(long *)(lVar13 + 0x30),*(undefined4 *)(lVar10 + 0x10),
                              *(undefined8 *)puVar3);
          lVar13 = *(long *)(param_1 + 0x10);
          if (lVar13 == 0) goto LAB_022b9d08;
          uVar6 = Dino_BusSand_App_Meta_GiftPackFeature__get_GoldenPackId_223b618(lVar13,0);
          uVar7 = Dino_BusSand_App_Meta_GiftPackFeature__CanClaimGoldenStage_223caa4
                            (lVar13,uVar6,*(undefined4 *)(lVar10 + 0x10),0);
          lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caf678);
          Dino_BusSand_App_UI_EventRow___ctor_21b5adc();
          plVar14 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
          uStack_64 = *(undefined4 *)(lVar10 + 0x14);
          lVar15 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_64);
          if (plVar14 == (long *)0x0) goto LAB_022b9d08;
          if ((lVar15 != 0) &&
             (lVar16 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar14 + 0x40)), lVar16 == 0)) {
            uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar11,0);
          }
          if ((int)plVar14[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar14[4] = lVar15;
          thunk_FUN_02134474(plVar14 + 4,lVar15);
          if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar11 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                             (*(undefined8 *)PTR_DAT_04caf6f0,*(undefined8 *)PTR_DAT_04caf6e8,
                              plVar14,0);
          if (lVar13 == 0) goto LAB_022b9d08;
          *(undefined8 *)(lVar13 + 0x10) = uVar11;
          thunk_FUN_02134474();
          uVar11 = Dino_BusSand_App_UI_Rw__Coins_21b8c58((long)*(int *)(lVar10 + 0x18));
          *(undefined8 *)(lVar13 + 0x20) = uVar11;
          thunk_FUN_02134474();
          puVar5 = PTR_DAT_04caf680;
          uVar2 = 2;
          if ((uVar12 & 1) == 0) {
            uVar2 = uVar7 & 1;
          }
          *(uint *)(lVar13 + 0x28) = uVar2;
          uVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
          System_Func_object____ctor_379de3c(uVar11,lVar10,*(undefined8 *)PTR_DAT_04caf6d8,0);
          *(undefined8 *)(lVar13 + 0x30) = uVar11;
          thunk_FUN_02134474((undefined8 *)(lVar13 + 0x30),uVar11);
          lVar10 = *(long *)(lVar8 + 0x10);
          lVar15 = *(long *)PTR_DAT_04caf690;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_022b9d08;
          uVar7 = *(uint *)(lVar8 + 0x18);
          if (uVar7 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar7 + 1;
            plVar14 = (long *)(lVar10 + (long)(int)uVar7 * 8 + 0x20);
            *plVar14 = lVar13;
            thunk_FUN_02134474(plVar14,lVar13);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar8,lVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < *(int *)(lVar9 + 0x18));
      }
      return lVar8;
    }
  }
LAB_022b9d08:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

