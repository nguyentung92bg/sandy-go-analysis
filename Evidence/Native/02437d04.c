/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$Tiled
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_WinStreakPanel__Tiled (UnityEngine_Transform_o* parent, System_String_o* name, System_String_o* key, float width, float height, float unused, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$Tiled
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_WinStreakPanel__Tiled (UnityEngine_Transform_o*
   parent, System_String_o* name, System_String_o* key, float width, float height, float unused,
   const MethodInfo* method); */

long Dino_BusSand_App_UI_WinStreakPanel__Tiled_2337d04
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c642 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad330);
    bRam0000000004f9c642 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar2 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                             (param_1,param_2,0,0,0x3f800000,param_3,param_4,param_5,0,0);
  if (plVar2 != (long *)0x0) {
    UnityEngine_UI_Image__set_type_44afa58(plVar2,0,0);
    UnityEngine_UI_Image__set_preserveAspect_44afae0(plVar2,0,0);
    (**(code **)(*plVar2 + 0x2c8))(plVar2,0,*(undefined8 *)(*plVar2 + 0x2d0));
    if ((bRam0000000004faadfd & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cc75d0,0);
      bRam0000000004faadfd = 1;
    }
    lVar3 = plVar2[10];
    if (lVar3 == 0) {
      lVar3 = UnityEngine_Component__GetComponent_object__26f97e8
                        (plVar2,*(undefined8 *)PTR_DAT_04cc75d0);
      plVar2[10] = lVar3;
      thunk_FUN_02134474(plVar2 + 10,lVar3);
      lVar3 = plVar2[10];
    }
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

