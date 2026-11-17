/* IL2CPP: Dino.BusSand.View.VehicleView$$Wiggle
void Dino_BusSand_View_VehicleView__Wiggle (Dino_BusSand_View_VehicleView_o* __this, UnityEngine_Vector3_o dirWorld, float amp, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$Wiggle
   void Dino_BusSand_View_VehicleView__Wiggle (Dino_BusSand_View_VehicleView_o* __this,
   UnityEngine_Vector3_o dirWorld, float amp, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__Wiggle_23fda78
               (float param_1,float param_2,float param_3,undefined4 param_4,long param_5)

{
  undefined8 uVar1;
  float fVar2;
  
  if (*(int *)(param_5 + 0x2c) != 0) {
    return;
  }
  if (cRam0000000004f9b65c == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b65c = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar2 = SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2);
  if (fVar2 <= _UNK_00e20a08) {
    if (cRam0000000004f9b65d == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    uVar1 = **(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
    param_3 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
  }
  else {
    uVar1 = CONCAT44(param_2 / fVar2,param_1 / fVar2);
    param_3 = param_3 / fVar2;
  }
  *(undefined8 *)(param_5 + 0x228) = uVar1;
  fVar2 = _UNK_00e20584;
  *(float *)(param_5 + 0x230) = param_3;
  *(undefined4 *)(param_5 + 0x238) = param_4;
  *(undefined4 *)(param_5 + 0x234) = 0;
  *(float *)(param_5 + 0x188) = *(float *)(param_5 + 0x188) + fVar2;
  return;
}

