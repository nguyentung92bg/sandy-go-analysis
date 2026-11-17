/* IL2CPP: Dino.BusSand.View.VehicleView$$get_RoofWorld
UnityEngine_Vector3_o Dino_BusSand_View_VehicleView__get_RoofWorld (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$get_RoofWorld
   UnityEngine_Vector3_o Dino_BusSand_View_VehicleView__get_RoofWorld
   (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method); */

float Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(long param_1)

{
  float fVar1;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    fVar1 = (float)UnityEngine_Transform__get_position_43d0e48(*(long *)(param_1 + 0x38),0);
    if (cRam0000000004f9bcf8 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9bcf8 = '\x01';
    }
    return fVar1 + *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18) *
                   *(float *)(param_1 + 0xb4) * *(float *)(param_1 + 0xb0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

