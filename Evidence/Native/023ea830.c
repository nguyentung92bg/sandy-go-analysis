/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$Refresh
void Dino_BusSand_App_UI_HomePanel__Refresh (Dino_BusSand_App_UI_HomePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$Refresh
   void Dino_BusSand_App_UI_HomePanel__Refresh (Dino_BusSand_App_UI_HomePanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomePanel__Refresh_22ea830(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar3 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c442 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb7470);
    FUN_02132f7c(PTR_DAT_04cb74b0);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cb18b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb7558);
    FUN_02132f7c(PTR_DAT_04cb7560);
    FUN_02132f7c(PTR_DAT_04cb4e20);
    FUN_02132f7c(PTR_DAT_04cb7568);
    FUN_02132f7c(PTR_DAT_04cb7570);
    FUN_02132f7c(PTR_DAT_04cb7578);
    FUN_02132f7c(PTR_DAT_04cb7580);
    FUN_02132f7c(PTR_DAT_04cb7588);
    FUN_02132f7c(PTR_DAT_04cb51f8);
    FUN_02132f7c(PTR_DAT_04cb7590);
    FUN_02132f7c(PTR_DAT_04cb4dc0);
    FUN_02132f7c(PTR_DAT_04cb4dd0);
    FUN_02132f7c(PTR_DAT_04cb7598);
    FUN_02132f7c(PTR_DAT_04cb75a0);
    FUN_02132f7c(PTR_DAT_04cb75a8);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cb4de0);
    bRam0000000004f9c442 = 1;
  }
  Dino_BusSand_App_UI_HomePanel__RefreshWinStreak_22ebfac(param_1,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04ca9ae8;
  iVar7 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
  if (iVar7 == *(int *)(param_1 + 0x48)) {
    uVar13 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
    if ((uVar9 & 1) != 0) {
      return;
    }
  }
  lVar10 = *(long *)puVar3;
  plVar14 = (long *)(param_1 + 0x38);
  lVar15 = *plVar14;
  *(int *)(param_1 + 0x48) = iVar7;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar15,0,0);
  if ((uVar9 & 1) != 0) {
    if (*plVar14 == 0) goto LAB_023eafb4;
    uVar13 = UnityEngine_Component__get_gameObject_43bcde8(*plVar14,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    UnityEngine_Object__Destroy_43c8114(uVar13,0);
  }
  puVar2 = (undefined8 *)PTR_DAT_04cb75a0;
  puVar1 = (undefined8 *)PTR_DAT_04cb7588;
  puVar5 = PTR_DAT_04cb7568;
  puVar4 = PTR_DAT_04cb74b0;
  puVar3 = PTR_DAT_04cad330;
  if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar8 = Dino_BusSand_App_UI_UiKit__get_CurrentTier_228cc94(0);
  lVar10 = *(long *)puVar4;
  if (iVar8 != 1) {
    puVar2 = (undefined8 *)puVar5;
  }
  if (iVar8 != 2) {
    puVar1 = puVar2;
  }
  uVar13 = *puVar1;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *(long *)puVar4;
  }
  puVar4 = PTR_DAT_04cb7598;
  uVar16 = *(undefined8 *)(param_1 + 0x70);
  uVar19 = *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 8);
  uVar20 = *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0xc);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  lVar10 = Dino_BusSand_App_UI_UiKit__MenuButton_228c450
                     (uVar19,uVar20,0,0,0x3f800000,uVar16,*(undefined8 *)puVar4,uVar13,0);
  *plVar14 = lVar10;
  thunk_FUN_02134474(plVar14,lVar10);
  if (*plVar14 != 0) {
    plVar11 = (long *)UnityEngine_Transform__Find_43d4bec
                                (*plVar14,*(undefined8 *)PTR_DAT_04cb51f8,0);
    puVar6 = PTR_DAT_04cb7578;
    puVar5 = PTR_DAT_04cb4e20;
    puVar4 = PTR_DAT_04cac878;
    if ((plVar11 != (long *)0x0) && (*plVar11 != *(long *)PTR_DAT_04cabdb0)) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4(plVar11);
    }
    uVar19 = 0x40c00000;
    if (iVar8 != 0) {
      uVar19 = 0x41a00000;
    }
    puVar2 = (undefined8 *)PTR_DAT_04cb7560;
    if (iVar8 != 1) {
      puVar2 = (undefined8 *)PTR_DAT_04cb7570;
    }
    puVar1 = (undefined8 *)PTR_DAT_04cb7558;
    if (iVar8 != 2) {
      puVar1 = puVar2;
    }
    uVar13 = *puVar1;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar16 = Dino_BusSand_App_UI_UiKit__LevelText_2282d78(iVar7,0);
    Dino_BusSand_App_UI_UiKit__Hex_2285a84(*(undefined8 *)puVar6,0);
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    System_Nullable_Color____ctor_2bc9090(&uStack_88,*(undefined8 *)puVar4);
    uStack_90 = uStack_78;
    uStack_98 = uStack_80;
    uStack_a0 = uStack_88;
    lVar10 = Dino_BusSand_App_UI_UiKit__Text_2282314
                       (0x42c40000,0x44020000,0x42f00000,0,uVar19,plVar11,*(undefined8 *)puVar5,
                        uVar16,uVar13,&uStack_a0,0x202,0);
    if (lVar10 != 0) {
      TMPro_TMP_Text__set_wordSpacing_42cc704(0,lVar10,0);
      if (iVar8 != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar13 = Dino_BusSand_App_UI_UiKit__TierText_228bf14(iVar8,0);
        uVar16 = *(undefined8 *)PTR_DAT_04cb7590;
        if (iVar8 == 2) {
          uVar17 = *(undefined8 *)PTR_DAT_04cb75a8;
        }
        else {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar17 = Dino_BusSand_App_UI_UiKit__Preset_228c198((ulong)(iVar8 == 1) << 2,0);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_UiKit__Hex_2285a84(*(undefined8 *)PTR_DAT_04cb7580,0);
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        System_Nullable_Color____ctor_2bc9090(&uStack_88,*(undefined8 *)puVar4);
        uStack_b0 = uStack_78;
        uStack_b8 = uStack_80;
        uStack_c0 = uStack_88;
        lVar10 = Dino_BusSand_App_UI_UiKit__Text_2282314
                           (0x42400000,0x43960000,0x42780000,0,0xc2880000,plVar11,uVar16,uVar13,
                            uVar17,&uStack_c0,0x202,0);
        if (lVar10 == 0) goto LAB_023eafb4;
        TMPro_TMP_Text__set_wordSpacing_42cc704(0,lVar10,0);
        lVar10 = *plVar14;
        puVar2 = (undefined8 *)PTR_DAT_04cb4dd0;
        if (iVar8 != 2) {
          puVar2 = (undefined8 *)PTR_DAT_04cb4dc0;
        }
        uVar13 = *(undefined8 *)PTR_DAT_04cb4de0;
        uVar16 = *puVar2;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar10 = Dino_BusSand_App_UI_UiKit__Img_228203c(0,0,0,0,0x3f800000,lVar10,uVar13,uVar16,0,0)
        ;
        if (lVar10 == 0) goto LAB_023eafb4;
        lVar15 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar10,0);
        lVar12 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar10,0);
        if ((lVar12 == 0) ||
           (UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,lVar12,0),
           lVar15 == 0)) goto LAB_023eafb4;
        fVar18 = 1.0;
        UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,lVar15,0);
        lVar15 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar10,0);
        lVar10 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar10,0);
        if ((lVar10 == 0) ||
           (UnityEngine_RectTransform__get_sizeDelta_43cf9ac(lVar10,0), lVar15 == 0))
        goto LAB_023eafb4;
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0,fVar18 * 0.5 + -60.0,lVar15,0);
      }
      puVar5 = PTR_DAT_04cb7470;
      puVar4 = PTR_DAT_04cad948;
      puVar3 = PTR_DAT_04caa458;
      if (*plVar14 != 0) {
        uVar13 = UnityEngine_Component__get_gameObject_43bcde8(*plVar14,0);
        uVar16 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
        System_Action___ctor_47b5ed0(uVar16,param_1,*(undefined8 *)puVar5,0);
        Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar13,uVar16,1,*(undefined8 *)puVar4,0);
        if (*(char *)(param_1 + 0x4c) != '\0') {
          lVar10 = *plVar14;
          if (cRam0000000004f9b65e == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65e = '\x01';
          }
          lVar15 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
          uStack_88 = 0;
          uStack_80 = 0;
          System_Nullable_Vector3____ctor_2bd0e4c
                    (*(undefined4 *)(lVar15 + 0xc),*(undefined4 *)(lVar15 + 0x10),
                     *(undefined4 *)(lVar15 + 0x14),&uStack_88,*(undefined8 *)PTR_DAT_04cb18b8);
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                    (_UNK_00e2043c,_UNK_00e20094,_UNK_00e203f4,0x40000000,lVar10,uStack_88,uStack_80
                     ,0);
        }
        return;
      }
    }
  }
LAB_023eafb4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

