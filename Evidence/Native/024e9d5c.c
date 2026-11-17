/* IL2CPP: Dino.BusSand.View.StageLayout$$<BuildReturnPath>g__W|106_3
float Dino_BusSand_View_StageLayout___BuildReturnPath_g__W_106_3 (float tau, Dino_BusSand_View_StageLayout___c__DisplayClass106_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.StageLayout$$<BuildReturnPath>g__W|106_3
   float Dino_BusSand_View_StageLayout___BuildReturnPath_g__W_106_3 (float tau,
   Dino_BusSand_View_StageLayout___c__DisplayClass106_0_o* , const MethodInfo* method); */

float Dino_BusSand_View_StageLayout___BuildReturnPath_g__W_106_3_23e9d5c(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((bRam0000000004f9ca98 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc250);
    bRam0000000004f9ca98 = 1;
  }
  fVar2 = *(float *)(param_2 + 0x14);
  if (fVar2 <= param_1) {
    fVar3 = *(float *)(param_2 + 0x18);
    fVar1 = 1.0;
    if (param_1 <= fVar3 - fVar2) goto LAB_024e9e18;
    if (*(int *)(*(long *)PTR_DAT_04cbc250 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    param_1 = fVar3 - param_1;
  }
  else if (*(int *)(*(long *)PTR_DAT_04cbc250 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  param_1 = param_1 / fVar2;
  fVar2 = 1.0;
  if (param_1 <= 1.0) {
    fVar2 = param_1;
  }
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = fVar2;
  }
  fVar1 = fVar1 * fVar1 * (3.0 - (fVar1 + fVar1));
LAB_024e9e18:
  return fVar1 * (*(float *)(param_2 + 0x1c) + -1.0) + 1.0;
}

