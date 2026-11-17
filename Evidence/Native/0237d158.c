/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$NearAngle
bool Dino_BusSand_App_UI_KitAdopt__NearAngle (float a, float b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$NearAngle
   bool Dino_BusSand_App_UI_KitAdopt__NearAngle (float a, float b, const MethodInfo* method); */

bool Dino_BusSand_App_UI_KitAdopt__NearAngle_227d158(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  puVar1 = PTR_DAT_04cad7b8;
  if ((bRam0000000004f9c12c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad7b8);
    bRam0000000004f9c12c = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar2 = (float)fmodf(param_1,0x43b40000);
  fVar3 = fVar2;
  if (fVar2 < -180.0) {
    fVar3 = fVar2 + 360.0;
  }
  fVar4 = fVar2 + -360.0;
  if (fVar2 <= 180.0) {
    fVar4 = fVar3;
  }
  fVar3 = (float)fmodf(param_2,0x43b40000);
  if (fVar3 <= 180.0) {
    if (-180.0 <= fVar3) goto LAB_0237d230;
    fVar2 = 360.0;
  }
  else {
    fVar2 = -360.0;
  }
  fVar3 = fVar3 + fVar2;
LAB_0237d230:
  return ABS(fVar4 - fVar3) < _UNK_00e20448;
}

