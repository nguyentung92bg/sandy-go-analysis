/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$set_Speed
void Dino_BusSand_App_UI_UiMotion__set_Speed (float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$set_Speed
   void Dino_BusSand_App_UI_UiMotion__set_Speed (float value, const MethodInfo* method); */

void Dino_BusSand_App_UI_UiMotion__set_Speed_2290948(float param_1)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  
  puVar1 = PTR_DAT_04cac1e8;
  if ((bRam0000000004f9c1b7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac1e8);
    bRam0000000004f9c1b7 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  fVar3 = _UNK_00e20448;
  if (_UNK_00e20448 <= param_1) {
    fVar3 = param_1;
  }
  **(float **)(lVar2 + 0xb8) = fVar3;
  return;
}

