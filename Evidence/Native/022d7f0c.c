/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$Toast
void Dino_BusSand_App_UI_PassportPanel__Toast (Dino_BusSand_App_UI_PassportPanel_o* __this, System_String_o* text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$Toast
   void Dino_BusSand_App_UI_PassportPanel__Toast (Dino_BusSand_App_UI_PassportPanel_o* __this,
   System_String_o* text, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportPanel__Toast_21d7f0c(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar2 = PTR_DAT_04caba50;
  if ((bRam0000000004f9bb62 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bb62 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  uVar13 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
  if (((uVar6 & 1) == 0) ||
     (uVar6 = System_String__IsNullOrEmpty_46d2084(param_2,0), (uVar6 & 1) != 0)) {
                    /* try { // try from 022d7fe4 to 023d808f has its CatchHandler @ 022d7b5c */
    return;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_04cabb08;
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 022d7cdc with catch @ 022d8050 */
    FUN_02133224();
  }
  if ((bRam0000000004f9b87c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabb08,param_2,0);
    bRam0000000004f9b87c = 1;
  }
  lVar5 = *(long *)(lVar5 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04ca9ae8;
  uVar16 = _UNK_00e20094;
  if ((bRam0000000004f9c314 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568,param_2,0);
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
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
  puVar3 = PTR_DAT_04cabb08;
  if ((uVar6 & 1) != 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04cabb08;
  lVar9 = *(long *)PTR_DAT_04ca9c30;
  if (param_2 != 0) {
    lVar9 = param_2;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar3;
  }
  **(long **)(lVar7 + 0xb8) = lVar9;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),lVar9);
  uVar14 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar14;
  if (lVar5 == 0) goto LAB_023bd530;
  uVar13 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar5,4,0);
  plVar8 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
  uVar12 = *(undefined8 *)PTR_DAT_04cad730;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar5 = System_Type__GetTypeFromHandle_483f0b4(uVar12,0);
  if (plVar8 == (long *)0x0) goto LAB_023bd530;
  if ((lVar5 != 0) &&
     (lVar9 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
    uVar13 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar13,0);
  }
  if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar8[4] = lVar5;
  thunk_FUN_02134474(plVar8 + 4,lVar5);
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
  UnityEngine_GameObject___ctor_43c2310(lVar5,*(undefined8 *)PTR_DAT_04cb6578,plVar8,0);
  if ((lVar5 == 0) || (lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar5,0), lVar9 == 0))
  goto LAB_023bd530;
  UnityEngine_Transform__SetParent_43d1e34(lVar9,uVar13,0,0);
  plVar8 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar5,0);
  if (plVar8 == (long *)0x0) goto LAB_023bd530;
  if (*plVar8 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
    FUN_021335a4(plVar8);
  }
  UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,uVar16,plVar8,0);
  UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,uVar16,plVar8,0);
  puVar4 = PTR_DAT_04cad330;
  lVar9 = *(long *)PTR_DAT_04cad330;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar4;
  }
  puVar11 = *(undefined4 **)(lVar9 + 0xb8);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  System_Nullable_Color____ctor_2bc9090
            (*puVar11,puVar11[1],puVar11[2],puVar11[3],&uStack_68,*(undefined8 *)PTR_DAT_04cac878);
  uStack_70 = uStack_58;
  uStack_78 = uStack_60;
  uStack_80 = uStack_68;
  lVar9 = Dino_BusSand_App_UI_UiKit__Text_2282314
                    (0x42480000,0x444d0000,0x42c80000,0,0x40800000,plVar8,
                     *(undefined8 *)PTR_DAT_04cb4e20,param_2,*(undefined8 *)PTR_DAT_04cad4a8,
                     &uStack_80,0x202,0);
  if (lVar9 == 0) goto LAB_023bd530;
  TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar9,1,0);
  fVar17 = 0.0;
  TMPro_TMP_Text__GetPreferredValues_42d1a10(0x444d0000,lVar9,param_2,0);
  fVar15 = 150.0;
  if (150.0 <= fVar17 + 70.0) {
    fVar15 = fVar17 + 70.0;
  }
  lVar9 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar9,0);
  if (lVar9 == 0) goto LAB_023bd530;
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x444d0000,fVar15 + -50.0,lVar9,0);
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x44660000,fVar15,plVar8,0);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  fVar17 = 1.0;
  if (fVar15 / 241.0 <= 1.0) {
    fVar17 = fVar15 / 241.0;
  }
  lVar9 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                    (0x44660000,fVar15,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                     (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],fVar17,plVar8,
                     *(undefined8 *)PTR_DAT_04cafbb8,*(undefined8 *)PTR_DAT_04cb64b8,&uStack_98,0);
  if (lVar9 == 0) goto LAB_023bd530;
  UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar9,0);
  uVar13 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar13,0,0);
  if ((uVar6 & 1) == 0) {
    fVar15 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    lVar9 = *(long *)puVar3;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar3;
    }
    if (_UNK_00e200f8 < fVar15 - *(float *)(*(long *)(lVar9 + 0xb8) + 0x18)) goto LAB_023bd36c;
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
    lVar9 = *(long *)puVar4;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar4;
    }
    if (**(long **)(lVar9 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__Toast_2383580(**(long **)(lVar9 + 0xb8),0);
    }
  }
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar3;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
  if ((uVar6 & 1) != 0) {
    lVar9 = *(long *)puVar3;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar3;
    }
    Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
              (_UNK_00e201f4,0,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10));
  }
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar3;
  }
  plVar10 = (long *)(*(long *)(lVar9 + 0xb8) + 0x10);
  *plVar10 = lVar5;
  thunk_FUN_02134474(plVar10,lVar5);
  uVar16 = UnityEngine_Time__get_unscaledTime_43cd610(0);
  iVar1 = *(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = uVar16;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  lVar9 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar5,0);
  if (lVar9 != 0) {
    UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar9,0,0);
    Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
              (0,_UNK_00e1fde8,_UNK_00e204e8,_UNK_00e203f0,plVar8,0,0,0);
    Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0xc1c00000,0,_UNK_00e207cc,plVar8,0,0);
    Dino_BusSand_App_UI_TipsToast__Leave_22bd54c(_UNK_00e208d0,_UNK_00e1fdec,lVar5);
    return;
  }
LAB_023bd530:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

