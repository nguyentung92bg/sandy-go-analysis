/* IL2CPP: Dino.BusSand.View.MechanicLayer$$BuildStation
void Dino_BusSand_View_MechanicLayer__BuildStation (Dino_BusSand_View_MechanicLayer_o* __this, Dino_BusSand_Core_Truck_o* t, Dino_BusSand_View_VehicleView_o* v, Dino_BusSand_View_MechanicLayer_Deco_o* d, UnityEngine_GameObject_o* prefab, double px, double pz, float sc, bool flip, bool solid, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$BuildStation
   void Dino_BusSand_View_MechanicLayer__BuildStation (Dino_BusSand_View_MechanicLayer_o* __this,
   Dino_BusSand_Core_Truck_o* t, Dino_BusSand_View_VehicleView_o* v,
   Dino_BusSand_View_MechanicLayer_Deco_o* d, UnityEngine_GameObject_o* prefab, double px, double
   pz, float sc, bool flip, bool solid, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__BuildStation_23c94c8
               (undefined8 param_1,ulong param_2,float param_3,undefined4 param_4,long param_5,
               long param_6,long param_7,long param_8,undefined8 param_9,uint param_10,byte param_11
               )

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  float *pfVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  
  fVar20 = param_3;
  if ((bRam0000000004f9c9dc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa138);
    FUN_02132f7c(PTR_DAT_04cb7780);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cbc910);
    FUN_02132f7c(PTR_DAT_04cbd330);
    FUN_02132f7c(PTR_DAT_04cac5d0);
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc250);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cbd338);
    FUN_02132f7c(PTR_DAT_04cbd340);
    FUN_02132f7c(PTR_DAT_04cbd348);
    FUN_02132f7c(PTR_DAT_04cbd350);
    bRam0000000004f9c9dc = 1;
  }
  if (*(long *)(param_5 + 0x28) != 0) {
    uVar18 = Dino_BusSand_View_StageLayout__YardToWorld_23e8904
                       (param_1,param_2,*(long *)(param_5 + 0x28),0);
    uVar26 = 0;
    uVar21 = _UNK_00e20418;
    uVar19 = UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,_UNK_00e20418,0,0);
    puVar2 = PTR_DAT_04cbd338;
    if (param_7 != 0) {
      fVar29 = *(float *)(param_7 + 0xb0);
      uVar4 = UnityEngine_Component__get_transform_43bcd18(param_5,0);
      lVar5 = Dino_BusSand_View_MechanicLayer__Art_23c8dd4
                        (uVar18,param_2 & 0xffffffff,fVar20,uVar19,uVar21,uVar26,param_4,
                         fVar29 * param_3,param_5,param_9,uVar4,*(undefined8 *)puVar2);
      if (lVar5 != 0) {
        fVar20 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar5,0);
        if ((param_10 & 1) != 0) {
          UnityEngine_Transform__set_localScale_43d1be0(fVar20,fVar20,-fVar20,lVar5,0);
        }
        puVar3 = PTR_DAT_04cbd350;
        puVar2 = PTR_DAT_04ca9ae8;
        if (param_8 != 0) {
          *(long *)(param_8 + 0x10) = lVar5;
          thunk_FUN_02134474((long *)(param_8 + 0x10),lVar5);
          uVar4 = *(undefined8 *)puVar3;
          *(byte *)(param_8 + 0xa8) = param_11 & 1;
          lVar6 = Dino_BusSand_Util__FindDeep_238d3bc(lVar5,uVar4,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
          lVar16 = 0;
          if ((uVar7 & 1) != 0) {
            if (lVar6 == 0) goto LAB_024ca048;
            lVar16 = UnityEngine_Component__GetComponent_object__26f97e8
                               (lVar6,*(undefined8 *)PTR_DAT_04cb7780);
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
          if ((uVar7 & 1) != 0) {
            if ((lVar6 == 0) ||
               (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0), lVar6 == 0))
            goto LAB_024ca048;
            UnityEngine_GameObject__SetActive_43c1408(lVar6,0,0);
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar16,0,0);
          plVar8 = (long *)PTR_DAT_04caa208;
          if ((uVar7 & 1) != 0) {
            plVar8 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,2);
            uVar4 = *(undefined8 *)PTR_DAT_04cb6de0;
            if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
            }
            lVar6 = System_Type__GetTypeFromHandle_483f0b4(uVar4,0);
            if (plVar8 == (long *)0x0) goto LAB_024ca048;
            if ((lVar6 != 0) &&
               (lVar9 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_024ca050:
              uVar4 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar4,0);
            }
            if ((int)plVar8[3] == 0) {
LAB_024ca04c:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            plVar8[4] = lVar6;
            thunk_FUN_02134474(plVar8 + 4,lVar6);
            lVar6 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)PTR_DAT_04cb6de8,0);
            if ((lVar6 != 0) &&
               (lVar9 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
            goto LAB_024ca050;
            if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) goto LAB_024ca04c;
            plVar8[5] = lVar6;
            thunk_FUN_02134474(plVar8 + 5,lVar6);
            lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
            UnityEngine_GameObject___ctor_43c2310(lVar6,*(undefined8 *)PTR_DAT_04cbd340,plVar8,0);
            if (lVar6 == 0) goto LAB_024ca048;
            lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar6,0);
            uVar4 = UnityEngine_Component__get_transform_43bcd18(param_5,0);
            if (lVar6 == 0) goto LAB_024ca048;
            UnityEngine_Transform__SetParent_43d1e34(lVar6,uVar4,0,0);
            puVar2 = PTR_DAT_04cbc910;
            lVar9 = *(long *)PTR_DAT_04cbc910;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar9 = *(long *)puVar2;
            }
            puVar11 = *(undefined4 **)(lVar9 + 0xb8);
            uVar18 = puVar11[1];
            uVar19 = puVar11[2];
            uVar21 = UnityEngine_Transform__TransformPoint_43d3c44(*puVar11,lVar5,0);
            lVar9 = *(long *)puVar2;
            *(undefined4 *)(param_8 + 0x78) = uVar21;
            *(undefined4 *)(param_8 + 0x7c) = uVar18;
            *(undefined4 *)(param_8 + 0x80) = uVar19;
            lVar9 = *(long *)(lVar9 + 0xb8);
            fVar22 = *(float *)(lVar9 + 0x10);
            fVar24 = *(float *)(lVar9 + 0x14);
            fVar29 = (float)UnityEngine_Transform__TransformDirection_43d2474
                                      (*(undefined4 *)(lVar9 + 0xc),lVar5,0);
            if (cRam0000000004f9b65c == '\0') {
              FUN_02132f7c(PTR_DAT_04caa200);
              cRam0000000004f9b65c = '\x01';
            }
            puVar2 = PTR_DAT_04caa200;
            if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            fVar34 = _UNK_00e20a08;
            fVar25 = SQRT(fVar24 * fVar24 + fVar29 * fVar29 + fVar22 * fVar22);
            if (fVar25 <= _UNK_00e20a08) {
              if (cRam0000000004f9b65d == '\0') {
                FUN_02132f7c(PTR_DAT_04caa208);
                cRam0000000004f9b65d = '\x01';
              }
              uVar4 = **(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
              fVar24 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
            }
            else {
              uVar4 = CONCAT44(fVar22 / fVar25,fVar29 / fVar25);
              fVar24 = fVar24 / fVar25;
            }
            *(undefined8 *)(param_8 + 0x84) = uVar4;
            *(float *)(param_8 + 0x8c) = fVar24;
            lVar9 = *(long *)(param_7 + 0x38);
            if (lVar9 == 0) goto LAB_024ca048;
            fVar24 = (float)UnityEngine_Transform__get_position_43d0e48(lVar9,0);
            fVar22 = *(float *)(param_8 + 0x78);
            fVar24 = fVar24 - fVar22;
            fVar31 = fVar25 - *(float *)(param_8 + 0x80);
            fVar29 = (float)UnityEngine_Transform__get_position_43d0e48(lVar9,0);
            if (cRam0000000004f9bcf8 == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9bcf8 = '\x01';
            }
            fVar23 = _UNK_00e1fe00;
            fVar28 = *(float *)(param_7 + 0xb0) * _UNK_00e20328;
            uVar4 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
            fVar27 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
            fVar30 = fVar24 * fVar24 + fVar31 * fVar31;
            uVar4 = CONCAT44(fVar22 + (float)((ulong)uVar4 >> 0x20) * fVar28,
                             fVar29 + (float)uVar4 * fVar28);
            *(undefined8 *)(param_8 + 0x90) = uVar4;
            *(float *)(param_8 + 0x98) = fVar25 + fVar27 * fVar28;
            if (fVar30 <= fVar23) {
              fVar24 = (float)UnityEngine_Transform__get_forward_43d17f4(lVar9,0);
              fVar31 = (float)uVar4;
              plVar8 = (long *)PTR_DAT_04caa208;
            }
            else {
              if (cRam0000000004f9b65c == '\0') {
                FUN_02132f7c(PTR_DAT_04caa200);
                cRam0000000004f9b65c = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              plVar8 = (long *)PTR_DAT_04caa208;
              fVar30 = SQRT(fVar30);
              if (fVar30 <= fVar34) {
                if (cRam0000000004f9b65d == '\0') {
                  FUN_02132f7c(PTR_DAT_04caa208);
                  cRam0000000004f9b65d = '\x01';
                }
                pfVar12 = *(float **)(*plVar8 + 0xb8);
                fVar24 = *pfVar12;
                fVar23 = pfVar12[1];
                fVar31 = pfVar12[2];
              }
              else {
                fVar24 = fVar24 / fVar30;
                fVar23 = 0.0 / fVar30;
                fVar31 = fVar31 / fVar30;
              }
            }
            *(float *)(param_8 + 0xa4) = fVar31;
            *(float *)(param_8 + 0x9c) = fVar24;
            *(float *)(param_8 + 0xa0) = fVar23;
            UnityEngine_Transform__set_position_43d0f1c
                      (*(undefined4 *)(param_8 + 0x78),*(undefined4 *)(param_8 + 0x7c),
                       *(undefined4 *)(param_8 + 0x80),lVar6,0);
            if (cRam0000000004f9b65e == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65e = '\x01';
            }
            lVar9 = *(long *)(*plVar8 + 0xb8);
            fVar29 = *(float *)(param_7 + 0xb0) * param_3;
            UnityEngine_Transform__set_localScale_43d1be0
                      (*(float *)(lVar9 + 0xc) * fVar29,*(float *)(lVar9 + 0x10) * fVar29,
                       *(float *)(lVar9 + 0x14) * fVar29,lVar6,0);
            lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa148);
            UnityEngine_Mesh___ctor_4389e48(lVar9,0);
            if (lVar9 == 0) goto LAB_024ca048;
            UnityEngine_Object__set_name_43c72ec(lVar9,*(undefined8 *)PTR_DAT_04cbd348,0);
            plVar17 = (long *)(param_8 + 0x70);
            *plVar17 = lVar9;
            thunk_FUN_02134474(plVar17,lVar9);
            if (*plVar17 == 0) goto LAB_024ca048;
            UnityEngine_Mesh__MarkDynamic_439609c(*plVar17,0);
            lVar9 = *(long *)(param_5 + 0xd8);
            if (lVar9 == 0) goto LAB_024ca048;
            lVar13 = *(long *)(lVar9 + 0x10);
            lVar10 = *plVar17;
            lVar15 = *(long *)PTR_DAT_04cbd330;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_024ca048;
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              plVar14 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
              *plVar14 = lVar10;
              thunk_FUN_02134474(plVar14);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar9,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            uVar4 = *(undefined8 *)(param_8 + 0x70);
            uVar21 = *(undefined4 *)(param_8 + 0x78);
            uVar18 = *(undefined4 *)(param_8 + 0x7c);
            uVar19 = *(undefined4 *)(param_8 + 0x80);
            uVar26 = *(undefined4 *)(param_8 + 0x84);
            uVar32 = *(undefined4 *)(param_8 + 0x88);
            uVar33 = *(undefined4 *)(param_8 + 0x8c);
            if (*(int *)(*(long *)PTR_DAT_04cbc910 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_View_GasHose__Build_23b335c
                      (uVar21,uVar18,uVar19,uVar26,uVar32,uVar33,uVar4,lVar6);
            lVar9 = UnityEngine_Component__GetComponent_object__26f97e8
                              (lVar6,*(undefined8 *)PTR_DAT_04caa138);
            if (lVar9 == 0) goto LAB_024ca048;
            UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar9,*plVar17,0);
            lVar9 = UnityEngine_Component__GetComponent_object__26f97e8
                              (lVar6,*(undefined8 *)PTR_DAT_04cb7780);
            if ((lVar16 == 0) ||
               (uVar4 = UnityEngine_Renderer__get_sharedMaterial_43743c8(lVar16,0), lVar9 == 0))
            goto LAB_024ca048;
            UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar9,uVar4,0);
            UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar9,0,0);
            UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar9,0,0);
            *(long *)(param_8 + 0x68) = lVar6;
            thunk_FUN_02134474((long *)(param_8 + 0x68),lVar6);
            plVar17 = (long *)(param_8 + 0x50);
            *plVar17 = lVar9;
            thunk_FUN_02134474(plVar17,lVar9);
            Dino_BusSand_View_MechanicLayer__SetPipe_23ca164(0,param_5,*plVar17);
          }
          puVar2 = PTR_DAT_04cac5d0;
          lVar6 = *(long *)PTR_DAT_04cac5d0;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          uVar19 = *(undefined4 *)(lVar6 + 0x34);
          uVar26 = *(undefined4 *)(lVar6 + 0x38);
          uVar18 = UnityEngine_Transform__TransformPoint_43d3c44
                             (*(undefined4 *)(lVar6 + 0x30),lVar5,0);
          uVar21 = _UNK_00e20094;
          *(undefined4 *)(param_8 + 0x58) = uVar18;
          *(undefined4 *)(param_8 + 0x5c) = uVar19;
          *(undefined4 *)(param_8 + 0x60) = uVar26;
          lVar6 = Dino_BusSand_View_MechanicLayer__Label_23c26b4(param_5,lVar5);
          plVar17 = (long *)(param_8 + 0x40);
          *plVar17 = lVar6;
          thunk_FUN_02134474(plVar17,lVar6);
          if ((*plVar17 != 0) &&
             (lVar6 = TMPro_TextMeshPro__get_transform_430ef6c(*plVar17,0), lVar6 != 0)) {
            fVar29 = _UNK_00e20a08;
            if (_UNK_00e20a08 <= fVar20) {
              fVar29 = fVar20;
            }
            fVar29 = (*(float *)(param_7 + 0xb0) * _UNK_00e208a4 * param_3 * 0.5) / fVar29;
            fVar20 = -fVar29;
            if ((param_10 & 1) == 0) {
              fVar20 = fVar29;
            }
            UnityEngine_Transform__set_localScale_43d1be0(fVar29,fVar29,fVar20,lVar6,0);
            puVar2 = PTR_DAT_04cbc250;
            if (*plVar17 != 0) {
              lVar6 = TMPro_TextMeshPro__get_transform_430ef6c(*plVar17,0);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              Dino_BusSand_View_StageLayout__get_FacingRotation_23e8a38(0);
              if (lVar6 != 0) {
                UnityEngine_Transform__set_rotation_43d13f8(lVar6,0);
                if (*plVar17 != 0) {
                  lVar6 = TMPro_TextMeshPro__get_transform_430ef6c(*plVar17,0);
                  fVar24 = *(float *)(param_8 + 0x58);
                  fVar22 = *(float *)(param_8 + 0x5c);
                  fVar34 = *(float *)(param_8 + 0x60);
                  uVar18 = Dino_BusSand_View_StageLayout__get_FacingRotation_23e8a38(0);
                  if (cRam0000000004f9c41d == '\0') {
                    FUN_02132f7c(PTR_DAT_04caa208);
                    cRam0000000004f9c41d = '\x01';
                  }
                  lVar16 = *(long *)(*plVar8 + 0xb8);
                  fVar31 = (float)UnityEngine_Quaternion__op_Multiply_43af48c
                                            (uVar18,fVar29,fVar20,uVar21,
                                             *(undefined4 *)(lVar16 + 0x48),
                                             *(undefined4 *)(lVar16 + 0x4c),
                                             *(undefined4 *)(lVar16 + 0x50),0);
                  fVar25 = _UNK_00e207cc;
                  if (lVar6 != 0) {
                    param_3 = *(float *)(param_7 + 0xb0) * _UNK_00e207cc * param_3;
                    UnityEngine_Transform__set_position_43d0f1c
                              (fVar24 - fVar31 * param_3,fVar22 - fVar29 * param_3,
                               fVar34 - fVar20 * param_3,lVar6,0);
                    if (param_6 != 0) {
                      plVar17 = (long *)*plVar17;
                      uVar4 = System_Int32__ToString_482d750(param_6 + 0x30,0);
                      if (plVar17 != (long *)0x0) {
                        (**(code **)(*plVar17 + 0x518))
                                  (plVar17,uVar4,*(undefined8 *)(*plVar17 + 0x520));
                        Dino_BusSand_View_MechanicLayer__PopIn_23c2a68
                                  (fVar25,_UNK_00e20104,param_5,lVar5);
                        *(int *)(param_5 + 0xf0) = *(int *)(param_5 + 0xf0) + 1;
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
LAB_024ca048:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

