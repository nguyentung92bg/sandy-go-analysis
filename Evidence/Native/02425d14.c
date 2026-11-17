/* IL2CPP: Dino.BusSand.App.UI.RewardPopup.<>c__DisplayClass14_0$$<OnAd>b__0
void Dino_BusSand_App_UI_RewardPopup___c__DisplayClass14_0___OnAd_b__0 (Dino_BusSand_App_UI_RewardPopup___c__DisplayClass14_0_o* __this, bool ok, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.RewardPopup.<>c__DisplayClass14_0$$<OnAd>b__0
   void Dino_BusSand_App_UI_RewardPopup___c__DisplayClass14_0___OnAd_b__0
   (Dino_BusSand_App_UI_RewardPopup___c__DisplayClass14_0_o* __this, bool ok, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_RewardPopup___c__DisplayClass14_0___OnAd_b__0_2325d14
               (long param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_68;
  
  if ((bRam0000000004f9c5e0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c5e0 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 == 0) {
LAB_02425de8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined1 *)(lVar15 + 0x40) = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar15,0,0);
  if ((uVar11 & 1) != 0) {
    return;
  }
  plVar12 = *(long **)(param_1 + 0x10);
  if (plVar12 == (long *)0x0) goto LAB_02425de8;
  if (*(char *)((long)plVar12 + 0x2c) != '\0') {
    return;
  }
  if ((param_2 & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    *(undefined1 *)((long)plVar12 + 0x41) = 1;
    puVar2 = PTR_DAT_04cb8c80;
    if ((bRam0000000004f9c5db & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04caa458);
      FUN_02132f7c(PTR_DAT_04caece0);
      FUN_02132f7c(PTR_DAT_04caece8);
      FUN_02132f7c(PTR_DAT_04caecf0);
      FUN_02132f7c(PTR_DAT_04cadd90);
      FUN_02132f7c(PTR_DAT_04cadd98);
      FUN_02132f7c(PTR_DAT_04caed00);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cac1e8);
      FUN_02132f7c(PTR_DAT_04cb8c88);
      FUN_02132f7c(PTR_DAT_04cb8c80);
      bRam0000000004f9c5db = 1;
    }
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
    lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Object___ctor_4870e5c(lVar15,0);
    if (lVar15 != 0) {
      *(long *)(lVar15 + 0x10) = (long)plVar12;
      thunk_FUN_02134474((long *)(lVar15 + 0x10),plVar12);
      lVar9 = (**(code **)(*plVar12 + 0x1c8))(plVar12,iVar1,*(undefined8 *)(*plVar12 + 0x1d0));
      plVar16 = (long *)(lVar15 + 0x18);
      *plVar16 = lVar9;
      thunk_FUN_02134474(plVar16,lVar9);
      puVar7 = PTR_DAT_04cb8c88;
      puVar6 = PTR_DAT_04caece8;
      puVar5 = PTR_DAT_04caece0;
      puVar4 = PTR_DAT_04cac1e8;
      puVar3 = PTR_DAT_04caa458;
      puVar2 = PTR_DAT_04ca9ae8;
      if (*plVar16 != 0) {
        System_Collections_Generic_List_KeyValuePair_int__long____GetEnumerator_3966258
                  (&uStack_90,*plVar16,*(undefined8 *)PTR_DAT_04caed00);
        lVar9 = 0;
        puStack_98 = &uStack_90;
        while (uVar11 = System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____MoveNext_35b53dc
                                  (&uStack_90,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
          lVar17 = lStack_78;
          if ((int)uStack_80 != 0x3e9) {
            lVar17 = 0;
          }
          lVar9 = lVar17 + lVar9;
        }
        System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____Dispose_35b53d8
                  (&uStack_90,*(undefined8 *)puVar5);
        lVar17 = plVar12[7];
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar17,0,0);
        if (((uVar11 & 1) != 0) && (0 < lVar9)) {
          if (plVar12[7] == 0) goto LAB_02425288;
          Dino_BusSand_App_UI_KitTopBar__Hold_2283310(plVar12[7],lVar9,0,0);
        }
        (**(code **)(*plVar12 + 0x1f8))
                  (plVar12,*(undefined8 *)(lVar15 + 0x18),iVar1,*(undefined8 *)(*plVar12 + 0x200));
        uVar20 = 0x3f400000;
        if (iVar1 < 2) {
          uVar20 = _UNK_00e20328;
        }
        uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
        System_Action___ctor_47b5ed0(uVar10,lVar15,*(undefined8 *)puVar7,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar15 = Dino_BusSand_App_Tween__Delayed_2161264(uVar20,uVar10,0);
        if ((lVar15 != 0) &&
           (lVar15 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar15,1,0), lVar15 != 0)) {
          Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar15,plVar12,0);
          return;
        }
      }
    }
LAB_02425288:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(*(long *)PTR_DAT_04cabaa8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cabaa8;
  if ((bRam0000000004f9b8e7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac888);
    FUN_02132f7c(PTR_DAT_04cac890);
    bRam0000000004f9b8e7 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b892 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    cRam0000000004f9b892 = '\x01';
  }
  lVar15 = *(long *)puVar2;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar15 = *(long *)puVar2;
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x28);
  if (lVar15 == 0) {
LAB_0226adb4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar11 = System_String__StartsWith_46d11d4(lVar15,*(undefined8 *)PTR_DAT_04cac890,4,0);
  puVar2 = PTR_DAT_04caba50;
  if ((uVar11 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar15 = *(long *)puVar2;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar15 = *(long *)puVar2;
  }
  uVar10 = **(undefined8 **)(lVar15 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
  if ((uVar11 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar15 = *(long *)puVar2;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar15 = *(long *)puVar2;
  }
  lVar17 = *(long *)PTR_DAT_04ca9d18;
  lVar9 = **(long **)(lVar15 + 0xb8);
  lVar15 = *(long *)(lVar17 + 0x38);
  if (lVar15 == 0) {
    FUN_0216b4cc(lVar17);
    lVar15 = *(long *)(lVar17 + 0x38);
  }
  lVar15 = *(long *)(lVar15 + 0x10);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_0216b470();
  }
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar15 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_0216b470();
  }
  uVar10 = **(undefined8 **)(lVar15 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
  }
  lVar15 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cac888,uVar10,0);
  puVar2 = PTR_DAT_04cabb08;
  if (lVar9 == 0) goto LAB_0226adb4;
  if ((bRam0000000004f9b87c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabb08,lVar15,0);
    bRam0000000004f9b87c = 1;
  }
  lVar9 = *(long *)(lVar9 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04ca9ae8;
  uVar20 = _UNK_00e20094;
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
  uVar11 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
  puVar3 = PTR_DAT_04cabb08;
  if ((uVar11 & 1) != 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04cabb08;
  lVar17 = *(long *)PTR_DAT_04ca9c30;
  if (lVar15 != 0) {
    lVar17 = lVar15;
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar3;
  }
  **(long **)(lVar8 + 0xb8) = lVar17;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),lVar17);
  uVar18 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar18;
  if (lVar9 == 0) goto LAB_023bd530;
  uVar10 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar9,4,0);
  plVar12 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
  uVar14 = *(undefined8 *)PTR_DAT_04cad730;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar9 = System_Type__GetTypeFromHandle_483f0b4(uVar14,0);
  if (plVar12 == (long *)0x0) goto LAB_023bd530;
  if ((lVar9 != 0) &&
     (lVar17 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0)) {
    uVar10 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar10,0);
  }
  if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar12[4] = lVar9;
  thunk_FUN_02134474(plVar12 + 4,lVar9);
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
  UnityEngine_GameObject___ctor_43c2310(lVar9,*(undefined8 *)PTR_DAT_04cb6578,plVar12,0);
  if ((lVar9 == 0) || (lVar17 = UnityEngine_GameObject__get_transform_43c1048(lVar9,0), lVar17 == 0)
     ) goto LAB_023bd530;
  UnityEngine_Transform__SetParent_43d1e34(lVar17,uVar10,0,0);
  plVar12 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar9,0);
  if (plVar12 == (long *)0x0) goto LAB_023bd530;
  if (*plVar12 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
    FUN_021335a4(plVar12);
  }
  UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,uVar20,plVar12,0);
  UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,uVar20,plVar12,0);
  puVar4 = PTR_DAT_04cad330;
  lVar17 = *(long *)PTR_DAT_04cad330;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar17 = *(long *)puVar4;
  }
  puVar13 = *(undefined4 **)(lVar17 + 0xb8);
  uStack_68 = 0;
  System_Nullable_Color____ctor_2bc9090
            (*puVar13,puVar13[1],puVar13[2],puVar13[3],&uStack_68,*(undefined8 *)PTR_DAT_04cac878);
  lStack_78 = 0;
  uStack_80 = uStack_68;
  lVar17 = Dino_BusSand_App_UI_UiKit__Text_2282314
                     (0x42480000,0x444d0000,0x42c80000,0,0x40800000,plVar12,
                      *(undefined8 *)PTR_DAT_04cb4e20,lVar15,*(undefined8 *)PTR_DAT_04cad4a8,
                      &uStack_80,0x202,0);
  if (lVar17 == 0) goto LAB_023bd530;
  TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar17,1,0);
  fVar21 = 0.0;
  TMPro_TMP_Text__GetPreferredValues_42d1a10(0x444d0000,lVar17,lVar15,0);
  fVar19 = 150.0;
  if (150.0 <= fVar21 + 70.0) {
    fVar19 = fVar21 + 70.0;
  }
  lVar15 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar17,0);
  if (lVar15 == 0) goto LAB_023bd530;
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x444d0000,fVar19 + -50.0,lVar15,0);
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x44660000,fVar19,plVar12,0);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  puStack_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  uStack_88 = (ulong)uStack_88._4_4_ << 0x20;
  fVar21 = 1.0;
  if (fVar19 / 241.0 <= 1.0) {
    fVar21 = fVar19 / 241.0;
  }
  lVar15 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                     (0x44660000,fVar19,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                      (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],fVar21,plVar12,
                      *(undefined8 *)PTR_DAT_04cafbb8,*(undefined8 *)PTR_DAT_04cb64b8,&puStack_98,0)
  ;
  if (lVar15 == 0) goto LAB_023bd530;
  UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar15,0);
  uVar10 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
  if ((uVar11 & 1) == 0) {
    fVar19 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    lVar15 = *(long *)puVar3;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar15 = *(long *)puVar3;
    }
    if (_UNK_00e200f8 < fVar19 - *(float *)(*(long *)(lVar15 + 0xb8) + 0x18)) goto LAB_023bd36c;
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
  uVar10 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  if ((uVar11 & 1) != 0) {
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
  plVar16 = (long *)(*(long *)(lVar15 + 0xb8) + 0x10);
  *plVar16 = lVar9;
  thunk_FUN_02134474(plVar16,lVar9);
  uVar20 = UnityEngine_Time__get_unscaledTime_43cd610(0);
  iVar1 = *(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = uVar20;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  lVar15 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar9,0);
  if (lVar15 != 0) {
    UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar15,0,0);
    Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
              (0,_UNK_00e1fde8,_UNK_00e204e8,_UNK_00e203f0,plVar12,0,0,0);
    Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0xc1c00000,0,_UNK_00e207cc,plVar12,0,0);
    Dino_BusSand_App_UI_TipsToast__Leave_22bd54c(_UNK_00e208d0,_UNK_00e1fdec,lVar9);
    return;
  }
LAB_023bd530:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

