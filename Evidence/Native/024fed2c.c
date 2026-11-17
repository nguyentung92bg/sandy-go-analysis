/* IL2CPP: Dino.BusSand.View.VehicleView$$SetFill
void Dino_BusSand_View_VehicleView__SetFill (Dino_BusSand_View_VehicleView_o* __this, float progress, bool complete, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$SetFill
   void Dino_BusSand_View_VehicleView__SetFill (Dino_BusSand_View_VehicleView_o* __this, float
   progress, bool complete, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__SetFill_23fed2c(float param_1,long param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0;
  if (param_1 <= 1.0) {
    fVar2 = param_1;
  }
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = fVar2;
  }
  *(float *)(param_2 + 0x274) = fVar1;
  fVar1 = _UNK_00e20ad8;
  fVar2 = _UNK_00e20014;
  if (((param_3 & 1) != 0) && (*(char *)(param_2 + 0x298) == '\0')) {
    *(undefined1 *)(param_2 + 0x298) = 1;
    *(undefined4 *)(param_2 + 0x274) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x1e4) = 0x3f8f5c29;
    *(float *)(param_2 + 0x188) = *(float *)(param_2 + 0x188) + fVar2;
    *(undefined4 *)(param_2 + 0x14c) = 0x3df5c28f;
    *(undefined4 *)(param_2 + 0x2c4) = 0x3e99999a;
    *(float *)(param_2 + 0x370) = (*(float *)(param_2 + 0xac) / *(float *)(param_2 + 0xbc)) * fVar1;
    return;
  }
  return;
}

