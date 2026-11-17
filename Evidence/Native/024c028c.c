/* IL2CPP: Dino.BusSand.View.MechanicLayer$$BuildLane
void Dino_BusSand_View_MechanicLayer__BuildLane (Dino_BusSand_View_MechanicLayer_o* __this, Dino_BusSand_Core_Lane_o* lane, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$BuildLane
   void Dino_BusSand_View_MechanicLayer__BuildLane (Dino_BusSand_View_MechanicLayer_o* __this,
   Dino_BusSand_Core_Lane_o* lane, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__BuildLane_23c028c
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
               long param_5)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined4 uVar19;
  double dVar20;
  float fVar21;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  
  puVar2 = PTR_DAT_04cbd098;
  if ((bRam0000000004f9c9c8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbc448);
    FUN_02132f7c(PTR_DAT_04cbd0a0);
    FUN_02132f7c(PTR_DAT_04cad688);
    FUN_02132f7c(PTR_DAT_04cbd0a8);
    FUN_02132f7c(PTR_DAT_04cbd0b0);
    FUN_02132f7c(PTR_DAT_04cad698);
    FUN_02132f7c(PTR_DAT_04cbd0b8);
    FUN_02132f7c(PTR_DAT_04cbd0c0);
    FUN_02132f7c(PTR_DAT_04cbd0c8);
    FUN_02132f7c(PTR_DAT_04cad6a8);
    FUN_02132f7c(PTR_DAT_04cbd0d0);
    FUN_02132f7c(PTR_DAT_04cb72d0);
    FUN_02132f7c(PTR_DAT_04cb72d8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cbd098);
    FUN_02132f7c(PTR_DAT_04caea20);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04cbd0d8);
    FUN_02132f7c(PTR_DAT_04cad6d0);
    FUN_02132f7c(PTR_DAT_04cbd0e0);
    FUN_02132f7c(PTR_DAT_04cbd0e8);
    FUN_02132f7c(PTR_DAT_04cac5d0);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd0f0);
    FUN_02132f7c(PTR_DAT_04cbd0f8);
    FUN_02132f7c(PTR_DAT_04cafeb0);
    bRam0000000004f9c9c8 = 1;
  }
  uStack_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  uStack_e0 = 0;
  puStack_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  puStack_98 = (undefined8 *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  Dino_BusSand_View_MechanicLayer_LaneVis___ctor_23d3834(lVar10,0);
  if (lVar10 != 0) {
    *(long *)(lVar10 + 0x38) = param_5;
    thunk_FUN_02134474((long *)(lVar10 + 0x38),param_5);
    puVar8 = PTR_DAT_04cbd0c0;
    puVar7 = PTR_DAT_04cbd0b8;
    puVar6 = PTR_DAT_04cbc448;
    puVar5 = PTR_DAT_04caea20;
    puVar4 = PTR_DAT_04cad698;
    puVar3 = PTR_DAT_04caa170;
    puVar2 = PTR_DAT_04ca9ae8;
    if (param_5 != 0) {
      if (*(long *)(param_5 + 0x18) != 0) {
        System_Collections_Generic_List_ValueTuple_double__double____GetEnumerator_39a2684
                  (&uStack_100,*(long *)(param_5 + 0x18),*(undefined8 *)PTR_DAT_04cbd0e8);
        uStack_a0 = uStack_100;
        uStack_100 = 0;
        puStack_98 = puStack_f8;
        uStack_88 = uStack_e8;
        uStack_90 = uStack_f0;
        puStack_f8 = &uStack_a0;
        while (uVar11 = System_Collections_Generic_List_Enumerator_ValueTuple_double__double____MoveNext_35babb8
                                  (&uStack_a0,*(undefined8 *)puVar8), (uVar11 & 1) != 0) {
          if (*(long *)(param_4 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar17 = *(long *)(lVar10 + 0x10);
          uVar12 = uStack_88;
          uVar19 = Dino_BusSand_View_StageLayout__YardToWorld_23e8904
                             (uStack_90,*(long *)(param_4 + 0x28),0);
          if (lVar17 == 0) {
LAB_024c0a54:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar13 = *(long *)(lVar17 + 0x10);
          lVar15 = *(long *)puVar3;
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_024c0a54;
          uVar9 = *(uint *)(lVar17 + 0x18);
          if (uVar9 < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + (long)(int)uVar9 * 0xc;
            *(uint *)(lVar17 + 0x18) = uVar9 + 1;
            *(undefined4 *)(lVar13 + 0x20) = uVar19;
            *(int *)(lVar13 + 0x24) = (int)uVar12;
            *(undefined4 *)(lVar13 + 0x28) = param_3;
          }
          else {
            System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                      (lVar17,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
        System_Collections_Generic_List_Enumerator_ValueTuple_double__double____Dispose_35babb4
                  (&uStack_a0,*(undefined8 *)PTR_DAT_04cbd0a8);
        puVar3 = PTR_DAT_04caa070;
        uVar12 = System_Int32__ToString_482d750(param_5 + 0x10,0);
        uVar12 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbd0f0,uVar12,0);
        lVar17 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
        UnityEngine_GameObject___ctor_43c20cc(lVar17,uVar12,0);
        if (lVar17 != 0) {
          lVar17 = UnityEngine_GameObject__get_transform_43c1048(lVar17,0);
          uVar12 = UnityEngine_Component__get_transform_43bcd18(param_4,0);
          if (lVar17 != 0) {
            UnityEngine_Transform__SetParent_43d1e34(lVar17,uVar12,0,0);
            *(long *)(lVar10 + 0x40) = lVar17;
            thunk_FUN_02134474((long *)(lVar10 + 0x40),lVar17);
            lVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
            UnityEngine_GameObject___ctor_43c20cc(lVar13,*(undefined8 *)PTR_DAT_04cafeb0,0);
            if ((lVar13 != 0) &&
               (lVar15 = UnityEngine_GameObject__get_transform_43c1048(lVar13,0), lVar15 != 0)) {
              UnityEngine_Transform__SetParent_43d1e34(lVar15,lVar17,0,0);
              lVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa148);
              UnityEngine_Mesh___ctor_4389e48(lVar15,0);
              if (lVar15 != 0) {
                UnityEngine_Object__set_name_43c72ec(lVar15,*(undefined8 *)PTR_DAT_04cbd0f8,0);
                plVar18 = (long *)(lVar10 + 0x48);
                *plVar18 = lVar15;
                thunk_FUN_02134474(plVar18,lVar15);
                if (*plVar18 != 0) {
                  UnityEngine_Mesh__MarkDynamic_439609c(*plVar18,0);
                  lVar15 = UnityEngine_GameObject__AddComponent_object__275a54c
                                     (lVar13,*(undefined8 *)PTR_DAT_04cb72d0);
                  if (lVar15 != 0) {
                    UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar15,*plVar18,0);
                    lVar13 = UnityEngine_GameObject__AddComponent_object__275a54c
                                       (lVar13,*(undefined8 *)PTR_DAT_04cb72d8);
                    puVar3 = PTR_DAT_04cac5d0;
                    if (*(int *)(*(long *)PTR_DAT_04cac5d0 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac5d0);
                    }
                    uVar11 = Dino_BusSand_View_MechanicLayer__get_ArtHighway_23c35dc();
                    if ((uVar11 & 1) == 0) {
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      uVar12 = Dino_BusSand_View_MechanicLayer__LaneMaterial_23c3738();
                    }
                    else {
                      lVar15 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
                      if (lVar15 == 0) goto LAB_024c0a70;
                      uVar12 = *(undefined8 *)(lVar15 + 0xf0);
                    }
                    if (lVar13 != 0) {
                      UnityEngine_Renderer__set_sharedMaterial_43743cc(lVar13,uVar12,0);
                      UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar13,0,0);
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      uVar9 = Dino_BusSand_View_MechanicLayer__get_ArtHighway_23c35dc();
                      UnityEngine_Renderer__set_receiveShadows_4373dcc
                                (lVar13,(uVar9 ^ 0xffffffff) & 1,0);
                      dVar20 = (double)Dino_BusSand_Core_Lane__get_ActiveLength_242f98c(param_5,0);
                      *(float *)(lVar10 + 0x60) = (float)dVar20;
                      *(float *)(lVar10 + 0x58) = (float)dVar20;
                      Dino_BusSand_View_MechanicLayer__RebuildLane_23c39a4(param_4,lVar10);
                      if (*(long *)(lVar10 + 0x50) != 0) {
                        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                                  (&uStack_100,*(long *)(lVar10 + 0x50),
                                   *(undefined8 *)PTR_DAT_04cad6d0);
                        fVar1 = _UNK_00e20844;
                        uVar19 = _UNK_00e20104;
                        puStack_b8 = puStack_f8;
                        uStack_c0 = uStack_100;
                        uStack_b0 = uStack_f0;
                        uStack_100 = 0;
                        fVar21 = _UNK_00e20390;
                        puStack_f8 = &uStack_c0;
                        while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                                  (&uStack_c0,*(undefined8 *)puVar4),
                              (uVar11 & 1) != 0) {
                          Dino_BusSand_View_MechanicLayer__PopIn_23c2a68
                                    (fVar21,uVar19,param_4,uStack_b0);
                          fVar21 = fVar21 + fVar1;
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                                  (&uStack_c0,*(undefined8 *)PTR_DAT_04cad688);
                        puVar3 = PTR_DAT_04cbd0d8;
                        if (*(long *)(param_5 + 0x28) != 0) {
                          System_Collections_Generic_List_ValueTuple_int__Int32Enum____GetEnumerator_39af6a0
                                    (&uStack_100,*(long *)(param_5 + 0x28),
                                     *(undefined8 *)PTR_DAT_04cbd0e0);
                          fVar1 = _UNK_00e20574;
                          uStack_d0 = uStack_f0;
                          puStack_d8 = puStack_f8;
                          uStack_e0 = uStack_100;
                          uStack_100 = 0;
                          puStack_f8 = &uStack_e0;
LAB_024c0874:
                          uVar11 = System_Collections_Generic_List_Enumerator_ValueTuple_int__Int32Enum____MoveNext_35bb5e8
                                             (&uStack_e0,*(undefined8 *)puVar7);
                          if ((uVar11 & 1) != 0) {
                            if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_02133224();
                            }
                            lVar13 = *(long *)(*(long *)(param_4 + 0x20) + 0x50);
                            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_02133224();
                            }
                            uVar19 = uStack_d0._4_4_;
                            uVar12 = System_Collections_Generic_Dictionary_int__TruckPayload___get_Item_3444f80
                                               (lVar13,uStack_d0 & 0xffffffff,*(undefined8 *)puVar6)
                            ;
                            if (*(long *)(param_4 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_02133224();
                            }
                            uVar12 = Dino_BusSand_View_PackVehicle__Create_23d7220
                                               (0,*(float *)(*(long *)(param_4 + 0x28) + 0xfc) *
                                                  fVar1,lVar17,uVar19,uVar12,0,0,0);
                            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            uVar11 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
                            if ((uVar11 & 1) == 0) {
                              lVar13 = *(long *)(lVar10 + 0x18);
                              if (lVar13 != 0) {
                                lVar15 = *(long *)(lVar13 + 0x10);
                                lVar16 = *(long *)puVar3;
                                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                if (lVar15 != 0) {
                                  uVar9 = *(uint *)(lVar13 + 0x18);
                                  if (uVar9 < *(uint *)(lVar15 + 0x18)) {
                                    *(uint *)(lVar13 + 0x18) = uVar9 + 1;
                                    puVar14 = (undefined8 *)(lVar15 + (long)(int)uVar9 * 8 + 0x20);
                                    *puVar14 = uVar12;
                                    thunk_FUN_02134474(puVar14,uVar12);
                                  }
                                  else {
                                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                              (lVar13,uVar12,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                                    ;
                                  }
                                  lVar13 = *(long *)(lVar10 + 0x20);
                                  if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
                                    thunk_FUN_0218fdac();
                                  }
                                  dVar20 = (double)
                                                  Dino_BusSand_Core_BusGeometry__LengthCells_2429dc0
                                                            (uVar19,0);
                                  if (lVar13 != 0) {
                                    lVar15 = *(long *)(lVar13 + 0x10);
                                    lVar16 = *(long *)puVar5;
                                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                    if (lVar15 != 0) {
                                      uVar9 = *(uint *)(lVar13 + 0x18);
                                      if (uVar9 < *(uint *)(lVar15 + 0x18)) {
                                        *(uint *)(lVar13 + 0x18) = uVar9 + 1;
                                        *(float *)(lVar15 + (long)(int)uVar9 * 4 + 0x20) =
                                             (float)dVar20;
                                      }
                                      else {
                                        System_Collections_Generic_List_float___AddWithResize_3ac28c0
                                                  (lVar13,*(undefined8 *)
                                                           (*(long *)(*(long *)(lVar16 + 0x20) +
                                                                     0xc0) + 0x70));
                                      }
                                      goto LAB_024c0874;
                                    }
                                  }
                    /* WARNING: Subroutine does not return */
                                  FUN_02133224();
                                }
                              }
                    /* WARNING: Subroutine does not return */
                              FUN_02133224();
                            }
                            goto LAB_024c0874;
                          }
                          System_Collections_Generic_List_Enumerator_ValueTuple_int__Int32Enum____Dispose_35bb5e4
                                    (&uStack_e0,*(undefined8 *)PTR_DAT_04cbd0b0);
                          if (*(long *)(param_4 + 0x88) != 0) {
                            System_Collections_Generic_Dictionary_int__object___set_Item_3437318
                                      (*(long *)(param_4 + 0x88),*(undefined4 *)(param_5 + 0x10),
                                       lVar10,*(undefined8 *)PTR_DAT_04cbd0a0);
                            Dino_BusSand_View_MechanicLayer__PlaceLaneGhosts_23c43a4
                                      (0,param_4,param_5,lVar10,0);
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
    }
  }
LAB_024c0a70:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

