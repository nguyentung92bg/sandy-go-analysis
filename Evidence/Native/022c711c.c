/* IL2CPP: Dino.BusSand.App.UI.TowerEventPanel.<Move>d__19$$MoveNext
bool Dino_BusSand_App_UI_TowerEventPanel__Move_d__19__MoveNext (Dino_BusSand_App_UI_TowerEventPanel__Move_d__19_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.TowerEventPanel.<Move>d__19$$MoveNext
   bool Dino_BusSand_App_UI_TowerEventPanel__Move_d__19__MoveNext
   (Dino_BusSand_App_UI_TowerEventPanel__Move_d__19_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_TowerEventPanel__Move_d__19__MoveNext_21c711c(long param_1)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 uVar17;
  
                    /* try { // try from 022c712c to 023c7157 has its CatchHandler @ 022c717c */
  if ((bRam0000000004f9bb02 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
                    /* try { // try from 022c7158 to 023c719f has its CatchHandler @ 022c70d8 */
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c712c with catch @ 022c717c
                        */
    FUN_02132f7c(PTR_DAT_04cac1e8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c70fc with catch @ 022c718c
                        */
    FUN_02132f7c(PTR_DAT_04caff18);
    FUN_02132f7c(PTR_DAT_04caff20);
                    /* try { // try from 022c71a0 to 023c71a7 has its CatchHandler @ 022c71b0 */
    FUN_02132f7c(PTR_DAT_04caff28);
                    /* try { // try from 022c71a8 to 023c71b3 has its CatchHandler @ 022c70d8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c71a0 with catch @ 022c71b0
                        */
    FUN_02132f7c(PTR_DAT_04caff30);
                    /* try { // try from 022c71b4 to 023c71b7 has its CatchHandler @ 022c71c0 */
                    /* try { // try from 022c71b8 to 023c71c3 has its CatchHandler @ 022c70d8 */
    FUN_02132f7c(PTR_DAT_04caff38);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c71b4 with catch @ 022c71c0
                        */
    FUN_02132f7c(PTR_DAT_04caff40);
    FUN_02132f7c(PTR_DAT_04caff48);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9bb02 = 1;
  }
  puVar8 = PTR_DAT_04caff48;
  puVar7 = PTR_DAT_04caff40;
  puVar6 = PTR_DAT_04caff38;
  puVar5 = PTR_DAT_04caff20;
  puVar4 = PTR_DAT_04cad568;
  puVar3 = PTR_DAT_04cac208;
  iVar9 = *(int *)(param_1 + 0x10);
  lVar13 = *(long *)(param_1 + 0x20);
                    /* try { // try from 022c7224 to 023c727b has its CatchHandler @ 022c7224
                       catch() { ... } // from try @ 022c7224 with catch @ 022c7224
                       catch() { ... } // from try @ 022c72ac with catch @ 022c7224 */
  if (iVar9 < 2) {
    if (iVar9 == 0) {
                    /* try { // try from 022c7380 to 023c73cb has its CatchHandler @ 022c72f8 */
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
      System_Object___ctor_4870e5c(lVar12,0);
                    /* catch() { ... } // from try @ 022c7378 with catch @ 022c73a4 */
      plVar14 = (long *)(param_1 + 0x30);
      *plVar14 = lVar12;
      thunk_FUN_02134474(plVar14,lVar12);
                    /* catch() { ... } // from try @ 022c7350 with catch @ 022c73b8 */
      if (*plVar14 != 0) {
        *(undefined8 *)(*plVar14 + 0x10) = *(undefined8 *)(param_1 + 0x20);
        thunk_FUN_02134474();
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18) = *(undefined8 *)(param_1 + 0x28),
           puVar3 = PTR_DAT_04cad4c0, lVar13 != 0)) {
          *(undefined1 *)(lVar13 + 0x78) = 1;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = Dino_BusSand_App_UI_UiMotion__Wait_22909bc(0x3f000000,0);
          *(undefined8 *)(param_1 + 0x18) = uVar10;
          thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar10);
          *(undefined4 *)(param_1 + 0x10) = 1;
          return 1;
        }
      }
      goto LAB_022c78a4;
    }
    if (iVar9 != 1) {
      return 0;
    }
    lVar12 = *(long *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar12 == 0) goto LAB_022c78a4;
    iVar1 = *(int *)(lVar12 + 0x18);
    iVar9 = *(int *)(lVar12 + 0x1c) - iVar1;
    if (iVar1 <= *(int *)(lVar12 + 0x1c)) {
      if (iVar9 < 2) {
        iVar9 = 1;
      }
      fVar2 = _UNK_00e20aec;
      if (_UNK_00e1feac / (float)iVar9 <= _UNK_00e20aec) {
        fVar2 = _UNK_00e1feac / (float)iVar9;
      }
      *(float *)(param_1 + 0x48) = fVar2;
      while( true ) {
        *(int *)(param_1 + 0x4c) = iVar1 + 1;
        if (lVar12 == 0) break;
        if (*(int *)(lVar12 + 0x1c) < iVar1 + 1) {
          if (lVar13 != 0) goto LAB_022c7840;
          break;
        }
        lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar8);
        System_Object___ctor_4870e5c(lVar12,0);
        plVar14 = (long *)(param_1 + 0x40);
        *plVar14 = lVar12;
        thunk_FUN_02134474(plVar14,lVar12);
        if (*plVar14 == 0) break;
        *(undefined8 *)(*plVar14 + 0x20) = *(undefined8 *)(param_1 + 0x30);
        thunk_FUN_02134474();
        lVar12 = *(long *)(param_1 + 0x40);
        if (lVar12 == 0) break;
        iVar9 = *(int *)(param_1 + 0x4c);
        uVar10 = *(undefined8 *)puVar3;
        uVar17 = *(undefined4 *)(param_1 + 0x48);
        *(undefined1 *)(lVar12 + 0x18) = 0;
        *(int *)(lVar12 + 0x10) = iVar9 + -1;
        *(int *)(lVar12 + 0x14) = iVar9;
        uVar10 = thunk_FUN_0216e89c(uVar10);
        System_Action_float____ctor_35f1448(uVar10,lVar12,*(undefined8 *)puVar6,0);
        if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar12 = Dino_BusSand_App_Tween__Value_2160f64(uVar17,uVar10,0);
        if (((lVar12 == 0) ||
            (lVar12 = Dino_BusSand_App_Tween__SetEase_2160eb0(lVar12,2,0), lVar12 == 0)) ||
           (lVar12 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar12,1,0), lVar12 == 0)) break;
        lVar12 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar12,lVar13,0);
        lVar16 = *plVar14;
        uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar10,lVar16,*(undefined8 *)puVar7,0);
        if (lVar12 == 0) break;
        Dino_BusSand_App_Tween__OnDone_2160edc(lVar12,uVar10,0);
LAB_022c7564:
        lVar12 = *(long *)(param_1 + 0x40);
        if (lVar12 == 0) break;
        if (*(char *)(lVar12 + 0x18) == '\0') {
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
          if ((uVar11 & 1) != 0) {
            *(undefined8 *)(param_1 + 0x18) = 0;
            thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
            uVar17 = 3;
            goto LAB_022c7878;
          }
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b94e == '\0') {
          FUN_02132f7c(PTR_DAT_04cad568);
          cRam0000000004f9b94e = '\x01';
        }
        lVar12 = *(long *)puVar4;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar12 = *(long *)puVar4;
        }
        lVar12 = **(long **)(lVar12 + 0xb8);
        if (lVar12 == 0) {
          if (lVar13 == 0) break;
        }
        else {
          if ((lVar13 == 0) || (*(long *)(lVar13 + 0x38) == 0)) break;
          iVar1 = *(int *)(param_1 + 0x4c);
          iVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_FinalPoint_2229364
                            (*(long *)(lVar13 + 0x38),0);
          if (iVar9 < 2) {
            iVar9 = 1;
          }
          Dino_BusSand_GameAudio__UiTick_2383128((float)iVar1 / (float)iVar9,lVar12,0);
        }
        if (*(long *)(lVar13 + 0x38) == 0) break;
        uVar11 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsSpecial_2229b68
                           (*(long *)(lVar13 + 0x38),*(undefined4 *)(param_1 + 0x4c),0);
        if ((uVar11 & 1) != 0) {
          if (*(long *)(lVar13 + 0x38) == 0) break;
          Dino_BusSand_App_Meta_ClimbTowerFeature__RecordRise_222b0cc
                    (*(long *)(lVar13 + 0x38),*(undefined4 *)(param_1 + 0x4c),0);
          Dino_BusSand_App_UI_TowerEventPanel__Refresh_21c6014(lVar13);
          uVar10 = *(undefined8 *)(lVar13 + 0x50);
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UI_UiMotion__Punch_2283d78(_UNK_00e20390,_UNK_00e206e4,uVar10,0,0,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b94e == '\0') {
            FUN_02132f7c(PTR_DAT_04cad568);
            cRam0000000004f9b94e = '\x01';
          }
          lVar12 = *(long *)puVar4;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar12 = *(long *)puVar4;
          }
          if (**(long **)(lVar12 + 0xb8) != 0) {
            Dino_BusSand_GameAudio__Sparkle_2382d28(**(long **)(lVar12 + 0xb8),0);
          }
        }
        *(undefined8 *)(param_1 + 0x40) = 0;
        thunk_FUN_02134474((long *)(param_1 + 0x40),0);
        iVar1 = *(int *)(param_1 + 0x4c);
        lVar12 = *(long *)(param_1 + 0x30);
      }
      goto LAB_022c78a4;
    }
    lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caff30);
    System_Object___ctor_4870e5c(lVar12,0);
    plVar14 = (long *)(param_1 + 0x38);
    *plVar14 = lVar12;
                    /* try { // try from 022c727c to 023c728b has its CatchHandler @ 022c72e4 */
    thunk_FUN_02134474(plVar14,lVar12);
    if (*plVar14 == 0) goto LAB_022c78a4;
    uVar10 = *(undefined8 *)puVar3;
    uVar15 = *(undefined8 *)(param_1 + 0x30);
    *(undefined1 *)(*plVar14 + 0x10) = 0;
    uVar10 = thunk_FUN_0216e89c(uVar10);
                    /* try { // try from 022c72a4 to 023c72ab has its CatchHandler @ 022c72d0 */
                    /* try { // try from 022c72ac to 023c72f7 has its CatchHandler @ 022c7224 */
    System_Action_float____ctor_35f1448(uVar10,uVar15,*(undefined8 *)PTR_DAT_04caff18,0);
    if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* catch() { ... } // from try @ 022c72a4 with catch @ 022c72d0 */
    lVar12 = Dino_BusSand_App_Tween__Value_2160f64(0x3f000000,uVar10,0);
                    /* catch() { ... } // from try @ 022c727c with catch @ 022c72e4 */
                    /* try { // try from 022c72f8 to 023c734f has its CatchHandler @ 022c72f8
                       catch() { ... } // from try @ 022c72f8 with catch @ 022c72f8
                       catch() { ... } // from try @ 022c7380 with catch @ 022c72f8 */
    if (((lVar12 == 0) ||
        (lVar12 = Dino_BusSand_App_Tween__SetEase_2160eb0(lVar12,1,0), lVar12 == 0)) ||
       (lVar12 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar12,1,0), lVar12 == 0))
    goto LAB_022c78a4;
    lVar12 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar12,lVar13,0);
    lVar16 = *plVar14;
    uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar10,lVar16,*(undefined8 *)PTR_DAT_04caff28,0);
    if (lVar12 == 0) goto LAB_022c78a4;
                    /* try { // try from 022c7350 to 023c735f has its CatchHandler @ 022c73b8 */
    Dino_BusSand_App_Tween__OnDone_2160edc(lVar12,uVar10,0);
  }
  else {
    if (iVar9 != 2) {
      if (iVar9 != 3) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
                    /* try { // try from 022c7378 to 023c737f has its CatchHandler @ 022c73a4 */
      goto LAB_022c7564;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  plVar14 = (long *)(param_1 + 0x38);
  if (*plVar14 != 0) {
    if (*(char *)(*plVar14 + 0x10) == '\0') {
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
      if ((uVar11 & 1) != 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
                    /* catch() { ... } // from try @ 022c74a4 with catch @ 022c746c */
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        uVar17 = 2;
LAB_022c7878:
        *(undefined4 *)(param_1 + 0x10) = uVar17;
        return 1;
      }
    }
    if (lVar13 != 0) {
      uVar10 = *(undefined8 *)(lVar13 + 0x50);
      if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
                    /* try { // try from 022c749c to 023c74a3 has its CatchHandler @ 022c74dc */
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 022c74a4 to 023c74ef has its CatchHandler @ 022c746c */
      Dino_BusSand_App_UI_UiMotion__Shake_2290ce8(0x41600000,_UNK_00e20324,uVar10,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
                    /* catch() { ... } // from try @ 022c749c with catch @ 022c74dc */
        cRam0000000004f9b94e = '\x01';
      }
      lVar12 = *(long *)puVar4;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar12 = *(long *)puVar4;
      }
      if (**(long **)(lVar12 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__Nope_2383330(**(long **)(lVar12 + 0xb8),0);
      }
      if (*(long *)(lVar13 + 0x38) != 0) {
        Dino_BusSand_App_Meta_ClimbTowerFeature__RecordDecline_222b200(*(long *)(lVar13 + 0x38),0);
        *plVar14 = 0;
        thunk_FUN_02134474(plVar14,0);
LAB_022c7840:
        if (*(long *)(lVar13 + 0x38) != 0) {
          Dino_BusSand_App_Meta_ClimbTowerFeature__RecordLast_222b058(*(long *)(lVar13 + 0x38),0);
          Dino_BusSand_App_UI_TowerEventPanel__Refresh_21c6014(lVar13);
          *(undefined1 *)(lVar13 + 0x78) = 0;
          return 0;
        }
      }
    }
  }
LAB_022c78a4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

