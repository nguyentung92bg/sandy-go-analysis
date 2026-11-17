/* IL2CPP: Dino.BusSand.View.VehicleView$$MakeArrowMesh
UnityEngine_Mesh_o* Dino_BusSand_View_VehicleView__MakeArrowMesh (float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$MakeArrowMesh
   UnityEngine_Mesh_o* Dino_BusSand_View_VehicleView__MakeArrowMesh (float k, const MethodInfo*
   method); */

long Dino_BusSand_View_VehicleView__MakeArrowMesh_23fa840(float param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar3 = PTR_DAT_04cb3c10;
  puVar2 = PTR_DAT_04caa1d0;
  if ((bRam0000000004f9cae1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04cbdfd0);
    FUN_02132f7c(PTR_DAT_04cb9428);
    bRam0000000004f9cae1 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_Vector3____ctor_3af944c(lVar4,*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_04caa170;
  if (lVar4 != 0) {
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar7 = *(long *)PTR_DAT_04caa170;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    fVar10 = _UNK_00e20324;
    if (lVar6 != 0) {
      fVar8 = -(param_1 * _UNK_00e20324);
      fVar11 = (param_1 + -1.0) * _UNK_00e206e4;
      uVar1 = *(uint *)(lVar4 + 0x18);
      fVar9 = _UNK_00e1fe94 - fVar11;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar1 * 0xc;
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(float *)(lVar6 + 0x20) = fVar8;
        *(undefined4 *)(lVar6 + 0x24) = 0;
        *(float *)(lVar6 + 0x28) = fVar9;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                  (fVar8,0,fVar9,lVar4,
                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      lVar6 = *(long *)(lVar4 + 0x10);
      lVar7 = *(long *)puVar2;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar6 != 0) {
        fVar10 = param_1 * fVar10;
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(float *)(lVar6 + 0x20) = fVar10;
          *(undefined4 *)(lVar6 + 0x24) = 0;
          *(float *)(lVar6 + 0x28) = fVar9;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (fVar10,0,fVar9,lVar4,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        lVar6 = *(long *)(lVar4 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        uVar5 = _UNK_00e6a3f8;
        fVar9 = _UNK_00e2043c;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            lVar6 = lVar6 + (long)(int)uVar1 * 0xc;
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(float *)(lVar6 + 0x20) = fVar10;
            *(undefined8 *)(lVar6 + 0x24) = uVar5;
          }
          else {
            System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                      (fVar10,0,_UNK_00e2043c,lVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          lVar6 = *(long *)(lVar4 + 0x10);
          lVar7 = *(long *)puVar2;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          uVar5 = _UNK_00e6a3f8;
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              lVar6 = lVar6 + (long)(int)uVar1 * 0xc;
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(float *)(lVar6 + 0x20) = fVar8;
              *(undefined8 *)(lVar6 + 0x24) = uVar5;
            }
            else {
              System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                        (fVar8,0,fVar9,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
            lVar6 = *(long *)(lVar4 + 0x10);
            lVar7 = *(long *)puVar2;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar6 != 0) {
              uVar1 = *(uint *)(lVar4 + 0x18);
              param_1 = param_1 * _UNK_00e2038c;
              fVar9 = fVar11 * _UNK_00e201f8 + fVar9;
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                lVar6 = lVar6 + (long)(int)uVar1 * 0xc;
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(float *)(lVar6 + 0x20) = -param_1;
                *(undefined4 *)(lVar6 + 0x24) = 0;
                *(float *)(lVar6 + 0x28) = fVar9;
              }
              else {
                System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                          (-param_1,0,fVar9,lVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
              lVar6 = *(long *)(lVar4 + 0x10);
              lVar7 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar6 != 0) {
                uVar1 = *(uint *)(lVar4 + 0x18);
                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                  lVar6 = lVar6 + (long)(int)uVar1 * 0xc;
                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                  *(float *)(lVar6 + 0x20) = param_1;
                  *(undefined4 *)(lVar6 + 0x24) = 0;
                  *(float *)(lVar6 + 0x28) = fVar9;
                }
                else {
                  System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                            (param_1,0,fVar9,lVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                }
                lVar6 = *(long *)(lVar4 + 0x10);
                lVar7 = *(long *)puVar2;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                puVar2 = PTR_DAT_04caa148;
                if (lVar6 != 0) {
                  uVar1 = *(uint *)(lVar4 + 0x18);
                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                    lVar6 = lVar6 + (long)(int)uVar1 * 0xc;
                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar6 + 0x20) = 0;
                    *(float *)(lVar6 + 0x28) = fVar11 + 1.0;
                  }
                  else {
                    System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                              (0,0,lVar4,
                               *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                  UnityEngine_Mesh___ctor_4389e48(lVar6,0);
                  puVar3 = PTR_DAT_04cbdfd0;
                  puVar2 = PTR_DAT_04caec70;
                  if (lVar6 != 0) {
                    UnityEngine_Object__set_name_43c72ec(lVar6,*(undefined8 *)PTR_DAT_04cb9428,0);
                    UnityEngine_Mesh__SetVertices_439178c(lVar6,lVar4,0);
                    uVar5 = FUN_02133068(*(undefined8 *)puVar2,9);
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
                              (uVar5,*(undefined8 *)puVar3,0);
                    UnityEngine_Mesh__SetTriangles_4394a0c(lVar6,uVar5,0,0);
                    UnityEngine_Mesh__RecalculateNormals_4395d8c(lVar6,0);
                    UnityEngine_Mesh__RecalculateBounds_4395ccc(lVar6,0);
                    return lVar6;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

