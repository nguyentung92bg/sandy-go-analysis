/* IL2CPP: Dino.BusSand.View.VehicleView$$BuildShadow
void Dino_BusSand_View_VehicleView__BuildShadow (Dino_BusSand_View_VehicleView_o* __this, UnityEngine_Bounds_o b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$BuildShadow
   void Dino_BusSand_View_VehicleView__BuildShadow (Dino_BusSand_View_VehicleView_o* __this,
   UnityEngine_Bounds_o b, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__BuildShadow_23f647c(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar6 = PTR_DAT_04cbc460;
  if ((bRam0000000004f9cae2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cb6dc0);
    FUN_02132f7c(PTR_DAT_04cb6dc8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cbc170);
    FUN_02132f7c(PTR_DAT_04caed88);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    FUN_02132f7c(PTR_DAT_04cbc2c8);
    FUN_02132f7c(PTR_DAT_04cbc460);
    FUN_02132f7c(PTR_DAT_04cbdf10);
    FUN_02132f7c(PTR_DAT_04cb6950);
    FUN_02132f7c(PTR_DAT_04cbde58);
    FUN_02132f7c(PTR_DAT_04cb6958);
    bRam0000000004f9cae2 = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar7 = *(long *)puVar6;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar6;
  }
  lVar10 = *(long *)puVar3;
  uVar12 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar10);
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
  if ((uVar8 & 1) != 0) {
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa148);
    UnityEngine_Mesh___ctor_4389e48(lVar7,0);
    if (lVar7 == 0) goto LAB_024f6b2c;
    UnityEngine_Object__set_name_43c72ec(lVar7,*(undefined8 *)PTR_DAT_04cbdf10,0);
    lVar10 = *(long *)puVar6;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar6;
    }
    plVar9 = (long *)(*(long *)(lVar10 + 0xb8) + 0x18);
    *plVar9 = lVar7;
    thunk_FUN_02134474(plVar9,lVar7);
    lVar10 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
    lVar7 = FUN_02133068(*(undefined8 *)PTR_DAT_04cabdb8,4);
    uVar12 = _UNK_00e69cf0;
    if (lVar7 == 0) goto LAB_024f6b2c;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 == 0) goto LAB_024f6b30;
    *(undefined4 *)(lVar7 + 0x28) = 0xbf000000;
    *(undefined8 *)(lVar7 + 0x20) = uVar12;
    if (uVar1 == 1) goto LAB_024f6b30;
    *(undefined4 *)(lVar7 + 0x34) = 0xbf000000;
    uVar2 = _UNK_00e6a740;
    *(undefined8 *)(lVar7 + 0x2c) = _UNK_00e6a740;
    if (uVar1 < 3) goto LAB_024f6b30;
    *(undefined8 *)(lVar7 + 0x38) = uVar12;
    *(undefined4 *)(lVar7 + 0x40) = 0x3f000000;
    if (uVar1 == 3) goto LAB_024f6b30;
    *(undefined8 *)(lVar7 + 0x44) = uVar2;
    *(undefined4 *)(lVar7 + 0x4c) = 0x3f000000;
    if (lVar10 == 0) goto LAB_024f6b2c;
    UnityEngine_Mesh__set_vertices_4390e48(lVar10,lVar7,0);
    lVar10 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
    lVar7 = FUN_02133068(*(undefined8 *)PTR_DAT_04caed88,4);
    if (lVar7 == 0) goto LAB_024f6b2c;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if ((uVar1 == 0) || (*(undefined8 *)(lVar7 + 0x20) = 0, uVar1 == 1)) goto LAB_024f6b30;
    *(undefined8 *)(lVar7 + 0x28) = _UNK_00e698b8;
    if (uVar1 < 3) goto LAB_024f6b30;
    *(undefined8 *)(lVar7 + 0x30) = _UNK_00e698c8;
    if (uVar1 == 3) goto LAB_024f6b30;
    uVar12 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(lVar7 + 0x38) = uVar12;
    if (lVar10 == 0) goto LAB_024f6b2c;
    UnityEngine_Mesh__set_uv_439104c(lVar10,lVar7,0);
    lVar7 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
    uVar12 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,6);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
              (uVar12,*(undefined8 *)PTR_DAT_04cbc170,0);
    if (lVar7 == 0) goto LAB_024f6b2c;
    UnityEngine_Mesh__set_triangles_4393ee8(lVar7,uVar12,0);
    lVar7 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
    if (lVar7 == 0) goto LAB_024f6b2c;
    UnityEngine_Mesh__RecalculateNormals_4395d8c(lVar7,0);
  }
  puVar4 = PTR_DAT_04cb6de0;
  plVar9 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,2);
  uVar12 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar7 = System_Type__GetTypeFromHandle_483f0b4(uVar12,0);
  if (plVar9 == (long *)0x0) {
LAB_024f6b2c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((lVar7 != 0) &&
     (lVar10 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
LAB_024f6b34:
    uVar12 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar12,0);
  }
  puVar4 = PTR_DAT_04cb6de8;
  if ((int)plVar9[3] != 0) {
    plVar9[4] = lVar7;
    thunk_FUN_02134474(plVar9 + 4,lVar7);
    lVar7 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar4,0);
    if ((lVar7 != 0) &&
       (lVar10 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
    goto LAB_024f6b34;
    puVar5 = PTR_DAT_04cb6950;
    puVar4 = PTR_DAT_04caa070;
    if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
      plVar9[5] = lVar7;
      thunk_FUN_02134474(plVar9 + 5,lVar7);
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
      UnityEngine_GameObject___ctor_43c2310(lVar7,*(undefined8 *)puVar5,plVar9,0);
      if (lVar7 != 0) {
        lVar10 = UnityEngine_GameObject__get_transform_43c1048(lVar7,0);
        plVar9 = (long *)(param_1 + 0x78);
        *plVar9 = lVar10;
        thunk_FUN_02134474(plVar9,lVar10);
        puVar4 = PTR_DAT_04cb6dc0;
        if (*plVar9 != 0) {
          UnityEngine_Transform__SetParent_43d1e34(*plVar9,*(undefined8 *)(param_1 + 0x38),0,0);
          lVar10 = UnityEngine_GameObject__GetComponent_object__275a5dc(lVar7,*(undefined8 *)puVar4)
          ;
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar6);
          }
          puVar5 = PTR_DAT_04cb6dc8;
          puVar4 = PTR_DAT_04cab208;
          if (lVar10 != 0) {
            UnityEngine_MeshFilter__set_sharedMesh_4389470
                      (lVar10,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18),0);
            lVar7 = UnityEngine_GameObject__GetComponent_object__275a5dc
                              (lVar7,*(undefined8 *)puVar5);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            lVar10 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
            puVar4 = PTR_DAT_04cb6dd0;
            puVar6 = PTR_DAT_04cb6958;
            if (lVar10 != 0) {
              uVar12 = Dino_BusSand_GameAssets__GetTexture_237ceb8
                                 (lVar10,*(undefined8 *)PTR_DAT_04cbde58,0);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar4);
              }
              uVar12 = Dino_BusSand_View_MaterialLibrary__Unlit_23b1214
                                 (_UNK_00e20844,_UNK_00e20174,_UNK_00e20af8,_UNK_00e206e4,
                                  *(undefined8 *)puVar6,uVar12,0,0xfffffff6,0);
              if (lVar7 != 0) {
                UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar7,uVar12,0);
                UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar7,0,0);
                if (*plVar9 != 0) {
                  UnityEngine_Transform__set_localPosition_43cfda8(0,_UNK_00e20448,0,*plVar9,0);
                  if (*plVar9 != 0) {
                    UnityEngine_Transform__set_localScale_43d1be0
                              ((*(float *)(param_2 + 0xc) + *(float *)(param_2 + 0xc)) * 1.25,
                               0x3f800000,
                               (*(float *)(param_2 + 0x14) + *(float *)(param_2 + 0x14)) *
                               _UNK_00e2045c,*plVar9,0);
                    puVar6 = PTR_DAT_04cbc2c8;
                    if (*(char *)(param_1 + 0xb8) != '\0') {
                      if (*(int *)(*(long *)PTR_DAT_04cbc2c8 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      if (cRam0000000004f9cb0a == '\0') {
                        FUN_02132f7c(PTR_DAT_04cbc2c8);
                        cRam0000000004f9cb0a = '\x01';
                      }
                      lVar10 = *(long *)puVar6;
                      if (*(int *)(lVar10 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar10 = *(long *)puVar6;
                      }
                      lVar11 = *(long *)puVar3;
                      uVar12 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
                      if (*(int *)(lVar11 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(lVar11);
                      }
                      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
                      if ((uVar8 & 1) != 0) {
                        if ((bRam0000000004fa68c4 & 1) == 0) {
                          FUN_02132f7c(PTR_DAT_04cf67a0,0,0);
                          bRam0000000004fa68c4 = 1;
                        }
                        if (lVar7 != 0) {
                          lVar10 = *(long *)(lVar7 + 0x10);
                          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                      (lVar7,0);
                          }
                          if (pcRam0000000004fa6930 == (code *)0x0) {
                            pcRam0000000004fa6930 = (code *)FUN_02132f40(&UNK_00e53f3c);
                          }
                    /* WARNING: Could not recover jumptable at 0x04473b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*pcRam0000000004fa6930)(lVar10,0);
                          return;
                        }
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_024f6b2c;
    }
  }
LAB_024f6b30:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

