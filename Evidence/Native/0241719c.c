/* IL2CPP: Dino.BusSand.App.UI.FailPanel$$BuildPeek
void Dino_BusSand_App_UI_FailPanel__BuildPeek (Dino_BusSand_App_UI_FailPanel_o* __this, Dino_BusSand_App_UI_KitWindow_o* w, float fromWindowTop, bool follow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.FailPanel$$BuildPeek
   void Dino_BusSand_App_UI_FailPanel__BuildPeek (Dino_BusSand_App_UI_FailPanel_o* __this,
   Dino_BusSand_App_UI_KitWindow_o* w, float fromWindowTop, bool follow, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_FailPanel__BuildPeek_231719c
               (float param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  
  puVar1 = PTR_DAT_04cb84c8;
  if ((bRam0000000004f9c570 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cb84d0);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb84d8);
    FUN_02132f7c(PTR_DAT_04cb84c8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb84e0);
    FUN_02132f7c(PTR_DAT_04caf398);
    FUN_02132f7c(PTR_DAT_04cb84e8);
    FUN_02132f7c(PTR_DAT_04cb84f0);
    bRam0000000004f9c570 = 1;
  }
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar7,0);
  puVar1 = PTR_DAT_04ca9d18;
  if (lVar7 != 0) {
    plVar11 = (long *)(lVar7 + 0x18);
    *plVar11 = param_3;
    thunk_FUN_02134474(plVar11,param_3);
    uVar8 = UnityEngine_Component__get_transform_43bcd18(param_2,0);
    lVar13 = *(long *)puVar1;
    lVar10 = *(long *)(lVar13 + 0x38);
    if (lVar10 == 0) {
      FUN_0216b4cc(lVar13);
      lVar10 = *(long *)(lVar13 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0216b470();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar1 = PTR_DAT_04cad330;
    lVar10 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0216b470();
    }
    puVar6 = PTR_DAT_04cb84f0;
    puVar5 = PTR_DAT_04cb84e8;
    puVar4 = PTR_DAT_04cb84e0;
    puVar3 = PTR_DAT_04caf398;
    puVar2 = PTR_DAT_04cac878;
    uVar14 = **(undefined8 **)(lVar10 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar14 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                       (*(undefined8 *)puVar6,*(undefined8 *)puVar4,uVar14,0);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    System_Nullable_Color____ctor_2bc9090
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_b8,*(undefined8 *)puVar2);
    uStack_c0 = uStack_a8;
    uStack_c8 = uStack_b0;
    uStack_d0 = uStack_b8;
    lVar10 = Dino_BusSand_App_UI_UiKit__Text_2282314
                       (0x42700000,0x44610000,0x42b40000,0,0,uVar8,*(undefined8 *)puVar5,uVar14,
                        *(undefined8 *)puVar3,&uStack_d0,0x202,0);
    plVar12 = (long *)(lVar7 + 0x20);
    *plVar12 = lVar10;
    thunk_FUN_02134474(plVar12,lVar10);
    if (*plVar12 != 0) {
      lVar10 = TMPro_TMP_Text__get_rectTransform_42cd6a4(*plVar12,0);
      if (((*plVar12 != 0) &&
          (lVar13 = TMPro_TMP_Text__get_rectTransform_42cd6a4(*plVar12,0), lVar13 != 0)) &&
         (UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0,lVar13,0), lVar10 != 0)) {
        UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0,lVar10,0);
        fVar18 = 187.0;
        fVar20 = 39.0;
        fVar24 = 39.0;
        fVar17 = 187.0;
        if ((param_4 & 1) == 0) {
          fVar20 = 50.0;
          fVar17 = 320.0;
        }
        if (0.0 < param_1) {
          plVar9 = (long *)UnityEngine_Component__get_transform_43bcd18(param_2,0);
          if (plVar9 == (long *)0x0) goto LAB_02417800;
          if (*plVar9 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
            FUN_021335a4(plVar9);
          }
          UnityEngine_RectTransform__get_rect_43cf450(plVar9,0);
          fVar23 = _UNK_00e20028;
          if (1.0 < fVar24) {
            UnityEngine_RectTransform__get_rect_43cf450(plVar9,0);
            fVar23 = fVar24;
          }
          if ((*plVar11 == 0) || (lVar10 = *(long *)(*plVar11 + 0x10), lVar10 == 0))
          goto LAB_02417800;
          UnityEngine_Transform__get_localScale_43d1b0c(lVar10,0);
          if ((*plVar11 == 0) || (lVar10 = *(long *)(*plVar11 + 0x10), lVar10 == 0))
          goto LAB_02417800;
          fVar24 = fVar18;
          UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar10,0);
          if ((*plVar11 == 0) || (lVar10 = *(long *)(*plVar11 + 0x10), lVar10 == 0))
          goto LAB_02417800;
          fVar23 = fVar23 * 0.5;
          fVar22 = fVar24;
          UnityEngine_RectTransform__get_sizeDelta_43cf9ac(lVar10,0);
          fVar24 = fVar24 + fVar18 * fVar22 * 0.5;
          param_1 = fVar18 * param_1;
          fVar22 = (fVar23 + fVar24) - param_1;
          if (fVar22 < fVar17) {
            fVar19 = 0.0;
            fVar21 = fVar17 - fVar22;
            fVar15 = (fVar23 + -300.0) - fVar24;
            fVar16 = 0.0;
            if (0.0 <= fVar15) {
              fVar16 = fVar15;
            }
            if (fVar21 <= fVar16) {
              fVar16 = fVar21;
            }
            fVar15 = 0.0;
            if (0.0 <= fVar21) {
              fVar15 = fVar16;
            }
            if ((*plVar11 == 0) || (lVar10 = *(long *)(*plVar11 + 0x10), lVar10 == 0))
            goto LAB_02417800;
            fVar16 = (float)UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar10,0);
            UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                      (fVar16 + 0.0,fVar15 + fVar19,lVar10,0);
            fVar24 = fVar24 + fVar15;
            fVar22 = fVar22 + fVar15;
          }
          if (fVar22 < fVar17) {
            fVar16 = fVar17 - fVar22;
            if (fVar20 * fVar18 <= fVar17 - fVar22) {
              fVar16 = fVar20 * fVar18;
            }
            param_1 = param_1 - fVar16;
            fVar22 = fVar22 + fVar16;
          }
          if (fVar22 < fVar17) {
            fVar20 = 1.0;
            if (1.0 <= param_1) {
              fVar20 = param_1;
            }
            fVar20 = ((fVar23 + fVar24) - fVar17) / fVar20;
            fVar17 = 1.0;
            if (fVar20 <= 1.0) {
              fVar17 = fVar20;
            }
            fVar22 = _UNK_00e20994;
            if (_UNK_00e20994 <= fVar20) {
              fVar22 = fVar17;
            }
            if ((*plVar11 == 0) || (lVar10 = *(long *)(*plVar11 + 0x48), lVar10 == 0))
            goto LAB_02417800;
            Dino_BusSand_App_UI_KitPop__Rescale_228da00(fVar22,lVar10,0);
            if ((*plVar11 == 0) || (lVar10 = *(long *)(*plVar11 + 0x10), lVar10 == 0))
            goto LAB_02417800;
            fVar17 = (float)UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar10,0);
            if ((*plVar11 == 0) || (lVar13 = *(long *)(*plVar11 + 0x10), lVar13 == 0))
            goto LAB_02417800;
            fVar16 = fVar20;
            UnityEngine_RectTransform__get_sizeDelta_43cf9ac(lVar13,0);
            UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                      (fVar17 + 0.0,fVar20 + (1.0 - fVar22) * fVar18 * fVar16 * 0.5,lVar10,0);
            fVar22 = (fVar23 + fVar24) - param_1 * fVar22;
          }
          if ((param_4 & 1) == 0) {
            fVar17 = 320.0;
          }
          else {
            fVar17 = 187.0;
            if (187.0 <= fVar22) {
              fVar17 = fVar22;
            }
          }
        }
        if ((*plVar12 != 0) &&
           (lVar10 = TMPro_TMP_Text__get_rectTransform_42cd6a4(*plVar12,0), lVar10 != 0)) {
          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0,fVar17,lVar10,0);
          if ((*plVar11 != 0) &&
             ((lVar10 = *(long *)(*plVar11 + 0x40), lVar10 != 0 &&
              (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0), lVar10 != 0)))) {
            lVar10 = UnityEngine_GameObject__AddComponent_object__275a54c
                               (lVar10,*(undefined8 *)PTR_DAT_04cb84d0);
            puVar3 = PTR_DAT_04cb84d8;
            puVar2 = PTR_DAT_04cad4c0;
            puVar1 = PTR_DAT_04cac420;
            if ((*plVar11 != 0) && (lVar13 = *(long *)(*plVar11 + 0x10), lVar13 != 0)) {
              uVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              uVar8 = Dino_BusSand_App_UI_UiMotion__Group_228db38(uVar8,0);
              *(undefined8 *)(lVar7 + 0x10) = uVar8;
              thunk_FUN_02134474();
              uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
              System_Action_bool____ctor_35ee0e8(uVar8,lVar7,*(undefined8 *)puVar3,0);
              if (lVar10 != 0) {
                *(undefined8 *)(lVar10 + 0x20) = uVar8;
                thunk_FUN_02134474((undefined8 *)(lVar10 + 0x20),uVar8);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_02417800:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

