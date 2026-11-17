/* IL2CPP: Dino.BusSand.App.UI.ChestPanel$$ChestSize
UnityEngine_Vector2_o Dino_BusSand_App_UI_ChestPanel__ChestSize (System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ChestPanel$$ChestSize
   UnityEngine_Vector2_o Dino_BusSand_App_UI_ChestPanel__ChestSize (System_String_o* key, const
   MethodInfo* method); */

float Dino_BusSand_App_UI_ChestPanel__ChestSize_2326b08
                (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c5e8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c5e8 = 1;
  }
  lVar2 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(param_4,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
  if ((uVar3 & 1) == 0) {
    param_3 = 370.0;
  }
  else {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Sprite__get_rect_434ee28(lVar2,0);
    param_3 = param_3 * 1.5;
  }
  return param_3;
}

