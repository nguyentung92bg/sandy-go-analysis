/* IL2CPP: Dino.BusSand.View.VehicleBatch$$Draw
void Dino_BusSand_View_VehicleBatch__Draw (Dino_BusSand_View_VehicleBatch_o* __this, Dino_BusSand_View_VehicleBatch_Kind_o* kd, Dino_BusSand_View_VehicleBatch_Set_o* set, UnityEngine_Mesh_o* mesh, UnityEngine_Bounds_o bounds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleBatch$$Draw
   void Dino_BusSand_View_VehicleBatch__Draw (Dino_BusSand_View_VehicleBatch_o* __this,
   Dino_BusSand_View_VehicleBatch_Kind_o* kd, Dino_BusSand_View_VehicleBatch_Set_o* set,
   UnityEngine_Mesh_o* mesh, UnityEngine_Bounds_o bounds, const MethodInfo* method); */

void Dino_BusSand_View_VehicleBatch__Draw_23f2eb8
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong auStack_120 [28];
  
  if ((bRam0000000004f9cabb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbde50);
    FUN_02132f7c(PTR_DAT_04cbc9a8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc2c8);
    FUN_02132f7c(PTR_DAT_04cbde68);
    FUN_02132f7c(PTR_DAT_04cb6fb8);
    FUN_02132f7c(PTR_DAT_04cb7830);
    bRam0000000004f9cabb = 1;
  }
  auStack_120[1] = 0;
  auStack_120[0] = 0;
  auStack_120[3] = 0;
  auStack_120[2] = 0;
  auStack_120[5] = 0;
  auStack_120[4] = 0;
  auStack_120[7] = 0;
  auStack_120[6] = 0;
  auStack_120[9] = 0;
  auStack_120[8] = 0;
  auStack_120[0xb] = 0;
  auStack_120[10] = 0;
  auStack_120[0xd] = 0;
  auStack_120[0xc] = 0;
  auStack_120[0xf] = 0;
  auStack_120[0xe] = 0;
  auStack_120[0x11] = 0;
  auStack_120[0x10] = 0;
  auStack_120[0x13] = 0;
  auStack_120[0x12] = 0;
  auStack_120[0x15] = 0;
  auStack_120[0x14] = 0;
  auStack_120[0x17] = 0;
  auStack_120[0x16] = 0;
  auStack_120[0x19] = 0;
  auStack_120[0x18] = 0;
  auStack_120[0x1b] = 0;
  auStack_120[0x1a] = 0;
  if (param_3 == 0) {
LAB_024f3104:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(param_3 + 0x38) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_4,0,0);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(param_3 + 0x30) != 0) {
        UnityEngine_MaterialPropertyBlock__SetVectorArray_4372f78
                  (*(long *)(param_3 + 0x30),*(undefined8 *)PTR_DAT_04cb6fb8,
                   *(undefined8 *)(param_3 + 0x18),0);
        if (*(long *)(param_3 + 0x30) != 0) {
          UnityEngine_MaterialPropertyBlock__SetVectorArray_4372f78
                    (*(long *)(param_3 + 0x30),*(undefined8 *)PTR_DAT_04cb7830,
                     *(undefined8 *)(param_3 + 0x20),0);
          if ((*(long *)(param_3 + 0x30) != 0) &&
             (UnityEngine_MaterialPropertyBlock__SetFloatArray_4372f3c
                        (*(long *)(param_3 + 0x30),*(undefined8 *)PTR_DAT_04cbde68,
                         *(undefined8 *)(param_3 + 0x28),0), param_2 != 0)) {
            UnityEngine_RenderParams___ctor_436e590(auStack_120,*(undefined8 *)(param_2 + 0x38),0);
            puVar2 = PTR_DAT_04cbc2c8;
            lVar4 = *(long *)PTR_DAT_04cbc2c8;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar4 = *(long *)puVar2;
            }
            if (**(char **)(lVar4 + 0xb8) == '\0') {
              auStack_120[5] = *(undefined8 *)(param_1 + 0x38);
            }
            else {
              auStack_120[5] = 0;
            }
            thunk_FUN_02134474(auStack_120 + 5);
            auStack_120[8] = *(undefined8 *)(param_3 + 0x30);
            auStack_120[0] = auStack_120[0] & 0xffffffff00000000;
            thunk_FUN_02134474(auStack_120 + 8);
            auStack_120[3] = param_5[1];
            auStack_120[2] = *param_5;
            auStack_120[4] = param_5[2];
            auStack_120[9] = CONCAT35(auStack_120[9]._5_3_,0x100000000);
            auStack_120[10] = auStack_120[10] & 0xffffffff00000000;
            auStack_120[6] = auStack_120[6] & 0xffffffff;
            func_0x049b5410(auStack_120 + 0xe,auStack_120,0x70);
            uVar5 = *(undefined8 *)(param_3 + 0x10);
            uVar1 = *(undefined4 *)(param_3 + 0x38);
            if (*(int *)(*(long *)PTR_DAT_04cbc9a8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            UnityEngine_Graphics__RenderMeshInstanced_Matrix4x4__276d1e8
                      (auStack_120 + 0xe,param_4,0,uVar5,uVar1,0,*(undefined8 *)PTR_DAT_04cbde50);
            return;
          }
        }
      }
      goto LAB_024f3104;
    }
  }
  return;
}

