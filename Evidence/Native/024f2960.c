/* IL2CPP: Dino.BusSand.View.VehicleView$$get_BatchSlosh
float Dino_BusSand_View_VehicleView__get_BatchSlosh (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$get_BatchSlosh
   float Dino_BusSand_View_VehicleView__get_BatchSlosh (Dino_BusSand_View_VehicleView_o* __this,
   const MethodInfo* method); */

float Dino_BusSand_View_VehicleView__get_BatchSlosh_23f2960(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = 0.0;
  if (*(int *)(param_1 + 0x2c) == 4) {
    fVar1 = *(float *)(param_1 + 0x27c) * 1.5 + ABS(*(float *)(param_1 + 0x18c)) * _UNK_00e2043c;
    fVar3 = 1.0;
    if (fVar1 <= 1.0) {
      fVar3 = fVar1;
    }
    fVar2 = 0.0;
    if (0.0 <= fVar1) {
      fVar2 = fVar3;
    }
  }
  return fVar2;
}

