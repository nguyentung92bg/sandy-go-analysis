/* IL2CPP: Dino.BusSand.App.UI.RemoveAdsPanel$$Price
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_RemoveAdsPanel__Price (Dino_BusSand_App_UI_ArtPopup_Parts_o* a, System_String_o* name, int32_t color, float width, float x, System_String_o* price, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RemoveAdsPanel$$Price
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_RemoveAdsPanel__Price
   (Dino_BusSand_App_UI_ArtPopup_Parts_o* a, System_String_o* name, int32_t color, float width,
   float x, System_String_o* price, const MethodInfo* method); */

long Dino_BusSand_App_UI_RemoveAdsPanel__Price_22b4830
               (undefined4 param_1,float param_2,long param_3,undefined8 param_4,undefined4 param_5,
               undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam0000000004f9c2de & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad470);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9c2de = 1;
  }
  if (param_3 != 0) {
    uVar2 = Dino_BusSand_App_UI_ArtPopup_Parts__get_Root_217ea74(param_3,0);
    fVar7 = 0.0;
    lVar3 = Dino_BusSand_App_UI_KitParts__Button_2306a4c
                      (param_1,0,0,0x42980000,0x436c0000,uVar2,param_4,param_5,param_6,0,0);
    lVar4 = Dino_BusSand_App_UI_KitParts__Label_2306b88(lVar3,0);
    if (((lVar4 != 0) && (lVar4 = TMPro_TMP_Text__get_transform_42cd604(lVar4,0), lVar4 != 0)) &&
       (plVar5 = (long *)UnityEngine_Transform__get_parent_43d0d70(lVar4,0),
       puVar1 = PTR_DAT_04cad470, plVar5 != (long *)0x0)) {
      if (*plVar5 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar5);
      }
      fVar6 = (float)UnityEngine_RectTransform__get_anchoredPosition_43cf828(plVar5,0);
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(fVar6 + 0.0,fVar7 + 6.0,plVar5,0);
      if ((bRam0000000004f9d84c & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cabdb0,lVar3,*(undefined8 *)puVar1);
        bRam0000000004f9d84c = 1;
      }
      if ((lVar3 != 0) &&
         (plVar5 = (long *)UnityEngine_Component__get_transform_43bcd18(lVar3,0),
         plVar5 != (long *)0x0)) {
        if (*plVar5 == *(long *)PTR_DAT_04cabdb0) {
          UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,plVar5,0);
          UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,plVar5,0);
          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                    (param_2 - *(float *)(param_3 + 0x30) * 0.5,0xc4a70000,plVar5,0);
          return lVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar5);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

