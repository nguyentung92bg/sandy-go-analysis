/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$Tex
UnityEngine_Texture2D_o* Dino_BusSand_App_UI_AtelierArt__Tex (int32_t w, int32_t h, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$Tex
   UnityEngine_Texture2D_o* Dino_BusSand_App_UI_AtelierArt__Tex (int32_t w, int32_t h,
   System_String_o* name, const MethodInfo* method); */

long Dino_BusSand_App_UI_AtelierArt__Tex_22de70c
               (undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb4ef0;
  if ((bRam0000000004f9c3f9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4ef0);
    bRam0000000004f9c3f9 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_Texture2D___ctor_439e07c(lVar2,param_1,param_2,4,0,0);
  if (lVar2 != 0) {
    UnityEngine_Object__set_name_43c72ec(lVar2,param_3,0);
    UnityEngine_Texture__set_filterMode_4398f60(lVar2,1,0);
    UnityEngine_Texture__set_wrapMode_4398ac8(lVar2,1,0);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

