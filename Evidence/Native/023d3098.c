/* IL2CPP: Dino.BusSand.App.UI.HallScene$$ReplaceCupProps
void Dino_BusSand_App_UI_HallScene__ReplaceCupProps (UnityEngine_Transform_o* root, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HallScene$$ReplaceCupProps
   void Dino_BusSand_App_UI_HallScene__ReplaceCupProps (UnityEngine_Transform_o* root, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HallScene__ReplaceCupProps_22d3098(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long *plVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  undefined8 *puVar34;
  undefined8 uVar35;
  long lVar36;
  int iVar37;
  uint uVar38;
  long *plVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  undefined4 uStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  
  puVar22 = PTR_DAT_04cab208;
  if ((bRam0000000004f9c3b8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6db8);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cb6dc0);
    FUN_02132f7c(PTR_DAT_04cb6dc8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cac6d8);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cb6dd8);
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cb6df0);
    FUN_02132f7c(PTR_DAT_04cb6df8);
    FUN_02132f7c(PTR_DAT_04cb6e00);
    FUN_02132f7c(PTR_DAT_04cb6e08);
    FUN_02132f7c(PTR_DAT_04cb6e10);
    FUN_02132f7c(PTR_DAT_04cb6e18);
    FUN_02132f7c(PTR_DAT_04cb6e20);
    FUN_02132f7c(PTR_DAT_04cb6e28);
    FUN_02132f7c(PTR_DAT_04cb6e30);
    FUN_02132f7c(PTR_DAT_04cb6e38);
    FUN_02132f7c(PTR_DAT_04cb6e40);
    FUN_02132f7c(PTR_DAT_04cb6e48);
    bRam0000000004f9c3b8 = 1;
  }
  if (*(int *)(*(long *)puVar22 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar25 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
  if ((param_1 != 0) &&
     (lVar26 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                         (param_1,1,*(undefined8 *)PTR_DAT_04cb6db8), puVar22 = PTR_DAT_04cb6e10,
     fVar20 = _UNK_00e20a7c, fVar19 = _UNK_00e20a74, uVar18 = _UNK_00e20a20, uVar17 = _UNK_00e20994,
     fVar16 = _UNK_00e20948, uVar15 = _UNK_00e208e0, fVar14 = _UNK_00e208d8, uVar13 = _UNK_00e20754,
     uVar12 = _UNK_00e206e4, uVar11 = _UNK_00e20390, uVar10 = _UNK_00e2038c, uVar9 = _UNK_00e201f4,
     uVar8 = _UNK_00e20180, uVar7 = _UNK_00e200f8, uVar6 = _UNK_00e20094, uVar5 = _UNK_00e1fde8,
     lVar26 != 0)) {
    uVar1 = *(uint *)(lVar26 + 0x18);
    if (0 < (int)uVar1) {
      uVar38 = 0;
      iVar37 = 0;
      puVar34 = (undefined8 *)PTR_DAT_04cb6df0;
      plVar29 = (long *)PTR_DAT_04ca9ae8;
      plVar39 = (long *)PTR_DAT_04cac6d8;
      do {
        if (uVar1 <= uVar38) goto LAB_023d3ad8;
        lVar36 = *(long *)(lVar26 + (long)(int)uVar38 * 8 + 0x20);
        if (((lVar36 == 0) ||
            (lVar27 = UnityEngine_Component__get_gameObject_43bcde8(lVar36,0), lVar27 == 0)) ||
           (lVar27 = UnityEngine_Object__get_name_43c71a4(lVar27,0), lVar27 == 0))
        goto LAB_023d3ad4;
        uVar28 = System_String__StartsWith_46d117c(lVar27,*puVar34,0);
        if ((uVar28 & 1) != 0) {
          UnityEngine_Renderer__get_bounds_4372fdc(&uStack_b8,lVar36,0);
          fVar42 = fStack_a4;
          fVar41 = fStack_a8;
          fVar40 = fStack_ac;
          uVar43 = uStack_b0;
          fVar47 = fStack_b4;
          uVar24 = uStack_b8;
          UnityEngine_Renderer__set_enabled_4373adc(lVar36,0,0);
          if (*(int *)(*plVar29 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar28 = UnityEngine_Object__op_Inequality_43c8dec(lVar25,0,0);
          if ((uVar28 & 1) != 0) {
            lVar27 = *plVar39;
            if (*(int *)(lVar27 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar27 = *plVar39;
            }
            lVar27 = *(long *)(*(long *)(lVar27 + 0xb8) + 0x38);
            if (lVar27 == 0) goto LAB_023d3ad4;
            uVar1 = *(uint *)(lVar27 + 0x18);
            iVar4 = 0;
            if (uVar1 != 0) {
              iVar4 = iVar37 / (int)uVar1;
            }
            uVar3 = iVar37 - iVar4 * uVar1;
            if (uVar1 <= uVar3) goto LAB_023d3ad8;
            if (lVar25 == 0) goto LAB_023d3ad4;
            lVar27 = Dino_BusSand_GameAssets__GetModel_237d214
                               (lVar25,*(undefined8 *)(lVar27 + (long)(int)uVar3 * 8 + 0x20),0);
            if (lVar27 != 0) {
              uVar35 = *(undefined8 *)(lVar27 + 0x18);
              if (*(int *)(*plVar29 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar28 = UnityEngine_Object__op_Equality_43c6f30(uVar35,0,0);
              if ((uVar28 & 1) == 0) {
                plVar29 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,2);
                uVar35 = *(undefined8 *)PTR_DAT_04cb6de0;
                if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
                }
                lVar30 = System_Type__GetTypeFromHandle_483f0b4(uVar35,0);
                if (plVar29 == (long *)0x0) goto LAB_023d3ad4;
                if ((lVar30 != 0) &&
                   (lVar31 = thunk_FUN_0216e7a0(lVar30,*(undefined8 *)(*plVar29 + 0x40)),
                   lVar31 == 0)) {
LAB_023d3adc:
                  uVar35 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                  FUN_021330e8(uVar35,0);
                }
                if ((int)plVar29[3] == 0) goto LAB_023d3ad8;
                plVar29[4] = lVar30;
                thunk_FUN_02134474(plVar29 + 4,lVar30);
                lVar30 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)PTR_DAT_04cb6de8,0);
                if ((lVar30 != 0) &&
                   (lVar31 = thunk_FUN_0216e7a0(lVar30,*(undefined8 *)(*plVar29 + 0x40)),
                   lVar31 == 0)) goto LAB_023d3adc;
                if ((*(uint *)(plVar29 + 3) & 0xfffffffe) == 0) {
LAB_023d3ad8:
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                plVar29[5] = lVar30;
                thunk_FUN_02134474(plVar29 + 5,lVar30);
                lVar30 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
                UnityEngine_GameObject___ctor_43c2310
                          (lVar30,*(undefined8 *)PTR_DAT_04cb6df8,plVar29,0);
                lVar31 = UnityEngine_Component__get_gameObject_43bcde8(lVar36,0);
                if ((lVar31 == 0) ||
                   (uVar23 = UnityEngine_GameObject__get_layer_43c1118(lVar31,0), lVar30 == 0))
                goto LAB_023d3ad4;
                UnityEngine_GameObject__set_layer_43c11cc(lVar30,uVar23,0);
                lVar31 = UnityEngine_GameObject__get_transform_43c1048(lVar30,0);
                lVar36 = UnityEngine_Component__get_transform_43bcd18(lVar36,0);
                if ((lVar36 == 0) ||
                   (uVar35 = UnityEngine_Transform__get_parent_43d0d70(lVar36,0), lVar31 == 0))
                goto LAB_023d3ad4;
                UnityEngine_Transform__SetParent_43d1e34(lVar31,uVar35,1,0);
                if (*(long *)(lVar27 + 0x18) == 0) goto LAB_023d3ad4;
                UnityEngine_Mesh__get_bounds_438fac4(&uStack_b8,*(long *)(lVar27 + 0x18),0);
                fVar40 = fVar40 + fVar40;
                fVar42 = fVar42 + fVar42;
                if (fVar40 <= fVar42) {
                  fVar40 = fVar42;
                }
                fVar42 = fStack_ac + fStack_ac;
                if (fStack_ac + fStack_ac <= fStack_a4 + fStack_a4) {
                  fVar42 = fStack_a4 + fStack_a4;
                }
                fVar46 = fVar20;
                if (fVar20 <= fVar42) {
                  fVar46 = fVar42;
                }
                lVar36 = UnityEngine_GameObject__get_transform_43c1048(lVar30,0);
                puVar21 = PTR_DAT_04caa208;
                if (cRam0000000004f9b65e == '\0') {
                  FUN_02132f7c(PTR_DAT_04caa208);
                  cRam0000000004f9b65e = '\x01';
                }
                if (lVar36 == 0) goto LAB_023d3ad4;
                lVar31 = *(long *)(*(long *)puVar21 + 0xb8);
                UnityEngine_Transform__set_localScale_43d1be0
                          (*(undefined4 *)(lVar31 + 0xc),*(undefined4 *)(lVar31 + 0x10),
                           *(undefined4 *)(lVar31 + 0x14),lVar36,0);
                lVar36 = UnityEngine_GameObject__get_transform_43c1048(lVar30,0);
                if (lVar36 == 0) goto LAB_023d3ad4;
                UnityEngine_Transform__set_position_43d0f1c(uVar24,fVar47 - fVar41,uVar43,lVar36,0);
                lVar36 = UnityEngine_GameObject__get_transform_43c1048(lVar30,0);
                UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                          (0,((float)iVar37 * 70.0 + 35.0) * fVar19,0,0);
                if (lVar36 == 0) goto LAB_023d3ad4;
                UnityEngine_Transform__set_rotation_43d13f8(lVar36,0);
                lVar36 = UnityEngine_GameObject__get_transform_43c1048(lVar30,0);
                if (cRam0000000004f9b65e == '\0') {
                  FUN_02132f7c(puVar21);
                  cRam0000000004f9b65e = '\x01';
                }
                uVar35 = *(undefined8 *)(*(long *)(*(long *)puVar21 + 0xb8) + 0xc);
                fVar47 = *(float *)(*(long *)(*(long *)puVar21 + 0xb8) + 0x14);
                lVar31 = UnityEngine_GameObject__get_transform_43c1048(lVar30,0);
                if ((lVar31 == 0) ||
                   (fVar41 = (float)UnityEngine_Transform__get_lossyScale_43d4cf0(lVar31,0),
                   lVar36 == 0)) goto LAB_023d3ad4;
                fVar42 = fVar16;
                if (fVar16 <= fVar41) {
                  fVar42 = fVar41;
                }
                fVar41 = (fVar40 / fVar46) * fVar14;
                fVar40 = ((float)((ulong)uVar35 >> 0x20) * fVar41) / fVar42;
                UnityEngine_Transform__set_localScale_43d1be0
                          (CONCAT44(fVar40,((float)uVar35 * fVar41) / fVar42),fVar40,
                           (fVar41 * fVar47) / fVar42,lVar36,0);
                lVar36 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                   (lVar30,*(undefined8 *)PTR_DAT_04cb6dc0);
                if (lVar36 == 0) goto LAB_023d3ad4;
                UnityEngine_MeshFilter__set_sharedMesh_4389470
                          (lVar36,*(undefined8 *)(lVar27 + 0x18),0);
                if (*(long *)(lVar27 + 0x18) == 0) goto LAB_023d3ad4;
                uVar24 = UnityEngine_Mesh__get_subMeshCount_436cb4c(*(long *)(lVar27 + 0x18),0);
                plVar29 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cb6dd8,uVar24);
                lVar36 = *plVar39;
                if (*(int *)(lVar36 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar36);
                  lVar36 = *plVar39;
                }
                lVar36 = *(long *)(*(long *)(lVar36 + 0xb8) + 0x40);
                if (lVar36 == 0) goto LAB_023d3ad4;
                uVar1 = *(uint *)(lVar36 + 0x18);
                iVar4 = 0;
                if (uVar1 != 0) {
                  iVar4 = iVar37 / (int)uVar1;
                }
                uVar3 = iVar37 - iVar4 * uVar1;
                if (uVar1 <= uVar3) goto LAB_023d3ad8;
                if (plVar29 == (long *)0x0) goto LAB_023d3ad4;
                if (0 < (int)plVar29[3]) {
                  uVar28 = 0;
                  lVar31 = 0x20;
                  uVar2 = *(undefined1 *)(lVar36 + (int)uVar3 + 0x20);
                  do {
                    lVar36 = *(long *)(lVar27 + 0x20);
                    puVar34 = (undefined8 *)puVar22;
                    if ((lVar36 != 0) && ((long)uVar28 < (long)(int)*(uint *)(lVar36 + 0x18))) {
                      if (*(uint *)(lVar36 + 0x18) <= uVar28) goto LAB_023d3ad8;
                      puVar34 = (undefined8 *)(lVar36 + lVar31);
                    }
                    uVar35 = *puVar34;
                    uVar32 = System_String__op_Equality_46d1108(uVar35,*(undefined8 *)puVar22,0);
                    if ((uVar32 & 1) == 0) {
                      uVar32 = System_String__op_Equality_46d1108
                                         (uVar35,*(undefined8 *)PTR_DAT_04cb6e08,0);
                      if ((uVar32 & 1) == 0) {
                        uVar32 = System_String__op_Equality_46d1108
                                           (uVar35,*(undefined8 *)PTR_DAT_04cb6e20,0);
                        if ((uVar32 & 1) != 0) {
                          puVar34 = (undefined8 *)PTR_DAT_04cb6e18;
                          uVar23 = uVar5;
                          uVar44 = uVar17;
                          uVar24 = uVar7;
                          uVar43 = uVar18;
                          uVar45 = uVar6;
                          if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                            puVar34 = (undefined8 *)PTR_DAT_04cb6e18;
                          }
                          goto LAB_023d3900;
                        }
                        uVar32 = System_String__op_Equality_46d1108
                                           (uVar35,*(undefined8 *)PTR_DAT_04cb6e00,0);
                        if ((uVar32 & 1) != 0) {
                          if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uVar35 = *(undefined8 *)PTR_DAT_04cb6e30;
                          uVar43 = uVar15;
                          uVar23 = uVar6;
                          uVar44 = 0x3f800000;
                          uVar24 = uVar8;
LAB_023d3a10:
                          lVar36 = Dino_BusSand_View_MaterialLibrary__Emissive_23bace0
                                             (uVar44,uVar43,uVar24,0x3f800000,uVar23,uVar35,0);
                          goto LAB_023d390c;
                        }
                        uVar32 = System_String__op_Equality_46d1108
                                           (uVar35,*(undefined8 *)PTR_DAT_04cb6e38,0);
                        if ((uVar32 & 1) != 0) {
                          if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uVar23 = 0x3f000000;
                          uVar35 = *(undefined8 *)PTR_DAT_04cb6e40;
                          uVar43 = uVar13;
                          uVar44 = uVar10;
                          uVar24 = _UNK_00e205f8;
                          goto LAB_023d3a10;
                        }
                        if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        uVar45 = 0;
                        uVar35 = *(undefined8 *)PTR_DAT_04cb6e48;
                        uVar23 = uVar13;
                        uVar44 = _UNK_00e2098c;
                        uVar24 = uVar13;
                        uVar43 = uVar9;
                      }
                      else {
                        if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        puVar34 = (undefined8 *)PTR_DAT_04cb6e28;
                        uVar23 = uVar11;
                        uVar44 = uVar8;
                        uVar24 = uVar9;
                        uVar43 = uVar12;
                        uVar45 = 0;
LAB_023d3900:
                        uVar35 = *puVar34;
                      }
                      lVar36 = Dino_BusSand_View_MaterialLibrary__Lit_23b0e94
                                         (uVar24,uVar23,uVar43,0x3f800000,uVar44,uVar45,uVar35,0);
                    }
                    else {
                      if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      lVar36 = Dino_BusSand_View_MaterialLibrary__Paint_23baef0(uVar2,0);
                    }
LAB_023d390c:
                    if ((lVar36 != 0) &&
                       (lVar33 = thunk_FUN_0216e7a0(lVar36,*(undefined8 *)(*plVar29 + 0x40)),
                       lVar33 == 0)) goto LAB_023d3adc;
                    if (*(uint *)(plVar29 + 3) <= uVar28) goto LAB_023d3ad8;
                    *(long *)((long)plVar29 + lVar31) = lVar36;
                    thunk_FUN_02134474((long)plVar29 + lVar31,lVar36);
                    uVar28 = uVar28 + 1;
                    lVar31 = lVar31 + 8;
                  } while ((long)uVar28 < (long)(int)plVar29[3]);
                }
                lVar36 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                   (lVar30,*(undefined8 *)PTR_DAT_04cb6dc8);
                if (lVar36 == 0) goto LAB_023d3ad4;
                UnityEngine_Renderer__set_sharedMaterials_43743d4(lVar36,plVar29,0);
                iVar37 = iVar37 + 1;
                puVar34 = (undefined8 *)PTR_DAT_04cb6df0;
                plVar29 = (long *)PTR_DAT_04ca9ae8;
                plVar39 = (long *)PTR_DAT_04cac6d8;
              }
            }
          }
        }
        uVar1 = *(uint *)(lVar26 + 0x18);
        uVar38 = uVar38 + 1;
      } while ((int)uVar38 < (int)uVar1);
    }
    return;
  }
LAB_023d3ad4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

