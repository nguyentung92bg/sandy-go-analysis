/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$Img
UnityEngine_UI_Image_o* Dino_BusSand_App_UI_UIPanel__Img (Dino_BusSand_App_UI_UIPanel_o* __this, System_String_o* name, UnityEngine_Sprite_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$Img
   UnityEngine_UI_Image_o* Dino_BusSand_App_UI_UIPanel__Img (Dino_BusSand_App_UI_UIPanel_o* __this,
   System_String_o* name, UnityEngine_Sprite_o* s, const MethodInfo* method); */

long Dino_BusSand_App_UI_UIPanel__Img_2200bc8
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_04caebe8;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc99 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caebe8);
    bRam0000000004f9bc99 = 1;
  }
  lVar3 = Dino_BusSand_App_UI_UIPanel__Get_object__29460d0(param_1,param_2,*(undefined8 *)puVar2);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar5);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(param_3,0,0);
    if ((uVar4 & 1) != 0) {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      UnityEngine_UI_Image__set_sprite_44a7258(lVar3,param_3,0);
    }
  }
  return lVar3;
}

