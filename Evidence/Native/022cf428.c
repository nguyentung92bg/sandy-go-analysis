/* IL2CPP: Dino.BusSand.App.UI.PassportContinuePanel$$OnCoin
void Dino_BusSand_App_UI_PassportContinuePanel__OnCoin (Dino_BusSand_App_UI_PassportContinuePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02a45de8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PassportContinuePanel$$OnCoin
   void Dino_BusSand_App_UI_PassportContinuePanel__OnCoin
   (Dino_BusSand_App_UI_PassportContinuePanel_o* __this, const MethodInfo* method); */

long * Dino_BusSand_App_UI_PassportContinuePanel__OnCoin_21cf428(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  undefined4 *puVar17;
  char cVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
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
  
  plVar7 = param_1;
  if ((bRam0000000004f9bb30 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04caab38);
    FUN_02132f7c(PTR_DAT_04ca9b50);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb0358);
    FUN_02132f7c(PTR_DAT_04cb0360);
    FUN_02132f7c(PTR_DAT_04cb0368);
    FUN_02132f7c(PTR_DAT_04cac740);
    plVar7 = (long *)FUN_02132f7c(PTR_DAT_04cb0370);
    bRam0000000004f9bb30 = 1;
  }
  if ((char)param_1[8] != '\0') {
    return plVar7;
  }
  plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
  puVar1 = PTR_DAT_04cb0360;
  if (plVar7 == (long *)0x0) {
LAB_022cf7b0:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(long *)PTR_DAT_04cb0360 != 0) &&
     (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb0360,*(undefined8 *)(*plVar7 + 0x40)),
     lVar8 == 0)) {
LAB_022cf7b8:
    uVar19 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar19,0);
  }
  if ((int)plVar7[3] == 0) {
LAB_022cf7b4:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar7[4] = *(long *)puVar1;
  thunk_FUN_02134474();
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b08);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628
            (lVar8,*(undefined8 *)PTR_DAT_04ca9b50);
  if (lVar8 == 0) goto LAB_022cf7b0;
  System_Collections_Generic_Dictionary_object__object___Add_34b43a4
            (lVar8,*(undefined8 *)PTR_DAT_04cb0370,*(undefined8 *)PTR_DAT_04cb0368,
             *(undefined8 *)PTR_DAT_04caab38);
  lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40));
  if (lVar9 == 0) goto LAB_022cf7b8;
  if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_022cf7b4;
  plVar7[5] = lVar8;
  thunk_FUN_02134474(plVar7 + 5,lVar8);
  if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb0358,plVar7,0);
  puVar1 = PTR_DAT_04cabaf8;
  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar8 = Dino_BusSand_App_Meta_Profile__get_Coins_2272a04(0);
  puVar2 = PTR_DAT_04cac440;
  if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac440);
  }
  iVar5 = Dino_BusSand_App_Meta_Economy__get_RevivePrice_220499c(0);
  puVar3 = PTR_DAT_04caba50;
  if (iVar5 <= lVar8) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar5 = Dino_BusSand_App_Meta_Economy__get_RevivePrice_220499c(0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    Dino_BusSand_App_Meta_Profile__TrySpend_2272968
              (0x3e9,(long)iVar5,*(undefined8 *)PTR_DAT_04cac740,0);
    uVar24 = *(undefined4 *)((long)param_1 + 0x44);
    if ((char)param_1[8] != '\0') {
      return param_1;
    }
    *(undefined1 *)(param_1 + 8) = 1;
    if (param_1[7] != 0) {
      plVar7 = (long *)(param_1[7] + 0x10);
      lVar8 = *plVar7;
      *plVar7 = 0;
      thunk_FUN_02134474(plVar7,0);
      if (param_1[7] != 0) {
        puVar10 = (undefined8 *)(param_1[7] + 0x18);
        *puVar10 = 0;
        thunk_FUN_02134474(puVar10,0);
        Dino_BusSand_App_UI_ContinueBottomPanel__HaveContinueAniClose_22bf694(1,0);
        plVar7 = (long *)Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
        if (lVar8 == 0) {
          return plVar7;
        }
                    /* WARNING: Could not recover jumptable at 0x022cf850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar7 = (long *)(**(code **)(lVar8 + 0x18))
                                   (*(undefined8 *)(lVar8 + 0x40),uVar24,
                                    *(undefined8 *)(lVar8 + 0x28));
        return plVar7;
      }
    }
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
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar3;
  }
  uVar19 = **(undefined8 **)(lVar8 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  plVar7 = (long *)UnityEngine_Object__op_Inequality_43c8dec(uVar19,0,0);
  if (((ulong)plVar7 & 1) == 0) {
    return plVar7;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
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
  puVar1 = PTR_DAT_04cac458;
  lVar8 = **(long **)(lVar8 + 0xb8);
  if (lVar8 == 0) goto LAB_022cf7b0;
  if ((bRam0000000004f9b87a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458,0,0);
    FUN_02132f7c(PTR_DAT_04cac748);
    FUN_02132f7c(PTR_DAT_04cac750);
    FUN_02132f7c(PTR_DAT_04cac758);
    FUN_02132f7c(PTR_DAT_04cac760);
    bRam0000000004f9b87a = 1;
  }
  lVar9 = *(long *)puVar1;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04cabb08;
  if (*(char *)(*(long *)(lVar9 + 0xb8) + 1) == '\0') {
    lVar9 = *(long *)PTR_DAT_04cac758;
    if ((bRam0000000004f9b87c & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cabb08);
      bRam0000000004f9b87c = 1;
    }
    lVar8 = *(long *)(lVar8 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar1 = PTR_DAT_04ca9ae8;
    uVar24 = _UNK_00e20094;
    if ((bRam0000000004f9c314 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cad568,lVar9,0);
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
    plVar7 = (long *)UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
    puVar2 = PTR_DAT_04cabb08;
    if (((ulong)plVar7 & 1) != 0) {
      return plVar7;
    }
    lVar11 = *(long *)PTR_DAT_04cabb08;
    lVar12 = *(long *)PTR_DAT_04ca9c30;
    if (lVar9 != 0) {
      lVar12 = lVar9;
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar2;
    }
    **(long **)(lVar11 + 0xb8) = lVar12;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar12);
    uVar22 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar22;
    if (lVar8 == 0) goto LAB_023bd530;
    uVar19 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar8,4,0);
    plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
    uVar20 = *(undefined8 *)PTR_DAT_04cad730;
    if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
    }
    lVar8 = System_Type__GetTypeFromHandle_483f0b4(uVar20,0);
    if (plVar7 == (long *)0x0) goto LAB_023bd530;
    if ((lVar8 != 0) &&
       (lVar12 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar12 == 0)) {
      uVar19 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar19,0);
    }
    if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar7[4] = lVar8;
    thunk_FUN_02134474(plVar7 + 4,lVar8);
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c2310(lVar8,*(undefined8 *)PTR_DAT_04cb6578,plVar7,0);
    if ((lVar8 == 0) ||
       (lVar12 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0), lVar12 == 0))
    goto LAB_023bd530;
    UnityEngine_Transform__SetParent_43d1e34(lVar12,uVar19,0,0);
    plVar7 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
    if (plVar7 == (long *)0x0) goto LAB_023bd530;
    if (*plVar7 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4(plVar7);
    }
    UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,uVar24,plVar7,0);
    UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,uVar24,plVar7,0);
    puVar3 = PTR_DAT_04cad330;
    lVar12 = *(long *)PTR_DAT_04cad330;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar12 = *(long *)puVar3;
    }
    puVar17 = *(undefined4 **)(lVar12 + 0xb8);
    lStack_68 = 0;
    System_Nullable_Color____ctor_2bc9090
              (*puVar17,puVar17[1],puVar17[2],puVar17[3],&lStack_68,*(undefined8 *)PTR_DAT_04cac878)
    ;
    uStack_70 = 0;
    alStack_80[1] = 0;
    alStack_80[0] = lStack_68;
    lVar12 = Dino_BusSand_App_UI_UiKit__Text_2282314
                       (0x42480000,0x444d0000,0x42c80000,0,0x40800000,plVar7,
                        *(undefined8 *)PTR_DAT_04cb4e20,lVar9,*(undefined8 *)PTR_DAT_04cad4a8,
                        alStack_80,0x202,0);
    if (lVar12 == 0) goto LAB_023bd530;
    TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar12,1,0);
    fVar25 = 0.0;
    TMPro_TMP_Text__GetPreferredValues_42d1a10(0x444d0000,lVar12,lVar9,0);
    fVar23 = 150.0;
    if (150.0 <= fVar25 + 70.0) {
      fVar23 = fVar25 + 70.0;
    }
    lVar9 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar12,0);
    if (lVar9 == 0) goto LAB_023bd530;
    UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x444d0000,fVar23 + -50.0,lVar9,0);
    UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x44660000,fVar23,plVar7,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    uStack_98 = 0;
    lStack_90 = 0;
    uStack_88 = (long *)((ulong)uStack_88._4_4_ << 0x20);
    fVar25 = 1.0;
    if (fVar23 / 241.0 <= 1.0) {
      fVar25 = fVar23 / 241.0;
    }
    lVar9 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                      (0x44660000,fVar23,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                       (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],fVar25,plVar7,
                       *(undefined8 *)PTR_DAT_04cafbb8,*(undefined8 *)PTR_DAT_04cb64b8,&uStack_98,0)
    ;
    if (lVar9 == 0) goto LAB_023bd530;
    UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar9,0);
    uVar19 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar13 = UnityEngine_Object__op_Equality_43c6f30(uVar19,0,0);
    if ((uVar13 & 1) == 0) {
      fVar23 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
      lVar9 = *(long *)puVar2;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar2;
      }
      if (_UNK_00e200f8 < fVar23 - *(float *)(*(long *)(lVar9 + 0xb8) + 0x18)) goto LAB_023bd36c;
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
      lVar9 = *(long *)puVar3;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar3;
      }
      if (**(long **)(lVar9 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__Toast_2383580(**(long **)(lVar9 + 0xb8),0);
      }
    }
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar2;
    }
    uVar19 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar13 = UnityEngine_Object__op_Inequality_43c8dec(uVar19,0,0);
    if ((uVar13 & 1) != 0) {
      lVar9 = *(long *)puVar2;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar2;
      }
      Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
                (_UNK_00e201f4,0,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10));
    }
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar2;
    }
    plVar14 = (long *)(*(long *)(lVar9 + 0xb8) + 0x10);
    *plVar14 = lVar8;
    thunk_FUN_02134474(plVar14,lVar8);
    uVar24 = UnityEngine_Time__get_unscaledTime_43cd610(0);
    iVar5 = *(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4);
    *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = uVar24;
    if (iVar5 == 0) {
      thunk_FUN_0218fdac();
    }
    lVar9 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar8,0);
    if (lVar9 != 0) {
      UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar9,0,0);
      Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                (0,_UNK_00e1fde8,_UNK_00e204e8,_UNK_00e203f0,plVar7,0,0,0);
      Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0xc1c00000,0,_UNK_00e207cc,plVar7,0,0);
      plVar7 = (long *)Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
                                 (_UNK_00e208d0,_UNK_00e1fdec,lVar8);
      return plVar7;
    }
LAB_023bd530:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(long *)(lVar8 + 0x28) == 0) {
LAB_022681ac:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  plVar7 = (long *)Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                             (*(long *)(lVar8 + 0x28),*(undefined8 *)PTR_DAT_04cac748);
  if (((ulong)plVar7 & 1) != 0) {
    return plVar7;
  }
  lVar8 = *(long *)(lVar8 + 0x28);
  if (lVar8 == 0) goto LAB_022681ac;
  lVar9 = *(long *)PTR_DAT_04cac760;
  lVar12 = *(long *)PTR_DAT_04cac750;
  if (*(long *)(lVar12 + 0x38) == 0) {
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
    if (*(long *)(lVar12 + 0x38) == 0) {
      FUN_0216b4cc(lVar12);
    }
  }
  puVar1 = PTR_DAT_04ca9ac8;
  lStack_68 = 0;
  acStack_6c[0] = '\0';
  uStack_70 = uStack_70 & 0xffffff00;
  lStack_90 = 0;
  uStack_88 = (long *)0x0;
  alStack_80[0] = 0;
  uVar19 = *(undefined8 *)PTR_DAT_04cc5280;
  uStack_98 = (ulong)uStack_98._4_4_ << 0x20;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar7 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar19,0);
  uVar19 = System_Type__GetTypeFromHandle_483f0b4(**(undefined8 **)(lVar12 + 0x38),0);
  if (plVar7 == (long *)0x0) goto LAB_02a45eb0;
  uVar6 = (**(code **)(*plVar7 + 0x2b8))(plVar7,uVar19,*(undefined8 *)(*plVar7 + 0x2c0));
  puVar2 = PTR_DAT_04ca9ae8;
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar19 = Dino_BusSand_App_UiAssets__Prefab_21513b8(lVar9,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar13 = UnityEngine_Object__op_Equality_43c6f30(uVar19,0,0);
    if ((uVar13 & 1) != 0) {
      uVar19 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cc5288,lVar9,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogError_4361614(uVar19,0);
      return (long *)0x0;
    }
    uVar20 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar8,2,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    lVar11 = UnityEngine_Object__Instantiate_object__2805310
                       (uVar19,uVar20,0,*(undefined8 *)PTR_DAT_04cad390);
LAB_02a45794:
    if (lVar11 == 0) goto LAB_02a45eb0;
  }
  else {
    uVar19 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar8,2,0);
    if (*(int *)(*(long *)PTR_DAT_04cac4f8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac4f8);
    }
    lVar11 = Dino_BusSand_App_UI_KitPrefabs__Spawn_2181840(lVar9,uVar19,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar13 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
    if ((uVar13 & 1) == 0) goto LAB_02a45794;
    plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
    uVar19 = *(undefined8 *)PTR_DAT_04cad730;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(puVar1 + 0xe0));
    }
    lVar11 = System_Type__GetTypeFromHandle_483f0b4(uVar19,0);
    if (plVar7 == (long *)0x0) goto LAB_02a45eb0;
    if ((lVar11 != 0) &&
       (lVar15 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar15 == 0)) {
      uVar19 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar19,0);
    }
    if ((int)plVar7[3] == 0) {
LAB_02a45eb4:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar7[4] = lVar11;
    thunk_FUN_02134474(plVar7 + 4,lVar11);
    lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c2310(lVar11,lVar9,plVar7,0);
    lVar15 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar8,2,0);
    if (((lVar15 == 0) ||
        (lVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0), lVar15 == 0)) ||
       (uVar24 = UnityEngine_GameObject__get_layer_43c1118(lVar15,0), lVar11 == 0))
    goto LAB_02a45eb0;
    UnityEngine_GameObject__set_layer_43c11cc(lVar11,uVar24,0);
    lVar15 = UnityEngine_GameObject__get_transform_43c1048(lVar11,0);
    uVar19 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar8,2,0);
    if (lVar15 == 0) goto LAB_02a45eb0;
    UnityEngine_Transform__SetParent_43d1e34(lVar15,uVar19,0,0);
  }
  UnityEngine_Object__set_name_43c72ec(lVar11,lVar9,0);
  plVar7 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar11,0);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else if (*plVar7 != *(long *)PTR_DAT_04cabdb0) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar13 = UnityEngine_Object__op_Inequality_43c8dec(plVar7,0,0);
  if ((uVar13 & 1) != 0) {
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar1 = PTR_DAT_04cacfc0;
    if (plVar7 == (long *)0x0) goto LAB_02a45eb0;
    UnityEngine_RectTransform__set_anchorMin_43cf5e4
              (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
               (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],plVar7,0);
    if (cRam0000000004f9b949 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b949 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax_43cf768
              (*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
               *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),plVar7,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin_43cfe84
              (**(undefined4 **)(*(long *)puVar1 + 0xb8),
               (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],plVar7,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax_43d0018
              (**(undefined4 **)(*(long *)puVar1 + 0xb8),
               (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],plVar7,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    lVar15 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar15 + 0xc),*(undefined4 *)(lVar15 + 0x10),
               *(undefined4 *)(lVar15 + 0x14),plVar7,0);
  }
  lVar15 = UnityEngine_GameObject__GetComponent_object__275a5dc
                     (lVar11,*(undefined8 *)PTR_DAT_04cad3f0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar13 = UnityEngine_Object__op_Equality_43c6f30(lVar15,0,0);
  if ((uVar13 & 1) != 0) {
    lVar15 = UnityEngine_GameObject__AddComponent_object__275a54c
                       (lVar11,*(undefined8 *)PTR_DAT_04cacf88);
  }
  if (lVar15 != 0) {
    UnityEngine_Canvas__set_additionalShaderChannels_4680600(lVar15,0x19,0);
    if (*(long *)(lVar8 + 0x38) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&lStack_c8,*(long *)(lVar8 + 0x38),*(undefined8 *)PTR_DAT_04cabae0);
      puVar1 = PTR_DAT_04cabac0;
      iVar5 = 0;
      uStack_88 = plStack_c0;
      lStack_90 = lStack_c8;
      alStack_80[0] = (long)puStack_b8;
      lStack_c8 = 0;
      plStack_c0 = &lStack_90;
      while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&lStack_90,*(undefined8 *)puVar1), lVar4 = alStack_80[0],
            (uVar13 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar13 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
        if ((uVar13 & 1) != 0) {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if ((*(char *)(lVar4 + 0x2c) == '\0') && (*(int *)(lVar4 + 0x28) == 2)) {
            iVar5 = iVar5 + 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&lStack_90,*(undefined8 *)PTR_DAT_04cabab8);
      UnityEngine_Canvas__set_overrideSorting_467ff6c(lVar15,1,0);
      UnityEngine_Canvas__set_sortingOrder_46800e4(lVar15,iVar5 * 0x14 + 0x7e4,0);
      uVar19 = UnityEngine_GameObject__GetComponent_object__275a5dc
                         (lVar11,*(undefined8 *)PTR_DAT_04cad3f8);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar13 = UnityEngine_Object__op_Equality_43c6f30(uVar19,0,0);
      if ((uVar13 & 1) != 0) {
        UnityEngine_GameObject__AddComponent_object__275a54c(lVar11,*(undefined8 *)PTR_DAT_04cacf90)
        ;
      }
      Dino_BusSand_App_UI_UIManager__SubstituteSoftMasks_21fe774(lVar11,0);
      if (*(int *)(*(long *)PTR_DAT_04cab188 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UIParticleSorting__PrepareAll_217d4f4(lVar11,0);
      plVar7 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                 (lVar11,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
      lVar12 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                         (lVar11,1,*(undefined8 *)PTR_DAT_04cab4a0);
      puVar3 = PTR_DAT_04cae1a8;
      puVar1 = PTR_DAT_04cae1a0;
      if (lVar12 != 0) {
        uVar16 = *(uint *)(lVar12 + 0x18);
        if (0 < (int)uVar16) {
          uVar21 = 0;
          do {
            if (uVar16 <= uVar21) goto LAB_02a45eb4;
            lVar15 = *(long *)(lVar12 + (long)(int)uVar21 * 8 + 0x20);
            if (lVar15 == 0) goto LAB_02a45eb0;
            uVar19 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar2);
            }
            uVar13 = UnityEngine_Object__op_Inequality_43c8dec(uVar19,lVar11,0);
            if ((uVar13 & 1) != 0) {
              uVar19 = UnityEngine_Component__GetComponent_object__26f97e8
                                 (lVar15,*(undefined8 *)puVar1);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              uVar13 = UnityEngine_Object__op_Equality_43c6f30(uVar19,0,0);
              if ((uVar13 & 1) != 0) {
                lVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0);
                if (lVar15 == 0) goto LAB_02a45eb0;
                UnityEngine_GameObject__AddComponent_object__275a54c(lVar15,*(undefined8 *)puVar3);
              }
            }
            uVar16 = *(uint *)(lVar12 + 0x18);
            uVar21 = uVar21 + 1;
          } while ((int)uVar21 < (int)uVar16);
        }
        if (plVar7 != (long *)0x0) {
          plVar7[4] = lVar9;
          thunk_FUN_02134474(plVar7 + 4,lVar9);
          *(undefined4 *)(plVar7 + 5) = 2;
          lVar8 = *(long *)(lVar8 + 0x38);
          if (lVar8 != 0) {
            lVar12 = *(long *)(lVar8 + 0x10);
            lVar15 = *(long *)PTR_DAT_04cabde0;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar12 != 0) {
              uVar16 = *(uint *)(lVar8 + 0x18);
              if (uVar16 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar16 + 1;
                plVar14 = (long *)(lVar12 + (long)(int)uVar16 * 8 + 0x20);
                *plVar14 = (long)plVar7;
                thunk_FUN_02134474(plVar14,plVar7);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar8,plVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              puVar2 = PTR_DAT_04cb4ce0;
              puVar1 = PTR_DAT_04cad7b8;
              if ((uVar6 & 1) == 0) {
                lVar8 = *(long *)PTR_DAT_04cb4ce0;
                cVar18 = '\0';
                lStack_68 = 0;
              }
              else {
                uVar19 = UnityEngine_GameObject__get_transform_43c1048(lVar11,0);
                lVar8 = *(long *)puVar1;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar8);
                }
                lStack_68 = Dino_BusSand_App_UI_KitAdopt__Begin_227d2a0(uVar19,lVar9,0);
                lVar8 = *(long *)puVar2;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar8);
                  lVar8 = *(long *)puVar2;
                }
                cVar18 = **(char **)(lVar8 + 0xb8);
              }
              acStack_6c[0] = cVar18 != '\0';
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar8);
                lVar8 = *(long *)puVar2;
              }
              lVar9 = *(long *)(lVar8 + 0xb8);
              uStack_70 = CONCAT31(uStack_70._1_3_,*(undefined1 *)(lVar9 + 1));
              if (acStack_6c[0] != '\0') {
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar8);
                  lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
                }
                *(undefined1 *)(lVar9 + 1) = 1;
              }
              plStack_c0 = (long *)acStack_6c;
              puStack_b8 = &uStack_70;
              lStack_c8 = 0;
              plStack_b0 = &lStack_68;
              (**(code **)(*plVar7 + 0x178))(plVar7,0,*(undefined8 *)(*plVar7 + 0x180));
              if ((char)*plStack_c0 != '\0') {
                lVar8 = *(long *)puVar2;
                uVar6 = *puStack_b8;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar8 = *(long *)puVar2;
                }
                *(char *)(*(long *)(lVar8 + 0xb8) + 1) = (char)uVar6;
              }
              lVar8 = *plStack_b0;
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_KitAdopt__End_227e4f0(lVar8,0);
              if (lStack_c8 == 0) {
                if (acStack_6c[0] != '\0') {
                  lVar8 = *(long *)puVar2;
                  if (*(int *)(lVar8 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar8 = *(long *)puVar2;
                  }
                  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
                  if (lVar8 != 0) {
                    (**(code **)(lVar8 + 0x18))
                              (*(undefined8 *)(lVar8 + 0x40),plVar7,*(undefined8 *)(lVar8 + 0x28));
                  }
                }
                uVar19 = UnityEngine_GameObject__get_transform_43c1048(lVar11,0);
                Dino_BusSand_App_UI_UIManager__FullScreenBackdrops_21fe258(uVar19,0);
                uVar19 = UnityEngine_GameObject__get_transform_43c1048(lVar11,0);
                if (*(int *)(*(long *)PTR_DAT_04cabf58 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabf58);
                }
                Dino_BusSand_App_SpriteSkin__Apply_215e5c0(uVar19,0);
                Dino_BusSand_App_UI_UiTweaks__Attach_22a3600(plVar7,0);
                Dino_BusSand_App_UI_UIManagerEvents__RaiseOpened_220008c(plVar7,0);
                return plVar7;
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

