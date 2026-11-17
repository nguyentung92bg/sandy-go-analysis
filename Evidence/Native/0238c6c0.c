/* IL2CPP: Dino.BusSand.App.UI.UiKit$$LabelButton
TMPro_TextMeshProUGUI_o* Dino_BusSand_App_UI_UiKit__LabelButton (UnityEngine_Transform_o* parent, System_String_o* name, int32_t color, UnityEngine_Vector2_o size, UnityEngine_Vector2_o pos, System_String_o* label, System_String_o* icon, float fontSize, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.UiKit$$LabelButton
   TMPro_TextMeshProUGUI_o* Dino_BusSand_App_UI_UiKit__LabelButton (UnityEngine_Transform_o* parent,
   System_String_o* name, int32_t color, UnityEngine_Vector2_o size, UnityEngine_Vector2_o pos,
   System_String_o* label, System_String_o* icon, float fontSize, const MethodInfo* method); */

long Dino_BusSand_App_UI_UiKit__LabelButton_228c6c0
               (float param_1,float param_2,undefined4 param_3,undefined4 param_4,float param_5,
               undefined8 param_6,undefined8 param_7,undefined4 param_8,undefined8 param_9,
               undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar1 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c190 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5210);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb4e20);
    FUN_02132f7c(PTR_DAT_04cb51f8);
    FUN_02132f7c(PTR_DAT_04cae5d0);
    FUN_02132f7c(PTR_DAT_04cadb88);
    bRam0000000004f9c190 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_UI_UiKit__Button_228c218
                    (param_1,param_2,param_3,param_4,param_6,param_7,param_8,0);
  if (lVar3 != 0) {
    uVar4 = UnityEngine_Transform__Find_43d4bec(lVar3,*(undefined8 *)PTR_DAT_04cb51f8,0);
    fVar10 = _UNK_00e20994;
    if (param_5 <= 0.0) {
      param_5 = param_2 * _UNK_00e20324;
    }
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar2 = PTR_DAT_04cadb88;
    uVar11 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
    uVar12 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                      (param_1 + -60.0,param_2 * fVar10,uVar11,uVar12,uVar4,*(undefined8 *)puVar2,0,
                       0);
    if (((lVar3 != 0) &&
        (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0), lVar5 != 0)) &&
       (lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c
                          (lVar5,*(undefined8 *)PTR_DAT_04cb5210), lVar5 != 0)) {
      UnityEngine_UI_LayoutGroup__set_childAlignment_4686998(lVar5,4,0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing_4685a08(0x41200000,lVar5,0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight_4685b98(lVar5,0,0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth_4685b34(lVar5,0,0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight_4685ad0(lVar5,0,0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth_4685a6c(lVar5,0,0);
      uVar6 = System_String__IsNullOrEmpty_46d2084(param_10,0);
      if ((uVar6 & 1) == 0) {
        fVar10 = param_5 * _UNK_00e200fc;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar7 = Dino_BusSand_App_UI_UiKit__Img_228203c
                          (fVar10,fVar10,0,0,0x3f800000,lVar3,*(undefined8 *)PTR_DAT_04cae5d0,
                           param_10,0);
        if (lVar7 == 0) goto LAB_0238cab0;
        UnityEngine_UI_Image__set_preserveAspect_44afae0(lVar7,1,0);
      }
      puVar2 = PTR_DAT_04cb4e20;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = Dino_BusSand_App_UI_UiKit__Preset_228c198(param_8);
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      fVar10 = 0.0;
      lVar3 = Dino_BusSand_App_UI_UiKit__Text_2282314
                        (param_5,0,0,0,0,lVar3,*(undefined8 *)puVar2,param_9,uVar4,&uStack_88,0x202)
      ;
      if (lVar3 != 0) {
        TMPro_TMP_Text__set_enableAutoSizing_42cc454(lVar3,0,0);
        uVar6 = System_String__IsNullOrEmpty_46d2084(param_10,0);
        if ((uVar6 & 1) == 0) {
          fVar10 = param_5 * _UNK_00e200fc + *(float *)(lVar5 + 0x60);
        }
        lVar5 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar3,0);
        fVar8 = (float)TMPro_TMP_Text__GetPreferredValues_42d193c(lVar3,param_9,0);
        if (lVar5 != 0) {
          fVar10 = (param_1 + -80.0) - fVar10;
          fVar9 = fVar8 + 8.0;
          if (fVar10 <= fVar8 + 8.0) {
            fVar9 = fVar10;
          }
          UnityEngine_RectTransform__set_sizeDelta_43cfa70(fVar9,param_5 * _UNK_00e20838,lVar5,0);
          fVar8 = (float)TMPro_TMP_Text__GetPreferredValues_42d193c(lVar3,param_9,0);
          if (fVar10 < fVar8) {
            TMPro_TMP_Text__set_enableAutoSizing_42cc454(lVar3,1,0);
            TMPro_TMP_Text__set_fontSizeMin_42cc4a4(param_5 * 0.5,lVar3,0);
            TMPro_TMP_Text__set_fontSizeMax_42cc4f0(param_5,lVar3,0);
          }
          return lVar3;
        }
      }
    }
  }
LAB_0238cab0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

