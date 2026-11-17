/* IL2CPP: Dino.BusSand.View.StageLayout$$get_LoopBackZ
float Dino_BusSand_View_StageLayout__get_LoopBackZ (Dino_BusSand_View_StageLayout_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.StageLayout$$get_LoopBackZ
   float Dino_BusSand_View_StageLayout__get_LoopBackZ (Dino_BusSand_View_StageLayout_o* __this,
   const MethodInfo* method); */

float Dino_BusSand_View_StageLayout__get_LoopBackZ_23e6da8(undefined8 param_1)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  
  puVar1 = PTR_DAT_04cbc250;
  if ((bRam0000000004f9ca8a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc250);
    bRam0000000004f9ca8a = 1;
  }
  fVar2 = (float)Dino_BusSand_View_StageLayout__get_SideTurnZ_23e6d2c(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar3 = (float)Dino_BusSand_View_StageLayout__get_SideTurnRadius_23e6c3c();
  return fVar2 + fVar3;
}

