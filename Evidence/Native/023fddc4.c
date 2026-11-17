/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$Toast
void Dino_BusSand_App_UI_MainHudPanel__Toast (System_String_o* langKey, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$Toast
   void Dino_BusSand_App_UI_MainHudPanel__Toast (System_String_o* langKey, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_MainHudPanel__Toast_22fddc4(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar2 = PTR_DAT_04ca9d18;
  if ((bRam0000000004f9c4b8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cae520);
    bRam0000000004f9c4b8 = 1;
  }
  lVar13 = *(long *)puVar2;
  lVar11 = *(long *)(lVar13 + 0x38);
  if (lVar11 == 0) {
    FUN_0216b4cc(lVar13);
    lVar11 = *(long *)(lVar13 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0216b470();
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cab550;
  lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0216b470();
  }
  puVar3 = PTR_DAT_04cae520;
  uVar14 = **(undefined8 **)(lVar11 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  lVar11 = Dino_BusSand_App_Lang__Get_215f9c0(param_1,uVar14,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  puVar2 = PTR_DAT_04caba50;
  if ((bRam0000000004f9c4b9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caa398);
    FUN_02132f7c(PTR_DAT_04ca9bc0);
    bRam0000000004f9c4b9 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar13 = *(long *)puVar2;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar13 = *(long *)puVar2;
  }
  uVar14 = **(undefined8 **)(lVar13 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar13 = *(long *)puVar2;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar13 = *(long *)puVar2;
  }
  if (lVar11 == 0) {
LAB_023fe03c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar13 = **(long **)(lVar13 + 0xb8);
  lVar11 = System_String__Replace_46d4a70
                     (lVar11,*(undefined8 *)PTR_DAT_04ca9bc0,*(undefined8 *)PTR_DAT_04caa398,0);
  puVar2 = PTR_DAT_04cabb08;
  if (lVar13 == 0) goto LAB_023fe03c;
  if ((bRam0000000004f9b87c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabb08,lVar11,0);
    bRam0000000004f9b87c = 1;
  }
  lVar13 = *(long *)(lVar13 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04ca9ae8;
  uVar17 = _UNK_00e20094;
  if ((bRam0000000004f9c314 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568,lVar11,0);
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
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
  puVar3 = PTR_DAT_04cabb08;
  if ((uVar9 & 1) != 0) {
    return;
  }
  lVar5 = *(long *)PTR_DAT_04cabb08;
  lVar7 = *(long *)PTR_DAT_04ca9c30;
  if (lVar11 != 0) {
    lVar7 = lVar11;
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  **(long **)(lVar5 + 0xb8) = lVar7;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),lVar7);
  uVar15 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar15;
  if (lVar13 == 0) goto LAB_023bd530;
  uVar14 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar13,4,0);
  plVar6 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
  uVar12 = *(undefined8 *)PTR_DAT_04cad730;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar13 = System_Type__GetTypeFromHandle_483f0b4(uVar12,0);
  if (plVar6 == (long *)0x0) goto LAB_023bd530;
  if ((lVar13 != 0) &&
     (lVar7 = thunk_FUN_0216e7a0(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
    uVar14 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar14,0);
  }
  if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar6[4] = lVar13;
  thunk_FUN_02134474(plVar6 + 4,lVar13);
  lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
  UnityEngine_GameObject___ctor_43c2310(lVar13,*(undefined8 *)PTR_DAT_04cb6578,plVar6,0);
  if ((lVar13 == 0) || (lVar7 = UnityEngine_GameObject__get_transform_43c1048(lVar13,0), lVar7 == 0)
     ) goto LAB_023bd530;
  UnityEngine_Transform__SetParent_43d1e34(lVar7,uVar14,0,0);
  plVar6 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar13,0);
  if (plVar6 == (long *)0x0) goto LAB_023bd530;
  if (*plVar6 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
    FUN_021335a4(plVar6);
  }
  UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,uVar17,plVar6,0);
  UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,uVar17,plVar6,0);
  puVar4 = PTR_DAT_04cad330;
  lVar7 = *(long *)PTR_DAT_04cad330;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar4;
  }
  puVar10 = *(undefined4 **)(lVar7 + 0xb8);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  System_Nullable_Color____ctor_2bc9090
            (*puVar10,puVar10[1],puVar10[2],puVar10[3],&uStack_68,*(undefined8 *)PTR_DAT_04cac878);
  uStack_70 = uStack_58;
  uStack_78 = uStack_60;
  uStack_80 = uStack_68;
  lVar7 = Dino_BusSand_App_UI_UiKit__Text_2282314
                    (0x42480000,0x444d0000,0x42c80000,0,0x40800000,plVar6,
                     *(undefined8 *)PTR_DAT_04cb4e20,lVar11,*(undefined8 *)PTR_DAT_04cad4a8,
                     &uStack_80,0x202,0);
  if (lVar7 == 0) goto LAB_023bd530;
  TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar7,1,0);
  fVar18 = 0.0;
  TMPro_TMP_Text__GetPreferredValues_42d1a10(0x444d0000,lVar7,lVar11,0);
  fVar16 = 150.0;
  if (150.0 <= fVar18 + 70.0) {
    fVar16 = fVar18 + 70.0;
  }
  lVar11 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar7,0);
  if (lVar11 == 0) goto LAB_023bd530;
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x444d0000,fVar16 + -50.0,lVar11,0);
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x44660000,fVar16,plVar6,0);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  fVar18 = 1.0;
  if (fVar16 / 241.0 <= 1.0) {
    fVar18 = fVar16 / 241.0;
  }
  lVar11 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                     (0x44660000,fVar16,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                      (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],fVar18,plVar6,
                      *(undefined8 *)PTR_DAT_04cafbb8,*(undefined8 *)PTR_DAT_04cb64b8,&uStack_98,0);
  if (lVar11 == 0) goto LAB_023bd530;
  UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar11,0);
  uVar14 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar14,0,0);
  if ((uVar9 & 1) == 0) {
    fVar16 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    lVar11 = *(long *)puVar3;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar3;
    }
    if (_UNK_00e200f8 < fVar16 - *(float *)(*(long *)(lVar11 + 0xb8) + 0x18)) goto LAB_023bd36c;
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
    lVar11 = *(long *)puVar4;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar4;
    }
    if (**(long **)(lVar11 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__Toast_2383580(**(long **)(lVar11 + 0xb8),0);
    }
  }
  lVar11 = *(long *)puVar3;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar11 = *(long *)puVar3;
  }
  uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
  if ((uVar9 & 1) != 0) {
    lVar11 = *(long *)puVar3;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar3;
    }
    Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
              (_UNK_00e201f4,0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x10));
  }
  lVar11 = *(long *)puVar3;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar11 = *(long *)puVar3;
  }
  plVar8 = (long *)(*(long *)(lVar11 + 0xb8) + 0x10);
  *plVar8 = lVar13;
  thunk_FUN_02134474(plVar8,lVar13);
  uVar17 = UnityEngine_Time__get_unscaledTime_43cd610(0);
  iVar1 = *(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = uVar17;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  lVar11 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar13,0);
  if (lVar11 != 0) {
    UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar11,0,0);
    Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
              (0,_UNK_00e1fde8,_UNK_00e204e8,_UNK_00e203f0,plVar6,0,0,0);
    Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0xc1c00000,0,_UNK_00e207cc,plVar6,0,0);
    Dino_BusSand_App_UI_TipsToast__Leave_22bd54c(_UNK_00e208d0,_UNK_00e1fdec,lVar13);
    return;
  }
LAB_023bd530:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

