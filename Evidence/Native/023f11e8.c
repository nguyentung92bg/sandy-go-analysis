/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Ring
int32_t Dino_BusSand_App_UI_HomeStage__Ring (float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Ring
   int32_t Dino_BusSand_App_UI_HomeStage__Ring (float x, const MethodInfo* method); */

uint Dino_BusSand_App_UI_HomeStage__Ring_22f11e8(float param_1)

{
  uint uVar1;
  
  if (cRam0000000004f9b9dd == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b9dd = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar1 = 0;
  if ((float)(int)(param_1 * 4.0) != INFINITY) {
    uVar1 = (int)(param_1 * 4.0) & 0x3ff;
  }
  return uVar1;
}

