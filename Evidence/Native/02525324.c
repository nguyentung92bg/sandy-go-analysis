/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_Alpha
float Dino_BusSand_Core_StageEngine__get_Alpha (Dino_BusSand_Core_StageEngine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_Alpha
   float Dino_BusSand_Core_StageEngine__get_Alpha (Dino_BusSand_Core_StageEngine_o* __this, const
   MethodInfo* method); */

float Dino_BusSand_Core_StageEngine__get_Alpha_2425324(long param_1)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR_DAT_04caa200;
  if ((bRam0000000004f9cba2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cba2 = 1;
  }
  dVar2 = *(double *)(param_1 + 0xd8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar2 = (double)System_Math__Min_48310e8(0x3ff0000000000000,dVar2 / _UNK_00e699b0,0);
  return (float)dVar2;
}

