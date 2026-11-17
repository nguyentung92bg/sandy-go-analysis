/* IL2CPP: Dino.BusSand.View.VehicleView$$Draft
void Dino_BusSand_View_VehicleView__Draft (Dino_BusSand_View_VehicleView_o* __this, UnityEngine_Vector3_o awayWorld, float strength, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$Draft
   void Dino_BusSand_View_VehicleView__Draft (Dino_BusSand_View_VehicleView_o* __this,
   UnityEngine_Vector3_o awayWorld, float strength, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__Draft_23fdb94
               (float param_1,undefined1 param_2 [16],float param_3,float param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = param_3;
  if ((bRam0000000004f9caf2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc460);
    bRam0000000004f9caf2 = 1;
  }
  if (((param_4 <= 0.0) || (*(int *)(param_5 + 0x2c) != 0)) ||
     (fVar6 = param_1 * param_1 + param_3 * param_3, fVar6 < _UNK_00e1fe00)) {
    return;
  }
  if (cRam0000000004f9b65c == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b65c = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar6 = SQRT(fVar6);
  if (fVar6 <= _UNK_00e20a08) {
    fVar9 = _UNK_00e20a08;
    if (cRam0000000004f9b65d == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    pfVar3 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
    param_1 = *pfVar3;
    fVar7 = pfVar3[1];
    param_3 = pfVar3[2];
  }
  else {
    fVar9 = 0.0;
    param_1 = param_1 / fVar6;
    fVar7 = 0.0 / fVar6;
    param_3 = param_3 / fVar6;
  }
  if (*(long *)(param_5 + 0x38) != 0) {
    fVar8 = *(float *)(param_5 + 400);
    fVar6 = (float)UnityEngine_Transform__get_right_43d15f4(*(long *)(param_5 + 0x38),0);
    puVar1 = PTR_DAT_04cbc460;
    lVar2 = *(long *)PTR_DAT_04cbc460;
    fVar4 = param_3 * fVar5;
    fVar6 = fVar4 + param_1 * fVar6 + fVar7 * fVar9;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar2 = *(long *)puVar1;
    }
    *(float *)(param_5 + 400) = fVar8 - fVar6 * *(float *)(*(long *)(lVar2 + 0xb8) + 0xb0) * param_4
    ;
    if (*(long *)(param_5 + 0x38) != 0) {
      fVar9 = *(float *)(param_5 + 0x198);
      fVar6 = (float)UnityEngine_Transform__get_forward_43d17f4(*(long *)(param_5 + 0x38),0);
      *(float *)(param_5 + 0x198) =
           fVar9 + *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb4) *
                   (param_3 * fVar5 + param_1 * fVar6 + fVar7 * fVar4) * param_4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

