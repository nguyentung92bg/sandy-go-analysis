/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Init
void Dino_BusSand_App_UI_HomeStage__Init (Dino_BusSand_App_UI_HomeStage_o* __this, UnityEngine_Shader_o* shader, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Init
   void Dino_BusSand_App_UI_HomeStage__Init (Dino_BusSand_App_UI_HomeStage_o* __this,
   UnityEngine_Shader_o* shader, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeStage__Init_22ee628(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  float fStack_54;
  
  puVar2 = PTR_DAT_04cb74a8;
  if ((bRam0000000004f9c45b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb72d0);
    FUN_02132f7c(PTR_DAT_04cb72d8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb7200);
    FUN_02132f7c(PTR_DAT_04cb76a0);
    FUN_02132f7c(PTR_DAT_04cb74a8);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04cb27f8);
    FUN_02132f7c(PTR_DAT_04cb4ef0);
    FUN_02132f7c(PTR_DAT_04cb76a8);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    FUN_02132f7c(PTR_DAT_04cb76b0);
    FUN_02132f7c(PTR_DAT_04cb76b8);
    FUN_02132f7c(PTR_DAT_04cb76c0);
    FUN_02132f7c(PTR_DAT_04cb76c8);
    FUN_02132f7c(PTR_DAT_04cb76d0);
    FUN_02132f7c(PTR_DAT_04cb76d8);
    FUN_02132f7c(PTR_DAT_04cb76e0);
    FUN_02132f7c(PTR_DAT_04cb76e8);
    FUN_02132f7c(PTR_DAT_04cb76f0);
    FUN_02132f7c(PTR_DAT_04cb76f8);
    bRam0000000004f9c45b = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  plVar6 = (long *)(*(long *)(lVar5 + 0xb8) + 0x18);
  *plVar6 = param_1;
  thunk_FUN_02134474(plVar6,param_1);
  if (*(long *)(param_1 + 0x20) != 0) {
    UnityEngine_Camera__set_cullingMask_435768c(*(long *)(param_1 + 0x20),0x20000000,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_Camera__set_clearFlags_4358bd4(*(long *)(param_1 + 0x20),2,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        UnityEngine_Camera__set_backgroundColor_4358a4c
                  (_UNK_00e200f8,_UNK_00e1fea8,_UNK_00e20204,0x3f800000,*(long *)(param_1 + 0x20),0)
        ;
        if (*(long *)(param_1 + 0x20) != 0) {
          UnityEngine_Camera__set_nearClipPlane_4355c40(0x3f000000,*(long *)(param_1 + 0x20),0);
          if (*(long *)(param_1 + 0x20) != 0) {
            UnityEngine_Camera__set_farClipPlane_4355dc8(0x43c80000,*(long *)(param_1 + 0x20),0);
            uVar9 = *(undefined8 *)(param_1 + 0x20);
            lVar5 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
            puVar4 = PTR_DAT_04cb27f8;
            puVar3 = PTR_DAT_04cab588;
            if (lVar5 != 0) {
              uVar15 = *(undefined4 *)(lVar5 + 0x110);
              if (*(int *)(*(long *)PTR_DAT_04cb27f8 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb27f8);
              }
              Dino_BusSand_RenderQuality__SetupPackCamera_238af80(uVar9,uVar15,0);
              lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
              UnityEngine_Material___ctor_437b5a8(lVar5,param_2,0);
              if (lVar5 != 0) {
                UnityEngine_Object__set_name_43c72ec(lVar5,*(undefined8 *)PTR_DAT_04cb76b0,0);
                plVar6 = (long *)(param_1 + 0x40);
                *plVar6 = lVar5;
                thunk_FUN_02134474(plVar6,lVar5);
                if (cRam0000000004f9c49a == '\0') {
                  FUN_02132f7c(PTR_DAT_04cb27f8);
                  cRam0000000004f9c49a = '\x01';
                }
                lVar5 = *(long *)puVar4;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar5 = *(long *)puVar4;
                }
                if (**(int **)(lVar5 + 0xb8) == 0) {
                  if (*plVar6 == 0) goto LAB_023eeee8;
                  UnityEngine_Material__EnableKeyword_437cba0
                            (*plVar6,*(undefined8 *)PTR_DAT_04cb76e8,0);
                }
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar9 = Dino_BusSand_App_UI_HomeStage__Noise4_22eeef0();
                puVar10 = (undefined8 *)(param_1 + 0x58);
                *puVar10 = uVar9;
                thunk_FUN_02134474(puVar10,uVar9);
                puVar2 = PTR_DAT_04cb4ef0;
                if (*(long *)(param_1 + 0x40) != 0) {
                  UnityEngine_Material__SetTexture_43831cc
                            (*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_04cb76e0,*puVar10,0);
                  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                  UnityEngine_Texture2D___ctor_439df00(lVar5,0x400,1,4,0,1,0);
                  if (lVar5 != 0) {
                    UnityEngine_Object__set_name_43c72ec(lVar5,*(undefined8 *)PTR_DAT_04cb76d0,0);
                    UnityEngine_Texture__set_wrapMode_4398ac8(lVar5,0,0);
                    UnityEngine_Texture__set_filterMode_4398f60(lVar5,1,0);
                    plVar11 = (long *)(param_1 + 0x50);
                    *plVar11 = lVar5;
                    thunk_FUN_02134474(plVar11,lVar5);
                    if (*plVar11 != 0) {
                      UnityEngine_Texture2D__SetPixels32_439edd8
                                (*plVar11,*(undefined8 *)(param_1 + 0x68),0);
                      if (*(long *)(param_1 + 0x50) != 0) {
                        UnityEngine_Texture2D__Apply_439ea78(*(long *)(param_1 + 0x50),0,0);
                        puVar3 = PTR_DAT_04cb76f0;
                        puVar2 = PTR_DAT_04caa070;
                        if (*plVar6 != 0) {
                          UnityEngine_Material__SetTexture_43831cc
                                    (*plVar6,*(undefined8 *)PTR_DAT_04cb76c0,*plVar11,0);
                          lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                          UnityEngine_GameObject___ctor_43c20cc(lVar5,*(undefined8 *)puVar3,0);
                          if (lVar5 != 0) {
                            UnityEngine_GameObject__set_layer_43c11cc(lVar5,0x1d,0);
                            lVar7 = UnityEngine_GameObject__get_transform_43c1048(lVar5,0);
                            if ((*(long *)(param_1 + 0x20) != 0) &&
                               (uVar9 = UnityEngine_Component__get_transform_43bcd18
                                                  (*(long *)(param_1 + 0x20),0), lVar7 != 0)) {
                              UnityEngine_Transform__SetParent_43d1e34(lVar7,uVar9,0,0);
                              lVar7 = UnityEngine_GameObject__get_transform_43c1048(lVar5,0);
                              puVar2 = PTR_DAT_04caa148;
                              if (lVar7 != 0) {
                                UnityEngine_Transform__set_localPosition_43cfda8
                                          (0,0,0x40000000,lVar7,0);
                                lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                                UnityEngine_Mesh___ctor_4389e48(lVar7,0);
                                puVar2 = PTR_DAT_04cabdb8;
                                if (lVar7 != 0) {
                                  UnityEngine_Object__set_name_43c72ec
                                            (lVar7,*(undefined8 *)PTR_DAT_04cb76f8,0);
                                  plVar11 = (long *)(param_1 + 0x48);
                                  *plVar11 = lVar7;
                                  thunk_FUN_02134474(plVar11,lVar7);
                                  lVar12 = *plVar11;
                                  lVar7 = FUN_02133068(*(undefined8 *)puVar2,4);
                                  if (lVar7 != 0) {
                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                    if (uVar1 != 0) {
                                      uVar9 = NEON_fmov(0xc0c00000,4);
                                      *(undefined4 *)(lVar7 + 0x28) = 0;
                                      *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                      if (uVar1 != 1) {
                                        *(undefined4 *)(lVar7 + 0x34) = 0;
                                        *(undefined8 *)(lVar7 + 0x2c) = _UNK_00e6a448;
                                        if (2 < uVar1) {
                                          *(undefined4 *)(lVar7 + 0x40) = 0;
                                          *(undefined8 *)(lVar7 + 0x38) = _UNK_00e6a3e0;
                                          if (uVar1 != 3) {
                                            uVar9 = NEON_fmov(0x40c00000,4);
                                            *(undefined4 *)(lVar7 + 0x4c) = 0;
                                            *(undefined8 *)(lVar7 + 0x44) = uVar9;
                                            puVar3 = PTR_DAT_04cb76a8;
                                            puVar2 = PTR_DAT_04caec70;
                                            if (lVar12 != 0) {
                                              UnityEngine_Mesh__set_vertices_4390e48(lVar12,lVar7,0)
                                              ;
                                              lVar7 = *plVar11;
                                              uVar9 = FUN_02133068(*(undefined8 *)puVar2,6);
                                              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
                                                        (uVar9,*(undefined8 *)puVar3,0);
                                              if (lVar7 != 0) {
                                                UnityEngine_Mesh__set_triangles_4393ee8
                                                          (lVar7,uVar9,0);
                                                lVar7 = *plVar11;
                                                if (cRam0000000004f9b65d == '\0') {
                                                  FUN_02132f7c(PTR_DAT_04caa208);
                                                  cRam0000000004f9b65d = '\x01';
                                                }
                                                puVar2 = PTR_DAT_04caa208;
                                                uVar9 = **(undefined8 **)
                                                          (*(long *)PTR_DAT_04caa208 + 0xb8);
                                                uVar15 = *(undefined4 *)
                                                          (*(undefined8 **)
                                                            (*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
                                                if (cRam0000000004f9b65e == '\0') {
                                                  FUN_02132f7c(PTR_DAT_04caa208);
                                                  cRam0000000004f9b65e = '\x01';
                                                }
                                                puVar3 = PTR_DAT_04cb72d0;
                                                if (lVar7 != 0) {
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar2 + 0xb8) + 0xc
                                                            );
                                                  uStack_5c = CONCAT44((float)((ulong)uVar14 >> 0x20
                                                                              ) * 100000.0 * 0.5,
                                                                       (float)uVar14 * 100000.0 *
                                                                       0.5);
                                                  fStack_54 = *(float *)(*(long *)(*(long *)puVar2 +
                                                                                  0xb8) + 0x14) *
                                                              _UNK_00e20878 * 0.5;
                                                  uStack_68 = uVar9;
                                                  uStack_60 = uVar15;
                                                  UnityEngine_Mesh__set_bounds_438fbac
                                                            (lVar7,&uStack_68,0);
                                                  lVar7 = 
                                                  UnityEngine_GameObject__AddComponent_object__275a54c
                                                            (lVar5,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_04cb72d8;
                                                  if (lVar7 != 0) {
                                                    UnityEngine_MeshFilter__set_sharedMesh_4389470
                                                              (lVar7,*plVar11,0);
                                                    lVar7 = 
                                                  UnityEngine_GameObject__AddComponent_object__275a54c
                                                            (lVar5,*(undefined8 *)puVar2);
                                                  puVar3 = PTR_DAT_04cb76a0;
                                                  puVar2 = PTR_DAT_04cb7200;
                                                  if (lVar7 != 0) {
                                                    UnityEngine_Renderer__set_sharedMaterial_43743cc
                                                              (lVar7,*(undefined8 *)(param_1 + 0x40)
                                                               ,0);
                                                                                                        
                                                  UnityEngine_Renderer__set_shadowCastingMode_4373c54
                                                            (lVar7,0,0);
                                                  UnityEngine_Renderer__set_receiveShadows_4373dcc
                                                            (lVar7,0,0);
                                                  UnityEngine_Renderer__set_lightProbeUsage_4373e90
                                                            (lVar7,0,0);
                                                  UnityEngine_Renderer__set_reflectionProbeUsage_4373f54
                                                            (lVar7,0,0);
                                                  uVar9 = 
                                                  UnityEngine_GameObject__get_transform_43c1048
                                                            (lVar5,0);
                                                  *(undefined8 *)(param_1 + 0x38) = uVar9;
                                                  thunk_FUN_02134474();
                                                  uVar9 = 
                                                  UnityEngine_Component__get_transform_43bcd18
                                                            (param_1,0);
                                                  uVar14 = thunk_FUN_0216e89c(*(undefined8 *)puVar3)
                                                  ;
                                                  Dino_BusSand_App_UI_HomePuffs___ctor_22e534c
                                                            (uVar14,uVar9,0x1d);
                                                  puVar10 = (undefined8 *)(param_1 + 0x80);
                                                  *puVar10 = uVar14;
                                                  thunk_FUN_02134474(puVar10,uVar14);
                                                  uVar9 = 
                                                  UnityEngine_Component__get_transform_43bcd18
                                                            (param_1,0);
                                                  uVar14 = *puVar10;
                                                  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                                                  Dino_BusSand_App_UI_HomeBus___ctor_22dfc30
                                                            (lVar5,uVar9,uVar14,0);
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x38) =
                                                         *(undefined8 *)(param_1 + 0x20);
                                                    thunk_FUN_02134474();
                                                    *(long *)(param_1 + 0x78) = lVar5;
                                                    thunk_FUN_02134474((long *)(param_1 + 0x78),
                                                                       lVar5);
                                                    lVar5 = *(long *)(param_1 + 0x40);
                                                    Dino_BusSand_App_UI_HomeStage__get_Sun_22ee3e8
                                                              (param_1);
                                                    if (lVar5 != 0) {
                                                      UnityEngine_Material__SetVector_4383100
                                                                (lVar5,*(undefined8 *)
                                                                        PTR_DAT_04cb76d8,0);
                                                      lVar5 = *(long *)(param_1 + 0x78);
                                                      Dino_BusSand_App_UI_HomeStage__get_Sun_22ee3e8
                                                                (param_1);
                                                      if (lVar5 != 0) {
                                                        Dino_BusSand_App_UI_HomeBus__Light_22dff60
                                                                  (lVar5,*plVar6,0);
                                                        lVar5 = *plVar6;
                                                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                                          thunk_FUN_0218fdac();
                                                        }
                                                        if (lVar5 != 0) {
                                                          puVar8 = *(undefined4 **)
                                                                    (*(long *)puVar2 + 0xb8);
                                                          UnityEngine_Material__SetVector_4383100
                                                                    (*puVar8,puVar8[1],puVar8[2],
                                                                     puVar8[3],lVar5,
                                                                     *(undefined8 *)PTR_DAT_04cb76b8
                                                                     ,0);
                                                          if (*plVar6 != 0) {
                                                            lVar5 = *(long *)(*(long *)puVar2 + 0xb8
                                                                             );
                                                            UnityEngine_Material__SetVector_4383100
                                                                      (*(undefined4 *)(lVar5 + 0x10)
                                                                       ,*(undefined4 *)
                                                                         (lVar5 + 0x14),
                                                                       *(undefined4 *)(lVar5 + 0x18)
                                                                       ,*(undefined4 *)
                                                                         (lVar5 + 0x1c),*plVar6,
                                                                       *(undefined8 *)
                                                                        PTR_DAT_04cb76c8,0);
                                                            uVar9 = 
                                                  UnityEngine_Component__get_transform_43bcd18
                                                            (param_1,0);
                                                  Dino_BusSand_App_UI_HomeStage__SetLayer_22ef448
                                                            (uVar9,0x1d);
                                                  if ((*(long *)(param_1 + 0x28) != 0) &&
                                                     (lVar5 = *(long *)(param_1 + 0x78), lVar5 != 0)
                                                     ) {
                                                    fVar13 = *(float *)(*(long *)(param_1 + 0x28) +
                                                                       0x5c) *
                                                             *(float *)(param_1 + 0x8c);
                                                    *(float *)(param_1 + 0x90) = fVar13;
                                                    *(float *)(lVar5 + 0x40) = fVar13;
                                                    *(float *)(lVar5 + 0x4c) = fVar13;
                                                    return;
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
                                            goto LAB_023eeee8;
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
LAB_023eeee8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

