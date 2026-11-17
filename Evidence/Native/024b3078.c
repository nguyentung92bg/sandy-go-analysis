/* IL2CPP: Dino.BusSand.View.GarageView$$Quad
UnityEngine_Mesh_o* Dino_BusSand_View_GarageView__Quad (float w, float h, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GarageView$$Quad
   UnityEngine_Mesh_o* Dino_BusSand_View_GarageView__Quad (float w, float h, const MethodInfo*
   method); */

long Dino_BusSand_View_GarageView__Quad_23b3078(float param_1,float param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  puVar2 = PTR_DAT_04caa148;
  if ((bRam0000000004f9c976 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04cbc908);
    FUN_02132f7c(PTR_DAT_04caed88);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    FUN_02132f7c(PTR_DAT_04cbc8b0);
    bRam0000000004f9c976 = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  UnityEngine_Mesh___ctor_4389e48(lVar5,0);
  puVar2 = PTR_DAT_04cabdb8;
  if (lVar5 != 0) {
    UnityEngine_Object__set_name_43c72ec(lVar5,*(undefined8 *)PTR_DAT_04cbc8b0,0);
    lVar6 = FUN_02133068(*(undefined8 *)puVar2,4);
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 != 0) {
        *(undefined4 *)(lVar6 + 0x28) = 0;
        *(float *)(lVar6 + 0x20) = param_1 * -0.5;
        *(float *)(lVar6 + 0x24) = param_2 * -0.5;
        if (uVar1 != 1) {
          *(undefined4 *)(lVar6 + 0x34) = 0;
          *(float *)(lVar6 + 0x2c) = param_1 * 0.5;
          *(float *)(lVar6 + 0x30) = param_2 * -0.5;
          if (2 < uVar1) {
            *(undefined4 *)(lVar6 + 0x40) = 0;
            *(float *)(lVar6 + 0x38) = param_1 * -0.5;
            *(float *)(lVar6 + 0x3c) = param_2 * 0.5;
            if (uVar1 != 3) {
              *(float *)(lVar6 + 0x44) = param_1 * 0.5;
              puVar3 = PTR_DAT_04caed88;
              *(float *)(lVar6 + 0x48) = param_2 * 0.5;
              *(undefined4 *)(lVar6 + 0x4c) = 0;
              UnityEngine_Mesh__set_vertices_4390e48(lVar5,lVar6,0);
              lVar6 = FUN_02133068(*(undefined8 *)puVar3,4);
              if (lVar6 == 0) goto LAB_024b3348;
              uVar1 = *(uint *)(lVar6 + 0x18);
              if ((uVar1 != 0) && (*(undefined8 *)(lVar6 + 0x20) = 0, uVar1 != 1)) {
                *(undefined8 *)(lVar6 + 0x28) = _UNK_00e69ff8;
                if (2 < uVar1) {
                  *(undefined8 *)(lVar6 + 0x30) = _UNK_00e698c8;
                  if (uVar1 != 3) {
                    *(undefined8 *)(lVar6 + 0x38) = _UNK_00e696b0;
                    UnityEngine_Mesh__set_uv_439104c(lVar5,lVar6,0);
                    lVar6 = FUN_02133068(*(undefined8 *)puVar2,4);
                    if (cRam0000000004f9c41d == '\0') {
                      FUN_02132f7c(PTR_DAT_04caa208);
                      cRam0000000004f9c41d = '\x01';
                    }
                    puVar2 = PTR_DAT_04caa208;
                    if (lVar6 == 0) goto LAB_024b3348;
                    uVar1 = *(uint *)(lVar6 + 0x18);
                    if (uVar1 != 0) {
                      uVar8 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x50);
                      *(undefined8 *)(lVar6 + 0x20) =
                           *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x48);
                      *(undefined4 *)(lVar6 + 0x28) = uVar8;
                      if ((uVar1 & 0xfffffffe) != 0) {
                        uVar8 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
                        *(undefined8 *)(lVar6 + 0x2c) =
                             *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
                        *(undefined4 *)(lVar6 + 0x34) = uVar8;
                        if (2 < uVar1) {
                          uVar8 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
                          *(undefined8 *)(lVar6 + 0x38) =
                               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
                          *(undefined4 *)(lVar6 + 0x40) = uVar8;
                          puVar4 = PTR_DAT_04cbc908;
                          puVar3 = PTR_DAT_04caec70;
                          if ((uVar1 & 0xfffffffc) != 0) {
                            uVar8 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
                            *(undefined8 *)(lVar6 + 0x44) =
                                 *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
                            *(undefined4 *)(lVar6 + 0x4c) = uVar8;
                            UnityEngine_Mesh__set_normals_4390ef4(lVar5,lVar6,0);
                            uVar7 = FUN_02133068(*(undefined8 *)puVar3,6);
                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
                                      (uVar7,*(undefined8 *)puVar4,0);
                            UnityEngine_Mesh__set_triangles_4393ee8(lVar5,uVar7,0);
                            UnityEngine_Mesh__RecalculateBounds_4395ccc(lVar5,0);
                            return lVar5;
                          }
                        }
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
      FUN_0213322c();
    }
  }
LAB_024b3348:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

