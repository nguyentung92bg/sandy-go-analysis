/* IL2CPP: Dino.BusSand.View.VehicleView$$get_Velocity
UnityEngine_Vector3_o Dino_BusSand_View_VehicleView__get_Velocity (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$get_Velocity
   UnityEngine_Vector3_o Dino_BusSand_View_VehicleView__get_Velocity
   (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_View_VehicleView__get_Velocity_23f3acc(long param_1)

{
  undefined4 *puVar1;
  
  if ((*(char *)(param_1 + 0x1c4) == '\0') ||
     ((*(int *)(param_1 + 0x2c) != 2 && (*(int *)(param_1 + 0x2c) != 4)))) {
    if (cRam0000000004f9b65d == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    puVar1 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x1a8);
  }
  return *puVar1;
}

