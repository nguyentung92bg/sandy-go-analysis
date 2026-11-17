/* IL2CPP: Dino.BusSand.App.UI.SimpleActivityContinuePanel$$OnBuy
void Dino_BusSand_App_UI_SimpleActivityContinuePanel__OnBuy (Dino_BusSand_App_UI_SimpleActivityContinuePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02a45de8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.SimpleActivityContinuePanel$$OnBuy
   void Dino_BusSand_App_UI_SimpleActivityContinuePanel__OnBuy
   (Dino_BusSand_App_UI_SimpleActivityContinuePanel_o* __this, const MethodInfo* method); */

long * Dino_BusSand_App_UI_SimpleActivityContinuePanel__OnBuy_218a328(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  undefined4 *puVar18;
  char cVar19;
  undefined8 uVar20;
  uint uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  long lStack_c8;
  long *plStack_c0;
  uint *puStack_b8;
  long *plStack_b0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long alStack_80 [2];
  uint uStack_70;
  char acStack_6c [4];
  long lStack_68;
  
  plVar9 = param_1;
  if ((bRam0000000004f9b974 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    plVar9 = (long *)FUN_02132f7c(PTR_DAT_04cac740);
    bRam0000000004f9b974 = 1;
  }
  if (((char)param_1[8] != '\0') || (*(char *)((long)param_1 + 0x2c) != '\0')) {
    return plVar9;
  }
  if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_Meta_Economy__ReviveBuses_2204aa8(0);
                    /* try { // try from 0228a3c4 to 0238a3eb has its CatchHandler @ 0228a3c4
                       catch() { ... } // from try @ 0228a3c4 with catch @ 0228a3c4
                       catch() { ... } // from try @ 0228a40c with catch @ 0228a3c4 */
  iVar6 = Dino_BusSand_App_Meta_Economy__get_RevivePrice_220499c(0);
  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabaf8);
  }
                    /* try { // try from 0228a3ec to 0238a40b has its CatchHandler @ 0228a424 */
  uVar10 = Dino_BusSand_App_Meta_Profile__TrySpend_2272968
                     (0x3e9,(long)iVar6,*(undefined8 *)PTR_DAT_04cac740,0);
  puVar1 = PTR_DAT_04caba50;
  if ((uVar10 & 1) != 0) {
                    /* try { // try from 0228a40c to 0238a437 has its CatchHandler @ 0228a3c4 */
    *(undefined1 *)(param_1 + 8) = 1;
    uVar11 = Dino_BusSand_App_UI_SimpleActivityContinuePanel__CloseThen_218a544(param_1,0);
                    /* catch() { ... } // from try @ 0228a3ec with catch @ 0228a424 */
    plVar9 = (long *)Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar11,0);
    if (param_1[7] != 0) {
      lVar17 = *(long *)(param_1[7] + 0x18);
      if (lVar17 == 0) {
        return plVar9;
      }
                    /* WARNING: Could not recover jumptable at 0x0228a458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar9 = (long *)(**(code **)(lVar17 + 0x18))
                                 (*(undefined8 *)(lVar17 + 0x40),uVar5,
                                  *(undefined8 *)(lVar17 + 0x28));
      return plVar9;
    }
LAB_0228a540:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar17 = *(long *)puVar1;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar17 = *(long *)puVar1;
  }
  uVar11 = **(undefined8 **)(lVar17 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
                    /* try { // try from 0228a4d4 to 0238a527 has its CatchHandler @ 0228a4d4
                       catch() { ... } // from try @ 0228a4d4 with catch @ 0228a4d4
                       catch() { ... } // from try @ 0228a580 with catch @ 0228a4d4 */
  plVar9 = (long *)UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
  if (((ulong)plVar9 & 1) == 0) {
    return plVar9;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar17 = *(long *)puVar1;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar17 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04cac458;
  lVar17 = **(long **)(lVar17 + 0xb8);
                    /* try { // try from 0228a528 to 0238a52f has its CatchHandler @ 0228a5c0 */
  if (lVar17 == 0) goto LAB_0228a540;
  if ((bRam0000000004f9b87a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458,0,0);
    FUN_02132f7c(PTR_DAT_04cac748);
    FUN_02132f7c(PTR_DAT_04cac750);
    FUN_02132f7c(PTR_DAT_04cac758);
    FUN_02132f7c(PTR_DAT_04cac760);
    bRam0000000004f9b87a = 1;
  }
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04cabb08;
  if (*(char *)(*(long *)(lVar8 + 0xb8) + 1) == '\0') {
    lVar8 = *(long *)PTR_DAT_04cac758;
    if ((bRam0000000004f9b87c & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cabb08);
      bRam0000000004f9b87c = 1;
    }
    lVar17 = *(long *)(lVar17 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar1 = PTR_DAT_04ca9ae8;
    uVar5 = _UNK_00e20094;
    if ((bRam0000000004f9c314 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cad568,lVar8,0);
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
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    plVar9 = (long *)UnityEngine_Object__op_Equality_43c6f30(lVar17,0,0);
    puVar2 = PTR_DAT_04cabb08;
    if (((ulong)plVar9 & 1) != 0) {
      return plVar9;
    }
    lVar12 = *(long *)PTR_DAT_04cabb08;
    lVar13 = *(long *)PTR_DAT_04ca9c30;
    if (lVar8 != 0) {
      lVar13 = lVar8;
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar12 = *(long *)puVar2;
    }
    **(long **)(lVar12 + 0xb8) = lVar13;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar13);
    uVar22 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar22;
    if (lVar17 == 0) goto LAB_023bd530;
    uVar11 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar17,4,0);
    plVar9 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
    uVar20 = *(undefined8 *)PTR_DAT_04cad730;
    if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
    }
    lVar17 = System_Type__GetTypeFromHandle_483f0b4(uVar20,0);
    if (plVar9 == (long *)0x0) goto LAB_023bd530;
    if ((lVar17 != 0) &&
       (lVar13 = thunk_FUN_0216e7a0(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar13 == 0)) {
      uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar11,0);
    }
    if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar9[4] = lVar17;
    thunk_FUN_02134474(plVar9 + 4,lVar17);
    lVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c2310(lVar17,*(undefined8 *)PTR_DAT_04cb6578,plVar9,0);
    if ((lVar17 == 0) ||
       (lVar13 = UnityEngine_GameObject__get_transform_43c1048(lVar17,0), lVar13 == 0))
    goto LAB_023bd530;
    UnityEngine_Transform__SetParent_43d1e34(lVar13,uVar11,0,0);
    plVar9 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar17,0);
    if (plVar9 == (long *)0x0) goto LAB_023bd530;
    if (*plVar9 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4(plVar9);
    }
    UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,uVar5,plVar9,0);
    UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,uVar5,plVar9,0);
    puVar3 = PTR_DAT_04cad330;
    lVar13 = *(long *)PTR_DAT_04cad330;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar3;
    }
    puVar18 = *(undefined4 **)(lVar13 + 0xb8);
    lStack_68 = 0;
    System_Nullable_Color____ctor_2bc9090
              (*puVar18,puVar18[1],puVar18[2],puVar18[3],&lStack_68,*(undefined8 *)PTR_DAT_04cac878)
    ;
    uStack_70 = 0;
    alStack_80[1] = 0;
    alStack_80[0] = lStack_68;
    lVar13 = Dino_BusSand_App_UI_UiKit__Text_2282314
                       (0x42480000,0x444d0000,0x42c80000,0,0x40800000,plVar9,
                        *(undefined8 *)PTR_DAT_04cb4e20,lVar8,*(undefined8 *)PTR_DAT_04cad4a8,
                        alStack_80,0x202,0);
    if (lVar13 == 0) goto LAB_023bd530;
    TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar13,1,0);
    fVar24 = 0.0;
    TMPro_TMP_Text__GetPreferredValues_42d1a10(0x444d0000,lVar13,lVar8,0);
    fVar23 = 150.0;
    if (150.0 <= fVar24 + 70.0) {
      fVar23 = fVar24 + 70.0;
    }
    lVar8 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar13,0);
    if (lVar8 == 0) goto LAB_023bd530;
    UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x444d0000,fVar23 + -50.0,lVar8,0);
    UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x44660000,fVar23,plVar9,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    uStack_98 = 0;
    lStack_90 = 0;
    uStack_88 = (long *)((ulong)uStack_88._4_4_ << 0x20);
    fVar24 = 1.0;
    if (fVar23 / 241.0 <= 1.0) {
      fVar24 = fVar23 / 241.0;
    }
    lVar8 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                      (0x44660000,fVar23,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                       (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],fVar24,plVar9,
                       *(undefined8 *)PTR_DAT_04cafbb8,*(undefined8 *)PTR_DAT_04cb64b8,&uStack_98,0)
    ;
    if (lVar8 == 0) goto LAB_023bd530;
    UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar8,0);
    uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
    if ((uVar10 & 1) == 0) {
      fVar23 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar2;
      }
      if (_UNK_00e200f8 < fVar23 - *(float *)(*(long *)(lVar8 + 0xb8) + 0x18)) goto LAB_023bd36c;
    }
    else {
LAB_023bd36c:
      puVar3 = PTR_DAT_04cad568;
      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar3;
      }
      if (**(long **)(lVar8 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__Toast_2383580(**(long **)(lVar8 + 0xb8),0);
      }
    }
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar2;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
    if ((uVar10 & 1) != 0) {
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar2;
      }
      Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
                (_UNK_00e201f4,0,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10));
    }
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar2;
    }
    plVar14 = (long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    *plVar14 = lVar17;
    thunk_FUN_02134474(plVar14,lVar17);
    uVar5 = UnityEngine_Time__get_unscaledTime_43cd610(0);
    iVar6 = *(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4);
    *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = uVar5;
    if (iVar6 == 0) {
      thunk_FUN_0218fdac();
    }
    lVar8 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar17,0);
    if (lVar8 != 0) {
      UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar8,0,0);
      Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                (0,_UNK_00e1fde8,_UNK_00e204e8,_UNK_00e203f0,plVar9,0,0,0);
      Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0xc1c00000,0,_UNK_00e207cc,plVar9,0,0);
      plVar9 = (long *)Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
                                 (_UNK_00e208d0,_UNK_00e1fdec,lVar17);
      return plVar9;
    }
LAB_023bd530:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(long *)(lVar17 + 0x28) == 0) {
LAB_022681ac:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  plVar9 = (long *)Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                             (*(long *)(lVar17 + 0x28),*(undefined8 *)PTR_DAT_04cac748);
  if (((ulong)plVar9 & 1) != 0) {
    return plVar9;
  }
  lVar17 = *(long *)(lVar17 + 0x28);
  if (lVar17 == 0) goto LAB_022681ac;
  lVar8 = *(long *)PTR_DAT_04cac760;
  lVar13 = *(long *)PTR_DAT_04cac750;
  if (*(long *)(lVar13 + 0x38) == 0) {
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
    if (*(long *)(lVar13 + 0x38) == 0) {
      FUN_0216b4cc(lVar13);
    }
  }
  puVar1 = PTR_DAT_04ca9ac8;
  lStack_68 = 0;
  acStack_6c[0] = '\0';
  uStack_70 = uStack_70 & 0xffffff00;
  lStack_90 = 0;
  uStack_88 = (long *)0x0;
  alStack_80[0] = 0;
  uVar11 = *(undefined8 *)PTR_DAT_04cc5280;
  uStack_98 = (ulong)uStack_98._4_4_ << 0x20;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar9 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar11,0);
  uVar11 = System_Type__GetTypeFromHandle_483f0b4(**(undefined8 **)(lVar13 + 0x38),0);
  if (plVar9 == (long *)0x0) goto LAB_02a45eb0;
  uVar7 = (**(code **)(*plVar9 + 0x2b8))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 0x2c0));
  puVar2 = PTR_DAT_04ca9ae8;
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = Dino_BusSand_App_UiAssets__Prefab_21513b8(lVar8,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
    if ((uVar10 & 1) != 0) {
      uVar11 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cc5288,lVar8,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogError_4361614(uVar11,0);
      return (long *)0x0;
    }
    uVar20 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar17,2,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    lVar12 = UnityEngine_Object__Instantiate_object__2805310
                       (uVar11,uVar20,0,*(undefined8 *)PTR_DAT_04cad390);
LAB_02a45794:
    if (lVar12 == 0) goto LAB_02a45eb0;
  }
  else {
    uVar11 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar17,2,0);
    if (*(int *)(*(long *)PTR_DAT_04cac4f8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac4f8);
    }
    lVar12 = Dino_BusSand_App_UI_KitPrefabs__Spawn_2181840(lVar8,uVar11,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar12,0,0);
    if ((uVar10 & 1) == 0) goto LAB_02a45794;
    plVar9 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
    uVar11 = *(undefined8 *)PTR_DAT_04cad730;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(puVar1 + 0xe0));
    }
    lVar12 = System_Type__GetTypeFromHandle_483f0b4(uVar11,0);
    if (plVar9 == (long *)0x0) goto LAB_02a45eb0;
    if ((lVar12 != 0) &&
       (lVar15 = thunk_FUN_0216e7a0(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar15 == 0)) {
      uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar11,0);
    }
    if ((int)plVar9[3] == 0) {
LAB_02a45eb4:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar9[4] = lVar12;
    thunk_FUN_02134474(plVar9 + 4,lVar12);
    lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c2310(lVar12,lVar8,plVar9,0);
    lVar15 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar17,2,0);
    if (((lVar15 == 0) ||
        (lVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0), lVar15 == 0)) ||
       (uVar5 = UnityEngine_GameObject__get_layer_43c1118(lVar15,0), lVar12 == 0))
    goto LAB_02a45eb0;
    UnityEngine_GameObject__set_layer_43c11cc(lVar12,uVar5,0);
    lVar15 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
    uVar11 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar17,2,0);
    if (lVar15 == 0) goto LAB_02a45eb0;
    UnityEngine_Transform__SetParent_43d1e34(lVar15,uVar11,0,0);
  }
  UnityEngine_Object__set_name_43c72ec(lVar12,lVar8,0);
  plVar9 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else if (*plVar9 != *(long *)PTR_DAT_04cabdb0) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(plVar9,0,0);
  if ((uVar10 & 1) != 0) {
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar1 = PTR_DAT_04cacfc0;
    if (plVar9 == (long *)0x0) goto LAB_02a45eb0;
    UnityEngine_RectTransform__set_anchorMin_43cf5e4
              (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
               (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],plVar9,0);
    if (cRam0000000004f9b949 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b949 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax_43cf768
              (*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
               *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),plVar9,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin_43cfe84
              (**(undefined4 **)(*(long *)puVar1 + 0xb8),
               (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],plVar9,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax_43d0018
              (**(undefined4 **)(*(long *)puVar1 + 0xb8),
               (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],plVar9,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    lVar15 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar15 + 0xc),*(undefined4 *)(lVar15 + 0x10),
               *(undefined4 *)(lVar15 + 0x14),plVar9,0);
  }
  lVar15 = UnityEngine_GameObject__GetComponent_object__275a5dc
                     (lVar12,*(undefined8 *)PTR_DAT_04cad3f0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar15,0,0);
  if ((uVar10 & 1) != 0) {
    lVar15 = UnityEngine_GameObject__AddComponent_object__275a54c
                       (lVar12,*(undefined8 *)PTR_DAT_04cacf88);
  }
  if (lVar15 != 0) {
    UnityEngine_Canvas__set_additionalShaderChannels_4680600(lVar15,0x19,0);
    if (*(long *)(lVar17 + 0x38) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&lStack_c8,*(long *)(lVar17 + 0x38),*(undefined8 *)PTR_DAT_04cabae0);
      puVar1 = PTR_DAT_04cabac0;
      iVar6 = 0;
      uStack_88 = plStack_c0;
      lStack_90 = lStack_c8;
      alStack_80[0] = (long)puStack_b8;
      lStack_c8 = 0;
      plStack_c0 = &lStack_90;
      while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&lStack_90,*(undefined8 *)puVar1), lVar4 = alStack_80[0],
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
      UnityEngine_Canvas__set_overrideSorting_467ff6c(lVar15,1,0);
      UnityEngine_Canvas__set_sortingOrder_46800e4(lVar15,iVar6 * 0x14 + 0x7e4,0);
      uVar11 = UnityEngine_GameObject__GetComponent_object__275a5dc
                         (lVar12,*(undefined8 *)PTR_DAT_04cad3f8);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
      if ((uVar10 & 1) != 0) {
        UnityEngine_GameObject__AddComponent_object__275a54c(lVar12,*(undefined8 *)PTR_DAT_04cacf90)
        ;
      }
      Dino_BusSand_App_UI_UIManager__SubstituteSoftMasks_21fe774(lVar12,0);
      if (*(int *)(*(long *)PTR_DAT_04cab188 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UIParticleSorting__PrepareAll_217d4f4(lVar12,0);
      plVar9 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                 (lVar12,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x10));
      lVar13 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                         (lVar12,1,*(undefined8 *)PTR_DAT_04cab4a0);
      puVar3 = PTR_DAT_04cae1a8;
      puVar1 = PTR_DAT_04cae1a0;
      if (lVar13 != 0) {
        uVar16 = *(uint *)(lVar13 + 0x18);
        if (0 < (int)uVar16) {
          uVar21 = 0;
          do {
            if (uVar16 <= uVar21) goto LAB_02a45eb4;
            lVar15 = *(long *)(lVar13 + (long)(int)uVar21 * 8 + 0x20);
            if (lVar15 == 0) goto LAB_02a45eb0;
            uVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar2);
            }
            uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,lVar12,0);
            if ((uVar10 & 1) != 0) {
              uVar11 = UnityEngine_Component__GetComponent_object__26f97e8
                                 (lVar15,*(undefined8 *)puVar1);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
              if ((uVar10 & 1) != 0) {
                lVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0);
                if (lVar15 == 0) goto LAB_02a45eb0;
                UnityEngine_GameObject__AddComponent_object__275a54c(lVar15,*(undefined8 *)puVar3);
              }
            }
            uVar16 = *(uint *)(lVar13 + 0x18);
            uVar21 = uVar21 + 1;
          } while ((int)uVar21 < (int)uVar16);
        }
        if (plVar9 != (long *)0x0) {
          plVar9[4] = lVar8;
          thunk_FUN_02134474(plVar9 + 4,lVar8);
          *(undefined4 *)(plVar9 + 5) = 2;
          lVar17 = *(long *)(lVar17 + 0x38);
          if (lVar17 != 0) {
            lVar13 = *(long *)(lVar17 + 0x10);
            lVar15 = *(long *)PTR_DAT_04cabde0;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar13 != 0) {
              uVar16 = *(uint *)(lVar17 + 0x18);
              if (uVar16 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar17 + 0x18) = uVar16 + 1;
                plVar14 = (long *)(lVar13 + (long)(int)uVar16 * 8 + 0x20);
                *plVar14 = (long)plVar9;
                thunk_FUN_02134474(plVar14,plVar9);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar17,plVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              puVar2 = PTR_DAT_04cb4ce0;
              puVar1 = PTR_DAT_04cad7b8;
              if ((uVar7 & 1) == 0) {
                lVar17 = *(long *)PTR_DAT_04cb4ce0;
                cVar19 = '\0';
                lStack_68 = 0;
              }
              else {
                uVar11 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
                lVar17 = *(long *)puVar1;
                if (*(int *)(lVar17 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar17);
                }
                lStack_68 = Dino_BusSand_App_UI_KitAdopt__Begin_227d2a0(uVar11,lVar8,0);
                lVar17 = *(long *)puVar2;
                if (*(int *)(lVar17 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar17);
                  lVar17 = *(long *)puVar2;
                }
                cVar19 = **(char **)(lVar17 + 0xb8);
              }
              acStack_6c[0] = cVar19 != '\0';
              if (*(int *)(lVar17 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar17);
                lVar17 = *(long *)puVar2;
              }
              lVar8 = *(long *)(lVar17 + 0xb8);
              uStack_70 = CONCAT31(uStack_70._1_3_,*(undefined1 *)(lVar8 + 1));
              if (acStack_6c[0] != '\0') {
                if (*(int *)(lVar17 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar17);
                  lVar8 = *(long *)(*(long *)puVar2 + 0xb8);
                }
                *(undefined1 *)(lVar8 + 1) = 1;
              }
              plStack_c0 = (long *)acStack_6c;
              puStack_b8 = &uStack_70;
              lStack_c8 = 0;
              plStack_b0 = &lStack_68;
              (**(code **)(*plVar9 + 0x178))(plVar9,0,*(undefined8 *)(*plVar9 + 0x180));
              if ((char)*plStack_c0 != '\0') {
                lVar17 = *(long *)puVar2;
                uVar7 = *puStack_b8;
                if (*(int *)(lVar17 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar17 = *(long *)puVar2;
                }
                *(char *)(*(long *)(lVar17 + 0xb8) + 1) = (char)uVar7;
              }
              lVar17 = *plStack_b0;
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_KitAdopt__End_227e4f0(lVar17,0);
              if (lStack_c8 == 0) {
                if (acStack_6c[0] != '\0') {
                  lVar17 = *(long *)puVar2;
                  if (*(int *)(lVar17 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar17 = *(long *)puVar2;
                  }
                  lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
                  if (lVar17 != 0) {
                    (**(code **)(lVar17 + 0x18))
                              (*(undefined8 *)(lVar17 + 0x40),plVar9,*(undefined8 *)(lVar17 + 0x28))
                    ;
                  }
                }
                uVar11 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
                Dino_BusSand_App_UI_UIManager__FullScreenBackdrops_21fe258(uVar11,0);
                uVar11 = UnityEngine_GameObject__get_transform_43c1048(lVar12,0);
                if (*(int *)(*(long *)PTR_DAT_04cabf58 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabf58);
                }
                Dino_BusSand_App_SpriteSkin__Apply_215e5c0(uVar11,0);
                Dino_BusSand_App_UI_UiTweaks__Attach_22a3600(plVar9,0);
                Dino_BusSand_App_UI_UIManagerEvents__RaiseOpened_220008c(plVar9,0);
                return plVar9;
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

