/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Solid
UnityEngine_Texture2D_o* Dino_BusSand_Cheat_CheatManager__Solid (UnityEngine_Color_o c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Solid
   UnityEngine_Texture2D_o* Dino_BusSand_Cheat_CheatManager__Solid (UnityEngine_Color_o c, const
   MethodInfo* method); */

long Dino_BusSand_Cheat_CheatManager__Solid_235fa74
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb4ef0;
  if ((bRam0000000004f9c73d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4ef0);
    bRam0000000004f9c73d = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_Texture2D___ctor_439e130(lVar2,1,1,0);
  if (lVar2 != 0) {
    UnityEngine_Object__set_hideFlags_43c8654(lVar2,0x3d,0);
    UnityEngine_Texture2D__SetPixel_439e36c(param_1,param_2,param_3,param_4,lVar2,0,0,0);
    UnityEngine_Texture2D__Apply_439ea80(lVar2,0);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

