/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$Done
UnityEngine_Sprite_o* Dino_BusSand_App_UI_AtelierArt__Done (UnityEngine_Texture2D_o* t, UnityEngine_Color32_array* px, UnityEngine_Vector4_o border, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$Done
   UnityEngine_Sprite_o* Dino_BusSand_App_UI_AtelierArt__Done (UnityEngine_Texture2D_o* t,
   UnityEngine_Color32_array* px, UnityEngine_Vector4_o border, const MethodInfo* method); */

void Dino_BusSand_App_UI_AtelierArt__Done_22de7bc(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (long *)0x0) {
    UnityEngine_Texture2D__SetPixels32_439edd8(param_1,param_2,0);
    UnityEngine_Texture2D__Apply_439ea14(param_1,0,1,0);
    iVar1 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    iVar2 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    UnityEngine_Sprite__Create_4351088
              (0,0,(float)iVar1,(float)iVar2,0x3f000000,0x3f000000,0x42c80000,param_1,0,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

