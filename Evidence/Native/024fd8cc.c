/* IL2CPP: Dino.BusSand.View.VehicleView$$PlayBump
void Dino_BusSand_View_VehicleView__PlayBump (Dino_BusSand_View_VehicleView_o* __this, UnityEngine_Vector3_o dirWorld, float dist, System_Action_o* onImpact, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$PlayBump
   void Dino_BusSand_View_VehicleView__PlayBump (Dino_BusSand_View_VehicleView_o* __this,
   UnityEngine_Vector3_o dirWorld, float dist, System_Action_o* onImpact, const MethodInfo* method);
    */

void Dino_BusSand_View_VehicleView__PlayBump_23fd8cc
               (float param_1,float param_2,float param_3,float param_4,long param_5,
               undefined8 param_6)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  
  if (*(uint *)(param_5 + 0x2c) < 2) {
    if (*(long *)(param_5 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Transform__set_position_43d0f1c
              (*(undefined4 *)(param_5 + 0x1e8),*(undefined4 *)(param_5 + 0x1ec),
               *(undefined4 *)(param_5 + 0x1f0),*(long *)(param_5 + 0x38),0);
    Dino_BusSand_View_VehicleView__SetMode_23f6b40(param_5,1);
    if (cRam0000000004f9b65c == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b65c = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar1 = SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2);
    if (fVar1 <= _UNK_00e20a08) {
      if (cRam0000000004f9b65d == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
      param_1 = **(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      uVar2 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
    }
    else {
      param_1 = param_1 / fVar1;
      uVar2 = CONCAT44(param_3 / fVar1,param_2 / fVar1);
    }
    *(float *)(param_5 + 0x204) = param_1;
    *(undefined8 *)(param_5 + 0x208) = uVar2;
    *(float *)(param_5 + 0x210) = param_4;
    *(undefined4 *)(param_5 + 0x214) = 0;
    *(undefined1 *)(param_5 + 0x21c) = 0;
    *(undefined8 *)(param_5 + 0x220) = param_6;
    fVar3 = (*(float *)(param_5 + 0xa8) / *(float *)(param_5 + 0xbc)) * 24.0;
    fVar1 = _UNK_00e20448;
    if (_UNK_00e20448 <= fVar3) {
      fVar1 = fVar3;
    }
    param_4 = param_4 / fVar1;
    fVar1 = _UNK_00e207cc;
    if (param_4 <= _UNK_00e207cc) {
      fVar1 = param_4;
    }
    fVar3 = _UNK_00e2043c;
    if (_UNK_00e2043c <= param_4) {
      fVar3 = fVar1;
    }
    *(float *)(param_5 + 0x218) = fVar3;
    thunk_FUN_02134474(param_5 + 0x220,param_6);
    *(float *)(param_5 + 0x188) = *(float *)(param_5 + 0x188) + _UNK_00e1fe10;
  }
  return;
}

