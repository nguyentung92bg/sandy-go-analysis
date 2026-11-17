/* IL2CPP: Dino.BusSand.View.VehicleView$$EmergeFrom
void Dino_BusSand_View_VehicleView__EmergeFrom (Dino_BusSand_View_VehicleView_o* __this, UnityEngine_Vector3_o world, float delay, bool fromDepth, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$EmergeFrom
   void Dino_BusSand_View_VehicleView__EmergeFrom (Dino_BusSand_View_VehicleView_o* __this,
   UnityEngine_Vector3_o world, float delay, bool fromDepth, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__EmergeFrom_23fd6b4
               (float param_1,float param_2,float param_3,undefined4 param_4,long param_5,
               byte param_6)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  
  *(byte *)(param_5 + 0x334) = param_6;
  uVar7 = CONCAT44(param_3,param_2);
  if ((param_6 & 1) != 0) {
    fVar5 = *(float *)(param_5 + 0x1e8);
    uVar7 = *(undefined8 *)(param_5 + 0x1ec);
    if (cRam0000000004f9b65c == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b65c = '\x01';
    }
    puVar1 = PTR_DAT_04caa200;
    fVar5 = param_1 - fVar5;
    fVar6 = param_2 - (float)uVar7;
    fVar8 = param_3 - (float)((ulong)uVar7 >> 0x20);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar3 = SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar6 * fVar6);
    if (fVar3 <= _UNK_00e20a08) {
      if (cRam0000000004f9b65d == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
      fVar5 = **(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      uVar7 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
    }
    else {
      fVar5 = fVar5 / fVar3;
      uVar7 = CONCAT44(fVar8 / fVar3,fVar6 / fVar3);
    }
    fVar8 = *(float *)(param_5 + 0x1e8);
    fVar6 = *(float *)(param_5 + 0x1ec);
    fVar3 = *(float *)(param_5 + 0x1f0);
    if (cRam0000000004f9b9df == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b9df = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar8 = param_1 - fVar8;
    fVar6 = param_2 - fVar6;
    fVar3 = param_3 - fVar3;
    fVar4 = (*(float *)(param_5 + 0xa8) / *(float *)(param_5 + 0xbc)) * _UNK_00e20094;
    fVar6 = SQRT(fVar3 * fVar3 + fVar8 * fVar8 + fVar6 * fVar6) * 0.25;
    if (fVar4 <= fVar6) {
      fVar6 = fVar4;
    }
    param_1 = param_1 + fVar5 * fVar6;
    uVar7 = CONCAT44(param_3 + (float)((ulong)uVar7 >> 0x20) * fVar6,param_2 + (float)uVar7 * fVar6)
    ;
  }
  lVar2 = *(long *)(param_5 + 0x38);
  *(float *)(param_5 + 0x31c) = param_1;
  *(undefined8 *)(param_5 + 800) = uVar7;
  *(undefined4 *)(param_5 + 0x328) = 0;
  *(undefined4 *)(param_5 + 0x32c) = param_4;
  if (lVar2 != 0) {
    if ((bRam0000000004fa8b31 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7a00,0);
      bRam0000000004fa8b31 = 1;
    }
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 != 0) {
        if (pcRam0000000004fa8b88 == (code *)0x0) {
          pcRam0000000004fa8b88 = (code *)FUN_02132f40(&UNK_00e68510);
        }
        (*pcRam0000000004fa8b88)(lVar2,&stack0xffffffffffffffd4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

