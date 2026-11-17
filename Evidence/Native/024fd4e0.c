/* IL2CPP: Dino.BusSand.View.VehicleView$$PlaceParked
void Dino_BusSand_View_VehicleView__PlaceParked (Dino_BusSand_View_VehicleView_o* __this, UnityEngine_Vector3_o world, int32_t angle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$PlaceParked
   void Dino_BusSand_View_VehicleView__PlaceParked (Dino_BusSand_View_VehicleView_o* __this,
   UnityEngine_Vector3_o world, int32_t angle, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__PlaceParked_23fd4e0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined4 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  
  puVar1 = PTR_DAT_04cbc250;
  uVar5 = param_2;
  uVar7 = param_3;
  if ((bRam0000000004f9caf1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc250);
    bRam0000000004f9caf1 = 1;
  }
  lVar2 = *(long *)puVar1;
  *(undefined4 *)(param_5 + 0x1e8) = param_1;
  *(undefined4 *)(param_5 + 0x1ec) = param_2;
  *(undefined4 *)(param_5 + 0x1f0) = param_3;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_View_StageLayout__YardRotation_23e8950(param_6,0);
  *(undefined4 *)(param_5 + 500) = uVar3;
  *(undefined4 *)(param_5 + 0x1f8) = uVar5;
  *(undefined4 *)(param_5 + 0x1fc) = uVar7;
  *(undefined4 *)(param_5 + 0x200) = param_4;
  if (*(long *)(param_5 + 0x38) != 0) {
    UnityEngine_Transform__SetPositionAndRotation_43d2064
              (param_1,param_2,param_3,uVar3,uVar5,uVar7,param_4,*(long *)(param_5 + 0x38),0);
    fVar6 = *(float *)(param_5 + 0x1f8);
    fVar8 = *(float *)(param_5 + 0x1fc);
    fVar4 = (float)UnityEngine_Quaternion__Internal_ToEulerRad_43af09c
                             (*(undefined4 *)(param_5 + 500),fVar6,fVar8,
                              *(undefined4 *)(param_5 + 0x200),0);
    fVar6 = fVar6 * _UNK_00e20410;
    UnityEngine_Quaternion__Internal_MakePositive_43af5c4
              (fVar4 * _UNK_00e20410,fVar6,fVar8 * _UNK_00e20410,0);
    *(float *)(param_5 + 0x268) = fVar6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

