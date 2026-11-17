/* IL2CPP: Dino.BusSand.View.StageLayout$$get_VehicleAxleHalf
float Dino_BusSand_View_StageLayout__get_VehicleAxleHalf (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.StageLayout$$get_VehicleAxleHalf
   float Dino_BusSand_View_StageLayout__get_VehicleAxleHalf (const MethodInfo* method); */

float Dino_BusSand_View_StageLayout__get_VehicleAxleHalf_23e6cc4(void)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  
  puVar1 = PTR_DAT_04cbc250;
  if ((bRam0000000004f9ca88 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc250);
    bRam0000000004f9ca88 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_View_RoadLoopConfig__get_Active_23e4040();
  if (lVar2 != 0) {
    fVar3 = 0.0;
    if (0.0 <= *(float *)(lVar2 + 0x28)) {
      fVar3 = *(float *)(lVar2 + 0x28);
    }
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

