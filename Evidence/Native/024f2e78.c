/* IL2CPP: Dino.BusSand.View.VehicleView$$get_BatchBlobMatrix
UnityEngine_Matrix4x4_o Dino_BusSand_View_VehicleView__get_BatchBlobMatrix (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$get_BatchBlobMatrix
   UnityEngine_Matrix4x4_o Dino_BusSand_View_VehicleView__get_BatchBlobMatrix
   (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__get_BatchBlobMatrix_23f2e78(undefined8 *param_1,long param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*(long *)(param_2 + 0x78) != 0) {
    UnityEngine_Transform__get_localToWorldMatrix_43d0828(&uStack_50,*(long *)(param_2 + 0x78),0);
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[3] = uStack_38;
    param_1[2] = uStack_40;
    param_1[5] = uStack_28;
    param_1[4] = uStack_30;
    param_1[7] = uStack_18;
    param_1[6] = uStack_20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

