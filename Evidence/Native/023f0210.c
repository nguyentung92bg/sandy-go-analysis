/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$FootUnderTop
float Dino_BusSand_App_UI_HomeStage__FootUnderTop (Dino_BusSand_App_UI_HomeStage_o* __this, UnityEngine_RectTransform_o* space, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$FootUnderTop
   float Dino_BusSand_App_UI_HomeStage__FootUnderTop (Dino_BusSand_App_UI_HomeStage_o* __this,
   UnityEngine_RectTransform_o* space, const MethodInfo* method); */

float Dino_BusSand_App_UI_HomeStage__FootUnderTop_22f0210
                (undefined1 param_1 [16],float param_2,float param_3,float param_4,
                undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9c464 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabda8);
    bRam0000000004f9c464 = 1;
  }
  uStack_38 = 0;
  fVar3 = (float)Dino_BusSand_App_UI_HomeStage__get_ScreenRect_22f0074(param_5);
  puVar1 = PTR_DAT_04cabda8;
  fVar4 = 0.0;
  if (0.0 < param_4) {
    uVar2 = Dino_BusSand_App_UI_HomeStage__get_UiCam_22efea4();
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle_467e798
              (fVar3 + param_3 * 0.5,param_2,param_6,uVar2,&uStack_38,0);
    if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_RectTransform__get_rect_43cf450(param_6,0);
    fVar4 = (param_4 + param_2) - uStack_38._4_4_;
  }
  return fVar4;
}

