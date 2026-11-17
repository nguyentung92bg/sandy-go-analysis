/* IL2CPP: Dino.BusSand.View.VehicleView$$get_PileWorldTop
UnityEngine_Vector3_o Dino_BusSand_View_VehicleView__get_PileWorldTop (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$get_PileWorldTop
   UnityEngine_Vector3_o Dino_BusSand_View_VehicleView__get_PileWorldTop
   (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method); */

float Dino_BusSand_View_VehicleView__get_PileWorldTop_23feddc(long param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0xe1) == '\0') {
    if (*(long *)(param_1 + 0x38) != 0) {
      fVar1 = (float)UnityEngine_Transform__get_position_43d0e48(*(long *)(param_1 + 0x38),0);
      if (*(long *)(param_1 + 0x38) != 0) {
        UnityEngine_Transform__get_rotation_43d133c(*(long *)(param_1 + 0x38),0);
        goto LAB_024feecc;
      }
    }
  }
  else if (*(long *)(param_1 + 0x38) != 0) {
    fVar1 = (float)UnityEngine_Transform__get_position_43d0e48(*(long *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x38) != 0) {
      UnityEngine_Transform__get_rotation_43d133c(*(long *)(param_1 + 0x38),0);
LAB_024feecc:
      fVar2 = (float)UnityEngine_Quaternion__op_Multiply_43af48c(0);
      return fVar1 + fVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

