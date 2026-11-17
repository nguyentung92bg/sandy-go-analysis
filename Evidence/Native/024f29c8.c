/* IL2CPP: Dino.BusSand.View.VehicleBatch.Set$$Add
void Dino_BusSand_View_VehicleBatch_Set__Add (Dino_BusSand_View_VehicleBatch_Set_o* __this, UnityEngine_Matrix4x4_o m, UnityEngine_Vector4_o paint, UnityEngine_Vector4_o sand, float slosh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleBatch.Set$$Add
   void Dino_BusSand_View_VehicleBatch_Set__Add (Dino_BusSand_View_VehicleBatch_Set_o* __this,
   UnityEngine_Matrix4x4_o m, UnityEngine_Vector4_o paint, UnityEngine_Vector4_o sand, float slosh,
   const MethodInfo* method); */

void Dino_BusSand_View_VehicleBatch_Set__Add_23f29c8
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               long param_9,undefined8 *param_10)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 in_stack_00000000;
  
  uVar1 = *(uint *)(param_9 + 0x38);
  if (0x1fe < (int)uVar1) {
    return;
  }
  lVar2 = *(long *)(param_9 + 0x10);
  if (lVar2 == 0) {
LAB_024f2a7c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (uVar1 < *(uint *)(lVar2 + 0x18)) {
    uVar5 = param_10[4];
    uVar4 = param_10[7];
    uVar3 = param_10[6];
    lVar2 = lVar2 + (long)(int)uVar1 * 0x40;
    uVar7 = param_10[1];
    uVar6 = *param_10;
    uVar9 = param_10[3];
    uVar8 = param_10[2];
    *(undefined8 *)(lVar2 + 0x48) = param_10[5];
    *(undefined8 *)(lVar2 + 0x40) = uVar5;
    *(undefined8 *)(lVar2 + 0x58) = uVar4;
    *(undefined8 *)(lVar2 + 0x50) = uVar3;
    *(undefined8 *)(lVar2 + 0x28) = uVar7;
    *(undefined8 *)(lVar2 + 0x20) = uVar6;
    *(undefined8 *)(lVar2 + 0x38) = uVar9;
    *(undefined8 *)(lVar2 + 0x30) = uVar8;
    lVar2 = *(long *)(param_9 + 0x18);
    if (lVar2 == 0) goto LAB_024f2a7c;
    if (*(uint *)(param_9 + 0x38) < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)*(uint *)(param_9 + 0x38) * 0x10;
      *(undefined4 *)(lVar2 + 0x20) = param_1;
      *(undefined4 *)(lVar2 + 0x24) = param_2;
      *(undefined4 *)(lVar2 + 0x28) = param_3;
      *(undefined4 *)(lVar2 + 0x2c) = param_4;
      lVar2 = *(long *)(param_9 + 0x20);
      if (lVar2 == 0) goto LAB_024f2a7c;
      if (*(uint *)(param_9 + 0x38) < *(uint *)(lVar2 + 0x18)) {
        lVar2 = lVar2 + (long)(int)*(uint *)(param_9 + 0x38) * 0x10;
        *(undefined4 *)(lVar2 + 0x20) = param_5;
        *(undefined4 *)(lVar2 + 0x24) = param_6;
        *(undefined4 *)(lVar2 + 0x28) = param_7;
        *(undefined4 *)(lVar2 + 0x2c) = param_8;
        lVar2 = *(long *)(param_9 + 0x28);
        if (lVar2 == 0) goto LAB_024f2a7c;
        uVar1 = *(uint *)(param_9 + 0x38);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          *(uint *)(param_9 + 0x38) = uVar1 + 1;
          *(undefined4 *)(lVar2 + (long)(int)uVar1 * 4 + 0x20) = in_stack_00000000;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

