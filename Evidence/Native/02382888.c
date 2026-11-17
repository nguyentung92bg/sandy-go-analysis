/* IL2CPP: Dino.BusSand.App.UI.KitPopup$$TitleImage
UnityEngine_UI_Image_o* Dino_BusSand_App_UI_KitPopup__TitleImage (Dino_BusSand_App_UI_KitWindow_o* w, System_String_o* key, float width, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPopup$$TitleImage
   UnityEngine_UI_Image_o* Dino_BusSand_App_UI_KitPopup__TitleImage
   (Dino_BusSand_App_UI_KitWindow_o* w, System_String_o* key, float width, const MethodInfo*
   method); */

long Dino_BusSand_App_UI_KitPopup__TitleImage_2282888
               (float param_1,undefined4 param_2,float param_3,float param_4,long param_5,
               undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam0000000004f9c147 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad458);
    bRam0000000004f9c147 = 1;
  }
  if (((param_5 != 0) && (*(long *)(param_5 + 0x30) != 0)) &&
     (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_5 + 0x30),0),
     puVar1 = PTR_DAT_04ca9ae8, lVar3 != 0)) {
    UnityEngine_GameObject__SetActive_43c1408(lVar3,0,0);
    lVar3 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(param_6,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      param_3 = 120.0;
    }
    else {
      if (lVar3 == 0) goto LAB_02382a28;
      UnityEngine_Sprite__get_rect_434ee28(lVar3,0);
      UnityEngine_Sprite__get_rect_434ee28(lVar3,0);
      param_3 = (param_4 * param_1) / param_3;
    }
    if (*(long *)(param_5 + 0x30) != 0) {
      uVar7 = *(undefined8 *)(param_5 + 0x20);
      lVar3 = TMPro_TMP_Text__get_rectTransform_42cd6a4(*(long *)(param_5 + 0x30),0);
      puVar2 = PTR_DAT_04cad458;
      puVar1 = PTR_DAT_04cad330;
      if (lVar3 != 0) {
        UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar3,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar3 = Dino_BusSand_App_UI_UiKit__Img_228203c
                          (param_1,param_3,0,param_2,0x3f800000,uVar7,*(undefined8 *)puVar2,param_6,
                           0);
        if (lVar3 != 0) {
          lVar5 = *(long *)(param_5 + 0x48);
          uVar7 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar3,0);
          if (lVar5 != 0) {
            puVar6 = (undefined8 *)(lVar5 + 0x38);
            *puVar6 = uVar7;
            thunk_FUN_02134474(puVar6,uVar7);
            return lVar3;
          }
        }
      }
    }
  }
LAB_02382a28:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

