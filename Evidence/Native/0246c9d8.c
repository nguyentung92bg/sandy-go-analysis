/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel$$<OnOpen>b__14_33
void Dino_BusSand_Cheat_CheatMobilePanel___OnOpen_b__14_33 (Dino_BusSand_Cheat_CheatMobilePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel$$<OnOpen>b__14_33
   void Dino_BusSand_Cheat_CheatMobilePanel___OnOpen_b__14_33
   (Dino_BusSand_Cheat_CheatMobilePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatMobilePanel___OnOpen_b__14_33_236c9d8(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar2 = PTR_DAT_04cad1e8;
                    /* try { // try from 0246c9f0 to 0256c9ff has its CatchHandler @ 0246ca00 */
  if ((bRam0000000004f9c7a1 & 1) == 0) {
                    /* catch() { ... } // from try @ 0246c990 with catch @ 0246ca00
                       catch() { ... } // from try @ 0246c9f0 with catch @ 0246ca00 */
                    /* try { // try from 0246ca04 to 0256ca07 has its CatchHandler @ 0246ca10 */
    FUN_02132f7c(PTR_DAT_04caa458);
                    /* try { // try from 0246ca08 to 0256ca13 has its CatchHandler @ 0246c900 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0246ca04 with catch @ 0246ca10
                        */
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cad1e8);
    FUN_02132f7c(PTR_DAT_04cbae68);
    FUN_02132f7c(PTR_DAT_04cbac08);
    FUN_02132f7c(PTR_DAT_04cbae70);
    bRam0000000004f9c7a1 = 1;
  }
  puVar4 = PTR_DAT_04cbac08;
  puVar3 = PTR_DAT_04caba50;
  if (*(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) != 0) {
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    lVar8 = *(long *)puVar4;
    lVar15 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar4;
    }
    puVar11 = *(undefined8 **)(lVar8 + 0xb8);
    lVar13 = puVar11[0x16];
    if (lVar13 == 0) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar11 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar14 = *puVar11;
      lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(lVar13,uVar14,*(undefined8 *)PTR_DAT_04cbae68,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb0);
      *plVar9 = lVar13;
      thunk_FUN_02134474(plVar9,lVar13);
    }
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* WARNING: Could not recover jumptable at 0x0246cb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar15 + 0x18))
              (*(undefined8 *)(lVar15 + 0x40),lVar13,*(undefined8 *)(lVar15 + 0x28));
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_04cabb08;
  lVar8 = **(long **)(lVar8 + 0xb8);
  if (lVar8 == 0) {
    return;
  }
  lVar15 = *(long *)PTR_DAT_04cbae70;
  if ((bRam0000000004f9b87c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabb08,lVar15,0);
    bRam0000000004f9b87c = 1;
  }
  lVar8 = *(long *)(lVar8 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04ca9ae8;
  uVar18 = _UNK_00e20094;
  if ((bRam0000000004f9c314 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568,lVar15,0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cabb08);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb4e20);
    FUN_02132f7c(PTR_DAT_04cafbb8);
    FUN_02132f7c(PTR_DAT_04cb6578);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb64b8);
    FUN_02132f7c(PTR_DAT_04cad4a8);
    bRam0000000004f9c314 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  puVar3 = PTR_DAT_04cabb08;
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04cabb08;
  lVar13 = *(long *)PTR_DAT_04ca9c30;
  if (lVar15 != 0) {
    lVar13 = lVar15;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar3;
  }
  **(long **)(lVar6 + 0xb8) = lVar13;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),lVar13);
  uVar16 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar16;
  if (lVar8 == 0) goto LAB_023bd530;
  uVar14 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar8,4,0);
  plVar9 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
  uVar12 = *(undefined8 *)PTR_DAT_04cad730;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar8 = System_Type__GetTypeFromHandle_483f0b4(uVar12,0);
  if (plVar9 == (long *)0x0) goto LAB_023bd530;
  if ((lVar8 != 0) &&
     (lVar13 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0)) {
    uVar14 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar14,0);
  }
  if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar9[4] = lVar8;
  thunk_FUN_02134474(plVar9 + 4,lVar8);
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
  UnityEngine_GameObject___ctor_43c2310(lVar8,*(undefined8 *)PTR_DAT_04cb6578,plVar9,0);
  if ((lVar8 == 0) || (lVar13 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0), lVar13 == 0)
     ) goto LAB_023bd530;
  UnityEngine_Transform__SetParent_43d1e34(lVar13,uVar14,0,0);
  plVar9 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
  if (plVar9 == (long *)0x0) goto LAB_023bd530;
  if (*plVar9 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
    FUN_021335a4(plVar9);
  }
  UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,uVar18,plVar9,0);
  UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,uVar18,plVar9,0);
  puVar4 = PTR_DAT_04cad330;
  lVar13 = *(long *)PTR_DAT_04cad330;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar13 = *(long *)puVar4;
  }
  puVar10 = *(undefined4 **)(lVar13 + 0xb8);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  System_Nullable_Color____ctor_2bc9090
            (*puVar10,puVar10[1],puVar10[2],puVar10[3],&uStack_68,*(undefined8 *)PTR_DAT_04cac878);
  uStack_70 = uStack_58;
  uStack_78 = uStack_60;
  uStack_80 = uStack_68;
  lVar13 = Dino_BusSand_App_UI_UiKit__Text_2282314
                     (0x42480000,0x444d0000,0x42c80000,0,0x40800000,plVar9,
                      *(undefined8 *)PTR_DAT_04cb4e20,lVar15,*(undefined8 *)PTR_DAT_04cad4a8,
                      &uStack_80,0x202,0);
  if (lVar13 == 0) goto LAB_023bd530;
  TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar13,1,0);
  fVar19 = 0.0;
  TMPro_TMP_Text__GetPreferredValues_42d1a10(0x444d0000,lVar13,lVar15,0);
  fVar17 = 150.0;
  if (150.0 <= fVar19 + 70.0) {
    fVar17 = fVar19 + 70.0;
  }
  lVar15 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar13,0);
  if (lVar15 == 0) goto LAB_023bd530;
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x444d0000,fVar17 + -50.0,lVar15,0);
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x44660000,fVar17,plVar9,0);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  fVar19 = 1.0;
  if (fVar17 / 241.0 <= 1.0) {
    fVar19 = fVar17 / 241.0;
  }
  lVar15 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                     (0x44660000,fVar17,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                      (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],fVar19,plVar9,
                      *(undefined8 *)PTR_DAT_04cafbb8,*(undefined8 *)PTR_DAT_04cb64b8,&uStack_98,0);
  if (lVar15 == 0) goto LAB_023bd530;
  UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar15,0);
  uVar14 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar14,0,0);
  if ((uVar5 & 1) == 0) {
    fVar17 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    lVar15 = *(long *)puVar3;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar15 = *(long *)puVar3;
    }
    if (_UNK_00e200f8 < fVar17 - *(float *)(*(long *)(lVar15 + 0xb8) + 0x18)) goto LAB_023bd36c;
  }
  else {
LAB_023bd36c:
    puVar4 = PTR_DAT_04cad568;
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar15 = *(long *)puVar4;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar15 = *(long *)puVar4;
    }
    if (**(long **)(lVar15 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__Toast_2383580(**(long **)(lVar15 + 0xb8),0);
    }
  }
  lVar15 = *(long *)puVar3;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar15 = *(long *)puVar3;
  }
  uVar14 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
  if ((uVar5 & 1) != 0) {
    lVar15 = *(long *)puVar3;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar15 = *(long *)puVar3;
    }
    Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
              (_UNK_00e201f4,0,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x10));
  }
  lVar15 = *(long *)puVar3;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar15 = *(long *)puVar3;
  }
  plVar7 = (long *)(*(long *)(lVar15 + 0xb8) + 0x10);
  *plVar7 = lVar8;
  thunk_FUN_02134474(plVar7,lVar8);
  uVar18 = UnityEngine_Time__get_unscaledTime_43cd610(0);
  iVar1 = *(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = uVar18;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  lVar15 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar8,0);
  if (lVar15 != 0) {
    UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar15,0,0);
    Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
              (0,_UNK_00e1fde8,_UNK_00e204e8,_UNK_00e203f0,plVar9,0,0,0);
    Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0xc1c00000,0,_UNK_00e207cc,plVar9,0,0);
    Dino_BusSand_App_UI_TipsToast__Leave_22bd54c(_UNK_00e208d0,_UNK_00e1fdec,lVar8);
    return;
  }
LAB_023bd530:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

