/* IL2CPP: Dino.BusSand.View.WorldView$$FanPolygon
UnityEngine_Mesh_o* Dino_BusSand_View_WorldView__FanPolygon (System_Collections_Generic_List_Vector3__o* ring, UnityEngine_Vector3_o centre, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.WorldView$$FanPolygon
   UnityEngine_Mesh_o* Dino_BusSand_View_WorldView__FanPolygon
   (System_Collections_Generic_List_Vector3__o* ring, UnityEngine_Vector3_o centre, const
   MethodInfo* method); */

long Dino_BusSand_View_WorldView__FanPolygon_240aff8
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

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
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar3 = PTR_DAT_04cb3c10;
  puVar4 = PTR_DAT_04caa1d0;
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
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_Vector3____ctor_3af944c(lVar9,*(undefined8 *)puVar3);
  if (lVar9 != 0) {
    lVar11 = *(long *)(lVar9 + 0x10);
    lVar12 = *(long *)PTR_DAT_04caa170;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    puVar3 = PTR_DAT_04cbc390;
    puVar4 = PTR_DAT_04cbc380;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        lVar11 = lVar11 + (long)(int)uVar1 * 0xc;
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar11 + 0x20) = param_1;
        *(undefined4 *)(lVar11 + 0x24) = param_2;
        *(undefined4 *)(lVar11 + 0x28) = param_3;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                  (param_1,param_2,param_3,lVar9,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
      lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Collections_Generic_List_Color____ctor_3a01b34(lVar11,*(undefined8 *)puVar4);
      puVar4 = PTR_DAT_04cbc360;
      if (lVar11 != 0) {
        lVar12 = *(long *)(lVar11 + 0x10);
        lVar13 = *(long *)PTR_DAT_04cbc360;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        puVar5 = PTR_DAT_04cb7270;
        puVar3 = PTR_DAT_04caa1d8;
        if (lVar12 != 0) {
          auVar19 = NEON_fmov(0x3f800000,4);
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            lVar12 = lVar12 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            *(long *)(lVar12 + 0x28) = auVar19._8_8_;
            *(long *)(lVar12 + 0x20) = auVar19._0_8_;
          }
          else {
            System_Collections_Generic_List_Color___AddWithResize_3a023f0
                      (ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,lVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
          System_Collections_Generic_List_Vector2____ctor_3af6bb0(lVar12,*(undefined8 *)puVar5);
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(PTR_DAT_04cacfc0);
            cRam0000000004f9b948 = '\x01';
          }
          puVar5 = PTR_DAT_04cacfc0;
          puVar3 = PTR_DAT_04caa178;
          if (lVar12 != 0) {
            lVar13 = *(long *)(lVar12 + 0x10);
            uVar18 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
            uVar20 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
            lVar14 = *(long *)PTR_DAT_04caa178;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            puVar6 = PTR_DAT_04cbc8b8;
            if (lVar13 != 0) {
              uVar1 = *(uint *)(lVar12 + 0x18);
              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                lVar13 = lVar13 + (long)(int)uVar1 * 8;
                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar13 + 0x20) = uVar18;
                *(undefined4 *)(lVar13 + 0x24) = uVar20;
              }
              else {
                System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                          (lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                          );
              }
              System_Collections_Generic_List_Vector3___AddRange_3af9f48
                        (lVar9,param_4,*(undefined8 *)puVar6);
              puVar8 = PTR_DAT_04cbc9f0;
              puVar7 = PTR_DAT_04cafd88;
              puVar6 = PTR_DAT_04caec70;
              if (param_4 != 0) {
                System_Collections_Generic_List_Vector3___GetEnumerator_3afa780
                          (&uStack_c0,param_4,*(undefined8 *)PTR_DAT_04cafda0);
                uStack_a0 = uStack_c0;
                uStack_c0 = 0;
                puStack_98 = puStack_b8;
                uStack_88 = uStack_a8;
                uStack_90 = uStack_b0;
                puStack_b8 = &uStack_a0;
                while (uVar10 = System_Collections_Generic_List_Enumerator_Vector3___MoveNext_36005a8
                                          (&uStack_a0,*(undefined8 *)puVar7), (uVar10 & 1) != 0) {
                  lVar13 = *(long *)(lVar11 + 0x10);
                  lVar14 = *(long *)puVar4;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  uVar1 = *(uint *)(lVar11 + 0x18);
                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)uVar1 * 0x10;
                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                    *(long *)(lVar13 + 0x28) = auVar19._8_8_;
                    *(long *)(lVar13 + 0x20) = auVar19._0_8_;
                  }
                  else {
                    System_Collections_Generic_List_Color___AddWithResize_3a023f0
                              (ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,lVar11,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                  }
                  if (cRam0000000004f9b948 == '\0') {
                    FUN_02132f7c(puVar5);
                    cRam0000000004f9b948 = '\x01';
                  }
                  puVar15 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
                  lVar13 = *(long *)(lVar12 + 0x10);
                  uVar18 = *puVar15;
                  uVar20 = puVar15[1];
                  lVar14 = *(long *)puVar3;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  uVar1 = *(uint *)(lVar12 + 0x18);
                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)uVar1 * 8;
                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar13 + 0x20) = uVar18;
                    *(undefined4 *)(lVar13 + 0x24) = uVar20;
                  }
                  else {
                    System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                              (lVar12,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                  }
                }
                System_Collections_Generic_List_Enumerator_Vector3___Dispose_36005a4
                          (&uStack_a0,*(undefined8 *)PTR_DAT_04cafe10);
                lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
                System_Collections_Generic_List_int____ctor_3a2b7dc
                          (lVar13,*(undefined8 *)PTR_DAT_04cad6e8);
                iVar17 = *(int *)(param_4 + 0x18);
                if (0 < iVar17) {
                  iVar16 = 1;
                  do {
                    lVar14 = FUN_02133068(*(undefined8 *)puVar6,3);
                    if (lVar14 == 0) goto LAB_0250b690;
                    if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_0250b694;
                    iVar2 = 0;
                    if (iVar17 != 0) {
                      iVar2 = iVar16 / iVar17;
                    }
                    *(int *)(lVar14 + 0x24) = (iVar16 - iVar2 * iVar17) + 1;
                    if (*(uint *)(lVar14 + 0x18) == 2) goto LAB_0250b694;
                    *(int *)(lVar14 + 0x28) = iVar16;
                    if (lVar13 == 0) goto LAB_0250b690;
                    System_Collections_Generic_List_int___AddRange_3a2c278
                              (lVar13,lVar14,*(undefined8 *)puVar8);
                    iVar17 = *(int *)(param_4 + 0x18);
                    iVar16 = iVar16 + 1;
                  } while (iVar16 <= iVar17);
                }
                lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa148);
                UnityEngine_Mesh___ctor_4389e48(lVar14,0);
                if (lVar14 != 0) {
                  UnityEngine_Mesh__SetVertices_439178c(lVar14,lVar9,0);
                  UnityEngine_Mesh__SetColors_439205c(lVar14,lVar11,0);
                  UnityEngine_Mesh__SetUVs_4392594(lVar14,0,lVar12,0);
                  UnityEngine_Mesh__SetTriangles_4394c90(lVar14,lVar13,0,0);
                  UnityEngine_Mesh__RecalculateNormals_4395d8c(lVar14,0);
                  lVar9 = UnityEngine_Mesh__get_normals_4390ea8(lVar14,0);
                  puVar3 = PTR_DAT_04cae230;
                  puVar4 = PTR_DAT_04cad718;
                  if (lVar9 != 0) {
                    if (*(int *)(lVar9 + 0x18) == 0) {
LAB_0250b694:
                    /* WARNING: Subroutine does not return */
                      FUN_0213322c();
                    }
                    if (*(float *)(lVar9 + 0x24) < 0.0) {
                      if (lVar13 == 0) goto LAB_0250b690;
                      if (0 < *(int *)(lVar13 + 0x18)) {
                        iVar17 = 0;
                        do {
                          uVar18 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                             (lVar13,iVar17 + 1,*(undefined8 *)puVar3);
                          uVar20 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                             (lVar13,iVar17 + 2,*(undefined8 *)puVar3);
                          System_Collections_Generic_List_int___set_Item_3a2bdc8
                                    (lVar13,iVar17 + 1,uVar20,*(undefined8 *)puVar4);
                          System_Collections_Generic_List_int___set_Item_3a2bdc8
                                    (lVar13,iVar17 + 2,uVar18,*(undefined8 *)puVar4);
                          iVar17 = iVar17 + 3;
                        } while (iVar17 < *(int *)(lVar13 + 0x18));
                      }
                      UnityEngine_Mesh__SetTriangles_4394c90(lVar14,lVar13,0,0);
                      UnityEngine_Mesh__RecalculateNormals_4395d8c(lVar14,0);
                    }
                    return lVar14;
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

