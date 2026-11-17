/* IL2CPP: Dino.BusSand.App.UI.PackPopup$$WasUnder
void Dino_BusSand_App_UI_PackPopup__WasUnder (UnityEngine_RectTransform_o* button, System_String_o* text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PackPopup$$WasUnder
   void Dino_BusSand_App_UI_PackPopup__WasUnder (UnityEngine_RectTransform_o* button,
   System_String_o* text, const MethodInfo* method); */

void Dino_BusSand_App_UI_PackPopup__WasUnder_233063c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if ((bRam0000000004f9c620 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb9088);
    FUN_02132f7c(PTR_DAT_04cb51f8);
    FUN_02132f7c(PTR_DAT_04cb9090);
    FUN_02132f7c(PTR_DAT_04cb9098);
    bRam0000000004f9c620 = 1;
  }
  puVar3 = PTR_DAT_04cb9088;
  puVar2 = PTR_DAT_04cad330;
  puVar1 = PTR_DAT_04cac878;
  if (param_1 != 0) {
    uVar4 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cb51f8,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar5 = Dino_BusSand_App_UI_UiKit__Preset_228c198(0,0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    System_Nullable_Color____ctor_2bc9090
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_58,*(undefined8 *)puVar1);
    uStack_60 = uStack_48;
    uStack_68 = uStack_50;
    uStack_70 = uStack_58;
    lVar6 = Dino_BusSand_App_UI_UiKit__Text_2282314
                      (0x42480000,0,0,0,0,uVar4,*(undefined8 *)puVar3,param_2,uVar5,&uStack_70,0x202
                       ,0);
    if (lVar6 != 0) {
      TMPro_TMP_Text__set_enableAutoSizing_42cc454(lVar6,0,0);
      fVar9 = (float)TMPro_TMP_Text__GetPreferredValues_42d193c(lVar6,param_2,0);
      lVar7 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar6,0);
      if (lVar7 != 0) {
        UnityEngine_RectTransform__set_sizeDelta_43cfa70(fVar9 + 6.0,0x42820000,lVar7,0);
        lVar7 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar6,0);
        puVar2 = PTR_DAT_04cb9098;
        puVar1 = PTR_DAT_04cb9090;
        if (lVar7 != 0) {
          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0,0xc22c0000,lVar7,0);
          uVar4 = TMPro_TMP_Text__get_transform_42cd604(lVar6,0);
          plVar8 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                     (fVar9 + 6.0 + 20.0,0x40c00000,0,0x40000000,0x3f800000,uVar4,
                                      *(undefined8 *)puVar2,0,0,0);
          Dino_BusSand_App_UI_UiKit__Hex_2285a84(*(undefined8 *)puVar1,0);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
            (**(code **)(*plVar8 + 0x2c8))(plVar8,0,*(undefined8 *)(*plVar8 + 0x2d0));
            lVar6 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar8,0);
            UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,0,_UNK_00e206a8,0);
            if (lVar6 != 0) {
              UnityEngine_Transform__set_localRotation_43d156c(lVar6,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

