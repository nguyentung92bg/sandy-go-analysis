/* IL2CPP: Dino.BusSand.View.WorldView$$RoundedRect
UnityEngine_Mesh_o* Dino_BusSand_View_WorldView__RoundedRect (float x0, float z0, float x1, float z1, float r, int32_t seg, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.WorldView$$RoundedRect
   UnityEngine_Mesh_o* Dino_BusSand_View_WorldView__RoundedRect (float x0, float z0, float x1, float
   z1, float r, int32_t seg, const MethodInfo* method); */

long Dino_BusSand_View_WorldView__RoundedRect_240889c
               (float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
               undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined4 uVar22;
  float fVar23;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  puVar4 = PTR_DAT_04cbc2b8;
  if ((bRam0000000004f9cb23 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc2b8);
    bRam0000000004f9cb23 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar9 = Dino_BusSand_View_WorldView__RoundedRectRing_240acd4
                    (param_1,param_2,param_3,param_4,param_5,param_6);
  puVar3 = PTR_DAT_04cb3c10;
  puVar4 = PTR_DAT_04caa1d0;
  fVar19 = (param_1 + param_3) * 0.5;
  fVar23 = (param_2 + param_4) * 0.5;
  if ((bRam0000000004f9cb27 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cafe10);
    FUN_02132f7c(PTR_DAT_04cafd88);
    FUN_02132f7c(PTR_DAT_04cafd90);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cbc9f0);
    FUN_02132f7c(PTR_DAT_04cbc8b8);
    FUN_02132f7c(PTR_DAT_04cbc360);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04caa178);
    FUN_02132f7c(PTR_DAT_04cafda0);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cb7270);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04cbc380);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cae230);
    FUN_02132f7c(PTR_DAT_04cad718);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cbc390);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04caa1d8);
    FUN_02132f7c(PTR_DAT_04caa148);
    bRam0000000004f9cb27 = 1;
  }
  puStack_98 = (undefined8 *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_Vector3____ctor_3af944c(lVar10,*(undefined8 *)puVar3);
  if (lVar10 != 0) {
    lVar12 = *(long *)(lVar10 + 0x10);
    lVar13 = *(long *)PTR_DAT_04caa170;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    puVar3 = PTR_DAT_04cbc390;
    puVar4 = PTR_DAT_04cbc380;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        lVar12 = lVar12 + (long)(int)uVar1 * 0xc;
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        *(float *)(lVar12 + 0x20) = fVar19;
        *(undefined4 *)(lVar12 + 0x24) = 0;
        *(float *)(lVar12 + 0x28) = fVar23;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                  (fVar19,0,fVar23,lVar10,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Collections_Generic_List_Color____ctor_3a01b34(lVar12,*(undefined8 *)puVar4);
      puVar4 = PTR_DAT_04cbc360;
      if (lVar12 != 0) {
        lVar13 = *(long *)(lVar12 + 0x10);
        lVar14 = *(long *)PTR_DAT_04cbc360;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        puVar5 = PTR_DAT_04cb7270;
        puVar3 = PTR_DAT_04caa1d8;
        if (lVar13 != 0) {
          auVar21 = NEON_fmov(0x3f800000,4);
          uVar1 = *(uint *)(lVar12 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar12 + 0x18) = uVar1 + 1;
            *(long *)(lVar13 + 0x28) = auVar21._8_8_;
            *(long *)(lVar13 + 0x20) = auVar21._0_8_;
          }
          else {
            System_Collections_Generic_List_Color___AddWithResize_3a023f0
                      (ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,lVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          lVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
          System_Collections_Generic_List_Vector2____ctor_3af6bb0(lVar13,*(undefined8 *)puVar5);
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(PTR_DAT_04cacfc0);
            cRam0000000004f9b948 = '\x01';
          }
          puVar5 = PTR_DAT_04cacfc0;
          puVar3 = PTR_DAT_04caa178;
          if (lVar13 != 0) {
            lVar14 = *(long *)(lVar13 + 0x10);
            uVar20 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
            uVar22 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
            lVar15 = *(long *)PTR_DAT_04caa178;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            puVar6 = PTR_DAT_04cbc8b8;
            if (lVar14 != 0) {
              uVar1 = *(uint *)(lVar13 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                lVar14 = lVar14 + (long)(int)uVar1 * 8;
                *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar14 + 0x20) = uVar20;
                *(undefined4 *)(lVar14 + 0x24) = uVar22;
              }
              else {
                System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                          (lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70)
                          );
              }
              lStack_78 = lVar10;
              System_Collections_Generic_List_Vector3___AddRange_3af9f48
                        (lVar10,lVar9,*(undefined8 *)puVar6);
              puVar8 = PTR_DAT_04cbc9f0;
              puVar7 = PTR_DAT_04cafd88;
              puVar6 = PTR_DAT_04caec70;
              if (lVar9 != 0) {
                System_Collections_Generic_List_Vector3___GetEnumerator_3afa780
                          (&uStack_c0,lVar9,*(undefined8 *)PTR_DAT_04cafda0);
                uStack_a0 = uStack_c0;
                uStack_c0 = 0;
                puStack_98 = puStack_b8;
                uStack_88 = uStack_a8;
                uStack_90 = uStack_b0;
                puStack_b8 = &uStack_a0;
                while (uVar11 = System_Collections_Generic_List_Enumerator_Vector3___MoveNext_36005a8
                                          (&uStack_a0,*(undefined8 *)puVar7), (uVar11 & 1) != 0) {
                  lVar10 = *(long *)(lVar12 + 0x10);
                  lVar14 = *(long *)puVar4;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  uVar1 = *(uint *)(lVar12 + 0x18);
                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                    lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                    *(long *)(lVar10 + 0x28) = auVar21._8_8_;
                    *(long *)(lVar10 + 0x20) = auVar21._0_8_;
                  }
                  else {
                    System_Collections_Generic_List_Color___AddWithResize_3a023f0
                              (ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,lVar12,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                  }
                  if (cRam0000000004f9b948 == '\0') {
                    FUN_02132f7c(puVar5);
                    cRam0000000004f9b948 = '\x01';
                  }
                  puVar16 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
                  lVar10 = *(long *)(lVar13 + 0x10);
                  uVar20 = *puVar16;
                  uVar22 = puVar16[1];
                  lVar14 = *(long *)puVar3;
                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  uVar1 = *(uint *)(lVar13 + 0x18);
                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                    lVar10 = lVar10 + (long)(int)uVar1 * 8;
                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar10 + 0x20) = uVar20;
                    *(undefined4 *)(lVar10 + 0x24) = uVar22;
                  }
                  else {
                    System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                              (lVar13,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                  }
                }
                System_Collections_Generic_List_Enumerator_Vector3___Dispose_36005a4
                          (&uStack_a0,*(undefined8 *)PTR_DAT_04cafe10);
                lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
                System_Collections_Generic_List_int____ctor_3a2b7dc
                          (lVar10,*(undefined8 *)PTR_DAT_04cad6e8);
                iVar18 = *(int *)(lVar9 + 0x18);
                if (0 < iVar18) {
                  iVar17 = 1;
                  do {
                    lVar14 = FUN_02133068(*(undefined8 *)puVar6,3);
                    if (lVar14 == 0) goto LAB_0250b690;
                    if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_0250b694;
                    iVar2 = 0;
                    if (iVar18 != 0) {
                      iVar2 = iVar17 / iVar18;
                    }
                    *(int *)(lVar14 + 0x24) = (iVar17 - iVar2 * iVar18) + 1;
                    if (*(uint *)(lVar14 + 0x18) == 2) goto LAB_0250b694;
                    *(int *)(lVar14 + 0x28) = iVar17;
                    if (lVar10 == 0) goto LAB_0250b690;
                    System_Collections_Generic_List_int___AddRange_3a2c278
                              (lVar10,lVar14,*(undefined8 *)puVar8);
                    iVar18 = *(int *)(lVar9 + 0x18);
                    iVar17 = iVar17 + 1;
                  } while (iVar17 <= iVar18);
                }
                lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa148);
                UnityEngine_Mesh___ctor_4389e48(lVar9,0);
                if (lVar9 != 0) {
                  UnityEngine_Mesh__SetVertices_439178c(lVar9,lStack_78,0);
                  UnityEngine_Mesh__SetColors_439205c(lVar9,lVar12,0);
                  UnityEngine_Mesh__SetUVs_4392594(lVar9,0,lVar13,0);
                  UnityEngine_Mesh__SetTriangles_4394c90(lVar9,lVar10,0,0);
                  UnityEngine_Mesh__RecalculateNormals_4395d8c(lVar9,0);
                  lVar12 = UnityEngine_Mesh__get_normals_4390ea8(lVar9,0);
                  puVar3 = PTR_DAT_04cae230;
                  puVar4 = PTR_DAT_04cad718;
                  if (lVar12 != 0) {
                    if (*(int *)(lVar12 + 0x18) == 0) {
LAB_0250b694:
                    /* WARNING: Subroutine does not return */
                      FUN_0213322c();
                    }
                    if (*(float *)(lVar12 + 0x24) < 0.0) {
                      if (lVar10 == 0) goto LAB_0250b690;
                      if (0 < *(int *)(lVar10 + 0x18)) {
                        iVar18 = 0;
                        do {
                          uVar20 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                             (lVar10,iVar18 + 1,*(undefined8 *)puVar3);
                          uVar22 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                             (lVar10,iVar18 + 2,*(undefined8 *)puVar3);
                          System_Collections_Generic_List_int___set_Item_3a2bdc8
                                    (lVar10,iVar18 + 1,uVar22,*(undefined8 *)puVar4);
                          System_Collections_Generic_List_int___set_Item_3a2bdc8
                                    (lVar10,iVar18 + 2,uVar20,*(undefined8 *)puVar4);
                          iVar18 = iVar18 + 3;
                        } while (iVar18 < *(int *)(lVar10 + 0x18));
                      }
                      UnityEngine_Mesh__SetTriangles_4394c90(lVar9,lVar10,0,0);
                      UnityEngine_Mesh__RecalculateNormals_4395d8c(lVar9,0);
                    }
                    return lVar9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0250b690:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

