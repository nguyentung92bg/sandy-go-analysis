/* IL2CPP: Dino.BusSand.App.UI.KitNav$$Tab
void Dino_BusSand_App_UI_KitNav__Tab (UnityEngine_RectTransform_o* bar, System_String_o* name, int32_t i, bool selected, System_String_o* icon, float iconScale, System_String_o* label, System_Action_o* onClick, bool both, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitNav$$Tab
   void Dino_BusSand_App_UI_KitNav__Tab (UnityEngine_RectTransform_o* bar, System_String_o* name,
   int32_t i, bool selected, System_String_o* icon, float iconScale, System_String_o* label,
   System_Action_o* onClick, bool both, const MethodInfo* method); */

void Dino_BusSand_App_UI_KitNav__Tab_2286504
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5,
               undefined8 param_6,long param_7,long param_8,uint param_9)

{
  float fVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  
  if ((bRam0000000004f9c160 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf560);
    FUN_02132f7c(PTR_DAT_04cb4f88);
    FUN_02132f7c(PTR_DAT_04cae5d0);
    FUN_02132f7c(PTR_DAT_04cb4f90);
    FUN_02132f7c(PTR_DAT_04cb4f78);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cb4f98);
    bRam0000000004f9c160 = 1;
  }
  plVar10 = (long *)PTR_DAT_04cad330;
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  plVar11 = (long *)PTR_DAT_04cacfc0;
  uVar12 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  uVar13 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
  if (*(int *)(*plVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_UI_UiKit__Node_22818c4(uVar12,uVar13,0,0,param_2,param_3,0,0);
  fVar1 = _UNK_00e200b0;
  if (lVar2 == 0) goto LAB_02386bb0;
  UnityEngine_RectTransform__set_anchorMin_43cf5e4((float)param_4 * _UNK_00e200b0,0,lVar2,0);
  UnityEngine_RectTransform__set_anchorMax_43cf768((float)(param_4 + 1) * fVar1,0x3f800000,lVar2,0);
  UnityEngine_RectTransform__set_offsetMin_43cfe84(0,0x42f00000,lVar2,0);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMax_43d0018
            (**(undefined4 **)(*plVar11 + 0xb8),(*(undefined4 **)(*plVar11 + 0xb8))[1],lVar2,0);
  Dino_BusSand_App_UI_UiKit__HitArea_228277c(lVar2);
  if (((param_5 & 1) != 0) || ((param_9 & 1) != 0)) {
    if (*(int *)(*plVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = Dino_BusSand_App_UI_UiKit__Img_228203c
                      (0x43af0000,_UNK_00e20678,0,0,_UNK_00e2067c,lVar2,
                       *(undefined8 *)PTR_DAT_04cb4f98,*(undefined8 *)PTR_DAT_04cb4f90,1);
    if (lVar3 == 0) goto LAB_02386bb0;
    lVar4 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar3,0);
    lVar5 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar3,0);
    if ((lVar5 == 0) ||
       (UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0,lVar5,0), lVar4 == 0))
    goto LAB_02386bb0;
    UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0,lVar4,0);
    lVar4 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar3,0);
    if (lVar4 == 0) goto LAB_02386bb0;
    UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0,lVar4,0);
    lVar4 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar3,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    if (lVar4 == 0) goto LAB_02386bb0;
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
              (**(undefined4 **)(*plVar11 + 0xb8),(*(undefined4 **)(*plVar11 + 0xb8))[1],lVar4,0);
    uVar6 = UnityEngine_Component__get_transform_43bcd18(lVar3,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    uVar13 = **(undefined4 **)(*plVar11 + 0xb8);
    uVar14 = (*(undefined4 **)(*plVar11 + 0xb8))[1];
    uVar7 = System_String__op_Equality_46d1108(param_6,*(undefined8 *)PTR_DAT_04cb4f78,0);
    uVar12 = _UNK_00e204d0;
    if ((uVar7 & 1) == 0) {
      uVar12 = _UNK_00e2038c;
    }
    uVar9 = *(undefined8 *)PTR_DAT_04cae5d0;
    if (*(int *)(*plVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar4 = Dino_BusSand_App_UI_UiKit__Img_228203c(uVar13,uVar14,0,0,uVar12,uVar6,uVar9,param_6,0);
    if (lVar4 == 0) goto LAB_02386bb0;
    lVar5 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar4,0);
    lVar8 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar4,0);
    if ((lVar8 == 0) ||
       (UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0,lVar8,0), lVar5 == 0))
    goto LAB_02386bb0;
    UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0,lVar5,0);
    lVar4 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar4,0);
    if (lVar4 == 0) goto LAB_02386bb0;
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0,0x43780000,lVar4,0);
    plVar10 = (long *)PTR_DAT_04cad330;
    plVar11 = (long *)PTR_DAT_04cacfc0;
    if (param_7 != 0) {
      uVar6 = UnityEngine_Component__get_transform_43bcd18(lVar3,0);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      System_Nullable_Color____ctor_2bc9090
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_98,
                 *(undefined8 *)PTR_DAT_04cac878);
      if (*(int *)(*plVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uStack_a8 = uStack_90;
      uStack_b0 = uStack_98;
      uStack_a0 = uStack_88;
      lVar4 = Dino_BusSand_App_UI_UiKit__Text_2282314
                        (0x42640000,0x43960000,0x42940000,0,0,uVar6,*(undefined8 *)PTR_DAT_04caf560,
                         param_7,*(undefined8 *)PTR_DAT_04cb4f88,&uStack_b0,0x202);
      if (lVar4 == 0) goto LAB_02386bb0;
      lVar5 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar4,0);
      lVar8 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar4,0);
      if ((lVar8 == 0) ||
         (UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0,lVar8,0), lVar5 == 0))
      goto LAB_02386bb0;
      UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0,lVar5,0);
      lVar4 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar4,0);
      if (lVar4 == 0) goto LAB_02386bb0;
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0x3fc00000,0x429f0000,lVar4,0);
    }
    lVar3 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0);
    if (lVar3 == 0) goto LAB_02386bb0;
    UnityEngine_GameObject__SetActive_43c1408(lVar3,param_5 & 1,0);
  }
  if ((((param_5 ^ 1) & 1) == 0) && ((param_9 & 1) == 0)) {
LAB_02386b58:
    if ((param_8 != 0) && ((param_5 & 1) == 0)) {
      uVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar2,0);
      Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar6,param_8,1,*(undefined8 *)PTR_DAT_04cad948,0);
    }
    return;
  }
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  uVar12 = **(undefined4 **)(*plVar11 + 0xb8);
  uVar13 = (*(undefined4 **)(*plVar11 + 0xb8))[1];
  if (*(int *)(*plVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_UI_UiKit__Img_228203c
                    (uVar12,uVar13,0,0,param_1,lVar2,*(undefined8 *)PTR_DAT_04cae5d0,param_6,0);
  if (lVar3 != 0) {
    lVar4 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar3,0);
    lVar5 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar3,0);
    if ((lVar5 != 0) &&
       (UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0,lVar5,0), lVar4 != 0)) {
      UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0,lVar4,0);
      lVar4 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar3,0);
      if (lVar4 != 0) {
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0,0x43020000,lVar4,0);
        lVar3 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0);
        if (lVar3 != 0) {
          UnityEngine_GameObject__SetActive_43c1408(lVar3,(param_5 ^ 1) & 1,0);
          goto LAB_02386b58;
        }
      }
    }
  }
LAB_02386bb0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

