/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$StartAutoPlay
void Dino_BusSand_Cheat_CheatManager__StartAutoPlay (Dino_BusSand_Cheat_CheatManager_o* __this, int32_t from, int32_t to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$StartAutoPlay
   void Dino_BusSand_Cheat_CheatManager__StartAutoPlay (Dino_BusSand_Cheat_CheatManager_o* __this,
   int32_t from, int32_t to, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__StartAutoPlay_235d76c(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_38;
  
  puVar4 = PTR_DAT_04cba458;
  uStack_38 = CONCAT44(param_2,(undefined4)uStack_38);
  if ((bRam0000000004f9c735 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cac868);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cba4b0);
    FUN_02132f7c(PTR_DAT_04cba4b8);
    FUN_02132f7c(PTR_DAT_04cba4c0);
    FUN_02132f7c(PTR_DAT_04cba4c8);
    bRam0000000004f9c735 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar12 = Dino_BusSand_Cheat_CheatManager__get_Ready_235da4c();
  bVar7 = bRam0000000004f9c776;
  puVar4 = PTR_DAT_04cba458;
  if ((uVar12 & 1) != 0) {
    if (param_2 < 2) {
      param_2 = 1;
    }
    uStack_38 = CONCAT44(param_2,(undefined4)uStack_38);
    if (param_1 == 0) {
LAB_0245da48:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0245da48 to 0255da53 has its CatchHandler @ 0245dc4c */
      FUN_02133224();
    }
    iVar2 = param_2;
    if (param_2 <= param_3) {
      iVar2 = param_3;
    }
                    /* try { // try from 0245d840 to 0255d867 has its CatchHandler @ 0245dc84 */
    iVar1 = 0x7fffffff;
    if (0 < param_3) {
      iVar1 = iVar2;
    }
    piVar18 = (int *)(param_1 + 0x3c);
    *piVar18 = iVar1;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined1 *)(param_1 + 0x38) = 1;
    if ((bVar7 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cba4d0);
      bRam0000000004f9c776 = 1;
    }
    if (*(char *)(param_1 + 0x141) != '\0') {
      *(undefined1 *)(param_1 + 0x141) = 0;
    }
    puVar4 = PTR_DAT_04cac868;
    if (*(int *)(*(long *)PTR_DAT_04cac868 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9bcf9 == '\0') {
                    /* try { // try from 0245d8ac to 0255d8d3 has its CatchHandler @ 0245dc80 */
      FUN_02132f7c(PTR_DAT_04cac868);
      cRam0000000004f9bcf9 = '\x01';
    }
    lVar13 = *(long *)puVar4;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar4;
    }
    lVar13 = **(long **)(lVar13 + 0xb8);
                    /* try { // try from 0245d8e4 to 0255d8ef has its CatchHandler @ 0245dca0 */
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
                    /* try { // try from 0245d8fc to 0255d907 has its CatchHandler @ 0245dc68 */
    uVar12 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
    puVar4 = PTR_DAT_04caba50;
    if ((uVar12 & 1) != 0) {
                    /* try { // try from 0245d908 to 0255d913 has its CatchHandler @ 0245dc78 */
      if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
                    /* try { // try from 0245d928 to 0255d933 has its CatchHandler @ 0245dc58 */
        FUN_02132f7c(PTR_DAT_04caba50);
                    /* try { // try from 0245d938 to 0255d94f has its CatchHandler @ 0245dc90 */
        cRam0000000004f9b88f = '\x01';
      }
      lVar14 = *(long *)puVar4;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar14 = *(long *)puVar4;
      }
      if (**(long **)(lVar14 + 0xb8) == 0) goto LAB_0245da48;
                    /* try { // try from 0245d95c to 0255d967 has its CatchHandler @ 0245dc54 */
      if (*(char *)(**(long **)(lVar14 + 0xb8) + 0x38) != '\0') {
        if (lVar13 == 0) goto LAB_0245da48;
                    /* try { // try from 0245d968 to 0255d973 has its CatchHandler @ 0245dc6c */
        if ((*(int *)(lVar13 + 0x28) == param_2) && (*(int *)(lVar13 + 0x20) == 2)) {
                    /* try { // try from 0245d984 to 0255d98f has its CatchHandler @ 0245dc74 */
          *(int *)(param_1 + 0x40) = param_2;
          *(undefined8 *)(param_1 + 0x50) = _UNK_00e69830;
                    /* try { // try from 0245d990 to 0255d99b has its CatchHandler @ 0245dc70 */
          goto LAB_0245d9bc;
        }
      }
    }
    *(int *)(param_1 + 0x44) = param_2;
LAB_0245d9bc:
                    /* try { // try from 0245d9bc to 0255d9d3 has its CatchHandler @ 0245dc94 */
    uVar15 = System_Int32__ToString_482d750((long)&uStack_38 + 4,0);
                    /* try { // try from 0245d9e0 to 0255d9eb has its CatchHandler @ 0245dc50 */
    uVar19 = *(undefined8 *)PTR_DAT_04cba4b0;
    uVar20 = *(undefined8 *)PTR_DAT_04cba4c0;
                    /* try { // try from 0245d9f0 to 0255da07 has its CatchHandler @ 0245dc98 */
    if (*piVar18 == 0x7fffffff) {
      uVar16 = *(undefined8 *)PTR_DAT_04cba4c8;
    }
    else {
      uVar16 = System_Int32__ToString_482d750(piVar18,0);
    }
                    /* try { // try from 0245da14 to 0255da1f has its CatchHandler @ 0245dc48 */
                    /* try { // try from 0245da24 to 0255da3b has its CatchHandler @ 0245dc9c */
    uVar15 = System_String__Concat_46d30e8(uVar20,uVar15,uVar19,uVar16,0);
    Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar15);
    return;
  }
                    /* try { // try from 0245d9ac to 0255d9b7 has its CatchHandler @ 0245dc5c */
  lVar13 = *(long *)PTR_DAT_04cba4b8;
  if ((bRam0000000004f9c77a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cba4d8);
    FUN_02132f7c(PTR_DAT_04cba4e0);
    FUN_02132f7c(PTR_DAT_04cba490);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c77a = 1;
  }
  uStack_38 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Cheat_CheatManager__Log_235c924(lVar13);
  uVar12 = Dino_BusSand_Cheat_CheatManager__get_Creative_235c6f4(param_1);
  if ((uVar12 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar12 = UnityEngine_Application__get_isMobilePlatform_4352d28(0);
  puVar4 = PTR_DAT_04caba50;
  if ((uVar12 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar14 = *(long *)puVar4;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar14 = *(long *)puVar4;
    }
    uVar15 = **(undefined8 **)(lVar14 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
    if ((uVar12 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar14 = *(long *)puVar4;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar14 = *(long *)puVar4;
      }
      puVar4 = PTR_DAT_04cabb08;
      lVar14 = **(long **)(lVar14 + 0xb8);
      if (lVar14 == 0) goto LAB_0245de8c;
      if ((bRam0000000004f9b87c & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cabb08,lVar13,0);
        bRam0000000004f9b87c = 1;
      }
      lVar14 = *(long *)(lVar14 + 0x28);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar4 = PTR_DAT_04ca9ae8;
      uVar23 = _UNK_00e20094;
      if ((bRam0000000004f9c314 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cad568,lVar13,0);
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
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = UnityEngine_Object__op_Equality_43c6f30(lVar14,0,0);
      puVar5 = PTR_DAT_04cabb08;
      if ((uVar12 & 1) != 0) {
        return;
      }
      lVar8 = *(long *)PTR_DAT_04cabb08;
      lVar10 = *(long *)PTR_DAT_04ca9c30;
      if (lVar13 != 0) {
        lVar10 = lVar13;
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar5;
      }
      **(long **)(lVar8 + 0xb8) = lVar10;
      thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar5 + 0xb8),lVar10);
      uVar21 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
      *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8) = uVar21;
      if (lVar14 == 0) goto LAB_023bd530;
      uVar15 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar14,4,0);
      plVar9 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
      uVar19 = *(undefined8 *)PTR_DAT_04cad730;
      if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
      }
      lVar14 = System_Type__GetTypeFromHandle_483f0b4(uVar19,0);
      if (plVar9 == (long *)0x0) goto LAB_023bd530;
      if ((lVar14 != 0) &&
         (lVar10 = thunk_FUN_0216e7a0(lVar14,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
        uVar15 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar15,0);
      }
      if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar9[4] = lVar14;
      thunk_FUN_02134474(plVar9 + 4,lVar14);
      lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
      UnityEngine_GameObject___ctor_43c2310(lVar14,*(undefined8 *)PTR_DAT_04cb6578,plVar9,0);
      if ((lVar14 == 0) ||
         (lVar10 = UnityEngine_GameObject__get_transform_43c1048(lVar14,0), lVar10 == 0))
      goto LAB_023bd530;
      UnityEngine_Transform__SetParent_43d1e34(lVar10,uVar15,0,0);
      plVar9 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar14,0);
      if (plVar9 == (long *)0x0) goto LAB_023bd530;
      if (*plVar9 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar9);
      }
      UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,uVar23,plVar9,0);
      UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,uVar23,plVar9,0);
      puVar6 = PTR_DAT_04cad330;
      lVar10 = *(long *)PTR_DAT_04cad330;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar6;
      }
      puVar17 = *(undefined4 **)(lVar10 + 0xb8);
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      System_Nullable_Color____ctor_2bc9090
                (*puVar17,puVar17[1],puVar17[2],puVar17[3],&uStack_68,
                 *(undefined8 *)PTR_DAT_04cac878);
      uStack_70 = uStack_58;
      uStack_78 = uStack_60;
      uStack_80 = uStack_68;
      lVar10 = Dino_BusSand_App_UI_UiKit__Text_2282314
                         (0x42480000,0x444d0000,0x42c80000,0,0x40800000,plVar9,
                          *(undefined8 *)PTR_DAT_04cb4e20,lVar13,*(undefined8 *)PTR_DAT_04cad4a8,
                          &uStack_80,0x202,0);
      if (lVar10 == 0) goto LAB_023bd530;
      TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar10,1,0);
      fVar24 = 0.0;
      TMPro_TMP_Text__GetPreferredValues_42d1a10(0x444d0000,lVar10,lVar13,0);
      fVar22 = 150.0;
      if (150.0 <= fVar24 + 70.0) {
        fVar22 = fVar24 + 70.0;
      }
      lVar13 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar10,0);
      if (lVar13 == 0) goto LAB_023bd530;
      UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x444d0000,fVar22 + -50.0,lVar13,0);
      UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x44660000,fVar22,plVar9,0);
      if (cRam0000000004f9b948 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b948 = '\x01';
      }
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      fVar24 = 1.0;
      if (fVar22 / 241.0 <= 1.0) {
        fVar24 = fVar22 / 241.0;
      }
      lVar13 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                         (0x44660000,fVar22,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                          (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],fVar24,plVar9,
                          *(undefined8 *)PTR_DAT_04cafbb8,*(undefined8 *)PTR_DAT_04cb64b8,&uStack_98
                          ,0);
      if (lVar13 == 0) goto LAB_023bd530;
      UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar13,0);
      uVar15 = *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = UnityEngine_Object__op_Equality_43c6f30(uVar15,0,0);
      if ((uVar12 & 1) == 0) {
        fVar22 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
        lVar13 = *(long *)puVar5;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar13 = *(long *)puVar5;
        }
        if (_UNK_00e200f8 < fVar22 - *(float *)(*(long *)(lVar13 + 0xb8) + 0x18)) goto LAB_023bd36c;
      }
      else {
LAB_023bd36c:
        puVar6 = PTR_DAT_04cad568;
        if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b94e == '\0') {
          FUN_02132f7c(PTR_DAT_04cad568);
          cRam0000000004f9b94e = '\x01';
        }
        lVar13 = *(long *)puVar6;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar13 = *(long *)puVar6;
        }
        if (**(long **)(lVar13 + 0xb8) != 0) {
          Dino_BusSand_GameAudio__Toast_2383580(**(long **)(lVar13 + 0xb8),0);
        }
      }
      lVar13 = *(long *)puVar5;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar13 = *(long *)puVar5;
      }
      uVar15 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar4);
      }
      uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
      if ((uVar12 & 1) != 0) {
        lVar13 = *(long *)puVar5;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar13 = *(long *)puVar5;
        }
        Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
                  (_UNK_00e201f4,0,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10));
      }
      lVar13 = *(long *)puVar5;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar13 = *(long *)puVar5;
      }
      plVar11 = (long *)(*(long *)(lVar13 + 0xb8) + 0x10);
      *plVar11 = lVar14;
      thunk_FUN_02134474(plVar11,lVar14);
      uVar23 = UnityEngine_Time__get_unscaledTime_43cd610(0);
      iVar2 = *(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4);
      *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18) = uVar23;
      if (iVar2 == 0) {
        thunk_FUN_0218fdac();
      }
      lVar13 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar14,0);
      if (lVar13 != 0) {
        UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar13,0,0);
        Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                  (0,_UNK_00e1fde8,_UNK_00e204e8,_UNK_00e203f0,plVar9,0,0,0);
        Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0xc1c00000,0,_UNK_00e207cc,plVar9,0,0);
        Dino_BusSand_App_UI_TipsToast__Leave_22bd54c(_UNK_00e208d0,_UNK_00e1fdec,lVar14);
        return;
      }
LAB_023bd530:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x110) + 0x10) != '\0') {
      if (*(long *)(param_1 + 0x100) == 0) goto LAB_0245de8c;
      if (*(char *)(*(long *)(param_1 + 0x100) + 0x3c) == '\0') {
        return;
      }
    }
    lVar14 = *(long *)(param_1 + 0x160);
    uStack_38 = 0;
    thunk_FUN_02134474(&stack0xffffffffffffffc0,lVar13);
    fVar22 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    if (*(long *)(param_1 + 0x100) != 0) {
      uStack_38 = CONCAT44(uStack_38._4_4_,fVar22 + *(float *)(*(long *)(param_1 + 0x100) + 0x38));
      if (lVar14 != 0) {
        lVar10 = *(long *)(lVar14 + 0x10);
        lVar8 = *(long *)PTR_DAT_04cba4d8;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar3 = *(uint *)(lVar14 + 0x18);
          if (uVar3 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = lVar10 + (long)(int)uVar3 * 0x10;
            *(uint *)(lVar14 + 0x18) = uVar3 + 1;
            plVar9 = (long *)(lVar10 + 0x20);
            *plVar9 = lVar13;
            *(undefined8 *)(lVar10 + 0x28) = uStack_38;
            thunk_FUN_02134474(plVar9,0);
          }
          else {
            System_Collections_Generic_List_CheatManager_ToastLine___AddWithResize_3b1d72c
                      (lVar14,lVar13,uStack_38,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          lVar13 = *(long *)(param_1 + 0x160);
          if (lVar13 != 0) {
            if (3 < *(int *)(lVar13 + 0x18)) {
              System_Collections_Generic_List_CheatManager_ToastLine___RemoveAt_3b1ef38
                        (lVar13,0,*(undefined8 *)PTR_DAT_04cba4e0);
            }
            return;
          }
        }
      }
    }
  }
LAB_0245de8c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

