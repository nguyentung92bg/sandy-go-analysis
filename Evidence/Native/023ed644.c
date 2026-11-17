/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$OnHeart
void Dino_BusSand_App_UI_HomePanel__OnHeart (Dino_BusSand_App_UI_HomePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02265e84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$OnHeart
   void Dino_BusSand_App_UI_HomePanel__OnHeart (Dino_BusSand_App_UI_HomePanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomePanel__OnHeart_22ed644(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
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
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c44d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cadfe8);
    FUN_02132f7c(PTR_DAT_04cb7670);
    bRam0000000004f9c44d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04caba50;
  iVar4 = Dino_BusSand_App_Meta_Profile__get_Hearts_22724e0(0);
  iVar5 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(0);
  if (iVar4 < iVar5) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = Dino_BusSand_App_Meta_Profile__get_InfiniteHearts_2272a98(0);
    if ((uVar9 & 1) == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar10 = *(long *)puVar2;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar2;
      }
      lVar10 = **(long **)(lVar10 + 0xb8);
      if (lVar10 != 0) {
        if ((bRam0000000004f9b87b & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8,0xffffffff,0,0);
          FUN_02132f7c(PTR_DAT_04cac5a8);
          FUN_02132f7c(PTR_DAT_04cac5b0);
          bRam0000000004f9b87b = 1;
        }
        lVar10 = *(long *)(lVar10 + 0x28);
        uVar15 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffdc);
        puVar1 = PTR_DAT_04ca9ae8;
        if (lVar10 != 0) {
          lVar10 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                             (lVar10,*(undefined8 *)PTR_DAT_04cac5b0,2,uVar15,
                              *(undefined8 *)PTR_DAT_04cac5a8);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
          if ((uVar9 & 1) != 0) {
            if (lVar10 == 0) goto LAB_02265ea8;
            *(undefined8 *)(lVar10 + 0x38) = 0;
            thunk_FUN_02134474((undefined8 *)(lVar10 + 0x38),0);
          }
          return;
        }
LAB_02265ea8:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_023ed87c;
    }
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar1 = PTR_DAT_04ca9d18;
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *(long *)puVar2;
  }
  lVar14 = *(long *)puVar1;
  lVar12 = *(long *)(lVar14 + 0x38);
  lVar10 = **(long **)(lVar10 + 0xb8);
  if (lVar12 == 0) {
    FUN_0216b4cc(lVar14);
    lVar12 = *(long *)(lVar14 + 0x38);
  }
  lVar12 = *(long *)(lVar12 + 0x10);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_0216b470();
  }
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cad330;
  lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_0216b470();
  }
  puVar3 = PTR_DAT_04cb7670;
  puVar2 = PTR_DAT_04cadfe8;
  uVar15 = **(undefined8 **)(lVar12 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  lVar12 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                     (*(undefined8 *)puVar2,*(undefined8 *)puVar3,uVar15,0);
  puVar1 = PTR_DAT_04cabb08;
  if (lVar10 == 0) {
LAB_023ed87c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9b87c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabb08,lVar12,0);
    bRam0000000004f9b87c = 1;
  }
  lVar10 = *(long *)(lVar10 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04ca9ae8;
  uVar18 = _UNK_00e20094;
  if ((bRam0000000004f9c314 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568,lVar12,0);
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
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
  puVar2 = PTR_DAT_04cabb08;
  if ((uVar9 & 1) != 0) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04cabb08;
  lVar14 = *(long *)PTR_DAT_04ca9c30;
  if (lVar12 != 0) {
    lVar14 = lVar12;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar2;
  }
  **(long **)(lVar6 + 0xb8) = lVar14;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar14);
  uVar16 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar16;
  if (lVar10 == 0) goto LAB_023bd530;
  uVar15 = Dino_BusSand_App_UI_UIManager__Layer_21fe220(lVar10,4,0);
  plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
  uVar13 = *(undefined8 *)PTR_DAT_04cad730;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar10 = System_Type__GetTypeFromHandle_483f0b4(uVar13,0);
  if (plVar7 == (long *)0x0) goto LAB_023bd530;
  if ((lVar10 != 0) &&
     (lVar14 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0)) {
    uVar15 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar15,0);
  }
  if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar7[4] = lVar10;
  thunk_FUN_02134474(plVar7 + 4,lVar10);
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
  UnityEngine_GameObject___ctor_43c2310(lVar10,*(undefined8 *)PTR_DAT_04cb6578,plVar7,0);
  if ((lVar10 == 0) ||
     (lVar14 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0), lVar14 == 0))
  goto LAB_023bd530;
  UnityEngine_Transform__SetParent_43d1e34(lVar14,uVar15,0,0);
  plVar7 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
  if (plVar7 == (long *)0x0) goto LAB_023bd530;
  if (*plVar7 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
    FUN_021335a4(plVar7);
  }
  UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,uVar18,plVar7,0);
  UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,uVar18,plVar7,0);
  puVar3 = PTR_DAT_04cad330;
  lVar14 = *(long *)PTR_DAT_04cad330;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar14 = *(long *)puVar3;
  }
  puVar11 = *(undefined4 **)(lVar14 + 0xb8);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  System_Nullable_Color____ctor_2bc9090
            (*puVar11,puVar11[1],puVar11[2],puVar11[3],&uStack_68,*(undefined8 *)PTR_DAT_04cac878);
  uStack_70 = uStack_58;
  uStack_78 = uStack_60;
  uStack_80 = uStack_68;
  lVar14 = Dino_BusSand_App_UI_UiKit__Text_2282314
                     (0x42480000,0x444d0000,0x42c80000,0,0x40800000,plVar7,
                      *(undefined8 *)PTR_DAT_04cb4e20,lVar12,*(undefined8 *)PTR_DAT_04cad4a8,
                      &uStack_80,0x202,0);
  if (lVar14 == 0) goto LAB_023bd530;
  TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar14,1,0);
  fVar19 = 0.0;
  TMPro_TMP_Text__GetPreferredValues_42d1a10(0x444d0000,lVar14,lVar12,0);
  fVar17 = 150.0;
  if (150.0 <= fVar19 + 70.0) {
    fVar17 = fVar19 + 70.0;
  }
  lVar12 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar14,0);
  if (lVar12 == 0) goto LAB_023bd530;
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x444d0000,fVar17 + -50.0,lVar12,0);
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x44660000,fVar17,plVar7,0);
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
  lVar12 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                     (0x44660000,fVar17,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                      (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],fVar19,plVar7,
                      *(undefined8 *)PTR_DAT_04cafbb8,*(undefined8 *)PTR_DAT_04cb64b8,&uStack_98,0);
  if (lVar12 == 0) goto LAB_023bd530;
  UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar12,0);
  uVar15 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar15,0,0);
  if ((uVar9 & 1) == 0) {
    fVar17 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    lVar12 = *(long *)puVar2;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar12 = *(long *)puVar2;
    }
    if (_UNK_00e200f8 < fVar17 - *(float *)(*(long *)(lVar12 + 0xb8) + 0x18)) goto LAB_023bd36c;
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
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar12 = *(long *)puVar3;
    }
    if (**(long **)(lVar12 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__Toast_2383580(**(long **)(lVar12 + 0xb8),0);
    }
  }
  lVar12 = *(long *)puVar2;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar12 = *(long *)puVar2;
  }
  uVar15 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
  if ((uVar9 & 1) != 0) {
    lVar12 = *(long *)puVar2;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar12 = *(long *)puVar2;
    }
    Dino_BusSand_App_UI_TipsToast__Leave_22bd54c
              (_UNK_00e201f4,0,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10));
  }
  lVar12 = *(long *)puVar2;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar12 = *(long *)puVar2;
  }
  plVar8 = (long *)(*(long *)(lVar12 + 0xb8) + 0x10);
  *plVar8 = lVar10;
  thunk_FUN_02134474(plVar8,lVar10);
  uVar18 = UnityEngine_Time__get_unscaledTime_43cd610(0);
  iVar4 = *(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = uVar18;
  if (iVar4 == 0) {
    thunk_FUN_0218fdac();
  }
  lVar12 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar10,0);
  if (lVar12 != 0) {
    UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar12,0,0);
    Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
              (0,_UNK_00e1fde8,_UNK_00e204e8,_UNK_00e203f0,plVar7,0,0,0);
    Dino_BusSand_App_UI_UiMotion__SlideIn_228e9cc(0,0xc1c00000,0,_UNK_00e207cc,plVar7,0,0);
    Dino_BusSand_App_UI_TipsToast__Leave_22bd54c(_UNK_00e208d0,_UNK_00e1fdec,lVar10);
    return;
  }
LAB_023bd530:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

