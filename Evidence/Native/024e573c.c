/* IL2CPP: Dino.BusSand.View.SandBoardView$$BuildMesh
void Dino_BusSand_View_SandBoardView__BuildMesh (Dino_BusSand_View_SandBoardView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.SandBoardView$$BuildMesh
   void Dino_BusSand_View_SandBoardView__BuildMesh (Dino_BusSand_View_SandBoardView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_SandBoardView__BuildMesh_23e573c(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  puVar4 = PTR_DAT_04cbdaa0;
  puVar3 = PTR_DAT_04cbda98;
  if ((bRam0000000004f9ca80 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc170);
    FUN_02132f7c(PTR_DAT_04cbda98);
    FUN_02132f7c(PTR_DAT_04cbdaa0);
    FUN_02132f7c(PTR_DAT_04caed88);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    FUN_02132f7c(PTR_DAT_04cb6990);
    FUN_02132f7c(PTR_DAT_04cbdaa8);
    bRam0000000004f9ca80 = 1;
  }
  uVar5 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
  lVar6 = Dino_BusSand_Util__GetOrAdd_object__2958948(uVar5,*(undefined8 *)puVar3);
  uVar5 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
  lVar7 = Dino_BusSand_Util__GetOrAdd_object__2958948(uVar5,*(undefined8 *)puVar4);
  plVar10 = (long *)(param_1 + 0x40);
  *plVar10 = lVar7;
  thunk_FUN_02134474(plVar10,lVar7);
  if (*plVar10 != 0) {
    UnityEngine_Renderer__set_shadowCastingMode_4373c54(*plVar10,0,0);
    puVar3 = PTR_DAT_04caa148;
    if (*plVar10 != 0) {
      UnityEngine_Renderer__set_receiveShadows_4373dcc(*plVar10,1,0);
      uVar12 = *(undefined4 *)(param_1 + 0x6c);
      uVar11 = *(undefined4 *)(param_1 + 0x70);
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      UnityEngine_Mesh___ctor_4389e48(lVar7,0);
      puVar3 = PTR_DAT_04cabdb8;
      if (lVar7 != 0) {
        UnityEngine_Object__set_name_43c72ec(lVar7,*(undefined8 *)PTR_DAT_04cbdaa8,0);
        lVar8 = FUN_02133068(*(undefined8 *)puVar3,4);
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 != 0) {
            *(undefined8 *)(lVar8 + 0x20) = 0;
            *(undefined4 *)(lVar8 + 0x28) = 0;
            if (uVar1 != 1) {
              *(undefined4 *)(lVar8 + 0x2c) = uVar12;
              *(undefined8 *)(lVar8 + 0x30) = 0;
              if (2 < uVar1) {
                *(undefined8 *)(lVar8 + 0x38) = 0;
                *(undefined4 *)(lVar8 + 0x40) = uVar11;
                if (uVar1 != 3) {
                  *(undefined4 *)(lVar8 + 0x44) = uVar12;
                  puVar4 = PTR_DAT_04caed88;
                  *(undefined4 *)(lVar8 + 0x48) = 0;
                  *(undefined4 *)(lVar8 + 0x4c) = uVar11;
                  UnityEngine_Mesh__set_vertices_4390e48(lVar7,lVar8,0);
                  lVar8 = FUN_02133068(*(undefined8 *)puVar4,4);
                  if (lVar8 == 0) goto LAB_024e5b84;
                  uVar1 = *(uint *)(lVar8 + 0x18);
                  if ((uVar1 != 0) && (*(undefined8 *)(lVar8 + 0x20) = 0, uVar1 != 1)) {
                    *(undefined8 *)(lVar8 + 0x28) = _UNK_00e698b8;
                    if (2 < uVar1) {
                      *(undefined8 *)(lVar8 + 0x30) = _UNK_00e698c8;
                      if (uVar1 != 3) {
                        uVar5 = NEON_fmov(0x3f800000,4);
                        *(undefined8 *)(lVar8 + 0x38) = uVar5;
                        UnityEngine_Mesh__set_uv_439104c(lVar7,lVar8,0);
                        lVar8 = FUN_02133068(*(undefined8 *)puVar3,4);
                        if (cRam0000000004f9bcf8 == '\0') {
                          FUN_02132f7c(PTR_DAT_04caa208);
                          cRam0000000004f9bcf8 = '\x01';
                        }
                        puVar3 = PTR_DAT_04caa208;
                        if (lVar8 == 0) goto LAB_024e5b84;
                        uVar1 = *(uint *)(lVar8 + 0x18);
                        if (uVar1 != 0) {
                          uVar11 = *(undefined4 *)
                                    (*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
                          *(undefined8 *)(lVar8 + 0x20) =
                               *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
                          *(undefined4 *)(lVar8 + 0x28) = uVar11;
                          if ((uVar1 & 0xfffffffe) != 0) {
                            uVar11 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
                            *(undefined8 *)(lVar8 + 0x2c) =
                                 *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
                            *(undefined4 *)(lVar8 + 0x34) = uVar11;
                            if (2 < uVar1) {
                              uVar11 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
                              *(undefined8 *)(lVar8 + 0x38) =
                                   *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
                              *(undefined4 *)(lVar8 + 0x40) = uVar11;
                              puVar4 = PTR_DAT_04cb6990;
                              if ((uVar1 & 0xfffffffc) != 0) {
                                uVar11 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
                                *(undefined8 *)(lVar8 + 0x44) =
                                     *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
                                *(undefined4 *)(lVar8 + 0x4c) = uVar11;
                                UnityEngine_Mesh__set_normals_4390ef4(lVar7,lVar8,0);
                                lVar8 = FUN_02133068(*(undefined8 *)puVar4,4);
                                uVar2 = _UNK_00e6b828;
                                uVar5 = _UNK_00e6b820;
                                if (lVar8 == 0) goto LAB_024e5b84;
                                uVar1 = *(uint *)(lVar8 + 0x18);
                                if (uVar1 != 0) {
                                  *(undefined8 *)(lVar8 + 0x28) = _UNK_00e6b828;
                                  *(undefined8 *)(lVar8 + 0x20) = uVar5;
                                  if (uVar1 != 1) {
                                    *(undefined8 *)(lVar8 + 0x38) = uVar2;
                                    *(undefined8 *)(lVar8 + 0x30) = uVar5;
                                    if (2 < uVar1) {
                                      *(undefined8 *)(lVar8 + 0x48) = uVar2;
                                      *(undefined8 *)(lVar8 + 0x40) = uVar5;
                                      puVar4 = PTR_DAT_04cbc170;
                                      puVar3 = PTR_DAT_04caec70;
                                      if (uVar1 != 3) {
                                        *(undefined8 *)(lVar8 + 0x58) = uVar2;
                                        *(undefined8 *)(lVar8 + 0x50) = uVar5;
                                        UnityEngine_Mesh__set_tangents_4390fa0(lVar7,lVar8,0);
                                        uVar5 = FUN_02133068(*(undefined8 *)puVar3,6);
                                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
                                                  (uVar5,*(undefined8 *)puVar4,0);
                                        UnityEngine_Mesh__set_triangles_4393ee8(lVar7,uVar5,0);
                                        UnityEngine_Mesh__RecalculateBounds_4395ccc(lVar7,0);
                                        puVar3 = PTR_DAT_04ca9ae8;
                                        if (lVar6 != 0) {
                                          uVar5 = UnityEngine_MeshFilter__get_sharedMesh_43893a0
                                                            (lVar6,0);
                                          lVar8 = *(long *)puVar3;
                                          if (*(int *)(lVar8 + 0xe4) == 0) {
                                            thunk_FUN_0218fdac(lVar8);
                                          }
                                          uVar9 = UnityEngine_Object__op_Inequality_43c8dec
                                                            (uVar5,0,0);
                                          if ((uVar9 & 1) != 0) {
                                            uVar5 = UnityEngine_MeshFilter__get_sharedMesh_43893a0
                                                              (lVar6,0);
                                            lVar8 = *(long *)puVar3;
                                            if (*(int *)(lVar8 + 0xe4) == 0) {
                                              thunk_FUN_0218fdac(lVar8);
                                            }
                                            UnityEngine_Object__Destroy_43c8114(uVar5,0);
                                          }
                                          *(long *)(param_1 + 0x48) = lVar7;
                                          thunk_FUN_02134474((long *)(param_1 + 0x48),lVar7);
                                          if ((bRam0000000004fa73d1 & 1) == 0) {
                                            FUN_02132f7c(PTR_DAT_04cf6a28,lVar7,0);
                                            FUN_02132f7c(PTR_DAT_04cf6608);
                                            bRam0000000004fa73d1 = 1;
                                          }
                                          if (lVar6 != 0) {
                                            lVar8 = *(long *)(lVar6 + 0x10);
                                            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                                              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                                        (lVar6,0);
                                            }
                                            if (*(long *)(*(long *)PTR_DAT_04cf6608 + 0x38) == 0) {
                                              FUN_0216b4cc();
                                            }
                                            uVar5 = 0;
                                            if (lVar7 != 0) {
                                              uVar5 = *(undefined8 *)(lVar7 + 0x10);
                                            }
                                            if (pcRam0000000004fa73e0 == (code *)0x0) {
                                              pcRam0000000004fa73e0 =
                                                   (code *)FUN_02132f40(&UNK_00e28962);
                                            }
                    /* WARNING: Could not recover jumptable at 0x0448951c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                            (*pcRam0000000004fa73e0)(lVar8,uVar5);
                                            return;
                                          }
                    /* WARNING: Subroutine does not return */
                                          FUN_02133224();
                                        }
                                        goto LAB_024e5b84;
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
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
      }
    }
  }
LAB_024e5b84:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

