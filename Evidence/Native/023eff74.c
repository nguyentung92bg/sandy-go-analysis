/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$TopIn
UnityEngine_Vector2_o Dino_BusSand_App_UI_HomeStage__TopIn (Dino_BusSand_App_UI_HomeStage_o* __this, UnityEngine_RectTransform_o* space, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$TopIn
   UnityEngine_Vector2_o Dino_BusSand_App_UI_HomeStage__TopIn (Dino_BusSand_App_UI_HomeStage_o*
   __this, UnityEngine_RectTransform_o* space, const MethodInfo* method); */

undefined4
Dino_BusSand_App_UI_HomeStage__TopIn_22eff74
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
          undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uStack_38;
  
  if (*(long *)(param_4 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar3 = Dino_BusSand_App_UI_HomeBus__get_Top_22e0078(*(long *)(param_4 + 0x78),0);
  if ((bRam0000000004f9c463 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabda8);
    bRam0000000004f9c463 = 1;
  }
  puVar1 = PTR_DAT_04cabda8;
  uStack_38 = 0;
  if (*(long *)(param_4 + 0x20) != 0) {
    uVar3 = UnityEngine_Camera__WorldToScreenPoint_435c56c
                      (uVar3,param_2,param_3,*(long *)(param_4 + 0x20),0);
    uVar2 = Dino_BusSand_App_UI_HomeStage__get_UiCam_22efea4();
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle_467e798
              (uVar3,param_2,param_5,uVar2,&uStack_38,0);
    return (undefined4)uStack_38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

