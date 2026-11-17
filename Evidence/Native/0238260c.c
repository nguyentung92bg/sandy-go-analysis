/* IL2CPP: Dino.BusSand.App.UI.UiKit$$CloseButton
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UiKit__CloseButton (UnityEngine_Transform_o* parent, UnityEngine_Vector2_o pos, float size, int32_t theme, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$CloseButton
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UiKit__CloseButton (UnityEngine_Transform_o*
   parent, UnityEngine_Vector2_o pos, float size, int32_t theme, const MethodInfo* method); */

long Dino_BusSand_App_UI_UiKit__CloseButton_228260c
               (undefined4 param_1,undefined4 param_2,float param_3,undefined8 param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  
  puVar1 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c193 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cafc70);
    FUN_02132f7c(PTR_DAT_04cb0e80);
    FUN_02132f7c(PTR_DAT_04cad460);
    bRam0000000004f9c193 = 1;
  }
  puVar2 = PTR_DAT_04cad460;
  fVar6 = param_3 / 123.0;
  uVar3 = Dino_BusSand_App_UI_KitPopup__CloseKey_2280c94(param_5);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  plVar4 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                             (param_3,fVar6 * 124.0,param_1,param_2,0x3f800000,param_4,
                              *(undefined8 *)puVar2,uVar3,0);
  puVar2 = PTR_DAT_04cb0e80;
  puVar1 = PTR_DAT_04cafc70;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x2c8))(plVar4,1,*(undefined8 *)(*plVar4 + 0x2d0));
    uVar3 = UnityEngine_Component__get_transform_43bcd18(plVar4,0);
    Dino_BusSand_App_UI_UiKit__Img_228203c
              (fVar6 * 93.0,fVar6 * 93.0,0,fVar6 * 4.5,0x3f800000,uVar3,*(undefined8 *)puVar2,
               *(undefined8 *)puVar1,0);
    if ((bRam0000000004faadfd & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cc75d0,0);
      bRam0000000004faadfd = 1;
    }
    lVar5 = plVar4[10];
    if (lVar5 == 0) {
      lVar5 = UnityEngine_Component__GetComponent_object__26f97e8
                        (plVar4,*(undefined8 *)PTR_DAT_04cc75d0);
      plVar4[10] = lVar5;
      thunk_FUN_02134474(plVar4 + 10,lVar5);
      lVar5 = plVar4[10];
    }
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

