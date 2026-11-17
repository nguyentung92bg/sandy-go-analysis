/* IL2CPP: Dino.BusSand.App.UI.RemoveAdsPanel$$AdsBadge
void Dino_BusSand_App_UI_RemoveAdsPanel__AdsBadge (Dino_BusSand_App_UI_ArtPopup_Parts_o* a, float x, float y, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RemoveAdsPanel$$AdsBadge
   void Dino_BusSand_App_UI_RemoveAdsPanel__AdsBadge (Dino_BusSand_App_UI_ArtPopup_Parts_o* a, float
   x, float y, const MethodInfo* method); */

long * Dino_BusSand_App_UI_RemoveAdsPanel__AdsBadge_22b5160
                 (float param_1,float param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  
  if ((bRam0000000004f9c2e1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad428);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb6258);
    FUN_02132f7c(PTR_DAT_04cb6260);
    bRam0000000004f9c2e1 = 1;
  }
  puVar3 = PTR_DAT_04cb6260;
  puVar2 = PTR_DAT_04cb6258;
  puVar1 = PTR_DAT_04cad330;
  if (param_3 != 0) {
    uVar4 = Dino_BusSand_App_UI_ArtPopup_Parts__get_Root_217ea74(param_3,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    plVar5 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                               (0,0,0,0,0x3f800000,uVar4,*(undefined8 *)puVar2,*(undefined8 *)puVar3
                                ,0,0);
    puVar1 = PTR_DAT_04cad428;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x2c8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x2d0));
      if ((bRam0000000004f9d84c & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cabdb0,plVar5,*(undefined8 *)puVar1);
        bRam0000000004f9d84c = 1;
      }
      if ((plVar5 != (long *)0x0) &&
         (plVar6 = (long *)UnityEngine_Component__get_transform_43bcd18(plVar5,0),
         plVar6 != (long *)0x0)) {
        if (*plVar6 == *(long *)PTR_DAT_04cabdb0) {
          UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,plVar6,0);
          UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,plVar6,0);
          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                    (param_1 - *(float *)(param_3 + 0x30) * 0.5,-param_2,plVar6,0);
          return plVar5;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

