/* IL2CPP: Dino.BusSand.View.GrainParticles$$Awake
void Dino_BusSand_View_GrainParticles__Awake (Dino_BusSand_View_GrainParticles_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GrainParticles$$Awake
   void Dino_BusSand_View_GrainParticles__Awake (Dino_BusSand_View_GrainParticles_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GrainParticles__Awake_23b4324(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  short sVar12;
  ulong uVar13;
  ushort *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  float fStack_144;
  ulong auStack_140 [3];
  undefined4 uStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar3 = PTR_DAT_04caa148;
  if ((bRam0000000004f9c97b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7780);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cbc358);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04cbc928);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc930);
    FUN_02132f7c(PTR_DAT_04cbc938);
    FUN_02132f7c(PTR_DAT_04cbc940);
    FUN_02132f7c(PTR_DAT_04cbc948);
    FUN_02132f7c(PTR_DAT_04cbc950);
    FUN_02132f7c(PTR_DAT_04cb72a0);
    FUN_02132f7c(PTR_DAT_04cb72b0);
    FUN_02132f7c(PTR_DAT_04cbc958);
    FUN_02132f7c(PTR_DAT_04cbc960);
    FUN_02132f7c(PTR_DAT_04cbc968);
    FUN_02132f7c(PTR_DAT_04cb72c0);
    FUN_02132f7c(PTR_DAT_04cbc970);
    FUN_02132f7c(PTR_DAT_04cbc978);
    FUN_02132f7c(PTR_DAT_04cbc980);
    FUN_02132f7c(PTR_DAT_04cbc988);
    bRam0000000004f9c97b = 1;
  }
  uStack_128 = 0;
  fStack_124 = 0.0;
  auStack_140[2] = 0;
  uStack_118 = 0;
  fStack_120 = 0.0;
  fStack_11c = 0.0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  auStack_140[1] = 0;
  auStack_140[0] = 0;
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  UnityEngine_Mesh___ctor_4389e48(lVar8,0);
  if (lVar8 != 0) {
    UnityEngine_Object__set_name_43c72ec(lVar8,*(undefined8 *)PTR_DAT_04cbc960,0);
    plVar15 = (long *)(param_1 + 0x38);
    *plVar15 = lVar8;
    thunk_FUN_02134474(plVar15,lVar8);
    puVar3 = PTR_DAT_04cbc358;
    if (*plVar15 != 0) {
      UnityEngine_Mesh__MarkDynamic_439609c(*plVar15,0);
      lVar8 = *plVar15;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (lVar8 != 0) {
        UnityEngine_Mesh__SetVertexBufferParams_4392cc0
                  (lVar8,0x8000,**(undefined8 **)(*(long *)puVar3 + 0xb8),0);
        puVar3 = PTR_DAT_04cbc938;
        if (*plVar15 != 0) {
          UnityEngine_Mesh__SetIndexBufferParams_438a19c(*plVar15,0xc000,0,0);
          lVar8 = FUN_02133068(*(undefined8 *)puVar3,0xc000);
          puVar7 = PTR_DAT_04cbc988;
          puVar6 = PTR_DAT_04cbc970;
          puVar5 = PTR_DAT_04cbc940;
          puVar2 = PTR_DAT_04cbc930;
          puVar4 = PTR_DAT_04cbc928;
          puVar3 = PTR_DAT_04cab208;
          if (lVar8 != 0) {
            uVar9 = *(ulong *)(lVar8 + 0x18);
            uVar11 = 0;
            sVar12 = 0;
            uVar13 = uVar9 & 0xffffffff;
            puVar14 = (ushort *)(lVar8 + 0x2a);
            do {
              if (uVar13 <= uVar11) goto LAB_024b4bd8;
              uVar1 = sVar12 << 2;
              puVar14[-5] = uVar1;
              if ((uVar13 <= uVar11 + 1) || (puVar14[-4] = uVar1 | 1, uVar13 <= uVar11 + 2))
              goto LAB_024b4bd8;
              puVar14[-3] = uVar1 | 2;
              if ((uVar13 <= uVar11 + 3) ||
                 ((puVar14[-2] = uVar1, uVar13 <= uVar11 + 4 ||
                  (puVar14[-1] = uVar1 | 2, uVar13 <= uVar11 + 5)))) goto LAB_024b4bd8;
              uVar11 = uVar11 + 6;
              sVar12 = sVar12 + 1;
              *puVar14 = uVar1 | 3;
              puVar14 = puVar14 + 6;
            } while (uVar11 != 0xc000);
            if (*plVar15 != 0) {
              UnityEngine_Mesh__SetIndexBufferData_ushort__27f9060
                        (*plVar15,lVar8,0,0,uVar9,0xf,*(undefined8 *)puVar4);
              lVar8 = *plVar15;
              if (cRam0000000004f9b65d == '\0') {
                FUN_02132f7c(PTR_DAT_04caa208);
                cRam0000000004f9b65d = '\x01';
              }
              puVar4 = PTR_DAT_04caa208;
              uVar19 = **(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
              uVar20 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
              if (cRam0000000004f9b65e == '\0') {
                FUN_02132f7c(PTR_DAT_04caa208);
                cRam0000000004f9b65e = '\x01';
              }
              if (lVar8 != 0) {
                uVar18 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc);
                uStack_14c = CONCAT44((float)((ulong)uVar18 >> 0x20) * 400.0 * 0.5,
                                      (float)uVar18 * 400.0 * 0.5);
                fStack_144 = *(float *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x14) * 400.0 * 0.5;
                uStack_158 = uVar19;
                uStack_150 = uVar20;
                UnityEngine_Mesh__set_bounds_438fbac(lVar8,&uStack_158,0);
                UnityEngine_Rendering_SubMeshDescriptor___ctor_43df430(&uStack_d0,0,0,0,0);
                if (*plVar15 != 0) {
                  UnityEngine_Mesh__get_bounds_438fac4(&uStack_170,*plVar15,0);
                  lVar16 = *plVar15;
                  uStack_c0 = uStack_160;
                  uStack_c8 = uStack_168;
                  uStack_d0 = uStack_170;
                  uStack_98 = uStack_168;
                  uStack_a0 = uStack_170;
                  uStack_88 = uStack_b8;
                  uStack_90 = uStack_160;
                  uStack_78 = uStack_a8;
                  uStack_80 = uStack_b0;
                  lVar8 = FUN_02133068(*(undefined8 *)puVar2,2);
                  if (lVar8 != 0) {
                    if (*(int *)(lVar8 + 0x18) != 0) {
                      *(undefined8 *)(lVar8 + 0x28) = uStack_98;
                      *(undefined8 *)(lVar8 + 0x20) = uStack_a0;
                      *(undefined8 *)(lVar8 + 0x38) = uStack_88;
                      *(undefined8 *)(lVar8 + 0x30) = uStack_90;
                      *(undefined8 *)(lVar8 + 0x48) = uStack_78;
                      *(undefined8 *)(lVar8 + 0x40) = uStack_80;
                      if (*(int *)(lVar8 + 0x18) != 1) {
                        *(undefined8 *)(lVar8 + 0x78) = uStack_78;
                        *(undefined8 *)(lVar8 + 0x70) = uStack_80;
                        *(undefined8 *)(lVar8 + 0x58) = uStack_98;
                        *(undefined8 *)(lVar8 + 0x50) = uStack_a0;
                        *(undefined8 *)(lVar8 + 0x68) = uStack_88;
                        *(undefined8 *)(lVar8 + 0x60) = uStack_90;
                        if (lVar16 != 0) {
                          UnityEngine_Mesh__SetSubMeshes_439590c(lVar16,lVar8,0xf,0);
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uVar19 = Dino_BusSand_GameAssets__FindShader_237d610
                                             (*(undefined8 *)puVar5,0);
                          puVar3 = PTR_DAT_04cab588;
                          lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab588);
                          UnityEngine_Material___ctor_437b5a8(lVar8,uVar19,0);
                          plVar15 = (long *)(param_1 + 0x40);
                          *plVar15 = lVar8;
                          thunk_FUN_02134474(plVar15,lVar8);
                          lVar8 = *plVar15;
                          uVar11 = Dino_BusSand_View_ArtPack__get_Active_238dea0(0);
                          if (lVar8 != 0) {
                            uVar20 = 0x3f800000;
                            if ((uVar11 & 1) == 0) {
                              uVar20 = 0;
                            }
                            UnityEngine_Material__SetFloat_4383048
                                      (uVar20,lVar8,*(undefined8 *)puVar6,0);
                            if (*plVar15 != 0) {
                              UnityEngine_Material__SetFloat_4383048
                                        (0x3f800000,*plVar15,*(undefined8 *)puVar7,0);
                              uVar11 = Dino_BusSand_View_ArtPack__get_Active_238dea0(0);
                              if ((uVar11 & 1) != 0) {
                                lVar8 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
                                puVar2 = PTR_DAT_04ca9ae8;
                                if (lVar8 == 0) goto LAB_024b4bdc;
                                uVar19 = *(undefined8 *)(lVar8 + 0xa0);
                                if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
                                }
                                uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar19,0,0);
                                lVar8 = 0;
                                if ((uVar11 & 1) != 0) {
                                  lVar8 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
                                  if ((lVar8 == 0) || (*(long *)(lVar8 + 0xa0) == 0))
                                  goto LAB_024b4bdc;
                                  uVar19 = UnityEngine_GameObject__get_transform_43c1048
                                                     (*(long *)(lVar8 + 0xa0),0);
                                  lVar8 = Dino_BusSand_Util__FindDeep_238d3bc
                                                    (uVar19,*(undefined8 *)PTR_DAT_04cbc978,0);
                                }
                                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                  thunk_FUN_0218fdac();
                                }
                                uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
                                lVar16 = 0;
                                if ((uVar11 & 1) != 0) {
                                  if (lVar8 == 0) goto LAB_024b4bdc;
                                  lVar16 = UnityEngine_Component__GetComponent_object__26f97e8
                                                     (lVar8,*(undefined8 *)PTR_DAT_04cb7780);
                                }
                                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                  thunk_FUN_0218fdac();
                                }
                                uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar16,0,0);
                                if ((uVar11 & 1) != 0) {
                                  if (lVar16 == 0) goto LAB_024b4bdc;
                                  uVar19 = UnityEngine_Renderer__get_sharedMaterial_43743c8
                                                     (lVar16,0);
                                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                    thunk_FUN_0218fdac(*(long *)puVar2);
                                  }
                                  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar19,0,0);
                                  if ((uVar11 & 1) != 0) {
                                    lVar8 = UnityEngine_Renderer__get_sharedMaterial_43743c8
                                                      (lVar16,0);
                                    puVar2 = PTR_DAT_04cb72b0;
                                    if (lVar8 == 0) goto LAB_024b4bdc;
                                    uVar11 = UnityEngine_Material__HasProperty_437c10c
                                                       (lVar8,*(undefined8 *)PTR_DAT_04cb72b0,0);
                                    if ((uVar11 & 1) != 0) {
                    /* try { // try from 024b4974 to 025b4bef has its CatchHandler @ 024b4974
                       catch() { ... } // from try @ 024b4974 with catch @ 024b4974
                       catch() { ... } // from try @ 024b4c5c with catch @ 024b4974
                       catch() { ... } // from try @ 024b5100 with catch @ 024b4974
                       catch() { ... } // from try @ 024b5130 with catch @ 024b4974
                       catch() { ... } // from try @ 024b5154 with catch @ 024b4974 */
                                      lVar17 = *plVar15;
                                      lVar8 = UnityEngine_Renderer__get_sharedMaterial_43743c8
                                                        (lVar16,0);
                                      if ((lVar8 == 0) ||
                                         (uVar19 = UnityEngine_Material__GetTexture_4383af4
                                                             (lVar8,*(undefined8 *)puVar2,0),
                                         lVar17 == 0)) goto LAB_024b4bdc;
                                      UnityEngine_Material__SetTexture_43831cc
                                                (lVar17,*(undefined8 *)PTR_DAT_04cbc968,uVar19,0);
                                    }
                                  }
                                }
                              }
                              UnityEngine_RenderParams___ctor_436e590(auStack_140,*plVar15,0);
                              if (cRam0000000004f9b65d == '\0') {
                                FUN_02132f7c(PTR_DAT_04caa208);
                                cRam0000000004f9b65d = '\x01';
                              }
                              puVar10 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                              uVar19 = *puVar10;
                              uVar20 = *(undefined4 *)(puVar10 + 1);
                              if (cRam0000000004f9b65e == '\0') {
                                FUN_02132f7c(puVar4);
                                cRam0000000004f9b65e = '\x01';
                                puVar10 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                              }
                              uStack_f8 = uStack_f8 & 0xffffff0000000000;
                              auStack_140[0] = auStack_140[0] & 0xffffffff00000000;
                              fStack_11c = *(float *)((long)puVar10 + 0x14) * 400.0 * 0.5;
                              fStack_124 = (float)*(undefined8 *)((long)puVar10 + 0xc) * 400.0 * 0.5
                              ;
                              fStack_120 = (float)((ulong)*(undefined8 *)((long)puVar10 + 0xc) >>
                                                  0x20) * 400.0 * 0.5;
                              auStack_140[2] = uVar19;
                              uStack_128 = uVar20;
                              func_0x049b5410(param_1 + 0x48,auStack_140,0x70);
                              thunk_FUN_02134474(param_1 + 0x70,0);
                              if (*(long *)(param_1 + 0x40) != 0) {
                                uVar19 = UnityEngine_Material__get_shader_437b8d4
                                                   (*(long *)(param_1 + 0x40),0);
                                lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                                UnityEngine_Material___ctor_437b5a8(lVar8,uVar19,0);
                                if (lVar8 != 0) {
                                  UnityEngine_Object__set_name_43c72ec
                                            (lVar8,*(undefined8 *)PTR_DAT_04cbc948,0);
                                  UnityEngine_Material__set_renderQueue_437c9d8(lVar8,3000,0);
                                  plVar15 = (long *)(param_1 + 0xb8);
                                  *plVar15 = lVar8;
                                  thunk_FUN_02134474(plVar15,lVar8);
                                  if (*plVar15 != 0) {
                                    UnityEngine_Material__SetFloat_4383048
                                              (0x3f800000,*plVar15,*(undefined8 *)PTR_DAT_04cbc958,0
                                              );
                                    if (*plVar15 != 0) {
                                      UnityEngine_Material__SetFloat_4383048
                                                (0x3f800000,*plVar15,*(undefined8 *)PTR_DAT_04cb72a0
                                                 ,0);
                                      if (*plVar15 != 0) {
                                        UnityEngine_Material__SetFloat_4383048
                                                  (0x41200000,*plVar15,
                                                   *(undefined8 *)PTR_DAT_04cb72c0,0);
                                        if (*plVar15 != 0) {
                                          UnityEngine_Material__SetFloat_4383048
                                                    (0,*plVar15,*(undefined8 *)PTR_DAT_04cbc980,0);
                                          if (*plVar15 != 0) {
                                            UnityEngine_Material__SetFloat_4383048
                                                      (_UNK_00e2038c,*plVar15,
                                                       *(undefined8 *)PTR_DAT_04cbc950,0);
                                            func_0x049b5410(param_1 + 0xc0,param_1 + 0x48,0x70);
                                            thunk_FUN_02134474(param_1 + 0xe8,0);
                                            *(undefined8 *)(param_1 + 0xf8) =
                                                 *(undefined8 *)(param_1 + 0xb8);
                                            thunk_FUN_02134474((undefined8 *)(param_1 + 0xf8));
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
                        goto LAB_024b4bdc;
                      }
                    }
LAB_024b4bd8:
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
LAB_024b4bdc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

