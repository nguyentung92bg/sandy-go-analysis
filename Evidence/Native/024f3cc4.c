/* IL2CPP: Dino.BusSand.View.VehicleView$$Build
void Dino_BusSand_View_VehicleView__Build (Dino_BusSand_View_VehicleView_o* __this, int32_t id, int32_t kind, uint8_t color, bool hidden, float yardCell, float roadCell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$Build
   void Dino_BusSand_View_VehicleView__Build (Dino_BusSand_View_VehicleView_o* __this, int32_t id,
   int32_t kind, uint8_t color, bool hidden, float yardCell, float roadCell, const MethodInfo*
   method); */

void Dino_BusSand_View_VehicleView__Build_23f3cc4
               (float param_1,float param_2,undefined8 param_3,long param_4,undefined4 param_5,
               int param_6,undefined4 param_7,byte param_8)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  float *pfVar19;
  ulong uVar20;
  undefined4 *puVar21;
  long *plVar22;
  undefined8 uVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float unaff_s10;
  float fVar32;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  float afStack_a0 [2];
  undefined1 auStack_98 [4];
  float fStack_94;
  undefined8 uStack_90;
  float fStack_88;
  float fStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  undefined8 uStack_78;
  
  if ((bRam0000000004f9cac8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa138);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cb6dc0);
    FUN_02132f7c(PTR_DAT_04cb6dc8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cbc460);
    FUN_02132f7c(PTR_DAT_04cbdeb8);
    FUN_02132f7c(PTR_DAT_04cbddb0);
    FUN_02132f7c(PTR_DAT_04cb4db8);
    bRam0000000004f9cac8 = 1;
  }
  puVar9 = PTR_DAT_04cbc460;
  puVar5 = PTR_DAT_04caa070;
  *(undefined4 *)(param_4 + 0x20) = param_5;
  puVar7 = PTR_DAT_04cb4db8;
  *(int *)(param_4 + 0x24) = param_6;
  *(char *)(param_4 + 0x28) = (char)param_7;
  *(byte *)(param_4 + 0x30) = param_8 & 1;
  uVar14 = Dino_BusSand_View_ArtPack__get_Active_238dea0(0);
  puVar6 = PTR_DAT_04cab208;
  puVar4 = PTR_DAT_04ca9ae8;
  fVar32 = _UNK_00e20574;
  if ((uVar14 & 1) != 0) {
    lVar15 = *(long *)puVar9;
    *(undefined1 *)(param_4 + 0xe1) = 1;
    iVar13 = *(int *)(lVar15 + 0xe4);
    *(undefined4 *)(param_4 + 0xbc) = 0x3f4e4b57;
    *(float *)(param_4 + 0xa8) = param_1 * fVar32;
    if (iVar13 == 0) {
      thunk_FUN_0218fdac();
      lVar15 = *(long *)puVar9;
    }
    pfVar19 = *(float **)(lVar15 + 0xb8);
    *(float *)(param_4 + 0x180) = param_2;
    uVar14 = (ulong)(uint)*pfVar19;
    *(float *)(param_4 + 0xac) = param_2 * fVar32 * *pfVar19;
    uVar16 = UnityEngine_Component__get_transform_43bcd18(param_4,0);
    *(undefined8 *)(param_4 + 0x38) = uVar16;
    thunk_FUN_02134474();
    lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
    UnityEngine_GameObject___ctor_43c20cc(lVar15,*(undefined8 *)puVar7,0);
    if (lVar15 != 0) {
      lVar15 = UnityEngine_GameObject__get_transform_43c1048(lVar15,0);
      plVar22 = (long *)(param_4 + 0x40);
      *plVar22 = lVar15;
      thunk_FUN_02134474(plVar22,lVar15);
      if (*plVar22 != 0) {
        UnityEngine_Transform__SetParent_43d1e34(*plVar22,*(undefined8 *)(param_4 + 0x38),0,0);
        if ((bRam0000000004f9cac9 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04caa138);
          FUN_02132f7c(PTR_DAT_04cb7780);
          FUN_02132f7c(PTR_DAT_04cbc848);
          FUN_02132f7c(PTR_DAT_04cb7790);
          FUN_02132f7c(PTR_DAT_04cb7798);
          FUN_02132f7c(PTR_DAT_04caa070);
          FUN_02132f7c(PTR_DAT_04caa0d8);
          FUN_02132f7c(PTR_DAT_04cad390);
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          FUN_02132f7c(PTR_DAT_04cbd7b8);
          FUN_02132f7c(PTR_DAT_04cbdeb8);
          FUN_02132f7c(PTR_DAT_04cb9428);
          FUN_02132f7c(PTR_DAT_04cb6950);
          FUN_02132f7c(PTR_DAT_04cbc440);
          FUN_02132f7c(PTR_DAT_04cb7e18);
          FUN_02132f7c(PTR_DAT_04cbc978);
          FUN_02132f7c(PTR_DAT_04cbc868);
          bRam0000000004f9cac9 = 1;
        }
        lVar15 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
        puVar5 = PTR_DAT_04cad390;
        puVar4 = PTR_DAT_04ca9ae8;
        if (lVar15 != 0) {
          uVar16 = Dino_BusSand_View_ArtPackData__Prefab_2390a44
                             (lVar15,*(undefined4 *)(param_4 + 0x24),0);
          uVar23 = *(undefined8 *)(param_4 + 0x40);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar4);
          }
          lVar15 = UnityEngine_Object__Instantiate_object__2805310
                             (uVar16,uVar23,0,*(undefined8 *)puVar5);
          puVar5 = PTR_DAT_04cb7790;
          if (lVar15 != 0) {
            UnityEngine_Object__set_name_43c72ec(lVar15,*(undefined8 *)PTR_DAT_04cbc868,0);
            lVar17 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                               (lVar15,1,*(undefined8 *)puVar5);
            if (lVar17 != 0) {
              if (0 < (int)*(ulong *)(lVar17 + 0x18)) {
                uVar24 = 0;
                uVar20 = *(ulong *)(lVar17 + 0x18) & 0xffffffff;
                do {
                  if (uVar20 <= uVar24) goto LAB_024f4d80;
                  uVar16 = *(undefined8 *)(lVar17 + 0x20 + uVar24 * 8);
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  UnityEngine_Object__Destroy_43c8114(uVar16,0);
                  uVar20 = (ulong)*(uint *)(lVar17 + 0x18);
                  uVar24 = uVar24 + 1;
                } while ((long)uVar24 < (long)(int)*(uint *)(lVar17 + 0x18));
              }
              puVar6 = PTR_DAT_04cbc440;
              puVar5 = PTR_DAT_04cb7780;
              uVar16 = UnityEngine_GameObject__get_transform_43c1048(lVar15,0);
              lVar17 = Dino_BusSand_Util__FindDeep_238d3bc(uVar16,*(undefined8 *)puVar6,0);
              if (lVar17 == 0) {
                lVar17 = 0;
                puVar3 = (undefined8 *)PTR_DAT_04cbc978;
              }
              else {
                lVar17 = UnityEngine_Component__GetComponent_object__26f97e8
                                   (lVar17,*(undefined8 *)puVar5);
                puVar3 = (undefined8 *)PTR_DAT_04cbc978;
              }
              PTR_DAT_04cbc978 = (undefined *)puVar3;
              if (param_4 != 0) {
                plVar26 = (long *)(param_4 + 0xe8);
                *plVar26 = lVar17;
                thunk_FUN_02134474(plVar26);
                lVar17 = Dino_BusSand_Util__FindDeep_238d3bc(uVar16,*puVar3,0);
                plVar22 = (long *)(param_4 + 0xf8);
                *plVar22 = lVar17;
                thunk_FUN_02134474(plVar22,lVar17);
                lVar17 = *plVar22;
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar24 = UnityEngine_Object__op_Inequality_43c8dec(lVar17,0,0);
                uVar23 = 0;
                if ((uVar24 & 1) != 0) {
                  if (*plVar22 == 0) goto LAB_024f4d84;
                  uVar23 = UnityEngine_Component__GetComponent_object__26f97e8
                                     (*plVar22,*(undefined8 *)puVar5);
                }
                puVar9 = PTR_DAT_04cbd7b8;
                puVar7 = PTR_DAT_04cb7e18;
                puVar6 = PTR_DAT_04cb7798;
                puVar5 = PTR_DAT_04cb6950;
                *(undefined8 *)(param_4 + 0xf0) = uVar23;
                thunk_FUN_02134474();
                Dino_BusSand_View_VehicleView__UseHeapShader_23f723c(param_4);
                lVar17 = Dino_BusSand_Util__FindDeep_238d3bc(uVar16,*(undefined8 *)puVar9,0);
                lVar18 = Dino_BusSand_Util__FindDeep_238d3bc(uVar16,*(undefined8 *)puVar5,0);
                uVar16 = Dino_BusSand_Util__FindDeep_238d3bc(uVar16,*(undefined8 *)puVar7,0);
                *(undefined8 *)(param_4 + 0x308) = uVar16;
                thunk_FUN_02134474(param_4 + 0x308,uVar16);
                lVar15 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                                   (lVar15,1,*(undefined8 *)puVar6);
                uVar30 = (undefined4)param_3;
                fVar32 = (float)uVar14;
                if (lVar15 != 0) {
                  uVar1 = *(uint *)(lVar15 + 0x18);
                  if (0 < (int)uVar1) {
                    lVar28 = 0;
                    do {
                      if (uVar1 <= (uint)lVar28) {
LAB_024f4d80:
                    /* WARNING: Subroutine does not return */
                        FUN_0213322c();
                      }
                      lVar27 = *(long *)(lVar15 + 0x20 + lVar28 * 8);
                      if (lVar27 == 0) goto LAB_024f4d84;
                      UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar27,0,0);
                      UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar27,0,0);
                      UnityEngine_Renderer__set_lightProbeUsage_4373e90(lVar27,0,0);
                      UnityEngine_Renderer__set_reflectionProbeUsage_4373f54(lVar27,0,0);
                      uVar30 = (undefined4)param_3;
                      fVar32 = (float)uVar14;
                      uVar1 = *(uint *)(lVar15 + 0x18);
                      lVar28 = lVar28 + 1;
                    } while ((int)lVar28 < (int)uVar1);
                  }
                  lVar15 = *plVar26;
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar14 = UnityEngine_Object__op_Inequality_43c8dec(lVar15,0,0);
                  fVar31 = _UNK_00e205ec;
                  if ((uVar14 & 1) != 0) {
                    if (((*plVar26 == 0) ||
                        (lVar15 = UnityEngine_Component__GetComponent_object__26f97e8
                                            (*plVar26,*(undefined8 *)PTR_DAT_04caa138), lVar15 == 0)
                        ) || (lVar15 = UnityEngine_MeshFilter__get_sharedMesh_43893a0(lVar15,0),
                             lVar15 == 0)) goto LAB_024f4d84;
                    UnityEngine_Mesh__get_bounds_438fac4(&uStack_78,lVar15,0);
                    fVar31 = uStack_78._4_4_ + unaff_s10;
                    fVar32 = unaff_s10;
                  }
                  lVar15 = *(long *)puVar4;
                  uVar16 = *(undefined8 *)(param_4 + 0xf8);
                  *(float *)(param_4 + 0xb4) = fVar31;
                  if (*(int *)(lVar15 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar14 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
                  if ((uVar14 & 1) != 0) {
                    if (*plVar22 == 0) goto LAB_024f4d84;
                    uVar29 = UnityEngine_Transform__get_localPosition_43cfce8(*plVar22,0);
                    *(undefined4 *)(param_4 + 0x100) = uVar29;
                    *(float *)(param_4 + 0x104) = fVar32;
                    *(undefined4 *)(param_4 + 0x108) = uVar30;
                    if (*(long *)(param_4 + 0xf8) == 0) goto LAB_024f4d84;
                    uVar29 = UnityEngine_Transform__get_localScale_43d1b0c
                                       (*(long *)(param_4 + 0xf8),0);
                    *(undefined4 *)(param_4 + 0x10c) = uVar29;
                    *(float *)(param_4 + 0x110) = fVar32;
                    *(undefined4 *)(param_4 + 0x114) = uVar30;
                    if ((*(long *)(param_4 + 0xf8) == 0) ||
                       (lVar15 = UnityEngine_Component__get_gameObject_43bcde8
                                           (*(long *)(param_4 + 0xf8),0), lVar15 == 0))
                    goto LAB_024f4d84;
                    UnityEngine_GameObject__SetActive_43c1408(lVar15,0,0);
                  }
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  puVar6 = PTR_DAT_04caa070;
                  uVar14 = UnityEngine_Object__op_Inequality_43c8dec(lVar18,0,0);
                  if ((uVar14 & 1) == 0) {
                    lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
                    UnityEngine_GameObject___ctor_43c20cc(lVar15,*(undefined8 *)puVar5,0);
                    if (lVar15 == 0) goto LAB_024f4d84;
                    lVar15 = UnityEngine_GameObject__get_transform_43c1048(lVar15,0);
                    plVar22 = (long *)(param_4 + 0x78);
                    *plVar22 = lVar15;
                    thunk_FUN_02134474(plVar22,lVar15);
                    if (*plVar22 == 0) goto LAB_024f4d84;
                    UnityEngine_Transform__SetParent_43d1e34
                              (*plVar22,*(undefined8 *)(param_4 + 0x38),0,0);
                  }
                  else {
                    if (lVar18 == 0) goto LAB_024f4d84;
                    UnityEngine_Transform__SetParent_43d1e34
                              (lVar18,*(undefined8 *)(param_4 + 0x38),0,0);
                    if (cRam0000000004f9b65d == '\0') {
                      FUN_02132f7c(PTR_DAT_04caa208);
                      cRam0000000004f9b65d = '\x01';
                    }
                    puVar21 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
                    UnityEngine_Transform__set_localPosition_43cfda8
                              (*puVar21,puVar21[1],puVar21[2],lVar18,0);
                    *(long *)(param_4 + 0x78) = lVar18;
                    thunk_FUN_02134474((long *)(param_4 + 0x78),lVar18);
                  }
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar14 = UnityEngine_Object__op_Inequality_43c8dec(lVar17,0,0);
                  if ((uVar14 & 1) == 0) {
                    lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
                    UnityEngine_GameObject___ctor_43c20cc(lVar15,*(undefined8 *)PTR_DAT_04cb9428,0);
                    if (lVar15 == 0) goto LAB_024f4d84;
                    lVar15 = UnityEngine_GameObject__get_transform_43c1048(lVar15,0);
                    plVar22 = (long *)(param_4 + 0x68);
                    *plVar22 = lVar15;
                    thunk_FUN_02134474(plVar22,lVar15);
                    if (*plVar22 == 0) goto LAB_024f4d84;
                    UnityEngine_Transform__SetParent_43d1e34
                              (*plVar22,*(undefined8 *)(param_4 + 0x40),0,0);
                  }
                  else {
                    *(long *)(param_4 + 0x68) = lVar17;
                    thunk_FUN_02134474((long *)(param_4 + 0x68),lVar17);
                    if (lVar17 == 0) goto LAB_024f4d84;
                    uVar16 = UnityEngine_Component__GetComponent_object__26f97e8
                                       (lVar17,*(undefined8 *)PTR_DAT_04cbc848);
                    *(undefined8 *)(param_4 + 0x118) = uVar16;
                    thunk_FUN_02134474(param_4 + 0x118,uVar16);
                  }
                  puVar4 = PTR_DAT_04cbdeb8;
                  uVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa0d8);
                  UnityEngine_MaterialPropertyBlock___ctor_4372b28(uVar16,0);
                  *(undefined8 *)(param_4 + 0x120) = uVar16;
                  thunk_FUN_02134474(param_4 + 0x120,uVar16);
                  uVar16 = *(undefined8 *)puVar6;
                  uVar30 = 0;
                  if (*(char *)(param_4 + 0x30) != '\0') {
                    uVar30 = 0x3f800000;
                  }
                  *(undefined4 *)(param_4 + 0x128) = uVar30;
                  lVar15 = thunk_FUN_0216e89c(uVar16);
                  UnityEngine_GameObject___ctor_43c20cc(lVar15,*(undefined8 *)puVar4,0);
                  if (lVar15 != 0) {
                    lVar17 = UnityEngine_GameObject__get_transform_43c1048(lVar15,0);
                    plVar22 = (long *)(param_4 + 0x60);
                    *plVar22 = lVar17;
                    thunk_FUN_02134474(plVar22,lVar17);
                    if (*plVar22 != 0) {
                      UnityEngine_Transform__SetParent_43d1e34
                                (*plVar22,*(undefined8 *)(param_4 + 0x40),0,0);
                      UnityEngine_GameObject__SetActive_43c1408(lVar15,0,0);
                      Dino_BusSand_View_VehicleView__SetMode_23f6b40(param_4,0);
                      Dino_BusSand_View_VehicleView__ApplyBodyColor_23f6f64(param_4);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LAB_024f4d84:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
LAB_024f448c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar16 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  uVar14 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
  lVar15 = 0;
  if ((uVar14 & 1) != 0) {
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar15 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar9);
    }
    uVar16 = Dino_BusSand_View_VehicleView__ModelName_23f4524(param_6);
    if (lVar15 == 0) goto LAB_024f448c;
    lVar15 = Dino_BusSand_GameAssets__GetModel_237d214(lVar15,uVar16,0);
  }
  plVar22 = (long *)(param_4 + 0xc0);
  *plVar22 = lVar15;
  thunk_FUN_02134474(plVar22);
  lVar15 = *(long *)puVar9;
  fVar32 = 1.0;
  if (*plVar22 == 0) {
    fVar32 = _UNK_00e209f8;
  }
  *(bool *)(param_4 + 0xb8) = *plVar22 != 0;
  iVar13 = *(int *)(lVar15 + 0xe4);
  *(float *)(param_4 + 0xbc) = fVar32;
  *(float *)(param_4 + 0xa8) = fVar32 * param_1;
  if (iVar13 == 0) {
    thunk_FUN_0218fdac();
    lVar15 = *(long *)puVar9;
  }
  pfVar19 = *(float **)(lVar15 + 0xb8);
  *(float *)(param_4 + 0x180) = param_2;
  fVar31 = *pfVar19;
  *(float *)(param_4 + 0xac) = fVar32 * param_2 * fVar31;
  uVar16 = UnityEngine_Component__get_transform_43bcd18(param_4,0);
  *(undefined8 *)(param_4 + 0x38) = uVar16;
  thunk_FUN_02134474();
  lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  UnityEngine_GameObject___ctor_43c20cc(lVar15,*(undefined8 *)puVar7,0);
  if (lVar15 == 0) goto LAB_024f448c;
  lVar15 = UnityEngine_GameObject__get_transform_43c1048(lVar15,0);
  plVar22 = (long *)(param_4 + 0x40);
  *plVar22 = lVar15;
  thunk_FUN_02134474(plVar22,lVar15);
  if (*plVar22 == 0) goto LAB_024f448c;
  UnityEngine_Transform__SetParent_43d1e34(*plVar22,*(undefined8 *)(param_4 + 0x38),0,0);
  puVar4 = PTR_DAT_04cbc2c8;
  if (*(char *)(param_4 + 0xb8) == '\0') {
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar16 = Dino_BusSand_View_VehicleView__MeshName_23f44a0(param_6);
    if (_UNK_00e2094c <= param_1) {
      uVar23 = 0x22;
    }
    else if (_UNK_00e207cc <= param_1) {
      uVar23 = 0x1c;
    }
    else {
      uVar23 = 0x16;
    }
    lVar15 = Dino_BusSand_View_VehicleView__MakeModel_23f5a08(param_4,uVar16,0,uVar23);
    plVar26 = (long *)(param_4 + 0x48);
    *plVar26 = lVar15;
    thunk_FUN_02134474(plVar26,lVar15);
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar16 = Dino_BusSand_View_VehicleView__MeshName_23f44a0(param_6);
    uVar16 = System_String__Concat_46c82e0(uVar16,*(undefined8 *)PTR_DAT_04cbddb0,0);
    lVar15 = Dino_BusSand_View_VehicleView__MakeModel_23f5a08(param_4,uVar16,1,0x20);
    plVar25 = (long *)(param_4 + 0x50);
    *plVar25 = lVar15;
    thunk_FUN_02134474(plVar25,lVar15);
    if (*(long *)(param_4 + 0x48) != 0) {
      UnityEngine_Renderer__set_shadowCastingMode_4373c54(*(long *)(param_4 + 0x48),0,0);
      if ((*plVar25 != 0) &&
         (lVar15 = UnityEngine_Component__get_gameObject_43bcde8(*plVar25,0), lVar15 != 0)) {
        UnityEngine_GameObject__SetActive_43c1408(lVar15,0,0);
        if ((*plVar26 != 0) &&
           ((lVar15 = UnityEngine_Component__GetComponent_object__26f97e8
                                (*plVar26,*(undefined8 *)PTR_DAT_04caa138), lVar15 != 0 &&
            (lVar15 = UnityEngine_MeshFilter__get_sharedMesh_43893a0(lVar15,0), lVar15 != 0)))) {
          UnityEngine_Mesh__get_bounds_438fac4(&fStack_88,lVar15,0);
          iVar13 = *(int *)(*(long *)puVar6 + 0xe4);
          *(float *)(param_4 + 0xb4) = fStack_84 + (float)uStack_78;
          if (iVar13 == 0) {
            thunk_FUN_0218fdac();
          }
          lVar15 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
          uVar16 = Dino_BusSand_View_VehicleView__PileMeshName_23f45a8(param_6);
          if (lVar15 != 0) {
            uVar16 = Dino_BusSand_GameAssets__GetMesh_237d0fc(lVar15,uVar16,0);
            plVar26 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,2);
            uVar23 = *(undefined8 *)PTR_DAT_04cb6de0;
            if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
            }
            lVar15 = System_Type__GetTypeFromHandle_483f0b4(uVar23,0);
            if (plVar26 != (long *)0x0) {
              if ((lVar15 != 0) &&
                 (lVar17 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar26 + 0x40)), lVar17 == 0)
                 ) {
LAB_024f4494:
                uVar16 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                FUN_021330e8(uVar16,0);
              }
              if ((int)plVar26[3] != 0) {
                plVar26[4] = lVar15;
                thunk_FUN_02134474(plVar26 + 4,lVar15);
                lVar15 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)PTR_DAT_04cb6de8,0);
                if ((lVar15 != 0) &&
                   (lVar17 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar26 + 0x40)),
                   lVar17 == 0)) goto LAB_024f4494;
                if ((*(uint *)(plVar26 + 3) & 0xfffffffe) != 0) {
                  plVar26[5] = lVar15;
                  thunk_FUN_02134474(plVar26 + 5,lVar15);
                  lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
                  UnityEngine_GameObject___ctor_43c2310
                            (lVar15,*(undefined8 *)PTR_DAT_04cbdeb8,plVar26,0);
                  if (lVar15 != 0) {
                    lVar17 = UnityEngine_GameObject__get_transform_43c1048(lVar15,0);
                    plVar26 = (long *)(param_4 + 0x60);
                    *plVar26 = lVar17;
                    thunk_FUN_02134474(plVar26,lVar17);
                    if (*plVar26 != 0) {
                      UnityEngine_Transform__SetParent_43d1e34(*plVar26,*plVar22,0,0);
                      lVar17 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                         (lVar15,*(undefined8 *)PTR_DAT_04cb6dc0);
                      if (lVar17 != 0) {
                        UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar17,uVar16,0);
                        lVar17 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                           (lVar15,*(undefined8 *)PTR_DAT_04cb6dc8);
                        plVar22 = (long *)(param_4 + 0x58);
                        *plVar22 = lVar17;
                        thunk_FUN_02134474(plVar22,lVar17);
                        lVar17 = *plVar22;
                        if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        uVar16 = Dino_BusSand_View_MaterialLibrary__Pile_23ba3ec(param_7,0);
                        if (lVar17 != 0) {
                          UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar17,uVar16,0);
                          if (*plVar22 != 0) {
                            UnityEngine_Renderer__set_shadowCastingMode_4373c54(*plVar22,0,0);
                            uVar16 = _UNK_00e6a5a8;
                            uVar30 = 0x40000000;
                            if ((param_6 != 0) &&
                               (uVar16 = _UNK_00e6a7e0, uVar30 = _UNK_00e203f0, param_6 == 1)) {
                              uVar16 = _UNK_00e69c38;
                              uVar30 = 0x40000000;
                            }
                            *(undefined4 *)(param_4 + 0x284) = uVar30;
                            *(undefined4 *)(param_4 + 0x28c) = 0;
                            *(undefined8 *)(param_4 + 0x290) = uVar16;
                            UnityEngine_GameObject__SetActive_43c1408(lVar15,0,0);
                            Dino_BusSand_View_VehicleView__BuildArrow_23f5e6c(param_4);
                            afStack_a0[0] = fStack_88;
                            fStack_94 = fStack_7c;
                            uStack_90 = uStack_78;
                            Dino_BusSand_View_VehicleView__BuildShadow_23f647c(param_4,afStack_a0);
                            Dino_BusSand_View_VehicleView__SetMode_23f6b40(param_4,0);
                            Dino_BusSand_View_VehicleView__ApplyBodyColor_23f6f64(param_4);
                            return;
                          }
                        }
                      }
                    }
                  }
                  goto LAB_024f448c;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
          }
        }
      }
    }
    goto LAB_024f448c;
  }
  if ((bRam0000000004f9cacf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbdef0);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cb6dc0);
    FUN_02132f7c(PTR_DAT_04cb6dc8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb27f8);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cbc2c8);
    FUN_02132f7c(PTR_DAT_04cbc460);
    FUN_02132f7c(PTR_DAT_04cbdef8);
    FUN_02132f7c(PTR_DAT_04cbdeb8);
    FUN_02132f7c(PTR_DAT_04cb9428);
    FUN_02132f7c(PTR_DAT_04cb6e08);
    FUN_02132f7c(PTR_DAT_04cbc868);
    FUN_02132f7c(PTR_DAT_04cbdd80);
    bRam0000000004f9cacf = 1;
  }
  uStack_80 = 0;
  fStack_7c = 0.0;
  uStack_78 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9cb0a == '\0') {
    FUN_02132f7c(PTR_DAT_04cbc2c8);
    cRam0000000004f9cb0a = '\x01';
  }
  puVar5 = PTR_DAT_04ca9ae8;
  lVar15 = *(long *)puVar4;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar15 = *(long *)puVar4;
  }
  uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar5);
  }
  puVar12 = PTR_DAT_04cbdeb8;
  puVar11 = PTR_DAT_04cbc460;
  puVar10 = PTR_DAT_04cb6de8;
  puVar9 = PTR_DAT_04cb6de0;
  puVar7 = PTR_DAT_04cb6dc8;
  puVar6 = PTR_DAT_04caa070;
  uVar14 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
  puVar8 = PTR_DAT_04cbdd80;
  if ((uVar14 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar16 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)puVar8,0);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar5);
    }
    uVar14 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
    if ((uVar14 & 1) != 0) {
      lVar15 = *(long *)puVar11;
      uVar16 = *(undefined8 *)(param_4 + 0xc0);
      *(undefined1 *)(param_4 + 0xe0) = 1;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar30 = Dino_BusSand_View_VehicleView__GlassBand_23f83f4(uVar16);
      *(undefined4 *)(param_4 + 0x178) = uVar30;
      *(float *)(param_4 + 0x17c) = fVar31;
      if ((*(long *)(param_4 + 0xc0) != 0) &&
         (lVar15 = *(long *)(*(long *)(param_4 + 0xc0) + 0x18), lVar15 != 0)) {
        UnityEngine_Mesh__get_bounds_438fac4(auStack_98,lVar15,0);
        *(float *)(param_4 + 0xb4) = fStack_94 + fStack_88;
        if ((*(long *)(param_4 + 0xc0) == 0) ||
           (lVar15 = *(long *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x60), lVar15 == 0))
        goto LAB_024f59f4;
        uVar14 = System_Collections_Generic_Dictionary_object__Vector4___TryGetValue_34cac28
                           (lVar15,*(undefined8 *)(*(long *)(param_4 + 0xc0) + 0x10),&uStack_80,
                            *(undefined8 *)PTR_DAT_04cbdef0);
        if ((uVar14 & 1) == 0) {
          uStack_78 = (ulong)*(uint *)(param_4 + 0xb4);
          uStack_80 = uVar30;
          fStack_7c = fVar31;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9cb0a == '\0') {
          FUN_02132f7c(PTR_DAT_04cbc2c8);
          cRam0000000004f9cb0a = '\x01';
        }
        lVar15 = *(long *)puVar4;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar15 = *(long *)puVar4;
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
        if (lVar15 == 0) goto LAB_024f59f4;
        iVar13 = *(int *)(param_4 + 0x24);
        uVar29 = _UNK_00e20170;
        if (iVar13 != 1) {
          uVar29 = 0x3fa00000;
        }
        uVar2 = _UNK_00e2038c;
        if (iVar13 != 0) {
          uVar2 = uVar29;
        }
        Dino_BusSand_View_VehicleBatch__KindFor_23efb84
                  (uVar30,fVar31,uStack_78 & 0xffffffff,uStack_78._4_4_,uVar2,lVar15,iVar13,
                   *(undefined8 *)(param_4 + 0xc0));
        if (cRam0000000004f9cb0a == '\0') {
          FUN_02132f7c(PTR_DAT_04cbc2c8);
          cRam0000000004f9cb0a = '\x01';
        }
        lVar15 = *(long *)puVar4;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar15 = *(long *)puVar4;
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
        if (lVar15 == 0) goto LAB_024f59f4;
        Dino_BusSand_View_VehicleBatch__Register_23efa48(lVar15,param_4);
        lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
        UnityEngine_GameObject___ctor_43c20cc(lVar15,*(undefined8 *)puVar12,0);
        if (lVar15 == 0) goto LAB_024f59f4;
        lVar17 = UnityEngine_GameObject__get_transform_43c1048(lVar15,0);
        plVar22 = (long *)(param_4 + 0x60);
        *plVar22 = lVar17;
        thunk_FUN_02134474(plVar22,lVar17);
        if (*plVar22 == 0) goto LAB_024f59f4;
        UnityEngine_Transform__SetParent_43d1e34(*plVar22,*(undefined8 *)(param_4 + 0x40),0,0);
        UnityEngine_GameObject__SetActive_43c1408(lVar15,0,0);
        lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
        UnityEngine_GameObject___ctor_43c20cc(lVar15,*(undefined8 *)PTR_DAT_04cb9428,0);
        if (lVar15 == 0) goto LAB_024f59f4;
        lVar15 = UnityEngine_GameObject__get_transform_43c1048(lVar15,0);
        plVar22 = (long *)(param_4 + 0x68);
        *plVar22 = lVar15;
        thunk_FUN_02134474(plVar22,lVar15);
        if (*plVar22 == 0) goto LAB_024f59f4;
        UnityEngine_Transform__SetParent_43d1e34(*plVar22,*(undefined8 *)(param_4 + 0x40),0,0);
        if ((*(long *)(param_4 + 0xc0) == 0) ||
           (lVar15 = *(long *)(*(long *)(param_4 + 0xc0) + 0x18), lVar15 == 0)) goto LAB_024f59f4;
        UnityEngine_Mesh__get_bounds_438fac4(auStack_98,lVar15,0);
        uStack_a8 = uStack_90;
        Dino_BusSand_View_VehicleView__BuildShadow_23f647c(param_4,auStack_b0);
        if (*(int *)(*(long *)PTR_DAT_04cb27f8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar14 = Dino_BusSand_RenderQuality__get_RealShadows_238a174(0);
        if ((uVar14 & 1) != 0) {
          if ((*(long *)(param_4 + 0x78) == 0) ||
             (lVar15 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_4 + 0x78),0),
             lVar15 == 0)) goto LAB_024f59f4;
          UnityEngine_GameObject__SetActive_43c1408(lVar15,0,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9cb0a == '\0') {
            FUN_02132f7c(PTR_DAT_04cbc2c8);
            cRam0000000004f9cb0a = '\x01';
          }
          lVar15 = *(long *)puVar4;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar15 = *(long *)puVar4;
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
          if (lVar15 == 0) goto LAB_024f59f4;
          uVar16 = Dino_BusSand_View_VehicleBatch__ShadowHullOf_23f3108
                             (lVar15,*(undefined4 *)(param_4 + 0x24));
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar5);
          }
          uVar14 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
          if ((uVar14 & 1) == 0) goto LAB_024f59bc;
          plVar22 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,2);
          uVar23 = *(undefined8 *)puVar9;
          if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
          }
          lVar15 = System_Type__GetTypeFromHandle_483f0b4(uVar23,0);
          puVar4 = PTR_DAT_04cb6dc0;
          if (plVar22 == (long *)0x0) goto LAB_024f59f4;
          if ((lVar15 != 0) &&
             (lVar17 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar22 + 0x40)), lVar17 == 0))
          goto LAB_024f59fc;
          if ((int)plVar22[3] != 0) {
            plVar22[4] = lVar15;
            thunk_FUN_02134474(plVar22 + 4,lVar15);
            lVar15 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar10,0);
            if ((lVar15 != 0) &&
               (lVar17 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar22 + 0x40)), lVar17 == 0))
            goto LAB_024f59fc;
            if ((*(uint *)(plVar22 + 3) & 0xfffffffe) != 0) {
              plVar22[5] = lVar15;
              thunk_FUN_02134474(plVar22 + 5,lVar15);
              lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
              puVar5 = PTR_DAT_04cbdef8;
              UnityEngine_GameObject___ctor_43c2310
                        (lVar15,*(undefined8 *)PTR_DAT_04cbdef8,plVar22,0);
              if ((lVar15 != 0) &&
                 (lVar17 = UnityEngine_GameObject__get_transform_43c1048(lVar15,0), lVar17 != 0)) {
                UnityEngine_Transform__SetParent_43d1e34(lVar17,*(undefined8 *)(param_4 + 0x40),0,0)
                ;
                lVar17 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                   (lVar15,*(undefined8 *)puVar4);
                if (lVar17 != 0) {
                  UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar17,uVar16,0);
                  lVar15 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                     (lVar15,*(undefined8 *)puVar7);
                  plVar22 = (long *)(param_4 + 0xd8);
                  *plVar22 = lVar15;
                  thunk_FUN_02134474(plVar22,lVar15);
                  lVar15 = *plVar22;
                  if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar16 = Dino_BusSand_View_MaterialLibrary__Lit_23b0e94
                                     (0,0,0,0x3f800000,0,0,*(undefined8 *)puVar5,0);
                  if (lVar15 != 0) {
                    UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar15,uVar16,0);
                    if (*plVar22 != 0) {
                      UnityEngine_Renderer__set_shadowCastingMode_4373c54(*plVar22,3,0);
                      if (*plVar22 != 0) {
                        UnityEngine_Renderer__set_receiveShadows_4373dcc(*plVar22,0,0);
                        goto LAB_024f59bc;
                      }
                    }
                  }
                }
              }
              goto LAB_024f59f4;
            }
          }
          goto LAB_024f59f8;
        }
        goto LAB_024f59bc;
      }
      goto LAB_024f59f4;
    }
  }
  plVar22 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,2);
  puVar4 = PTR_DAT_04ca9ac8;
  uVar16 = *(undefined8 *)puVar9;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar15 = System_Type__GetTypeFromHandle_483f0b4(uVar16,0);
  if (plVar22 == (long *)0x0) goto LAB_024f59f4;
  if ((lVar15 != 0) &&
     (lVar17 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar22 + 0x40)), lVar17 == 0)) {
LAB_024f59fc:
    uVar16 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar16,0);
  }
  if ((int)plVar22[3] == 0) {
LAB_024f59f8:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar22[4] = lVar15;
  thunk_FUN_02134474(plVar22 + 4,lVar15);
  lVar15 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar10,0);
  if ((lVar15 != 0) &&
     (lVar17 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar22 + 0x40)), lVar17 == 0))
  goto LAB_024f59fc;
  puVar5 = PTR_DAT_04cbc868;
  if ((*(uint *)(plVar22 + 3) & 0xfffffffe) == 0) goto LAB_024f59f8;
  plVar22[5] = lVar15;
  thunk_FUN_02134474(plVar22 + 5,lVar15);
  lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  UnityEngine_GameObject___ctor_43c2310(lVar15,*(undefined8 *)puVar5,plVar22,0);
  if ((lVar15 != 0) &&
     (lVar17 = UnityEngine_GameObject__get_transform_43c1048(lVar15,0), puVar8 = PTR_DAT_04cb6dc0,
     puVar5 = PTR_DAT_04cb27f8, lVar17 != 0)) {
    UnityEngine_Transform__SetParent_43d1e34(lVar17,*(undefined8 *)(param_4 + 0x40),0,0);
    uVar16 = *(undefined8 *)(param_4 + 0xc0);
    if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar17 = Dino_BusSand_View_VehicleView__PackedMesh_23f86a0(uVar16);
    lVar18 = UnityEngine_GameObject__GetComponent_object__275a5dc(lVar15,*(undefined8 *)puVar8);
    if (lVar18 != 0) {
      UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar18,lVar17,0);
      lVar15 = UnityEngine_GameObject__GetComponent_object__275a5dc(lVar15,*(undefined8 *)puVar7);
      plVar22 = (long *)(param_4 + 0x48);
      *plVar22 = lVar15;
      thunk_FUN_02134474(plVar22,lVar15);
      if (*plVar22 != 0) {
        UnityEngine_Renderer__set_shadowCastingMode_4373c54(*plVar22,0,0);
        if (*plVar22 != 0) {
          UnityEngine_Renderer__set_receiveShadows_4373dcc(*plVar22,1,0);
          *(undefined8 *)(param_4 + 0x50) = *(undefined8 *)(param_4 + 0x48);
          thunk_FUN_02134474((undefined8 *)(param_4 + 0x50));
          if (*(long *)(param_4 + 0xc0) != 0) {
            iVar13 = Dino_BusSand_ModelEntry__Slot_237db04
                               (*(long *)(param_4 + 0xc0),*(undefined8 *)PTR_DAT_04cb6e08,0);
            lVar15 = *(long *)puVar11;
            uVar16 = *(undefined8 *)(param_4 + 0xc0);
            *(uint *)(param_4 + 0xd0) = iVar13 >> 0x1f | 1;
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar30 = Dino_BusSand_View_VehicleView__GlassBand_23f83f4(uVar16);
            *(undefined4 *)(param_4 + 0x178) = uVar30;
            *(float *)(param_4 + 0x17c) = fVar31;
            if (lVar17 != 0) {
              UnityEngine_Mesh__get_bounds_438fac4(auStack_98,lVar17,0);
              lVar15 = *(long *)puVar5;
              *(float *)(param_4 + 0xb4) = fStack_94 + fStack_88;
              if (*(int *)(lVar15 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar14 = Dino_BusSand_RenderQuality__get_RealShadows_238a174(0);
              if ((uVar14 & 1) != 0) {
                plVar22 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,2);
                uVar16 = *(undefined8 *)puVar9;
                if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)(puVar4 + 0xe0));
                }
                lVar15 = System_Type__GetTypeFromHandle_483f0b4(uVar16,0);
                if (plVar22 == (long *)0x0) goto LAB_024f59f4;
                if ((lVar15 != 0) &&
                   (lVar18 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar22 + 0x40)),
                   lVar18 == 0)) goto LAB_024f59fc;
                if ((int)plVar22[3] == 0) goto LAB_024f59f8;
                plVar22[4] = lVar15;
                thunk_FUN_02134474(plVar22 + 4,lVar15);
                lVar15 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar10,0);
                if ((lVar15 != 0) &&
                   (lVar18 = thunk_FUN_0216e7a0(lVar15,*(undefined8 *)(*plVar22 + 0x40)),
                   lVar18 == 0)) goto LAB_024f59fc;
                if ((*(uint *)(plVar22 + 3) & 0xfffffffe) == 0) goto LAB_024f59f8;
                plVar22[5] = lVar15;
                thunk_FUN_02134474(plVar22 + 5,lVar15);
                lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
                puVar4 = PTR_DAT_04cbdef8;
                UnityEngine_GameObject___ctor_43c2310
                          (lVar15,*(undefined8 *)PTR_DAT_04cbdef8,plVar22,0);
                if ((lVar15 == 0) ||
                   (lVar18 = UnityEngine_GameObject__get_transform_43c1048(lVar15,0), lVar18 == 0))
                goto LAB_024f59f4;
                UnityEngine_Transform__SetParent_43d1e34(lVar18,*(undefined8 *)(param_4 + 0x40),0,0)
                ;
                lVar18 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                   (lVar15,*(undefined8 *)puVar8);
                uVar16 = *(undefined8 *)(param_4 + 0xc0);
                if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar11);
                }
                uVar16 = Dino_BusSand_View_VehicleView__ShadowMesh_23f9014(uVar16);
                if (lVar18 == 0) goto LAB_024f59f4;
                UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar18,uVar16,0);
                lVar15 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                   (lVar15,*(undefined8 *)puVar7);
                plVar22 = (long *)(param_4 + 0xd8);
                *plVar22 = lVar15;
                thunk_FUN_02134474(plVar22,lVar15);
                lVar15 = *plVar22;
                if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar16 = Dino_BusSand_View_MaterialLibrary__Lit_23b0e94
                                   (0,0,0,0x3f800000,0,0,*(undefined8 *)puVar4,0);
                if (lVar15 == 0) goto LAB_024f59f4;
                UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar15,uVar16,0);
                if (*plVar22 == 0) goto LAB_024f59f4;
                UnityEngine_Renderer__set_shadowCastingMode_4373c54(*plVar22,3,0);
                if (*plVar22 == 0) goto LAB_024f59f4;
                UnityEngine_Renderer__set_receiveShadows_4373dcc(*plVar22,0,0);
              }
              lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
              UnityEngine_GameObject___ctor_43c20cc(lVar15,*(undefined8 *)PTR_DAT_04cbdeb8,0);
              if (lVar15 != 0) {
                lVar18 = UnityEngine_GameObject__get_transform_43c1048(lVar15,0);
                plVar22 = (long *)(param_4 + 0x60);
                *plVar22 = lVar18;
                thunk_FUN_02134474(plVar22,lVar18);
                if (*plVar22 != 0) {
                  UnityEngine_Transform__SetParent_43d1e34
                            (*plVar22,*(undefined8 *)(param_4 + 0x40),0,0);
                  UnityEngine_GameObject__SetActive_43c1408(lVar15,0,0);
                  Dino_BusSand_View_VehicleView__BuildAuthoredArrow_23f92ec(param_4);
                  UnityEngine_Mesh__get_bounds_438fac4(auStack_98,lVar17,0);
                  uStack_c8 = uStack_90;
                  Dino_BusSand_View_VehicleView__BuildShadow_23f647c(param_4,auStack_d0);
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar14 = Dino_BusSand_RenderQuality__get_RealShadows_238a174(0);
                  if ((uVar14 & 1) != 0) {
                    if ((*(long *)(param_4 + 0x78) == 0) ||
                       (lVar15 = UnityEngine_Component__get_gameObject_43bcde8
                                           (*(long *)(param_4 + 0x78),0), lVar15 == 0))
                    goto LAB_024f59f4;
                    UnityEngine_GameObject__SetActive_43c1408(lVar15,0,0);
                  }
LAB_024f59bc:
                  Dino_BusSand_View_VehicleView__SetMode_23f6b40(param_4,0);
                  Dino_BusSand_View_VehicleView__ApplyBodyColor_23f6f64(param_4);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_024f59f4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

