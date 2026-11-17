/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$OnOpen
void Dino_BusSand_App_UI_StreakEventPanel__OnOpen (Dino_BusSand_App_UI_StreakEventPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022c1fec) */
/* WARNING: Removing unreachable block (ram,0x022c1ff4) */
/* WARNING: Removing unreachable block (ram,0x022c1ffc) */
/* WARNING: Removing unreachable block (ram,0x022c2008) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$OnOpen
   void Dino_BusSand_App_UI_StreakEventPanel__OnOpen (Dino_BusSand_App_UI_StreakEventPanel_o*
   __this, Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakEventPanel__OnOpen_21bf9e8(long param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  char *pcVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  undefined8 uVar18;
  
  puVar2 = PTR_DAT_04cac668;
  if ((bRam0000000004f9badb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caf3e0);
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04cafb90);
    FUN_02132f7c(PTR_DAT_04cafb98);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cafba0);
    FUN_02132f7c(PTR_DAT_04cafba8);
                    /* try { // try from 022bfa98 to 023bfa9b has its CatchHandler @ 022bfaa8 */
    FUN_02132f7c(PTR_DAT_04cafbb0);
    FUN_02132f7c(PTR_DAT_04cafbb8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022bfa98 with catch @ 022bfaa8
                        */
    FUN_02132f7c(PTR_DAT_04cafbc0);
                    /* try { // try from 022bfab8 to 023bfabb has its CatchHandler @ 022bfac8 */
    FUN_02132f7c(PTR_DAT_04cafbc8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022bfab8 with catch @ 022bfac8
                        */
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9badb = 1;
  }
  puVar3 = PTR_DAT_04caf3e0;
                    /* try { // try from 022bfae4 to 023bfb13 has its CatchHandler @ 022bfb14 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar9 = Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4(*(undefined8 *)puVar3);
  plVar17 = (long *)(param_1 + 0x38);
  *plVar17 = lVar9;
  thunk_FUN_02134474(plVar17,lVar9);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022bfae4 with catch @ 022bfb14
                        */
  if (*plVar17 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(*plVar17,0);
  }
  puVar4 = PTR_DAT_04cafbc8;
  puVar3 = PTR_DAT_04cac498;
  plVar17 = (long *)(param_1 + 0x40);
  *plVar17 = lVar9;
  thunk_FUN_02134474(plVar17);
  puVar2 = PTR_DAT_04ca9ac8;
  if (param_2 == (long *)0x0) {
    bVar8 = true;
  }
  else {
                    /* try { // try from 022bfe74 to 023bfe7f has its CatchHandler @ 022bfe84 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022bfe50 with catch @ 022bfe80
                        */
    if (((*param_2 == *(long *)(PTR_DAT_04ca9ac8 + 0x28)) &&
        (pcVar10 = (char *)thunk_FUN_0216e9e4(param_2), *pcVar10 != '\0')) && (*plVar17 != 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022bfe48 with catch @ 022bfe84
                       catch(type#1 @ 00000000) { ... } // from try @ 022bfe74 with catch @ 022bfe84
                        */
                    /* try { // try from 022bfe88 to 023bfeef has its CatchHandler @ 022bfe88
                       catch(type#1 @ 00000000) { ... } // from try @ 022bfe88 with catch @ 022bfe88
                       catch(type#1 @ 00000000) { ... } // from try @ 022bfef4 with catch @ 022bfe88
                        */
      bVar8 = *(char *)(*plVar17 + 0x54) == '\0';
    }
    else {
      bVar8 = true;
    }
                    /* try { // try from 022bfb74 to 023bfbb3 has its CatchHandler @ 022bfbb4 */
    if (*param_2 == *(long *)(puVar2 + 0x28)) {
      uVar18 = *(undefined8 *)puVar4;
      pcVar10 = (char *)thunk_FUN_0216e9e4(param_2);
      puVar13 = (undefined8 *)PTR_DAT_04cafba8;
      if (*pcVar10 != '\0') {
        puVar13 = (undefined8 *)PTR_DAT_04cafbb0;
      }
      goto LAB_022bfbbc;
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022bfb74 with catch @ 022bfbb4
                        */
  uVar18 = *(undefined8 *)puVar4;
                    /* try { // try from 022bfbb8 to 023bfbf3 has its CatchHandler @ 022bfbb8
                       catch() { ... } // from try @ 022bfbb8 with catch @ 022bfbb8
                       catch() { ... } // from try @ 022bfbf8 with catch @ 022bfbb8 */
  puVar13 = (undefined8 *)PTR_DAT_04cafba8;
LAB_022bfbbc:
  puVar2 = PTR_DAT_04cad568;
  uVar14 = *puVar13;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_GameTracking__GoldenStreakImpression_221a688(uVar18,uVar14,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 022bfbf4 to 023bfbf7 has its CatchHandler @ 022bfc34 */
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022bfbf8 to 023bfc47 has its CatchHandler @ 022bfbb8 */
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_04cad330;
                    /* catch() { ... } // from try @ 022bfbf4 with catch @ 022bfc34 */
  if (**(long **)(lVar9 + 0xb8) != 0) {
    Dino_BusSand_GameAudio__Whoosh_2382bbc(_UNK_00e20170,**(long **)(lVar9 + 0xb8),0);
  }
  puVar4 = PTR_DAT_04cafbb8;
  puVar3 = PTR_DAT_04cafba0;
  uVar18 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 022bfc80 to 023bfc83 has its CatchHandler @ 022bfc98 */
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022bfc80 with catch @ 022bfc98
                        */
                    /* try { // try from 022bfca8 to 023bfcab has its CatchHandler @ 022bfcb8 */
  plVar17 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                              (0,0,0,0,0x3f800000,uVar18,*(undefined8 *)puVar4,*(undefined8 *)puVar3
                               ,0,0);
  puVar7 = PTR_DAT_04cafbc0;
  puVar6 = PTR_DAT_04cafb98;
  puVar5 = PTR_DAT_04cafb90;
  puVar4 = PTR_DAT_04cad948;
  puVar3 = PTR_DAT_04cad460;
  puVar2 = PTR_DAT_04caa458;
  if (plVar17 != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022bfca8 with catch @ 022bfcb8
                        */
    UnityEngine_UI_Image__set_preserveAspect_44afae0(plVar17,0,0);
    uVar18 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar17,0);
    Dino_BusSand_App_UI_UiKit__Stretch_2281f58(0,0,0,0,uVar18,0);
    (**(code **)(*plVar17 + 0x2c8))(plVar17,1,*(undefined8 *)(*plVar17 + 0x2d0));
    Dino_BusSand_App_UI_StreakEventPanel__BuildPath_21bfe98(param_1);
    Dino_BusSand_App_UI_StreakEventPanel__BuildHeader_21c0cdc(param_1);
    Dino_BusSand_App_UI_StreakEventPanel__ClearTheNotch_21c1710(param_1);
    uVar18 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Action___ctor_47b5ed0(uVar18,param_1,*(undefined8 *)puVar5,0);
    Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
              (param_1,*(undefined8 *)puVar3,uVar18,1,*(undefined8 *)puVar4,0);
    uVar18 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* try { // try from 022bfd90 to 023bfd93 has its CatchHandler @ 022bfda0 */
    System_Action___ctor_47b5ed0(uVar18,param_1,*(undefined8 *)puVar6,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022bfd90 with catch @ 022bfda0
                        */
    Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
              (param_1,*(undefined8 *)puVar7,uVar18,1,*(undefined8 *)puVar4,0);
    lVar9 = *(long *)(param_1 + 0x40);
    if (lVar9 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022bfdfc with catch @ 022bfe14
                        */
      Dino_BusSand_App_UI_StreakEventPanel__ShowBar_21c1aa0(param_1,0,0);
      if ((bRam0000000004f9bae8 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cafcd8);
        FUN_02132f7c(PTR_DAT_04cafce0);
        FUN_02132f7c(PTR_DAT_04cafce8);
        FUN_02132f7c(PTR_DAT_04cafc08);
        FUN_02132f7c(PTR_DAT_04caf398);
        FUN_02132f7c(PTR_DAT_04cafcf0);
        bRam0000000004f9bae8 = 1;
      }
      puVar6 = PTR_DAT_04cafcf0;
      puVar5 = PTR_DAT_04cafce8;
      puVar4 = PTR_DAT_04cafce0;
      puVar3 = PTR_DAT_04cafc08;
      puVar2 = PTR_DAT_04caf398;
      if (*(long *)(param_1 + 0x98) != 0) {
        iVar1 = *(int *)(*(long *)(param_1 + 0x98) + 0x18);
        if (0 < iVar1) {
          iVar16 = 0;
          do {
            if ((*(long *)(param_1 + 0x98) == 0) ||
               (lVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                                  (*(long *)(param_1 + 0x98),iVar16,*(undefined8 *)puVar4),
               lVar9 == 0)) goto LAB_022c206c;
            lVar15 = *(long *)(lVar9 + 0x18);
            puVar13 = (undefined8 *)puVar5;
            if (-1 < iVar16) {
              puVar13 = (undefined8 *)puVar3;
            }
            uVar18 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*puVar13,0);
            if (lVar15 == 0) goto LAB_022c206c;
            UnityEngine_UI_Image__set_sprite_44a7258(lVar15,uVar18,0);
            plVar17 = *(long **)(lVar9 + 0x38);
            puVar13 = (undefined8 *)puVar6;
            if (-1 < iVar16) {
              puVar13 = (undefined8 *)puVar2;
            }
            lVar15 = Dino_BusSand_App_UI_UiSkin__Mat_22a2b68(*puVar13,0);
            if (lVar15 == 0) {
              plVar11 = *(long **)(lVar9 + 0x38);
              if (plVar11 == (long *)0x0) goto LAB_022c206c;
              lVar15 = (**(code **)(*plVar11 + 0x528))(plVar11,*(undefined8 *)(*plVar11 + 0x530));
            }
            if (plVar17 == (long *)0x0) goto LAB_022c206c;
            (**(code **)(*plVar17 + 0x538))(plVar17,lVar15,*(undefined8 *)(*plVar17 + 0x540));
            if ((*(long *)(lVar9 + 0x20) == 0) ||
               (lVar15 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar9 + 0x20),0),
               lVar15 == 0)) goto LAB_022c206c;
            UnityEngine_GameObject__SetActive_43c1408(lVar15,-1 < iVar16,0);
            if ((*(long *)(lVar9 + 0x28) == 0) ||
               (lVar9 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar9 + 0x28),0),
               lVar9 == 0)) goto LAB_022c206c;
            UnityEngine_GameObject__SetActive_43c1408(lVar9,iVar16 < 0,0);
            iVar16 = iVar16 + 1;
          } while (iVar1 != iVar16);
        }
        lVar9 = *(long *)(param_1 + 0x60);
        if (lVar9 != 0) {
          if ((bRam0000000004fa8a8a & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7bc8,0);
            bRam0000000004fa8a8a = 1;
          }
          if (lVar9 != 0) {
            lVar9 = *(long *)(lVar9 + 0x10);
            if (lVar9 != 0) {
              if (pcRam0000000004fa8ae0 == (code *)0x0) {
                pcRam0000000004fa8ae0 = (code *)FUN_02132f40(&UNK_00e51f73);
              }
              (*pcRam0000000004fa8ae0)(lVar9,&stack0xffffffffffffffe8);
              return;
            }
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
LAB_022c206c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_UI_StreakEventPanel__ShowBar_21c1aa0
              (param_1,*(undefined4 *)(lVar9 + 0x48),*(undefined4 *)(lVar9 + 0x4c));
    if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 022bfddc to 023bfddf has its CatchHandler @ 022bfdec */
      Dino_BusSand_App_UI_StreakEventPanel__RefreshPath_21c1e30
                (param_1,*(undefined4 *)(*(long *)(param_1 + 0x40) + 0x48));
      if (*(long *)(param_1 + 0x40) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022bfddc with catch @ 022bfdec
                        */
        Dino_BusSand_App_UI_StreakEventPanel__ScrollTo_21c2070
                  (param_1,*(undefined4 *)(*(long *)(param_1 + 0x40) + 0x48));
        if (bVar8) {
                    /* try { // try from 022bfdfc to 023bfdff has its CatchHandler @ 022bfe14 */
          return;
        }
        lVar9 = Dino_BusSand_App_UI_StreakEventPanel__PayWin_21c21bc(param_1);
        uVar12 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
                    /* try { // try from 022bfe48 to 023bfe4b has its CatchHandler @ 022bfe84 */
                    /* try { // try from 022bfe50 to 023bfe57 has its CatchHandler @ 022bfe80 */
        if ((uVar12 & 1) != 0) {
          if (lVar9 == 0) {
            thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
            uVar14 = thunk_FUN_0216e89c();
            uVar18 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
            System_NullReferenceException___ctor_483267c(uVar14,uVar18,0);
          }
          else {
            uVar12 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
            if ((uVar12 & 1) != 0) {
              if ((bRam0000000004fa84ef & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cf7890);
                bRam0000000004fa84ef = 1;
              }
              if (param_1 != 0) {
                lVar15 = *(long *)(param_1 + 0x10);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
                }
                if (pcRam0000000004fa8560 == (code *)0x0) {
                  pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000004fa8560)(lVar15,lVar9);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            thunk_FUN_021985a8(PTR_DAT_04caa3a8);
            uVar14 = thunk_FUN_0216e89c();
            uVar18 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
            System_ArgumentException___ctor_47b660c(uVar14,uVar18,0);
          }
          uVar18 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar14,uVar18);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

