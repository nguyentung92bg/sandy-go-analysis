/* IL2CPP: Dino.BusSand.View.VehicleView$$PackedMesh
UnityEngine_Mesh_o* Dino_BusSand_View_VehicleView__PackedMesh (Dino_BusSand_ModelEntry_o* m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$PackedMesh
   UnityEngine_Mesh_o* Dino_BusSand_View_VehicleView__PackedMesh (Dino_BusSand_ModelEntry_o* m,
   const MethodInfo* method); */

long Dino_BusSand_View_VehicleView__PackedMesh_23f86a0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined4 *puVar23;
  long lVar24;
  undefined4 *puVar25;
  long lVar26;
  long lVar27;
  undefined4 *puVar28;
  ulong uVar29;
  long *plVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  uint uStack_88;
  uint uStack_84;
  long lStack_78;
  
  plVar30 = (long *)PTR_DAT_04cbc460;
  if ((bRam0000000004f9cad4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1930);
    FUN_02132f7c(PTR_DAT_04cbd760);
    FUN_02132f7c(PTR_DAT_04cbb7f8);
    FUN_02132f7c(PTR_DAT_04cbdde8);
    FUN_02132f7c(PTR_DAT_04cbd770);
    FUN_02132f7c(PTR_DAT_04cbd8d0);
    FUN_02132f7c(PTR_DAT_04cbd778);
    FUN_02132f7c(PTR_DAT_04cbdf58);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04caa178);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cb7270);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04caa1d8);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc460);
    FUN_02132f7c(PTR_DAT_04cbdf60);
    FUN_02132f7c(PTR_DAT_04cb6e08);
    FUN_02132f7c(PTR_DAT_04cb6e10);
    bRam0000000004f9cad4 = 1;
  }
  lVar11 = *plVar30;
  lStack_78 = 0;
  uStack_84 = 0;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar11 = *plVar30;
  }
  if ((param_1 != 0) && (lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x48), lVar11 != 0)) {
    uVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                       (lVar11,*(undefined8 *)(param_1 + 0x10),&lStack_78,
                        *(undefined8 *)PTR_DAT_04cbb7f8);
    lVar11 = lStack_78;
    if ((uVar12 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
      if ((uVar12 & 1) != 0) {
        return lStack_78;
      }
    }
    puVar8 = PTR_DAT_04cbdf58;
    puVar7 = PTR_DAT_04cb7270;
    puVar6 = PTR_DAT_04cb3c10;
    puVar5 = PTR_DAT_04cad6e8;
    puVar4 = PTR_DAT_04caa1d8;
    puVar3 = PTR_DAT_04caa1d0;
    puVar2 = PTR_DAT_04caa1c8;
    lVar11 = *(long *)(param_1 + 0x18);
    if (lVar11 != 0) {
      lVar13 = UnityEngine_Mesh__get_vertices_4390dfc(lVar11,0);
      lVar14 = UnityEngine_Mesh__get_normals_4390ea8(lVar11,0);
      lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Collections_Generic_List_Vector3____ctor_3af944c(lVar15,*(undefined8 *)puVar6);
      lVar16 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Collections_Generic_List_Vector3____ctor_3af944c(lVar16,*(undefined8 *)puVar6);
      lVar17 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
      System_Collections_Generic_List_Vector2____ctor_3af6bb0(lVar17,*(undefined8 *)puVar7);
      plVar18 = (long *)FUN_02133068(*(undefined8 *)puVar8,3);
      lVar19 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Collections_Generic_List_int____ctor_3a2b7dc(lVar19,*(undefined8 *)puVar5);
      if (plVar18 != (long *)0x0) {
        if ((lVar19 != 0) &&
           (lVar20 = thunk_FUN_0216e7a0(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0)) {
LAB_024f9008:
          uVar21 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar21,0);
        }
        if ((int)plVar18[3] != 0) {
          plVar18[4] = lVar19;
          thunk_FUN_02134474(plVar18 + 4,lVar19);
          lVar19 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
          System_Collections_Generic_List_int____ctor_3a2b7dc(lVar19,*(undefined8 *)puVar5);
          if ((lVar19 != 0) &&
             (lVar20 = thunk_FUN_0216e7a0(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
          goto LAB_024f9008;
          if ((*(uint *)(plVar18 + 3) & 0xfffffffe) != 0) {
            plVar18[5] = lVar19;
            thunk_FUN_02134474(plVar18 + 5,lVar19);
            lVar19 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
            System_Collections_Generic_List_int____ctor_3a2b7dc(lVar19,*(undefined8 *)puVar5);
            if ((lVar19 != 0) &&
               (lVar20 = thunk_FUN_0216e7a0(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
            goto LAB_024f9008;
            puVar3 = PTR_DAT_04cbdde8;
            puVar2 = PTR_DAT_04cbd778;
            if (2 < *(uint *)(plVar18 + 3)) {
              plVar18[6] = lVar19;
              thunk_FUN_02134474(plVar18 + 6,lVar19);
              lVar19 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
              System_Collections_Generic_Dictionary_long__int____ctor_346f4f8
                        (lVar19,*(undefined8 *)puVar3);
              iVar9 = UnityEngine_Mesh__get_subMeshCount_436cb4c(lVar11,0);
              if (0 < iVar9) {
                iVar9 = 0;
                do {
                  if (*(int *)(*plVar30 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar21 = Dino_BusSand_View_VehicleView__SlotName_23f9d94(param_1,iVar9);
                  uVar12 = System_String__op_Equality_46d1108
                                     (uVar21,*(undefined8 *)PTR_DAT_04cb6e10,0);
                  if ((uVar12 & 1) == 0) {
                    uVar12 = System_String__op_Equality_46d1108
                                       (uVar21,*(undefined8 *)PTR_DAT_04cb6e08,0);
                    if ((uVar12 & 1) == 0) {
                      lVar20 = *plVar30;
                      if (*(int *)(lVar20 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar20 = *plVar30;
                      }
                      uVar31 = System_Array__IndexOf_object__2906334
                                         (*(undefined8 *)(*(long *)(lVar20 + 0xb8) + 0x50),uVar21,
                                          *(undefined8 *)PTR_DAT_04cb1930);
                      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa200);
                      }
                      iVar10 = System_Math__Max_4830fc8(0,uVar31,0);
                      uStack_88 = 2;
                    }
                    else {
                      iVar10 = 0;
                      uStack_88 = 1;
                    }
                  }
                  else {
                    uStack_88 = 0;
                    iVar10 = 0;
                  }
                  lVar20 = UnityEngine_Mesh__GetIndices_4394384(lVar11,iVar9,0);
                  if (lVar20 == 0) goto LAB_024f9000;
                  if (0 < (int)*(ulong *)(lVar20 + 0x18)) {
                    uVar12 = 0;
                    uVar22 = *(ulong *)(lVar20 + 0x18) & 0xffffffff;
                    fVar34 = ((float)iVar10 + 0.5) * 0.25;
                    do {
                    /* try { // try from 024f8b98 to 025f8d5f has its CatchHandler @ 024f8b98
                       catch() { ... } // from try @ 024f8b98 with catch @ 024f8b98
                       catch() { ... } // from try @ 024f8d90 with catch @ 024f8b98
                       catch() { ... } // from try @ 024f9394 with catch @ 024f8b98
                       catch() { ... } // from try @ 024f93b8 with catch @ 024f8b98 */
                      if (uVar22 <= uVar12) goto LAB_024f9004;
                      if (lVar19 == 0) goto LAB_024f9000;
                      uVar1 = *(uint *)(lVar20 + 0x20 + uVar12 * 4);
                      uVar29 = (long)(int)(iVar10 + uStack_88 * 4) | (long)(int)uVar1 << 4;
                      uVar22 = System_Collections_Generic_Dictionary_long__int___TryGetValue_3471cdc
                                         (lVar19,uVar29,&uStack_84,*(undefined8 *)PTR_DAT_04cbd760);
                      puVar2 = PTR_DAT_04caa170;
                      if ((uVar22 & 1) == 0) {
                        if ((lVar15 == 0) || (uStack_84 = *(uint *)(lVar15 + 0x18), lVar13 == 0))
                        goto LAB_024f9000;
                        if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_024f9004;
                        lVar27 = lVar13 + (long)(int)uVar1 * 0xc;
                        lVar24 = *(long *)(lVar15 + 0x10);
                        uVar31 = *(undefined4 *)(lVar27 + 0x20);
                        uVar32 = *(undefined4 *)(lVar27 + 0x24);
                        uVar33 = *(undefined4 *)(lVar27 + 0x28);
                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                        if (lVar24 == 0) goto LAB_024f9000;
                        if (uStack_84 < *(uint *)(lVar24 + 0x18)) {
                          lVar24 = lVar24 + (long)(int)uStack_84 * 0xc;
                          *(uint *)(lVar15 + 0x18) = uStack_84 + 1;
                          *(undefined4 *)(lVar24 + 0x20) = uVar31;
                          *(undefined4 *)(lVar24 + 0x24) = uVar32;
                          *(undefined4 *)(lVar24 + 0x28) = uVar33;
                        }
                        else {
                          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                                    (lVar15,*(undefined8 *)
                                             (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) +
                                             0x70));
                        }
                        if (lVar14 == 0) goto LAB_024f9000;
                        if ((int)uVar1 < (int)*(uint *)(lVar14 + 0x18)) {
                          if (*(uint *)(lVar14 + 0x18) <= uVar1) goto LAB_024f9004;
                          lVar24 = lVar14 + (long)(int)uVar1 * 0xc;
                          puVar23 = (undefined4 *)(lVar24 + 0x20);
                          puVar25 = (undefined4 *)(lVar24 + 0x24);
                          puVar28 = (undefined4 *)(lVar24 + 0x28);
                        }
                        else {
                          if (cRam0000000004f9bcf8 == '\0') {
                            FUN_02132f7c(PTR_DAT_04caa208);
                            cRam0000000004f9bcf8 = '\x01';
                          }
                          lVar24 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
                          puVar23 = (undefined4 *)(lVar24 + 0x18);
                          puVar25 = (undefined4 *)(lVar24 + 0x1c);
                          puVar28 = (undefined4 *)(lVar24 + 0x20);
                        }
                        puVar2 = PTR_DAT_04caa170;
                        if (lVar16 == 0) goto LAB_024f9000;
                        uVar31 = *puVar23;
                        uVar33 = *puVar28;
                        uVar32 = *puVar25;
                        lVar24 = *(long *)(lVar16 + 0x10);
                        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                        if (lVar24 == 0) goto LAB_024f9000;
                        uVar1 = *(uint *)(lVar16 + 0x18);
                        if (uVar1 < *(uint *)(lVar24 + 0x18)) {
                          lVar24 = lVar24 + (long)(int)uVar1 * 0xc;
                          *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                          *(undefined4 *)(lVar24 + 0x20) = uVar31;
                          *(undefined4 *)(lVar24 + 0x24) = uVar32;
                          *(undefined4 *)(lVar24 + 0x28) = uVar33;
                        }
                        else {
                          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                                    (lVar16,*(undefined8 *)
                                             (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) +
                                             0x70));
                        }
                        if (lVar17 == 0) goto LAB_024f9000;
                        lVar24 = *(long *)(lVar17 + 0x10);
                    /* try { // try from 024f8d60 to 025f8d67 has its CatchHandler @ 024f9374 */
                        lVar27 = *(long *)PTR_DAT_04caa178;
                        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                        if (lVar24 == 0) goto LAB_024f9000;
                        uVar1 = *(uint *)(lVar17 + 0x18);
                        if (uVar1 < *(uint *)(lVar24 + 0x18)) {
                    /* try { // try from 024f8d7c to 025f8d7f has its CatchHandler @ 024f9368 */
                    /* try { // try from 024f8d80 to 025f8d83 has its CatchHandler @ 024f936c */
                          lVar24 = lVar24 + (long)(int)uVar1 * 8;
                          *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                    /* try { // try from 024f8d88 to 025f8d8f has its CatchHandler @ 024f9370 */
                          *(float *)(lVar24 + 0x20) = fVar34;
                    /* try { // try from 024f8d90 to 025f938f has its CatchHandler @ 024f8b98 */
                          *(undefined4 *)(lVar24 + 0x24) = 0x3f000000;
                        }
                        else {
                          System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                                    (fVar34,0x3f000000,lVar17,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
                        }
                        System_Collections_Generic_Dictionary_long__int___set_Item_3470284
                                  (lVar19,uVar29,uStack_84,*(undefined8 *)PTR_DAT_04cbd770);
                      }
                      if (*(uint *)(plVar18 + 3) <= uStack_88) goto LAB_024f9004;
                      lVar24 = plVar18[(ulong)uStack_88 + 4];
                      if (lVar24 == 0) goto LAB_024f9000;
                      lVar27 = *(long *)(lVar24 + 0x10);
                      lVar26 = *(long *)PTR_DAT_04caa160;
                      *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
                      if (lVar27 == 0) goto LAB_024f9000;
                      uVar1 = *(uint *)(lVar24 + 0x18);
                      if (uVar1 < *(uint *)(lVar27 + 0x18)) {
                        *(uint *)(lVar24 + 0x18) = uVar1 + 1;
                        *(uint *)(lVar27 + (long)(int)uVar1 * 4 + 0x20) = uStack_84;
                      }
                      else {
                        System_Collections_Generic_List_int___AddWithResize_3a2c06c
                                  (lVar24,uStack_84,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                      }
                      uVar22 = (ulong)*(uint *)(lVar20 + 0x18);
                      uVar12 = uVar12 + 1;
                    } while ((long)uVar12 < (long)(int)*(uint *)(lVar20 + 0x18));
                  }
                  iVar9 = iVar9 + 1;
                  iVar10 = UnityEngine_Mesh__get_subMeshCount_436cb4c(lVar11,0);
                  plVar30 = (long *)PTR_DAT_04cbc460;
                } while (iVar9 < iVar10);
              }
              puVar2 = PTR_DAT_04cbdf60;
              lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa148);
              UnityEngine_Mesh___ctor_4389e48(lVar11,0);
              uVar21 = System_String__Concat_46c82e0
                                 (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar2,0);
              if ((lVar11 != 0) &&
                 (UnityEngine_Object__set_name_43c72ec(lVar11,uVar21,0), lVar15 != 0)) {
                UnityEngine_Mesh__set_indexFormat_438a024(lVar11,65000 < *(int *)(lVar15 + 0x18),0);
                lStack_78 = lVar11;
                UnityEngine_Mesh__SetVertices_439178c(lVar11,lVar15,0);
                if ((lStack_78 != 0) &&
                   ((UnityEngine_Mesh__SetNormals_4391a7c(lStack_78,lVar16,0), lStack_78 != 0 &&
                    (UnityEngine_Mesh__SetUVs_4392594(lStack_78,0,lVar17,0),
                    puVar2 = PTR_DAT_04cbd8d0, lStack_78 != 0)))) {
                  UnityEngine_Mesh__set_subMeshCount_438f55c(lStack_78,3,0);
                  uVar12 = 0;
                  do {
                    if (*(uint *)(plVar18 + 3) <= uVar12) goto LAB_024f9004;
                    if (lStack_78 == 0) goto LAB_024f9000;
                    UnityEngine_Mesh__SetTriangles_4394c90
                              (lStack_78,plVar18[uVar12 + 4],uVar12 & 0xffffffff,0);
                    uVar12 = uVar12 + 1;
                  } while (uVar12 != 3);
                  if ((lStack_78 != 0) &&
                     (UnityEngine_Mesh__RecalculateBounds_4395ccc(lStack_78,0), lStack_78 != 0)) {
                    UnityEngine_Mesh__UploadMeshData_43960c0(lStack_78,1,0);
                    lVar11 = *plVar30;
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar11 = *plVar30;
                    }
                    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x48);
                    if (lVar11 != 0) {
                      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                                (lVar11,*(undefined8 *)(param_1 + 0x10),lStack_78,
                                 *(undefined8 *)puVar2);
                      return lStack_78;
                    }
                  }
                }
              }
              goto LAB_024f9000;
            }
          }
        }
LAB_024f9004:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
  }
LAB_024f9000:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

