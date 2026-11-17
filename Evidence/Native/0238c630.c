/* IL2CPP: Dino.BusSand.App.UI.UiKit$$MenuButtonSize
UnityEngine_Vector2_o Dino_BusSand_App_UI_UiKit__MenuButtonSize (UnityEngine_Vector2_o face, float rim, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$MenuButtonSize
   UnityEngine_Vector2_o Dino_BusSand_App_UI_UiKit__MenuButtonSize (UnityEngine_Vector2_o face,
   float rim, const MethodInfo* method); */

float Dino_BusSand_App_UI_UiKit__MenuButtonSize_228c630
                (float param_1,undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  
  puVar1 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c18f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad330);
    bRam0000000004f9c18f = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  fVar3 = *(float *)(*(long *)(lVar2 + 0xb8) + 0x30);
  return param_1 + (fVar3 + fVar3) * param_3;
}

