/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$OnClick
void Dino_BusSand_App_UI_BattleRoyaleHallButton__OnClick (Dino_BusSand_App_UI_BattleRoyaleHallButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02a45de8) */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$OnClick
   void Dino_BusSand_App_UI_BattleRoyaleHallButton__OnClick
   (Dino_BusSand_App_UI_BattleRoyaleHallButton_o* __this, const MethodInfo* method); */

long * Dino_BusSand_App_UI_BattleRoyaleHallButton__OnClick_218bf44(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 extraout_x1;
  long lVar17;
  uint uVar18;
  long *plVar19;
  char cVar20;
  long lVar21;
  uint uVar22;
  long lStack_c8;
  long *plStack_c0;
  undefined1 *puStack_b8;
  undefined8 *puStack_b0;
  undefined4 uStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  undefined1 auStack_70 [4];
  char acStack_6c [4];
  undefined8 uStack_68;
  
  if ((bRam0000000004f9b983 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cadd20);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 0228bfa0 to 0238bfaf has its CatchHandler @ 0228c024 */
    FUN_02132f7c(PTR_DAT_04cadd28);
    bRam0000000004f9b983 = 1;
  }
                    /* try { // try from 0228bfb0 to 0238c047 has its CatchHandler @ 0228be34 */
  lVar9 = Dino_BusSand_App_UI_BattleRoyaleUi__get_Core_2199bb0(0);
  if (lVar9 == 0) {
    return (long *)0x0;
  }
  uVar10 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(4,0);
  puVar1 = PTR_DAT_04caba50;
  if ((uVar10 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar1;
    }
    uVar16 = **(undefined8 **)(lVar9 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    plVar11 = (long *)UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
    if (((ulong)plVar11 & 1) == 0) {
      return plVar11;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar1;
    }
    lVar21 = **(long **)(lVar9 + 0xb8);
    plVar11 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    Dino_BusSand_App_Meta_SystemOpen__UnlockLevel_2242f94(4,0);
    lVar9 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffdc);
    if (plVar11 != (long *)0x0) {
      if ((lVar9 != 0) &&
         (lVar12 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0)) {
        uVar16 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar16,0);
      }
      if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar11[4] = lVar9;
      thunk_FUN_02134474(plVar11 + 4,lVar9);
      uVar16 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                         (*(undefined8 *)PTR_DAT_04cadd28,plVar11,0);
      if (lVar21 != 0) {
                    /* try { // try from 0228c1a0 to 0238c2b3 has its CatchHandler @ 0228c1a0
                       catch() { ... } // from try @ 0228c1a0 with catch @ 0228c1a0
                       catch() { ... } // from try @ 0228c308 with catch @ 0228c1a0
                       catch() { ... } // from try @ 0228c428 with catch @ 0228c1a0
                       catch() { ... } // from try @ 0228c4ec with catch @ 0228c1a0
                       catch() { ... } // from try @ 0228c650 with catch @ 0228c1a0
                       catch() { ... } // from try @ 0228c880 with catch @ 0228c1a0 */
        plVar11 = (long *)Dino_BusSand_App_GameApp__Toast_2166a6c(lVar21,uVar16,0);
        return plVar11;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  plVar11 = (long *)Dino_BusSand_App_Meta_BattleRoyaleCore__get_State_2221138(lVar9,0);
  iVar6 = (int)plVar11;
  if (iVar6 == 0) {
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(lVar9,param_1,*(undefined8 *)PTR_DAT_04cadd20,0);
    uVar5 = 0;
  }
  else {
    if (iVar6 != 4) {
      if (iVar6 != 1) {
        return plVar11;
      }
      lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(lVar9,param_1,*(undefined8 *)PTR_DAT_04cadd20,0);
                    /* catch() { ... } // from try @ 0228bfa0 with catch @ 0228c024 */
                    /* catch() { ... } // from try @ 0228bf3c with catch @ 0228c028 */
      uVar16 = 0;
                    /* catch() { ... } // from try @ 0228bed0 with catch @ 0228c02c */
      if ((bRam0000000004f9b9f1 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0);
        FUN_02132f7c(PTR_DAT_04cae098);
        FUN_02132f7c(PTR_DAT_04cadd48);
        FUN_02132f7c(PTR_DAT_04cae578);
        FUN_02132f7c(PTR_DAT_04cae580);
        FUN_02132f7c(PTR_DAT_04cae588);
        FUN_02132f7c(PTR_DAT_04cae590);
        bRam0000000004f9b9f1 = 1;
        uVar16 = extraout_x1;
      }
      puVar1 = PTR_DAT_04ca9ae8;
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0,uVar16);
        cRam0000000004f9b94d = '\x01';
      }
      lVar21 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      plVar11 = (long *)UnityEngine_Object__op_Equality_43c6f30(lVar21,0,0);
      if (((ulong)plVar11 & 1) != 0) {
LAB_0229bf80:
        if (lVar9 == 0) {
          return plVar11;
        }
                    /* WARNING: Could not recover jumptable at 0x0229bf9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar11 = (long *)(**(code **)(lVar9 + 0x18))
                                    (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
        return plVar11;
      }
      lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae098);
      Dino_BusSand_App_UI_BattleRoyaleScenePanel_Param___ctor_2191eec(lVar12,0);
      if ((lVar12 != 0) && (*(undefined4 *)(lVar12 + 0x10) = 0, lVar21 != 0)) {
        Dino_BusSand_App_UI_UIManager__Open_object__2945314
                  (lVar21,*(undefined8 *)PTR_DAT_04cae590,2,lVar12,*(undefined8 *)PTR_DAT_04cae580);
        lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cadd48);
        Dino_BusSand_App_UI_BattleRoyalePanel_Param___ctor_218cef0(lVar12,0);
        if (lVar12 != 0) {
          *(undefined4 *)(lVar12 + 0x10) = 0;
          *(long *)(lVar12 + 0x18) = lVar9;
          thunk_FUN_02134474((long *)(lVar12 + 0x18),lVar9);
          uVar16 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                             (lVar21,*(undefined8 *)PTR_DAT_04cae588,3,lVar12,
                              *(undefined8 *)PTR_DAT_04cae578);
          lVar21 = *(long *)puVar1;
          if (*(int *)(lVar21 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar21);
          }
          plVar11 = (long *)UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
          if (((ulong)plVar11 & 1) == 0) {
            return plVar11;
          }
          plVar11 = (long *)Dino_BusSand_App_UI_BattleRoyaleUi__CloseScene_219bfb4();
          goto LAB_0229bf80;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(lVar9,param_1,*(undefined8 *)PTR_DAT_04cadd20,0);
    uVar5 = 1;
  }
  if ((bRam0000000004f9b9f6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,lVar9,0);
    FUN_02132f7c(PTR_DAT_04cae3b0);
    FUN_02132f7c(PTR_DAT_04cae5b0);
    FUN_02132f7c(PTR_DAT_04cae5b8);
    FUN_02132f7c(PTR_DAT_04cae5c0);
    bRam0000000004f9b9f6 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar21 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar11 = (long *)UnityEngine_Object__op_Equality_43c6f30(lVar21,0,0);
  if (((ulong)plVar11 & 1) != 0) {
    if (lVar9 == 0) {
      return plVar11;
    }
                    /* WARNING: Could not recover jumptable at 0x0229c6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar11 = (long *)(**(code **)(lVar9 + 0x18))
                                (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
    return plVar11;
  }
  if (lVar21 == 0) {
LAB_0229c75c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  plVar11 = (long *)Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                              (lVar21,*(undefined8 *)PTR_DAT_04cae5b0);
  if (((ulong)plVar11 & 1) != 0) {
    return plVar11;
  }
  lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cae3b0);
  System_Object___ctor_4870e5c(lVar12,0);
  if (lVar12 == 0) goto LAB_0229c75c;
  *(undefined1 *)(lVar12 + 0x11) = uVar5;
  *(long *)(lVar12 + 0x18) = lVar9;
  thunk_FUN_02134474((long *)(lVar12 + 0x18),lVar9);
  lVar9 = *(long *)PTR_DAT_04cae5c0;
  lVar17 = *(long *)PTR_DAT_04cae5b8;
  if (*(long *)(lVar17 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cae1a0);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cabab8);
    FUN_02132f7c(PTR_DAT_04cabac0);
    FUN_02132f7c(PTR_DAT_04cabac8);
    FUN_02132f7c(PTR_DAT_04cae1a8);
    FUN_02132f7c(PTR_DAT_04cacf88);
    FUN_02132f7c(PTR_DAT_04cacf90);
    FUN_02132f7c(PTR_DAT_04cad3f0);
    FUN_02132f7c(PTR_DAT_04cad3f8);
    FUN_02132f7c(PTR_DAT_04cab4a0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cc5280);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cb4ce0);
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04cabde0);
    FUN_02132f7c(PTR_DAT_04cabae0);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cabf58);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cab188);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cc5288);
    if (*(long *)(lVar17 + 0x38) == 0) {
      FUN_0216b4cc(lVar17);
    }
  }
  puVar1 = PTR_DAT_04ca9ac8;
  uStack_68 = 0;
  acStack_6c[0] = '\0';
  auStack_70[0] = 0;
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  lStack_80 = 0;
  uVar16 = *(undefined8 *)PTR_DAT_04cc5280;
  uStack_98 = 0;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar11 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar16,0);
  uVar16 = System_Type__GetTypeFromHandle_483f0b4(**(undefined8 **)(lVar17 + 0x38),0);
  if (plVar11 == (long *)0x0) goto LAB_02a45eb0;
  uVar7 = (**(code **)(*plVar11 + 0x2b8))(plVar11,uVar16,*(undefined8 *)(*plVar11 + 0x2c0));
  puVar2 = PTR_DAT_04ca9ae8;
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar16 = Dino_BusSand_App_UiAssets__Prefab_21513b8(lVar9,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
    if ((uVar10 & 1) != 0) {
      uVar16 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cc5288,lVar9,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogError_4361614(uVar16,0);
      return (long *)0x0;
    }
    uVar15 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar21,2,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    lVar13 = UnityEngine_Object__Instantiate_object__2805310
                       (uVar16,uVar15,0,*(undefined8 *)PTR_DAT_04cad390);
LAB_02a45794:
    if (lVar13 == 0) goto LAB_02a45eb0;
  }
  else {
    uVar16 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar21,2,0);
    if (*(int *)(*(long *)PTR_DAT_04cac4f8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac4f8);
    }
    lVar13 = Dino_BusSand_App_UI_KitPrefabs__Spawn_2181840(lVar9,uVar16,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
    if ((uVar10 & 1) == 0) goto LAB_02a45794;
    plVar11 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
    uVar16 = *(undefined8 *)PTR_DAT_04cad730;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(puVar1 + 0xe0));
    }
    lVar13 = System_Type__GetTypeFromHandle_483f0b4(uVar16,0);
    if (plVar11 == (long *)0x0) goto LAB_02a45eb0;
    if ((lVar13 != 0) &&
       (lVar14 = thunk_FUN_0216e7a0(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0)) {
      uVar16 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar16,0);
    }
    if ((int)plVar11[3] == 0) {
LAB_02a45eb4:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar11[4] = lVar13;
    thunk_FUN_02134474(plVar11 + 4,lVar13);
    lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c2310(lVar13,lVar9,plVar11,0);
    lVar14 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar21,2,0);
    if (((lVar14 == 0) ||
        (lVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0), lVar14 == 0)) ||
       (uVar8 = UnityEngine_GameObject__get_layer_43c1118(lVar14,0), lVar13 == 0))
    goto LAB_02a45eb0;
    UnityEngine_GameObject__set_layer_43c11cc(lVar13,uVar8,0);
    lVar14 = UnityEngine_GameObject__get_transform_43c1048(lVar13,0);
    uVar16 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar21,2,0);
    if (lVar14 == 0) goto LAB_02a45eb0;
    UnityEngine_Transform__SetParent_43d1e34(lVar14,uVar16,0,0);
  }
  UnityEngine_Object__set_name_43c72ec(lVar13,lVar9,0);
  plVar11 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar13,0);
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else if (*plVar11 != *(long *)PTR_DAT_04cabdb0) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(plVar11,0,0);
  if ((uVar10 & 1) != 0) {
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar1 = PTR_DAT_04cacfc0;
    if (plVar11 == (long *)0x0) goto LAB_02a45eb0;
    UnityEngine_RectTransform__set_anchorMin_43cf5e4
              (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
               (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],plVar11,0);
    if (cRam0000000004f9b949 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b949 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax_43cf768
              (*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
               *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),plVar11,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin_43cfe84
              (**(undefined4 **)(*(long *)puVar1 + 0xb8),
               (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],plVar11,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax_43d0018
              (**(undefined4 **)(*(long *)puVar1 + 0xb8),
               (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],plVar11,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    lVar14 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar14 + 0xc),*(undefined4 *)(lVar14 + 0x10),
               *(undefined4 *)(lVar14 + 0x14),plVar11,0);
  }
  lVar14 = UnityEngine_GameObject__GetComponent_object__275a5dc
                     (lVar13,*(undefined8 *)PTR_DAT_04cad3f0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar14,0,0);
  if ((uVar10 & 1) != 0) {
    lVar14 = UnityEngine_GameObject__AddComponent_object__275a54c
                       (lVar13,*(undefined8 *)PTR_DAT_04cacf88);
  }
  if (lVar14 != 0) {
    UnityEngine_Canvas__set_additionalShaderChannels_4680600(lVar14,0x19,0);
    if (*(long *)(lVar21 + 0x38) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&lStack_c8,*(long *)(lVar21 + 0x38),*(undefined8 *)PTR_DAT_04cabae0);
      puVar1 = PTR_DAT_04cabac0;
      iVar6 = 0;
      plStack_88 = plStack_c0;
      lStack_90 = lStack_c8;
      lStack_80 = (long)puStack_b8;
      lStack_c8 = 0;
      plStack_c0 = &lStack_90;
      while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&lStack_90,*(undefined8 *)puVar1), lVar4 = lStack_80,
            (uVar10 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
        if ((uVar10 & 1) != 0) {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if ((*(char *)(lVar4 + 0x2c) == '\0') && (*(int *)(lVar4 + 0x28) == 2)) {
            iVar6 = iVar6 + 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&lStack_90,*(undefined8 *)PTR_DAT_04cabab8);
      UnityEngine_Canvas__set_overrideSorting_467ff6c(lVar14,1,0);
      UnityEngine_Canvas__set_sortingOrder_46800e4(lVar14,iVar6 * 0x14 + 0x7e4,0);
      uVar16 = UnityEngine_GameObject__GetComponent_object__275a5dc
                         (lVar13,*(undefined8 *)PTR_DAT_04cad3f8);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
      if ((uVar10 & 1) != 0) {
        UnityEngine_GameObject__AddComponent_object__275a54c(lVar13,*(undefined8 *)PTR_DAT_04cacf90)
        ;
      }
      Dino_BusSand_App_UI_UIManager__SubstituteSoftMasks_21fe774(lVar13,0);
      if (*(int *)(*(long *)PTR_DAT_04cab188 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UIParticleSorting__PrepareAll_217d4f4(lVar13,0);
      plVar11 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                  (lVar13,*(undefined8 *)(*(long *)(lVar17 + 0x38) + 0x10));
      lVar17 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                         (lVar13,1,*(undefined8 *)PTR_DAT_04cab4a0);
      puVar3 = PTR_DAT_04cae1a8;
      puVar1 = PTR_DAT_04cae1a0;
      if (lVar17 != 0) {
        uVar18 = *(uint *)(lVar17 + 0x18);
        if (0 < (int)uVar18) {
          uVar22 = 0;
          do {
            if (uVar18 <= uVar22) goto LAB_02a45eb4;
            lVar14 = *(long *)(lVar17 + (long)(int)uVar22 * 8 + 0x20);
            if (lVar14 == 0) goto LAB_02a45eb0;
            uVar16 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar2);
            }
            uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,lVar13,0);
            if ((uVar10 & 1) != 0) {
              uVar16 = UnityEngine_Component__GetComponent_object__26f97e8
                                 (lVar14,*(undefined8 *)puVar1);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
              if ((uVar10 & 1) != 0) {
                lVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0);
                if (lVar14 == 0) goto LAB_02a45eb0;
                UnityEngine_GameObject__AddComponent_object__275a54c(lVar14,*(undefined8 *)puVar3);
              }
            }
            uVar18 = *(uint *)(lVar17 + 0x18);
            uVar22 = uVar22 + 1;
          } while ((int)uVar22 < (int)uVar18);
        }
        if (plVar11 != (long *)0x0) {
          plVar11[4] = lVar9;
          thunk_FUN_02134474(plVar11 + 4,lVar9);
          *(undefined4 *)(plVar11 + 5) = 2;
          lVar21 = *(long *)(lVar21 + 0x38);
          if (lVar21 != 0) {
            lVar17 = *(long *)(lVar21 + 0x10);
            lVar14 = *(long *)PTR_DAT_04cabde0;
            *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
            if (lVar17 != 0) {
              uVar18 = *(uint *)(lVar21 + 0x18);
              if (uVar18 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar18 + 1;
                plVar19 = (long *)(lVar17 + (long)(int)uVar18 * 8 + 0x20);
                *plVar19 = (long)plVar11;
                thunk_FUN_02134474(plVar19,plVar11);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar21,plVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              puVar2 = PTR_DAT_04cb4ce0;
              puVar1 = PTR_DAT_04cad7b8;
              if ((uVar7 & 1) == 0) {
                lVar9 = *(long *)PTR_DAT_04cb4ce0;
                cVar20 = '\0';
                uStack_68 = 0;
              }
              else {
                uVar16 = UnityEngine_GameObject__get_transform_43c1048(lVar13,0);
                lVar21 = *(long *)puVar1;
                if (*(int *)(lVar21 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar21);
                }
                uStack_68 = Dino_BusSand_App_UI_KitAdopt__Begin_227d2a0(uVar16,lVar9,0);
                lVar9 = *(long *)puVar2;
                if (*(int *)(lVar9 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar9);
                  lVar9 = *(long *)puVar2;
                }
                cVar20 = **(char **)(lVar9 + 0xb8);
              }
              acStack_6c[0] = cVar20 != '\0';
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar9);
                lVar9 = *(long *)puVar2;
              }
              lVar21 = *(long *)(lVar9 + 0xb8);
              auStack_70[0] = *(undefined1 *)(lVar21 + 1);
              if (acStack_6c[0] != '\0') {
                if (*(int *)(lVar9 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar9);
                  lVar21 = *(long *)(*(long *)puVar2 + 0xb8);
                }
                *(undefined1 *)(lVar21 + 1) = 1;
              }
              plStack_c0 = (long *)acStack_6c;
              puStack_b8 = auStack_70;
              lStack_c8 = 0;
              puStack_b0 = &uStack_68;
              (**(code **)(*plVar11 + 0x178))(plVar11,lVar12,*(undefined8 *)(*plVar11 + 0x180));
              if ((char)*plStack_c0 != '\0') {
                lVar9 = *(long *)puVar2;
                uVar5 = *puStack_b8;
                if (*(int *)(lVar9 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar9 = *(long *)puVar2;
                }
                *(undefined1 *)(*(long *)(lVar9 + 0xb8) + 1) = uVar5;
              }
              uVar16 = *puStack_b0;
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_KitAdopt__End_227e4f0(uVar16,0);
              if (lStack_c8 == 0) {
                if (acStack_6c[0] != '\0') {
                  lVar9 = *(long *)puVar2;
                  if (*(int *)(lVar9 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar9 = *(long *)puVar2;
                  }
                  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
                  if (lVar9 != 0) {
                    (**(code **)(lVar9 + 0x18))
                              (*(undefined8 *)(lVar9 + 0x40),plVar11,*(undefined8 *)(lVar9 + 0x28));
                  }
                }
                uVar16 = UnityEngine_GameObject__get_transform_43c1048(lVar13,0);
                Dino_BusSand_App_UI_UIManager__FullScreenBackdrops_21fe258(uVar16,0);
                uVar16 = UnityEngine_GameObject__get_transform_43c1048(lVar13,0);
                if (*(int *)(*(long *)PTR_DAT_04cabf58 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabf58);
                }
                Dino_BusSand_App_SpriteSkin__Apply_215e5c0(uVar16,0);
                Dino_BusSand_App_UI_UiTweaks__Attach_22a3600(plVar11,0);
                Dino_BusSand_App_UI_UIManagerEvents__RaiseOpened_220008c(plVar11,0);
                return plVar11;
              }
                    /* WARNING: Subroutine does not return */
              FUN_0213321c();
            }
          }
        }
      }
    }
  }
LAB_02a45eb0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

