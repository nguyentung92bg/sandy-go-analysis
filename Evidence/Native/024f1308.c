/* IL2CPP: Dino.BusSand.View.VehicleBatch$$ShadowHull
UnityEngine_Mesh_o* Dino_BusSand_View_VehicleBatch__ShadowHull (Dino_BusSand_ModelEntry_o* m, int32_t res, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleBatch$$ShadowHull
   UnityEngine_Mesh_o* Dino_BusSand_View_VehicleBatch__ShadowHull (Dino_BusSand_ModelEntry_o* m,
   int32_t res, const MethodInfo* method); */

long Dino_BusSand_View_VehicleBatch__ShadowHull_23f1308(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  uint uVar29;
  ulong uVar30;
  undefined4 *puVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  uint uVar35;
  float *pfVar36;
  ulong uVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a4;
  
  if ((bRam0000000004f9cabd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd760);
    FUN_02132f7c(PTR_DAT_04cbdde8);
    FUN_02132f7c(PTR_DAT_04cbd770);
    FUN_02132f7c(PTR_DAT_04cbd778);
    FUN_02132f7c(PTR_DAT_04cbde28);
    FUN_02132f7c(PTR_DAT_04cbde30);
    FUN_02132f7c(PTR_DAT_04cbde38);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04cbddf0);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa198);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    FUN_02132f7c(PTR_DAT_04cae230);
    FUN_02132f7c(PTR_DAT_04caa1b8);
    FUN_02132f7c(PTR_DAT_04cad718);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04caa1d8);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04cbde40);
    FUN_02132f7c(PTR_DAT_04caed88);
    FUN_02132f7c(PTR_DAT_04cbde48);
    bRam0000000004f9cabd = 1;
  }
  puVar16 = PTR_DAT_04cbdde8;
  puVar15 = PTR_DAT_04cbd778;
  puVar14 = PTR_DAT_04cb3c10;
  puVar13 = PTR_DAT_04cad6e8;
  puVar11 = PTR_DAT_04caa1d0;
  puVar12 = PTR_DAT_04caa1c8;
  uStack_a4 = 0;
  if ((param_1 != 0) && (lVar34 = *(long *)(param_1 + 0x18), lVar34 != 0)) {
    lVar21 = UnityEngine_Mesh__get_vertices_4390dfc(lVar34,0);
    UnityEngine_Mesh__get_bounds_438fac4(&uStack_c0,lVar34,0);
    fVar18 = fStack_b8;
    fVar17 = (float)uStack_c0;
    fVar45 = uStack_c0._4_4_;
    fVar41 = fStack_ac + fStack_ac;
    fVar42 = fStack_b4 + fStack_b4;
    fVar44 = fStack_b0 + fStack_b0;
    if (fStack_b0 + fStack_b0 <= fVar41) {
      fVar44 = fVar41;
    }
    fVar43 = fVar42;
    if (fVar42 <= fVar44) {
      fVar43 = fVar44;
    }
    lVar22 = thunk_FUN_0216e89c(*(undefined8 *)puVar15);
    System_Collections_Generic_Dictionary_long__int____ctor_346f4f8(lVar22,*(undefined8 *)puVar16);
    lVar23 = thunk_FUN_0216e89c(*(undefined8 *)puVar11);
    System_Collections_Generic_List_Vector3____ctor_3af944c(lVar23,*(undefined8 *)puVar14);
    lVar24 = thunk_FUN_0216e89c(*(undefined8 *)puVar12);
    System_Collections_Generic_List_int____ctor_3a2b7dc(lVar24,*(undefined8 *)puVar13);
    if (lVar21 != 0) {
      lVar25 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,*(undefined4 *)(lVar21 + 0x18));
      puVar12 = PTR_DAT_04caa200;
      fVar45 = fVar45 - fStack_b0;
      if ((int)*(ulong *)(lVar21 + 0x18) < 1) {
        if (lVar23 == 0) goto LAB_024f1e08;
      }
      else {
        uVar37 = 0;
        uVar30 = *(ulong *)(lVar21 + 0x18) & 0xffffffff;
        pfVar36 = (float *)(lVar21 + 0x28);
        fVar43 = fVar43 / (float)param_2;
        do {
          if (uVar30 <= uVar37) {
LAB_024f1e04:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          fVar41 = pfVar36[-2];
          fVar44 = pfVar36[-1];
          fVar42 = *pfVar36;
          if (cRam0000000004f9b9dd == '\0') {
            FUN_02132f7c(puVar12);
            cRam0000000004f9b9dd = '\x01';
          }
          if ((*(int *)(*(long *)puVar12 + 0xe4) == 0) &&
             (thunk_FUN_0218fdac(), cRam0000000004f9b9dd == '\0')) {
            FUN_02132f7c(puVar12);
            cRam0000000004f9b9dd = '\x01';
          }
          fVar40 = (float)(int)((fVar41 - (fVar17 - fStack_b4)) / fVar43);
          if ((*(int *)(*(long *)puVar12 + 0xe4) == 0) &&
             (thunk_FUN_0218fdac(), cRam0000000004f9b9dd == '\0')) {
            FUN_02132f7c(puVar12);
            cRam0000000004f9b9dd = '\x01';
          }
          fVar44 = (float)(int)((fVar44 - fVar45) / fVar43);
          if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fVar41 = INFINITY;
          fVar38 = (fVar42 - (fVar18 - fStack_ac)) / fVar43;
          uVar30 = 0;
          if (fVar40 != INFINITY) {
            uVar30 = (ulong)(uint)(int)fVar40 << 0x28;
          }
          uVar4 = 0xfff8000000000000;
          if (fVar44 != INFINITY) {
            uVar4 = (long)(int)fVar44 << 0x14;
          }
          fVar42 = (float)(int)fVar38;
          uVar5 = 0xffffffff80000000;
          if (fVar42 != INFINITY) {
            uVar5 = (long)(int)fVar38;
          }
          if (lVar22 == 0) goto LAB_024f1e08;
          uVar26 = System_Collections_Generic_Dictionary_long__int___TryGetValue_3471cdc
                             (lVar22,uVar4 | uVar30 | uVar5,&uStack_a4,
                              *(undefined8 *)PTR_DAT_04cbd760);
          if ((uVar26 & 1) == 0) {
            if (lVar23 == 0) goto LAB_024f1e08;
            uStack_a4 = *(undefined4 *)(lVar23 + 0x18);
            System_Collections_Generic_Dictionary_long__int___set_Item_3470284
                      (lVar22,uVar4 | uVar30 | uVar5,uStack_a4,*(undefined8 *)PTR_DAT_04cbd770);
            if (cRam0000000004f9b65d == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65d = '\x01';
            }
            puVar11 = PTR_DAT_04caa170;
            puVar31 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
            lVar32 = *(long *)(lVar23 + 0x10);
            uVar39 = *puVar31;
            fVar41 = (float)puVar31[1];
            fVar42 = (float)puVar31[2];
            *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
            if (lVar32 == 0) goto LAB_024f1e08;
            uVar29 = *(uint *)(lVar23 + 0x18);
            if (uVar29 < *(uint *)(lVar32 + 0x18)) {
              lVar32 = lVar32 + (long)(int)uVar29 * 0xc;
              *(uint *)(lVar23 + 0x18) = uVar29 + 1;
              *(undefined4 *)(lVar32 + 0x20) = uVar39;
              *(float *)(lVar32 + 0x24) = fVar41;
              *(float *)(lVar32 + 0x28) = fVar42;
            }
            else {
              System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                        (lVar23,*(undefined8 *)
                                 (*(long *)(*(long *)(*(long *)puVar11 + 0x20) + 0xc0) + 0x70));
            }
            if (lVar24 == 0) goto LAB_024f1e08;
            lVar32 = *(long *)(lVar24 + 0x10);
            lVar33 = *(long *)PTR_DAT_04caa160;
            *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
            if (lVar32 == 0) goto LAB_024f1e08;
            uVar29 = *(uint *)(lVar24 + 0x18);
            if (uVar29 < *(uint *)(lVar32 + 0x18)) {
              *(uint *)(lVar24 + 0x18) = uVar29 + 1;
              *(undefined4 *)(lVar32 + (long)(int)uVar29 * 4 + 0x20) = 0;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (lVar24,0,*(undefined8 *)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x70)
                        );
            }
          }
          else if (lVar23 == 0) goto LAB_024f1e08;
          uVar39 = uStack_a4;
          fVar44 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                    (lVar23,uStack_a4,*(undefined8 *)PTR_DAT_04caa1a8);
          if (*(uint *)(lVar21 + 0x18) <= uVar37) goto LAB_024f1e04;
          fVar41 = fVar41 + pfVar36[-1];
          fVar42 = fVar42 + *pfVar36;
          System_Collections_Generic_List_Vector3___set_Item_3af9a40
                    (fVar44 + pfVar36[-2],lVar23,uVar39,*(undefined8 *)PTR_DAT_04caa1b8);
          uVar39 = uStack_a4;
          if (lVar24 == 0) goto LAB_024f1e08;
          iVar19 = System_Collections_Generic_List_int___get_Item_3a2bd74
                             (lVar24,uStack_a4,*(undefined8 *)PTR_DAT_04cae230);
          System_Collections_Generic_List_int___set_Item_3a2bdc8
                    (lVar24,uVar39,iVar19 + 1,*(undefined8 *)PTR_DAT_04cad718);
          if (lVar25 == 0) goto LAB_024f1e08;
          if (*(uint *)(lVar25 + 0x18) <= uVar37) goto LAB_024f1e04;
          pfVar36 = pfVar36 + 3;
          *(undefined4 *)(lVar25 + 0x20 + uVar37 * 4) = uStack_a4;
          uVar37 = uVar37 + 1;
          uVar30 = (ulong)*(uint *)(lVar21 + 0x18);
        } while ((long)uVar37 < (long)(int)*(uint *)(lVar21 + 0x18));
      }
      puVar12 = PTR_DAT_04caa198;
      uVar39 = *(undefined4 *)(lVar23 + 0x18);
      lVar21 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1d0);
      System_Collections_Generic_List_Vector3____ctor_3af94c4(lVar21,uVar39,*(undefined8 *)puVar12);
      puVar12 = PTR_DAT_04caa170;
      fVar44 = _UNK_00e2038c;
      if (0 < *(int *)(lVar23 + 0x18)) {
        iVar19 = 0;
        do {
          fVar43 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                    (lVar23,iVar19,*(undefined8 *)PTR_DAT_04caa1a8);
          if ((lVar24 == 0) ||
             (iVar20 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                 (lVar24,iVar19,*(undefined8 *)PTR_DAT_04cae230), lVar21 == 0))
          goto LAB_024f1e08;
          lVar32 = *(long *)(lVar21 + 0x10);
          lVar22 = *(long *)puVar12;
          *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
          if (lVar32 == 0) goto LAB_024f1e08;
          fVar40 = (float)iVar20;
          uVar29 = *(uint *)(lVar21 + 0x18);
          fVar41 = fVar45 + (fVar41 / fVar40 - fVar45) * fVar44;
          fVar42 = fVar18 + (fVar42 / fVar40 - fVar18) * fVar44;
          if (uVar29 < *(uint *)(lVar32 + 0x18)) {
            lVar32 = lVar32 + (long)(int)uVar29 * 0xc;
            *(uint *)(lVar21 + 0x18) = uVar29 + 1;
            *(float *)(lVar32 + 0x20) = fVar17 + (fVar43 / fVar40 - fVar17) * fVar44;
            *(float *)(lVar32 + 0x24) = fVar41;
            *(float *)(lVar32 + 0x28) = fVar42;
          }
          else {
            System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                      (lVar21,*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 < *(int *)(lVar23 + 0x18));
      }
      puVar11 = PTR_DAT_04cbde38;
      puVar12 = PTR_DAT_04cbde30;
      lVar22 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
      System_Collections_Generic_List_int____ctor_3a2b7dc(lVar22,*(undefined8 *)PTR_DAT_04cad6e8);
      lVar23 = thunk_FUN_0216e89c(*(undefined8 *)puVar11);
      System_Collections_Generic_HashSet_ValueTuple_int__int__int_____ctor_37d3c04
                (lVar23,*(undefined8 *)puVar12);
      iVar19 = UnityEngine_Mesh__get_subMeshCount_436cb4c(lVar34,0);
      puVar11 = PTR_DAT_04cbde40;
      puVar12 = PTR_DAT_04cbde28;
      if (0 < iVar19) {
        iVar19 = 0;
        do {
          lVar24 = UnityEngine_Mesh__GetIndices_4394384(lVar34,iVar19,0);
          if (lVar24 == 0) goto LAB_024f1e08;
          uVar29 = *(uint *)(lVar24 + 0x18);
          if (2 < (int)uVar29) {
            uVar35 = 2;
            do {
              if (uVar29 <= uVar35 - 2) goto LAB_024f1e04;
              if (lVar25 == 0) goto LAB_024f1e08;
              uVar6 = *(uint *)(lVar25 + 0x18);
              uVar9 = *(uint *)(lVar24 + (long)(int)(uVar35 - 2) * 4 + 0x20);
              if ((((uVar6 <= uVar9) || (uVar29 <= uVar35 - 1)) ||
                  (uVar10 = *(uint *)(lVar24 + (long)(int)(uVar35 - 1) * 4 + 0x20), uVar6 <= uVar10)
                  ) || ((uVar29 <= uVar35 ||
                        (uVar29 = *(uint *)(lVar24 + (long)(int)uVar35 * 4 + 0x20), uVar6 <= uVar29)
                        ))) goto LAB_024f1e04;
              iVar20 = *(int *)(lVar25 + (long)(int)uVar9 * 4 + 0x20);
              iVar7 = *(int *)(lVar25 + (long)(int)uVar29 * 4 + 0x20);
              if (((iVar20 != iVar7) &&
                  (iVar8 = *(int *)(lVar25 + (long)(int)uVar10 * 4 + 0x20), iVar20 != iVar8)) &&
                 (iVar8 != iVar7)) {
                iVar1 = iVar8;
                iVar3 = iVar7;
                if (iVar8 < iVar7) {
                  iVar1 = iVar7;
                  iVar3 = iVar8;
                }
                fStack_b8 = 0.0;
                iVar2 = iVar20;
                if (iVar3 <= iVar20) {
                  iVar2 = iVar3;
                }
                iVar3 = iVar20;
                if (iVar20 <= iVar1) {
                  iVar3 = iVar1;
                }
                uStack_c0 = 0;
                System_ValueTuple_int__int__int____ctor_30fe0a0
                          (&uStack_c0,iVar2,(iVar8 + iVar20 + iVar7) - (iVar3 + iVar2),iVar3,
                           *(undefined8 *)puVar11);
                if (lVar23 == 0) goto LAB_024f1e08;
                uVar37 = System_Collections_Generic_HashSet_ValueTuple_int__int__int____Add_37d4e7c
                                   (lVar23,uStack_c0,fStack_b8,*(undefined8 *)puVar12);
                if ((uVar37 & 1) != 0) {
                  if (lVar22 == 0) goto LAB_024f1e08;
                  lVar32 = *(long *)(lVar22 + 0x10);
                  lVar33 = *(long *)PTR_DAT_04caa160;
                  *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
                  if (lVar32 == 0) goto LAB_024f1e08;
                  uVar29 = *(uint *)(lVar22 + 0x18);
                  if (uVar29 < *(uint *)(lVar32 + 0x18)) {
                    *(uint *)(lVar22 + 0x18) = uVar29 + 1;
                    *(int *)(lVar32 + (long)(int)uVar29 * 4 + 0x20) = iVar20;
                    *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize_3a2c06c
                              (lVar22,iVar20,
                               *(undefined8 *)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x70));
                    lVar32 = *(long *)(lVar22 + 0x10);
                    lVar33 = *(long *)PTR_DAT_04caa160;
                    *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
                    if (lVar32 == 0) goto LAB_024f1e08;
                  }
                  uVar29 = *(uint *)(lVar22 + 0x18);
                  if (uVar29 < *(uint *)(lVar32 + 0x18)) {
                    *(uint *)(lVar22 + 0x18) = uVar29 + 1;
                    *(int *)(lVar32 + (long)(int)uVar29 * 4 + 0x20) = iVar8;
                    *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize_3a2c06c
                              (lVar22,iVar8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x70));
                    lVar32 = *(long *)(lVar22 + 0x10);
                    lVar33 = *(long *)PTR_DAT_04caa160;
                    *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
                    if (lVar32 == 0) goto LAB_024f1e08;
                  }
                  uVar29 = *(uint *)(lVar22 + 0x18);
                  if (uVar29 < *(uint *)(lVar32 + 0x18)) {
                    *(uint *)(lVar22 + 0x18) = uVar29 + 1;
                    *(int *)(lVar32 + (long)(int)uVar29 * 4 + 0x20) = iVar7;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize_3a2c06c
                              (lVar22,iVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x70));
                  }
                }
              }
              uVar29 = *(uint *)(lVar24 + 0x18);
              uVar35 = uVar35 + 3;
            } while ((int)uVar35 < (int)uVar29);
          }
          iVar19 = iVar19 + 1;
          iVar20 = UnityEngine_Mesh__get_subMeshCount_436cb4c(lVar34,0);
        } while (iVar19 < iVar20);
      }
      puVar12 = PTR_DAT_04cbde48;
      lVar34 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa148);
      UnityEngine_Mesh___ctor_4389e48(lVar34,0);
      uVar27 = System_String__Concat_46c82e0
                         (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar12,0);
      if (lVar34 != 0) {
        UnityEngine_Object__set_name_43c72ec(lVar34,uVar27,0);
        UnityEngine_Mesh__SetVertices_439178c(lVar34,lVar21,0);
        puVar11 = PTR_DAT_04cbddf0;
        puVar12 = PTR_DAT_04caa1d8;
        if (lVar21 != 0) {
          uVar27 = FUN_02133068(*(undefined8 *)PTR_DAT_04caed88,*(undefined4 *)(lVar21 + 0x18));
          uVar28 = thunk_FUN_0216e89c(*(undefined8 *)puVar12);
          System_Collections_Generic_List_Vector2____ctor_3af6cec
                    (uVar28,uVar27,*(undefined8 *)puVar11);
          UnityEngine_Mesh__SetUVs_4392594(lVar34,0,uVar28,0);
          UnityEngine_Mesh__SetTriangles_4394c90(lVar34,lVar22,0,0);
          UnityEngine_Mesh__RecalculateNormals_4395d8c(lVar34,0);
          UnityEngine_Mesh__RecalculateBounds_4395ccc(lVar34,0);
          UnityEngine_Mesh__UploadMeshData_43960c0(lVar34,1,0);
          return lVar34;
        }
      }
    }
  }
LAB_024f1e08:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

