/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<WinAnimation>d__75$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__WinAnimation_d__75__MoveNext (Dino_BusSand_App_UI_BattleRoyaleScenePanel__WinAnimation_d__75_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<WinAnimation>d__75$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__WinAnimation_d__75__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel__WinAnimation_d__75_o* __this, const MethodInfo*
   method); */

ulong Dino_BusSand_App_UI_BattleRoyaleScenePanel__WinAnimation_d__75__MoveNext_2198ecc
                (undefined1 param_1 [16],ulong param_2,float param_3,long param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined *puVar9;
  undefined *puVar10;
  float fVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined4 uVar19;
  long lVar20;
  long *plVar21;
  int iVar22;
  int iVar23;
  float extraout_s0;
  float fVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
                    /* try { // try from 02298f04 to 02398f0f has its CatchHandler @ 02298f30 */
  if ((bRam0000000004f9b9dc & 1) == 0) {
                    /* try { // try from 02298f10 to 02398f5b has its CatchHandler @ 02298ec8 */
    FUN_02132f7c(PTR_DAT_04cadef0);
    FUN_02132f7c(PTR_DAT_04cad688);
    FUN_02132f7c(PTR_DAT_04cad698);
                    /* catch() { ... } // from try @ 02298f04 with catch @ 02298f30 */
    FUN_02132f7c(PTR_DAT_04cad6a8);
    FUN_02132f7c(PTR_DAT_04cad6d0);
    FUN_02132f7c(PTR_DAT_04cadf80);
    FUN_02132f7c(PTR_DAT_04cad708);
    FUN_02132f7c(PTR_DAT_04cadf88);
    FUN_02132f7c(PTR_DAT_04cad7c8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae3a0);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cae360);
    bRam0000000004f9b9dc = 1;
  }
  puVar9 = PTR_DAT_04ca9ae8;
  iVar12 = *(int *)(param_4 + 0x10);
  uVar13 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  if (iVar12 == 2) {
    uVar19 = 0xffffffff;
LAB_022995d8:
                    /* try { // try from 022995d8 to 023995e3 has its CatchHandler @ 02299688 */
    *(undefined4 *)(param_4 + 0x10) = uVar19;
                    /* try { // try from 022995e4 to 023996a7 has its CatchHandler @ 022995a0 */
    return uVar13;
  }
  lVar20 = *(long *)(param_4 + 0x20);
  if (iVar12 != 1) {
    if (iVar12 != 0) {
      return 0;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar20 != 0) {
                    /* catch() { ... } // from try @ 022990e4 with catch @ 02298fe0 */
      uVar13 = 0;
      if (*(long *)(lVar20 + 0x40) != 0) {
        uVar13 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150
                           (*(long *)(lVar20 + 0x40),0);
        if (*(long *)(lVar20 + 0x40) != 0) {
          iVar2 = (int)uVar13;
          iVar12 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc
                             (*(long *)(lVar20 + 0x40),0);
          plVar21 = (long *)(param_4 + 0x28);
          *plVar21 = 0;
          thunk_FUN_02134474(plVar21,0);
          puVar10 = PTR_DAT_04cadef0;
          puVar9 = PTR_DAT_04cad7c8;
          fVar8 = _UNK_00e2099c;
          uVar19 = _UNK_00e20844;
          fVar7 = _UNK_00e20840;
          fVar6 = _UNK_00e207cc;
          fVar25 = _UNK_00e205f8;
          fVar5 = _UNK_00e20328;
          fVar4 = _UNK_00e20174;
          fVar3 = _UNK_00e1fea8;
          lVar14 = *(long *)(lVar20 + 0x80);
          uVar13 = 0;
          if (lVar14 != 0) {
                    /* try { // try from 02299070 to 0239907b has its CatchHandler @ 02299124 */
            iVar23 = 0;
            iVar22 = 0;
            fVar27 = 0.0;
            fVar30 = 0.0;
            fVar28 = 0.5;
            iVar12 = iVar12 + -1;
            do {
              if (*(int *)(lVar14 + 0x18) <= iVar22) {
                uVar17 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__MenFall_219653c(fVar28,lVar20);
                UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar20,uVar17,0);
                uVar13 = 0;
                if (*(long *)(lVar20 + 0x90) != 0) {
                  fVar28 = fVar28 + _UNK_00e20170;
                  System_Collections_Generic_List_object___GetEnumerator_3a825f0
                            (&uStack_d8,*(long *)(lVar20 + 0x90),*(undefined8 *)PTR_DAT_04cad6d0);
                  puVar9 = PTR_DAT_04cad698;
                  fVar5 = _UNK_00e2094c;
                  fVar4 = _UNK_00e2075c;
                  fVar3 = _UNK_00e20448;
                  lStack_b0 = lStack_c8;
                  uStack_b8 = puStack_d0;
                  uStack_c0 = uStack_d8;
                  uStack_d8 = 0;
                  puStack_d0 = &uStack_c0;
                  while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                            (&uStack_c0,*(undefined8 *)puVar9), lVar14 = lStack_b0,
                        (uVar13 & 1) != 0) {
                    if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    lVar15 = UnityEngine_Component__get_gameObject_43bcde8(lStack_b0,0);
                    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    uVar13 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar15,0);
                    if ((uVar13 & 1) != 0) {
                      uVar17 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__FallRoutine_21966e8
                                         (fVar28,uVar13,lVar14);
                      UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar20,uVar17,0);
                      plVar21 = *(long **)(lVar20 + 0xa0);
                      fVar25 = fVar28 + fVar4 + fVar5;
                      if (fVar25 <= fVar27) {
                        fVar25 = fVar27;
                      }
                      fVar27 = fVar25;
                      if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                      dVar26 = (double)(**(code **)(*plVar21 + 0x1b8))
                                                 (plVar21,*(undefined8 *)(*plVar21 + 0x1c0));
                      fVar28 = fVar28 + (float)dVar26 * fVar7 + fVar3;
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                            (&uStack_c0,*(undefined8 *)PTR_DAT_04cad688);
                  if (iVar2 != iVar12) {
                    return 0;
                  }
                    /* catch() { ... } // from try @ 022995e4 with catch @ 022995a0 */
                  uVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
                  UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(fVar27,uVar17,0);
                  *(undefined8 *)(param_4 + 0x18) = uVar17;
                  thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),uVar17);
                  uVar19 = 1;
                  uVar13 = 1;
                  goto LAB_022995d8;
                }
                break;
              }
              lVar14 = System_Collections_Generic_List_object___get_Item_3a81924
                                 (lVar14,iVar22,*(undefined8 *)puVar9);
                    /* try { // try from 022990b8 to 023990c3 has its CatchHandler @ 02299110 */
              uVar13 = 0;
              if (lVar14 == 0) break;
              lVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0);
              uVar13 = 0;
              if (lVar15 == 0) break;
              uVar13 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar15,0);
              fVar24 = (float)param_2;
              if ((uVar13 & 1) != 0) {
                    /* try { // try from 022990d8 to 023990e3 has its CatchHandler @ 02299108 */
                lVar15 = *(long *)(lVar20 + 0x88);
                uVar13 = 0;
                if (lVar15 == 0) break;
                    /* try { // try from 022990e4 to 02399133 has its CatchHandler @ 02298fe0 */
                fVar29 = param_3;
                if (iVar22 < *(int *)(lVar15 + 0x18)) {
                  lVar15 = System_Collections_Generic_List_object___get_Item_3a81924
                                     (lVar15,iVar22,*(undefined8 *)PTR_DAT_04cadf88);
                  uVar13 = 0;
                  if (lVar15 == 0) break;
                    /* catch() { ... } // from try @ 022990d8 with catch @ 02299108 */
                  lVar16 = *(long *)puVar10;
                  iVar1 = *(int *)(lVar15 + 0x10);
                    /* catch() { ... } // from try @ 022990b8 with catch @ 02299110 */
                  fVar29 = param_3;
                  if (*(int *)(lVar16 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar16 = *(long *)puVar10;
                    fVar29 = param_3;
                  }
                    /* catch() { ... } // from try @ 02299070 with catch @ 02299124 */
                  if (iVar1 == **(int **)(lVar16 + 0xb8)) {
                    *plVar21 = lVar14;
                    thunk_FUN_02134474(plVar21,lVar14);
                  }
                }
                param_3 = fVar24;
                uVar17 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__JumpTarget_219631c
                                   (lVar20,lVar14,iVar2 == iVar12);
                fVar24 = 0.0;
                if (iVar23 != 0) {
                  fVar24 = extraout_s0 - fVar30;
                }
                if (iVar2 != iVar12) {
                  fVar24 = extraout_s0;
                }
                fVar11 = extraout_s0;
                if (iVar2 != iVar12 || iVar23 != 0) {
                  fVar11 = fVar30;
                }
                fVar30 = fVar11;
                uVar17 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__Jump_21965e0
                                   (fVar28,fVar24,param_3,fVar29,uVar17,lVar14);
                    /* catch() { ... } // from try @ 022991f4 with catch @ 022991a0 */
                UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar20,uVar17,0);
                fVar29 = fVar28 + fVar6 + fVar3 + fVar4 + fVar25;
                fVar24 = fVar29;
                if (fVar29 <= fVar27) {
                  fVar24 = fVar27;
                }
                fVar27 = fVar24;
                if (iVar23 == 0) {
                    /* try { // try from 022991f4 to 02399253 has its CatchHandler @ 022991a0 */
                  uVar17 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__PlaySfx_2196498
                                     (*(undefined8 *)PTR_DAT_04cae360);
                  UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar20,uVar17,0);
                  lVar14 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__get_Overlay_2192fd0();
                  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
                  }
                    /* catch() { ... } // from try @ 022991ec with catch @ 02299240 */
                  uVar13 = UnityEngine_Object__op_Inequality_43c8dec(lVar14,0,0);
                  if ((uVar13 & 1) != 0) {
                    if (lVar14 == 0) break;
                    Dino_BusSand_App_UI_BattleRoyalePanel__PlayWinChangeStage_218dbf0(fVar29,lVar14)
                    ;
                  }
                  plVar18 = *(long **)(lVar20 + 0xa0);
                  uVar13 = 0;
                  if (plVar18 == (long *)0x0) break;
                    /* try { // try from 02299260 to 02399263 has its CatchHandler @ 0229926c */
                  dVar26 = (double)(**(code **)(*plVar18 + 0x1b8))
                                             (plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02299260 with catch @ 0229926c
                        */
                    /* try { // try from 02299270 to 0239929f has its CatchHandler @ 02299270
                       catch() { ... } // from try @ 02299270 with catch @ 02299270
                       catch() { ... } // from try @ 022992ac with catch @ 02299270 */
                  param_2 = 0;
                  fVar24 = (float)dVar26 + 0.0;
                }
                else {
                  fVar29 = (float)iVar23 * fVar8 + fVar5;
                  fVar24 = fVar7;
                  if (fVar7 <= fVar29) {
                    fVar24 = fVar29;
                  }
                  param_2 = (ulong)(uint)fVar24;
                  param_3 = fVar8;
                  fVar24 = (float)Dino_BusSand_App_UI_BattleRoyaleScenePanel__Rand_2196448
                                            (uVar19,lVar20);
                    /* try { // try from 022991ec to 023991f3 has its CatchHandler @ 02299240 */
                }
                fVar28 = fVar28 + fVar24;
                iVar23 = iVar23 + 1;
              }
              lVar14 = *(long *)(lVar20 + 0x80);
              iVar22 = iVar22 + 1;
              uVar13 = 0;
            } while (lVar14 != 0);
          }
        }
      }
    }
    goto LAB_0229928c;
  }
  *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
                    /* try { // try from 022992a0 to 023992ab has its CatchHandler @ 022992cc */
  uVar17 = *(undefined8 *)(param_4 + 0x28);
                    /* try { // try from 022992ac to 023992e7 has its CatchHandler @ 02299270 */
  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar13 = UnityEngine_Object__op_Inequality_43c8dec(uVar17,0,0);
  if ((uVar13 & 1) != 0) {
                    /* catch() { ... } // from try @ 022992a0 with catch @ 022992cc */
    uVar13 = 0;
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_0229928c;
    lVar14 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_4 + 0x28),0);
    uVar13 = 0;
    if (lVar14 == 0) goto LAB_0229928c;
    uVar13 = UnityEngine_GameObject__SetActive_43c1408(lVar14,0,0);
  }
                    /* try { // try from 022992e8 to 0239935b has its CatchHandler @ 022992e8
                       catch() { ... } // from try @ 022992e8 with catch @ 022992e8
                       catch() { ... } // from try @ 02299370 with catch @ 022992e8 */
  if (lVar20 != 0) {
    lVar14 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__get_Overlay_2192fd0();
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar9);
    }
    uVar13 = UnityEngine_Object__op_Inequality_43c8dec(lVar14,0,0);
    if ((uVar13 & 1) != 0) {
      if (lVar14 == 0) goto LAB_0229928c;
      Dino_BusSand_App_UI_BattleRoyalePanel__PlayBigWin_218dce0(0x3f000000,lVar14);
    }
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    puVar10 = PTR_DAT_04cad1b0;
                    /* try { // try from 0229935c to 0239936f has its CatchHandler @ 02299384 */
    uVar17 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 02299370 to 0239939b has its CatchHandler @ 022992e8 */
    uVar13 = UnityEngine_Object__op_Inequality_43c8dec(uVar17,0,0);
    lVar14 = 0;
                    /* catch() { ... } // from try @ 0229935c with catch @ 02299384 */
    if ((uVar13 & 1) != 0) {
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0);
        cRam0000000004f9b94d = '\x01';
      }
      uVar13 = 0;
      if (**(long **)(*(long *)puVar10 + 0xb8) == 0) goto LAB_0229928c;
      lVar14 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                         (**(long **)(*(long *)puVar10 + 0xb8),*(undefined8 *)PTR_DAT_04cae3a0);
    }
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar13 = UnityEngine_Object__op_Inequality_43c8dec(lVar14,0,0);
    if ((uVar13 & 1) != 0) {
      if (lVar14 == 0) goto LAB_0229928c;
      Dino_BusSand_App_UI_BattleRoyaleResultPanel__StartBorn_2190214
                (0x3f000000,lVar14,*(undefined8 *)(param_4 + 0x28));
    }
    uVar17 = *(undefined8 *)(lVar20 + 0x48);
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar13 = UnityEngine_Object__op_Inequality_43c8dec(uVar17,0,0);
    if ((uVar13 & 1) == 0) {
      return 0;
    }
    uVar13 = 0;
    if (*(long *)(lVar20 + 0x48) != 0) {
      UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar20 + 0x48),0);
      uVar17 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__ScaleTo_21967d4
                         (_UNK_00e20178,0x3f000000,0xbf800000,0,0,0);
      *(undefined8 *)(param_4 + 0x18) = uVar17;
      thunk_FUN_02134474();
      uVar13 = 1;
      uVar19 = 2;
      goto LAB_022995d8;
    }
  }
LAB_0229928c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224(uVar13);
}

