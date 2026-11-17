/* IL2CPP: Dino.BusSand.View.MechanicLayer$$BadgeQuad
UnityEngine_Mesh_o* Dino_BusSand_View_MechanicLayer__BadgeQuad (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$BadgeQuad
   UnityEngine_Mesh_o* Dino_BusSand_View_MechanicLayer__BadgeQuad (const MethodInfo* method); */

undefined8 Dino_BusSand_View_MechanicLayer__BadgeQuad_23c7494(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  puVar3 = PTR_DAT_04cac5d0;
  if ((bRam0000000004f9c9d5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cac5d0);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd298);
    FUN_02132f7c(PTR_DAT_04caed88);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    FUN_02132f7c(PTR_DAT_04cbd2a0);
    bRam0000000004f9c9d5 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
LAB_024c7744:
    return *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa148);
  UnityEngine_Mesh___ctor_4389e48(lVar4,0);
  if (lVar4 != 0) {
    UnityEngine_Object__set_name_43c72ec(lVar4,*(undefined8 *)PTR_DAT_04cbd2a0,0);
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar3;
    }
    plVar7 = (long *)(*(long *)(lVar6 + 0xb8) + 0x20);
    *plVar7 = lVar4;
    thunk_FUN_02134474(plVar7,lVar4);
    lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
    lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04cabdb8,4);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 != 0) {
        *(undefined4 *)(lVar4 + 0x28) = 0;
        *(undefined8 *)(lVar4 + 0x20) = 0xbf000000bf000000;
        if (uVar1 != 1) {
          *(undefined4 *)(lVar4 + 0x34) = 0;
          *(undefined8 *)(lVar4 + 0x2c) = _UNK_00e6a458;
          if (2 < uVar1) {
            *(undefined4 *)(lVar4 + 0x40) = 0;
            *(undefined8 *)(lVar4 + 0x38) = 0x3f0000003f000000;
            if (uVar1 != 3) {
              *(undefined4 *)(lVar4 + 0x4c) = 0;
              *(undefined8 *)(lVar4 + 0x44) = _UNK_00e69b68;
                    /* try { // try from 024c7654 to 025c7813 has its CatchHandler @ 024c7654
                       catch() { ... } // from try @ 024c7654 with catch @ 024c7654
                       catch() { ... } // from try @ 024c7948 with catch @ 024c7654
                       catch() { ... } // from try @ 024c7a18 with catch @ 024c7654
                       catch() { ... } // from try @ 024c7a8c with catch @ 024c7654 */
              if (lVar6 != 0) {
                UnityEngine_Mesh__set_vertices_4390e48(lVar6,lVar4,0);
                lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
                lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04caed88,4);
                if (lVar4 != 0) {
                  uVar1 = *(uint *)(lVar4 + 0x18);
                  if ((uVar1 != 0) && (*(undefined8 *)(lVar4 + 0x20) = 0, uVar1 != 1)) {
                    *(undefined8 *)(lVar4 + 0x28) = _UNK_00e698c8;
                    if (2 < uVar1) {
                      uVar8 = NEON_fmov(0x3f800000,4);
                      *(undefined8 *)(lVar4 + 0x30) = uVar8;
                      if (uVar1 != 3) {
                        *(undefined8 *)(lVar4 + 0x38) = _UNK_00e698b8;
                        if (lVar6 != 0) {
                          UnityEngine_Mesh__set_uv_439104c(lVar6,lVar4,0);
                          lVar4 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
                          uVar8 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,6);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
                                    (uVar8,*(undefined8 *)PTR_DAT_04cbd298,0);
                          if (lVar4 != 0) {
                            UnityEngine_Mesh__set_triangles_4393ee8(lVar4,uVar8,0);
                            lVar4 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
                            if (lVar4 != 0) {
                              UnityEngine_Mesh__RecalculateNormals_4395d8c(lVar4,0);
                              goto LAB_024c7744;
                            }
                          }
                        }
                        goto LAB_024c7760;
                      }
                    }
                  }
                  goto LAB_024c775c;
                }
              }
              goto LAB_024c7760;
            }
          }
        }
      }
LAB_024c775c:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_024c7760:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

