/* IL2CPP: Dino.BusSand.View.WorldView$$Quad
UnityEngine_Mesh_o* Dino_BusSand_View_WorldView__Quad (UnityEngine_Vector3_o min, UnityEngine_Vector3_o max, float uvx, float uvy, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.WorldView$$Quad
   UnityEngine_Mesh_o* Dino_BusSand_View_WorldView__Quad (UnityEngine_Vector3_o min,
   UnityEngine_Vector3_o max, float uvx, float uvy, const MethodInfo* method); */

long Dino_BusSand_View_WorldView__Quad_2405a40
               (undefined4 param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined1 param_5 [16],undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  
  puVar3 = PTR_DAT_04cabdb8;
  puVar2 = PTR_DAT_04caa148;
  if ((bRam0000000004f9cb21 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc000);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04cbc170);
    FUN_02132f7c(PTR_DAT_04caed88);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    bRam0000000004f9cb21 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  UnityEngine_Mesh___ctor_4389e48(lVar4,0);
  lVar5 = FUN_02133068(*(undefined8 *)puVar3,4);
  if (lVar5 == 0) goto LAB_02505c90;
  uVar1 = *(uint *)(lVar5 + 0x18);
  if (uVar1 != 0) {
    *(undefined4 *)(lVar5 + 0x20) = param_1;
    *(undefined4 *)(lVar5 + 0x24) = 0;
    *(undefined4 *)(lVar5 + 0x28) = param_3;
    if (uVar1 != 1) {
      *(undefined4 *)(lVar5 + 0x2c) = param_4;
      *(undefined4 *)(lVar5 + 0x30) = 0;
      *(undefined4 *)(lVar5 + 0x34) = param_3;
      if (2 < uVar1) {
        *(undefined4 *)(lVar5 + 0x38) = param_1;
        *(undefined4 *)(lVar5 + 0x3c) = 0;
        *(undefined4 *)(lVar5 + 0x40) = param_6;
        if (uVar1 != 3) {
          *(undefined4 *)(lVar5 + 0x44) = param_4;
          *(undefined4 *)(lVar5 + 0x48) = 0;
          *(undefined4 *)(lVar5 + 0x4c) = param_6;
          puVar2 = PTR_DAT_04caed88;
          if (lVar4 != 0) {
            UnityEngine_Mesh__set_vertices_4390e48(lVar4,lVar5,0);
            lVar5 = FUN_02133068(*(undefined8 *)puVar2,4);
            if (lVar5 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if ((uVar1 != 0) && (*(undefined8 *)(lVar5 + 0x20) = 0, uVar1 != 1)) {
                *(undefined4 *)(lVar5 + 0x28) = param_7;
                *(undefined4 *)(lVar5 + 0x2c) = 0;
                if (2 < uVar1) {
                  *(undefined4 *)(lVar5 + 0x30) = 0;
                  *(undefined4 *)(lVar5 + 0x34) = param_8;
                  puVar2 = PTR_DAT_04cbc000;
                  if (uVar1 != 3) {
                    *(undefined4 *)(lVar5 + 0x38) = param_7;
                    *(undefined4 *)(lVar5 + 0x3c) = param_8;
                    UnityEngine_Mesh__set_uv_439104c(lVar4,lVar5,0);
                    lVar5 = FUN_02133068(*(undefined8 *)puVar2,4);
                    if (lVar5 == 0) goto LAB_02505c90;
                    uVar1 = *(uint *)(lVar5 + 0x18);
                    if (uVar1 != 0) {
                      auVar7 = NEON_fmov(0x3f800000,4);
                      uVar8 = auVar7._8_8_;
                      *(undefined8 *)(lVar5 + 0x28) = uVar8;
                      uVar6 = auVar7._0_8_;
                      *(undefined8 *)(lVar5 + 0x20) = uVar6;
                      if (uVar1 != 1) {
                        *(undefined8 *)(lVar5 + 0x38) = uVar8;
                        *(undefined8 *)(lVar5 + 0x30) = uVar6;
                        if (2 < uVar1) {
                          *(undefined8 *)(lVar5 + 0x48) = uVar8;
                          *(undefined8 *)(lVar5 + 0x40) = uVar6;
                          puVar3 = PTR_DAT_04cbc170;
                          puVar2 = PTR_DAT_04caec70;
                          if (uVar1 != 3) {
                            *(undefined8 *)(lVar5 + 0x58) = uVar8;
                            *(undefined8 *)(lVar5 + 0x50) = uVar6;
                            UnityEngine_Mesh__set_colors_43915ac(lVar4,lVar5,0);
                            uVar6 = FUN_02133068(*(undefined8 *)puVar2,6);
                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
                                      (uVar6,*(undefined8 *)puVar3,0);
                            UnityEngine_Mesh__set_triangles_4393ee8(lVar4,uVar6,0);
                            UnityEngine_Mesh__RecalculateNormals_4395d8c(lVar4,0);
                            UnityEngine_Mesh__RecalculateBounds_4395ccc(lVar4,0);
                            return lVar4;
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_02505c8c;
            }
          }
LAB_02505c90:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
  }
LAB_02505c8c:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

