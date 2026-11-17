/* IL2CPP: Dino.BusSand.View.VehicleView$$SetRoadPose
void Dino_BusSand_View_VehicleView__SetRoadPose (Dino_BusSand_View_VehicleView_o* __this, UnityEngine_Vector3_o pos, float yaw, float yawRate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$SetRoadPose
   void Dino_BusSand_View_VehicleView__SetRoadPose (Dino_BusSand_View_VehicleView_o* __this,
   UnityEngine_Vector3_o pos, float yaw, float yawRate, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__SetRoadPose_23fec70(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined4 in_s3;
  
  puVar1 = PTR_DAT_04cbc250;
  if ((bRam0000000004f9caf9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc250);
    bRam0000000004f9caf9 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_View_StageLayout__RoadRotation_23e5098(in_s3,0);
  if (lVar2 != 0) {
    if ((bRam0000000004fa8b44 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7a00,0);
      bRam0000000004fa8b44 = 1;
    }
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 != 0) {
        if (pcRam0000000004fa8c18 == (code *)0x0) {
          pcRam0000000004fa8c18 = (code *)FUN_02132f40(&UNK_00e21de3);
        }
        (*pcRam0000000004fa8c18)(lVar2,&stack0xffffffffffffffd4,&stack0xffffffffffffffc4);
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

