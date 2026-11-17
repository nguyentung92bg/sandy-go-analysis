/* IL2CPP: Dino.BusSand.View.VehicleView$$UseFireTruckModel
bool Dino_BusSand_View_VehicleView__UseFireTruckModel (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$UseFireTruckModel
   bool Dino_BusSand_View_VehicleView__UseFireTruckModel (Dino_BusSand_View_VehicleView_o* __this,
   const MethodInfo* method); */

uint Dino_BusSand_View_VehicleView__UseFireTruckModel_23fcbd0(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  uint uVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  float fStack_78;
  float fStack_74;
  
  if ((bRam0000000004f9caef & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04caa138);
    FUN_02132f7c(PTR_DAT_04cb7780);
    FUN_02132f7c(PTR_DAT_04cb7798);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad3a0);
    FUN_02132f7c(PTR_DAT_04cbc460);
    FUN_02132f7c(PTR_DAT_04cb9428);
    FUN_02132f7c(PTR_DAT_04cb6950);
    FUN_02132f7c(PTR_DAT_04cbc440);
    FUN_02132f7c(PTR_DAT_04cbc868);
    bRam0000000004f9caef = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  if (*(char *)(param_1 + 0xe1) == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    uVar6 = 0;
    if ((uVar7 & 1) != 0) {
      lVar8 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
      if (lVar8 == 0) goto LAB_024fd354;
      uVar6 = *(undefined8 *)(lVar8 + 0xa8);
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  puVar4 = PTR_DAT_04cbc868;
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_1 + 0x40) != 0) {
      lVar8 = UnityEngine_Transform__Find_43d4bec
                        (*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_04cbc868,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
      if ((uVar7 & 1) != 0) {
        if ((lVar8 == 0) ||
           (lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0), lVar9 == 0))
        goto LAB_024fd354;
        UnityEngine_GameObject__SetActive_43c1408(lVar9,0,0);
        uVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        UnityEngine_Object__Destroy_43c8114(uVar10,0);
      }
      plVar13 = (long *)(param_1 + 0x78);
      lVar8 = *plVar13;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
      if ((uVar7 & 1) != 0) {
        if (*plVar13 == 0) goto LAB_024fd354;
        uVar10 = UnityEngine_Transform__get_parent_43d0d70(*plVar13,0);
        uVar14 = *(undefined8 *)(param_1 + 0x38);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar10,uVar14,0);
        if ((uVar7 & 1) != 0) {
          if (*plVar13 == 0) goto LAB_024fd354;
          uVar10 = UnityEngine_Object__get_name_43c71a4(*plVar13,0);
          uVar7 = System_String__op_Equality_46d1108(uVar10,*(undefined8 *)PTR_DAT_04cb6950,0);
          if ((uVar7 & 1) != 0) {
            if (*plVar13 == 0) goto LAB_024fd354;
            uVar10 = UnityEngine_Component__get_gameObject_43bcde8(*plVar13,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar3);
            }
            UnityEngine_Object__Destroy_43c8114(uVar10,0);
          }
        }
      }
      uVar10 = *(undefined8 *)(param_1 + 0x40);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar8 = UnityEngine_Object__Instantiate_object__2805310
                        (uVar6,uVar10,0,*(undefined8 *)PTR_DAT_04cad390);
      if (lVar8 != 0) {
        UnityEngine_Object__set_name_43c72ec(lVar8,*(undefined8 *)puVar4,0);
        lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
        lVar11 = Dino_BusSand_Util__FindDeep_238d3bc(lVar9,*(undefined8 *)PTR_DAT_04cbc440,0);
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
        lVar12 = 0;
        if ((uVar7 & 1) != 0) {
          if (lVar11 == 0) goto LAB_024fd354;
          lVar12 = UnityEngine_Component__GetComponent_object__26f97e8
                             (lVar11,*(undefined8 *)PTR_DAT_04cb7780);
        }
        plVar15 = (long *)(param_1 + 0xe8);
        *plVar15 = lVar12;
        thunk_FUN_02134474(plVar15);
        lVar11 = *plVar15;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
        puVar4 = PTR_DAT_04caa208;
        if ((uVar7 & 1) == 0) {
          if (cRam0000000004f9b65d == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65d = '\x01';
          }
          lVar11 = *(long *)(*(long *)puVar4 + 0xb8);
          fVar20 = *(float *)(lVar11 + 4);
          fVar19 = *(float *)(lVar11 + 8);
          fVar21 = _UNK_00e20b48;
          fVar17 = _UNK_00e20240;
        }
        else {
          if (((*plVar15 == 0) ||
              (lVar11 = UnityEngine_Component__GetComponent_object__26f97e8
                                  (*plVar15,*(undefined8 *)PTR_DAT_04caa138), lVar11 == 0)) ||
             (lVar11 = UnityEngine_MeshFilter__get_sharedMesh_43893a0(lVar11,0), lVar11 == 0))
          goto LAB_024fd354;
          UnityEngine_Mesh__get_bounds_438fac4(&uStack_88,lVar11,0);
          fVar21 = fStack_78;
          fVar19 = (float)uStack_80;
          fVar20 = uStack_88._4_4_;
          fVar17 = fStack_74 + fStack_74;
        }
        uVar1 = *(undefined4 *)(param_1 + 0x24);
        if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        dVar18 = (double)Dino_BusSand_Core_BusGeometry__LengthCells_2429dc0(uVar1,0);
        fVar17 = ((float)dVar18 / *(float *)(param_1 + 0xbc)) / fVar17;
        fVar22 = 1.0;
        if (fVar17 <= 1.0) {
          fVar22 = fVar17;
        }
        if (cRam0000000004f9b65e == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65e = '\x01';
        }
        if (lVar9 != 0) {
          lVar11 = *(long *)(*(long *)puVar4 + 0xb8);
          UnityEngine_Transform__set_localScale_43d1be0
                    (fVar22 * *(float *)(lVar11 + 0xc),fVar22 * *(float *)(lVar11 + 0x10),
                     fVar22 * *(float *)(lVar11 + 0x14),lVar9,0);
          UnityEngine_Transform__set_localPosition_43cfda8(0,0,-(fVar19 * fVar22),lVar9,0);
          lVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                            (lVar8,1,*(undefined8 *)PTR_DAT_04cb7798);
          puVar4 = PTR_DAT_04cad3a0;
          if (lVar8 != 0) {
            uVar2 = *(uint *)(lVar8 + 0x18);
            if (0 < (int)uVar2) {
              uVar16 = 0;
              do {
                if (uVar2 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                plVar15 = *(long **)(lVar8 + (long)(int)uVar16 * 8 + 0x20);
                if (plVar15 == (long *)0x0) goto LAB_024fd354;
                if (*plVar15 != *(long *)puVar4) {
                  UnityEngine_Renderer__set_shadowCastingMode_4373c54(plVar15,0,0);
                  UnityEngine_Renderer__set_receiveShadows_4373dcc(plVar15,0,0);
                  UnityEngine_Renderer__set_lightProbeUsage_4373e90(plVar15,0,0);
                  UnityEngine_Renderer__set_reflectionProbeUsage_4373f54(plVar15,0,0);
                }
                uVar2 = *(uint *)(lVar8 + 0x18);
                uVar16 = uVar16 + 1;
              } while ((int)uVar16 < (int)uVar2);
            }
            lVar8 = Dino_BusSand_Util__FindDeep_238d3bc(lVar9,*(undefined8 *)PTR_DAT_04cb6950,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar3);
            }
            uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
            if ((uVar7 & 1) != 0) {
              if (lVar8 == 0) goto LAB_024fd354;
              UnityEngine_Transform__SetParent_43d1e34(lVar8,*(undefined8 *)(param_1 + 0x38),0,0);
              UnityEngine_Transform__set_localPosition_43cfda8
                        (0,0,-(fVar19 * fVar22) * *(float *)(param_1 + 0xb0),lVar8,0);
              *(long *)(param_1 + 0x78) = lVar8;
              thunk_FUN_02134474(plVar13,lVar8);
              *(float *)(param_1 + 0x38c) = fVar22;
              *(undefined4 *)(param_1 + 0x390) = 0x3f800000;
              *(float *)(param_1 + 0x394) = fVar22;
            }
            *(undefined8 *)(param_1 + 0xf8) = 0;
            thunk_FUN_02134474((undefined8 *)(param_1 + 0xf8),0);
            *(undefined8 *)(param_1 + 0xf0) = 0;
            thunk_FUN_02134474((undefined8 *)(param_1 + 0xf0),0);
            lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
            UnityEngine_GameObject___ctor_43c20cc(lVar8,*(undefined8 *)PTR_DAT_04cb9428,0);
            if (lVar8 != 0) {
              lVar8 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0);
              plVar13 = (long *)(param_1 + 0x68);
              *plVar13 = lVar8;
              thunk_FUN_02134474(plVar13,lVar8);
              if (*plVar13 != 0) {
                UnityEngine_Transform__SetParent_43d1e34
                          (*plVar13,*(undefined8 *)(param_1 + 0x40),0,0);
                *(undefined8 *)(param_1 + 0x118) = 0;
                thunk_FUN_02134474(param_1 + 0x118,0);
                puVar3 = PTR_DAT_04cbc460;
                lVar8 = *(long *)PTR_DAT_04cbc460;
                *(float *)(param_1 + 0xb4) = (fVar20 + fVar21) * fVar22;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar8 = *(long *)puVar3;
                }
                puVar4 = PTR_DAT_04cac878;
                lVar8 = *(long *)(lVar8 + 0xb8);
                uStack_80 = 0;
                uStack_88 = 0;
                fStack_78 = 0.0;
                System_Nullable_Color____ctor_2bc9090
                          (*(undefined4 *)(lVar8 + 0x90),*(undefined4 *)(lVar8 + 0x94),
                           *(undefined4 *)(lVar8 + 0x98),*(undefined4 *)(lVar8 + 0x9c),&uStack_88,
                           *(undefined8 *)PTR_DAT_04cac878);
                lVar8 = *(long *)puVar3;
                uVar6 = *(undefined8 *)puVar4;
                uStack_a0 = 0;
                uStack_98 = 0;
                *(undefined8 *)(param_1 + 0x2e8) = uStack_80;
                *(undefined8 *)(param_1 + 0x2e0) = uStack_88;
                *(float *)(param_1 + 0x2f0) = fStack_78;
                lVar8 = *(long *)(lVar8 + 0xb8);
                uStack_90 = 0;
                System_Nullable_Color____ctor_2bc9090
                          (*(undefined4 *)(lVar8 + 0xa0),*(undefined4 *)(lVar8 + 0xa4),
                           *(undefined4 *)(lVar8 + 0xa8),*(undefined4 *)(lVar8 + 0xac),&uStack_a0,
                           uVar6);
                *(undefined8 *)(param_1 + 0x2fc) = uStack_98;
                *(undefined8 *)(param_1 + 0x2f4) = uStack_a0;
                *(undefined4 *)(param_1 + 0x304) = uStack_90;
                Dino_BusSand_View_VehicleView__SuppressArrow_23fc7e4(param_1,1);
                Dino_BusSand_View_VehicleView__ApplyBodyColor_23f6f64(param_1);
                goto LAB_024fd328;
              }
            }
          }
        }
      }
    }
LAB_024fd354:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_024fd328:
  return (uVar5 ^ 0xffffffff) & 1;
}

