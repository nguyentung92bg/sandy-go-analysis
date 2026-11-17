/* IL2CPP: Dino.BusSand.App.UI.RaceView$$Rows
System_Collections_Generic_List_EventRow__o* Dino_BusSand_App_UI_RaceView__Rows (Dino_BusSand_App_UI_RaceView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RaceView$$Rows
   System_Collections_Generic_List_EventRow__o* Dino_BusSand_App_UI_RaceView__Rows
   (Dino_BusSand_App_UI_RaceView_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_RaceView__Rows_21b9f60(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  if ((bRam0000000004f9bab8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caf710);
    FUN_02132f7c(PTR_DAT_04caf718);
    FUN_02132f7c(PTR_DAT_04caf720);
    FUN_02132f7c(PTR_DAT_04caf728);
    FUN_02132f7c(PTR_DAT_04caf678);
    FUN_02132f7c(PTR_DAT_04caf680);
    FUN_02132f7c(PTR_DAT_04caf690);
    FUN_02132f7c(PTR_DAT_04caf730);
    FUN_02132f7c(PTR_DAT_04caf738);
    FUN_02132f7c(PTR_DAT_04caf670);
    FUN_02132f7c(PTR_DAT_04caf740);
    FUN_02132f7c(PTR_DAT_04caf540);
    FUN_02132f7c(PTR_DAT_04caf748);
    FUN_02132f7c(PTR_DAT_04caf668);
    FUN_02132f7c(PTR_DAT_04caf750);
    FUN_02132f7c(PTR_DAT_04caf758);
    FUN_02132f7c(PTR_DAT_04caf760);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf768);
    FUN_02132f7c(PTR_DAT_04caf770);
    FUN_02132f7c(PTR_DAT_04caf778);
    FUN_02132f7c(PTR_DAT_04caf780);
    FUN_02132f7c(PTR_DAT_04cabd10);
    bRam0000000004f9bab8 = 1;
  }
  puVar2 = PTR_DAT_04caf760;
  puVar1 = PTR_DAT_04caf740;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  uStack_84 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar15 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar15 != 0)) {
    uVar18 = *(undefined8 *)(lVar15 + 0x18);
    lVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caf748);
    System_Collections_Generic_List_object____ctor_3a814c8(lVar15,uVar18,*(undefined8 *)puVar1);
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar2;
    }
    puVar16 = *(undefined8 **)(lVar11 + 0xb8);
    lVar19 = puVar16[1];
    if (lVar19 == 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar16 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar18 = *puVar16;
      lVar19 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caf710);
      System_Comparison_object____ctor_3326afc(lVar19,uVar18,*(undefined8 *)PTR_DAT_04caf758,0);
      plVar12 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar12 = lVar19;
      thunk_FUN_02134474(plVar12,lVar19);
    }
    puVar8 = PTR_DAT_04caf770;
    puVar7 = PTR_DAT_04caf768;
    puVar6 = PTR_DAT_04caf730;
    puVar5 = PTR_DAT_04caf720;
    puVar4 = PTR_DAT_04caf678;
    puVar3 = PTR_DAT_04caf670;
    puVar2 = PTR_DAT_04caf668;
    puVar1 = PTR_DAT_04cabd10;
    if (lVar15 != 0) {
      System_Collections_Generic_List_object___Sort_3a83690
                (lVar15,lVar19,*(undefined8 *)PTR_DAT_04caf738);
      lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Collections_Generic_List_object____ctor_3a8138c(lVar11,*(undefined8 *)puVar3);
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_a0,lVar15,*(undefined8 *)puVar6);
      lStack_70 = lStack_90;
      puStack_78 = puStack_98;
      uStack_80 = uStack_a0;
      uStack_a0 = 0;
      puStack_98 = &uStack_80;
      while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&uStack_80,*(undefined8 *)puVar5), lVar15 = lStack_70,
            (uVar13 & 1) != 0) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (4 < *(int *)(lVar11 + 0x18)) break;
        lVar19 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
        Dino_BusSand_App_UI_EventRow___ctor_21b5adc();
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(char *)(lVar15 + 0x2c) == '\0') {
          uVar18 = *(undefined8 *)(lVar15 + 0x20);
        }
        else {
          lVar20 = *(long *)PTR_DAT_04ca9d18;
          lVar17 = *(long *)(lVar20 + 0x38);
          if (lVar17 == 0) {
            FUN_0216b4cc(lVar20);
            lVar17 = *(long *)(lVar20 + 0x38);
          }
          lVar17 = *(long *)(lVar17 + 0x10);
          if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_0216b470();
          }
          if (*(int *)(lVar17 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar17 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
          if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_0216b470();
          }
          uVar18 = **(undefined8 **)(lVar17 + 0xb8);
          if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
          }
          uVar18 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                             (*(undefined8 *)puVar7,*(undefined8 *)puVar8,uVar18,0);
        }
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        *(undefined8 *)(lVar19 + 0x10) = uVar18;
        thunk_FUN_02134474();
        uVar18 = System_Int32__ToString_482d750(lVar15 + 0x14,0);
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uStack_84 = Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress_22551dc
                              (*(long *)(param_1 + 0x10),0xffffffff,0);
        uVar14 = System_Int32__ToString_482d750(&uStack_84,0);
        uVar18 = System_String__Concat_46d2b84(uVar18,*(undefined8 *)puVar1,uVar14,0);
        *(undefined8 *)(lVar19 + 0x18) = uVar18;
        thunk_FUN_02134474();
        *(undefined4 *)(lVar19 + 0x28) = 3;
        *(undefined1 *)(lVar19 + 0x2c) = *(undefined1 *)(lVar15 + 0x2c);
        lVar15 = *(long *)(lVar11 + 0x10);
        lVar17 = *(long *)PTR_DAT_04caf690;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar10 = *(uint *)(lVar11 + 0x18);
        if (uVar10 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar10 + 1;
          plVar12 = (long *)(lVar15 + (long)(int)uVar10 * 8 + 0x20);
          *plVar12 = lVar19;
          thunk_FUN_02134474(plVar12,lVar19);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar11,lVar19,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_80,*(undefined8 *)PTR_DAT_04caf718);
      lVar15 = *(long *)(param_1 + 0x10);
      if ((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) {
        uVar9 = Dino_BusSand_App_Meta_YachtRacingCore__StageRewardId_225525c
                          (lVar15,*(undefined4 *)(*(long *)(lVar15 + 0x10) + 0x78),0);
        lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
        Dino_BusSand_App_UI_EventRow___ctor_21b5adc();
        lVar17 = *(long *)PTR_DAT_04ca9d18;
        lVar19 = *(long *)(lVar17 + 0x38);
        if (lVar19 == 0) {
          FUN_0216b4cc(lVar17);
          lVar19 = *(long *)(lVar17 + 0x38);
        }
        lVar19 = *(long *)(lVar19 + 0x10);
        if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = FUN_0216b470();
        }
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar19 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
        if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = FUN_0216b470();
        }
        uVar18 = **(undefined8 **)(lVar19 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
        }
        uVar18 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                           (*(undefined8 *)PTR_DAT_04caf778,*(undefined8 *)PTR_DAT_04caf780,uVar18,0
                           );
        if (lVar15 != 0) {
          *(undefined8 *)(lVar15 + 0x10) = uVar18;
          thunk_FUN_02134474();
          uVar18 = Dino_BusSand_App_UI_EventKit__RewardOf_21b333c(uVar9);
          *(undefined8 *)(lVar15 + 0x20) = uVar18;
          thunk_FUN_02134474();
          if (*(long *)(param_1 + 0x10) != 0) {
            uVar10 = Dino_BusSand_App_Meta_YachtRacingCore__CheckCanClaimReward_225565c
                               (*(long *)(param_1 + 0x10),0);
            puVar1 = PTR_DAT_04caf680;
            *(uint *)(lVar15 + 0x28) = uVar10 & 1;
            uVar18 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
            System_Func_object____ctor_379de3c(uVar18,param_1,*(undefined8 *)PTR_DAT_04caf750,0);
            *(undefined8 *)(lVar15 + 0x30) = uVar18;
            thunk_FUN_02134474((undefined8 *)(lVar15 + 0x30),uVar18);
            if (lVar11 != 0) {
              lVar19 = *(long *)(lVar11 + 0x10);
              lVar17 = *(long *)PTR_DAT_04caf690;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar19 != 0) {
                uVar10 = *(uint *)(lVar11 + 0x18);
                if (uVar10 < *(uint *)(lVar19 + 0x18)) {
                  *(uint *)(lVar11 + 0x18) = uVar10 + 1;
                  plVar12 = (long *)(lVar19 + (long)(int)uVar10 * 8 + 0x20);
                  *plVar12 = lVar15;
                  thunk_FUN_02134474(plVar12,lVar15);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (lVar11,lVar15,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
                return lVar11;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

