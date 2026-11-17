/* IL2CPP: Dino.BusSand.View.StageLayout$$SampleReturn
void Dino_BusSand_View_StageLayout__SampleReturn (Dino_BusSand_View_StageLayout_o* __this, float u, UnityEngine_Vector3_o* pos, float* yaw, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.StageLayout$$SampleReturn
   void Dino_BusSand_View_StageLayout__SampleReturn (Dino_BusSand_View_StageLayout_o* __this, float
   u, UnityEngine_Vector3_o* pos, float* yaw, const MethodInfo* method); */

void Dino_BusSand_View_StageLayout__SampleReturn_23e9498
               (float param_1,float param_2,float param_3,long param_4,float *param_5,float *param_6
               )

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam0000000004f9ca90 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc250);
    bRam0000000004f9ca90 = 1;
  }
  puVar1 = PTR_DAT_04cbc250;
  lVar2 = *(long *)(param_4 + 0x130);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) != 0) {
      fVar6 = *(float *)(lVar2 + ((long)(((ulong)*(uint *)(lVar2 + 0x18) << 0x20) + -0x100000000) >>
                                 0x1e) + 0x20);
      if (*(int *)(*(long *)PTR_DAT_04cbc250 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar3 = (float)Dino_BusSand_View_StageLayout__get_VehicleAxleHalf_23e6cc4();
      fVar4 = _UNK_00e20844;
      if (_UNK_00e20844 <= fVar3) {
        fVar6 = fVar6 - param_1;
        fVar4 = param_1;
        if (fVar6 <= param_1) {
          fVar4 = fVar6;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar4 = fVar4 / (fVar3 + fVar3);
        fVar6 = 1.0;
        if (fVar4 <= 1.0) {
          fVar6 = fVar4;
        }
        fVar5 = 0.0;
        if (0.0 <= fVar4) {
          fVar5 = fVar6;
        }
        param_3 = 3.0;
        fVar3 = fVar3 * fVar5 * fVar5 * (3.0 - (fVar5 + fVar5));
        param_2 = _UNK_00e20844;
        fVar4 = _UNK_00e20844;
        if (_UNK_00e20844 <= fVar3) {
          fVar4 = fVar3;
        }
      }
      fVar5 = (float)Dino_BusSand_View_StageLayout__ReturnPoint_23e97f0(fVar4 + param_1,param_4);
      fVar6 = param_2;
      fVar3 = param_3;
      fVar4 = (float)Dino_BusSand_View_StageLayout__ReturnPoint_23e97f0(param_1 - fVar4,param_4);
      *param_5 = (fVar5 + fVar4) * 0.5;
      param_5[1] = (param_2 + fVar6) * 0.5;
      lVar2 = *(long *)puVar1;
      param_5[2] = (param_3 + fVar3) * 0.5;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar6 = (float)atan2f(-(param_3 - fVar3),fVar5 - fVar4);
      *param_6 = fVar6 * _UNK_00e20410;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

