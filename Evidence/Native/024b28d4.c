/* IL2CPP: Dino.BusSand.View.GarageView$$Cap
UnityEngine_Mesh_o* Dino_BusSand_View_GarageView__Cap (System_Collections_Generic_List_Vector2__o* o, float z, bool front, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GarageView$$Cap
   UnityEngine_Mesh_o* Dino_BusSand_View_GarageView__Cap
   (System_Collections_Generic_List_Vector2__o* o, float z, bool front, const MethodInfo* method);
    */

long Dino_BusSand_View_GarageView__Cap_23b28d4(undefined4 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  
  puVar4 = PTR_DAT_04cb3c10;
  puVar6 = PTR_DAT_04caa1d0;
  if ((bRam0000000004f9c974 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc8e0);
    FUN_02132f7c(PTR_DAT_04cbc8e8);
    FUN_02132f7c(PTR_DAT_04cbc8f0);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04cbc8f8);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04cbc8c0);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04cbc900);
    bRam0000000004f9c974 = 1;
  }
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  System_Collections_Generic_List_Vector3____ctor_3af944c(lVar8,*(undefined8 *)puVar4);
  puVar5 = PTR_DAT_04caa170;
  if (lVar8 != 0) {
    lVar11 = *(long *)(lVar8 + 0x10);
    lVar13 = *(long *)PTR_DAT_04caa170;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    uVar3 = _UNK_00e6a9a8;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        lVar11 = lVar11 + (long)(int)uVar1 * 0xc;
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar11 + 0x20) = uVar3;
        *(undefined4 *)(lVar11 + 0x28) = param_1;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                  (0,_UNK_00e20a7c,param_1,lVar8,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
      System_Collections_Generic_List_Vector3____ctor_3af944c(lVar11,*(undefined8 *)puVar4);
      puVar6 = PTR_DAT_04caa208;
      if ((param_3 & 1) == 0) {
        if (cRam0000000004f9ca03 == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9ca03 = '\x01';
        }
        lVar13 = *(long *)(*(long *)puVar6 + 0xb8);
        puVar12 = (undefined4 *)(lVar13 + 0x54);
        puVar15 = (undefined4 *)(lVar13 + 0x58);
        puVar17 = (undefined4 *)(lVar13 + 0x5c);
      }
      else {
        if (cRam0000000004f9c41d == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9c41d = '\x01';
        }
        lVar13 = *(long *)(*(long *)puVar6 + 0xb8);
        puVar12 = (undefined4 *)(lVar13 + 0x48);
        puVar15 = (undefined4 *)(lVar13 + 0x4c);
        puVar17 = (undefined4 *)(lVar13 + 0x50);
      }
      if (lVar11 != 0) {
        uVar21 = *puVar17;
        uVar20 = *puVar15;
        lVar14 = *(long *)(lVar11 + 0x10);
        uVar19 = *puVar12;
        lVar13 = *(long *)puVar5;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = lVar14 + (long)(int)uVar1 * 0xc;
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar14 + 0x20) = uVar19;
            *(undefined4 *)(lVar14 + 0x24) = uVar20;
            *(undefined4 *)(lVar14 + 0x28) = uVar21;
          }
          else {
            System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                      (lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          puVar7 = PTR_DAT_04cbc8e8;
          puVar4 = PTR_DAT_04caa160;
          if (param_2 != 0) {
            System_Collections_Generic_List_Vector2___GetEnumerator_3af7e50
                      (&uStack_a8,param_2,*(undefined8 *)PTR_DAT_04cbc8f8);
            uStack_80 = uStack_98;
            puStack_88 = puStack_a0;
            uStack_90 = uStack_a8;
            uStack_a8 = 0;
            puStack_a0 = &uStack_90;
            while (uVar9 = System_Collections_Generic_List_Enumerator_Vector2___MoveNext_35ff3a8
                                     (&uStack_90,*(undefined8 *)puVar7), (uVar9 & 1) != 0) {
              lVar13 = *(long *)(lVar8 + 0x10);
              lVar14 = *(long *)puVar5;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar1 = *(uint *)(lVar8 + 0x18);
                    /* try { // try from 024b2bcc to 025b2d2b has its CatchHandler @ 024b2bcc
                       catch() { ... } // from try @ 024b2bcc with catch @ 024b2bcc
                       catch() { ... } // from try @ 024b2d64 with catch @ 024b2bcc
                       catch() { ... } // from try @ 024b2f18 with catch @ 024b2bcc
                       catch() { ... } // from try @ 024b2f44 with catch @ 024b2bcc */
              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                lVar13 = lVar13 + (long)(int)uVar1 * 0xc;
                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar13 + 0x20) = (undefined4)uStack_80;
                *(undefined4 *)(lVar13 + 0x24) = uStack_80._4_4_;
                *(undefined4 *)(lVar13 + 0x28) = param_1;
              }
              else {
                System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                          (uStack_80 & 0xffffffff,uStack_80._4_4_,param_1,lVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              if ((param_3 & 1) == 0) {
                if (cRam0000000004f9ca03 == '\0') {
                  FUN_02132f7c(puVar6);
                  cRam0000000004f9ca03 = '\x01';
                }
                lVar13 = *(long *)(*(long *)puVar6 + 0xb8);
                puVar12 = (undefined4 *)(lVar13 + 0x54);
                puVar15 = (undefined4 *)(lVar13 + 0x58);
                puVar17 = (undefined4 *)(lVar13 + 0x5c);
              }
              else {
                if (cRam0000000004f9c41d == '\0') {
                  FUN_02132f7c(puVar6);
                  cRam0000000004f9c41d = '\x01';
                }
                lVar13 = *(long *)(*(long *)puVar6 + 0xb8);
                puVar12 = (undefined4 *)(lVar13 + 0x48);
                puVar15 = (undefined4 *)(lVar13 + 0x4c);
                puVar17 = (undefined4 *)(lVar13 + 0x50);
              }
              uVar19 = *puVar12;
              uVar20 = *puVar15;
              lVar13 = *(long *)(lVar11 + 0x10);
              uVar21 = *puVar17;
              lVar14 = *(long *)puVar5;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                lVar13 = lVar13 + (long)(int)uVar1 * 0xc;
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar13 + 0x20) = uVar19;
                *(undefined4 *)(lVar13 + 0x24) = uVar20;
                *(undefined4 *)(lVar13 + 0x28) = uVar21;
              }
              else {
                System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                          (lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                          );
              }
            }
            System_Collections_Generic_List_Enumerator_Vector2___Dispose_35ff3a4
                      (&uStack_90,*(undefined8 *)PTR_DAT_04cbc8e0);
            lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
            System_Collections_Generic_List_int____ctor_3a2b7dc
                      (lVar13,*(undefined8 *)PTR_DAT_04cad6e8);
            iVar10 = *(int *)(param_2 + 0x18);
            if (0 < iVar10) {
              iVar18 = 0;
              do {
                iVar18 = iVar18 + 1;
                iVar2 = 0;
                if (iVar10 != 0) {
                  iVar2 = iVar18 / iVar10;
                }
                iVar10 = (iVar18 - iVar2 * iVar10) + 1;
                if ((param_3 & 1) == 0) {
                  if (lVar13 == 0) goto LAB_024b2ff8;
                  lVar14 = *(long *)(lVar13 + 0x10);
                  lVar16 = *(long *)puVar4;
                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  if (lVar14 == 0) goto LAB_024b2ff8;
                  uVar1 = *(uint *)(lVar13 + 0x18);
                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = 0;
                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize_3a2c06c
                              (lVar13,0,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    lVar14 = *(long *)(lVar13 + 0x10);
                    lVar16 = *(long *)puVar4;
                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                    if (lVar14 == 0) goto LAB_024b2ff8;
                  }
                  uVar1 = *(uint *)(lVar13 + 0x18);
                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                    *(int *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = iVar10;
                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize_3a2c06c
                              (lVar13,iVar10,
                               *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    lVar14 = *(long *)(lVar13 + 0x10);
                    lVar16 = *(long *)puVar4;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024b2d2c with catch @ 024b2ef4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024b2d4c with catch @ 024b2ef8
                        */
                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                    if (lVar14 == 0) goto LAB_024b2ff8;
                  }
                  uVar1 = *(uint *)(lVar13 + 0x18);
                  if (*(uint *)(lVar14 + 0x18) <= uVar1) {
                    lVar14 = *(long *)(lVar16 + 0x20);
                    /* catch() { ... } // from try @ 024b2f14 with catch @ 024b2f38 */
                    /* try { // try from 024b2f3c to 025b2f43 has its CatchHandler @ 024b2f4c */
                    iVar10 = iVar18;
                    goto LAB_024b2f40;
                  }
                    /* try { // try from 024b2f14 to 025b2f17 has its CatchHandler @ 024b2f38 */
                    /* try { // try from 024b2f18 to 025b2f3b has its CatchHandler @ 024b2bcc */
                  *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                  *(int *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = iVar18;
                }
                else {
                  if (lVar13 == 0) goto LAB_024b2ff8;
                    /* try { // try from 024b2d2c to 025b2d33 has its CatchHandler @ 024b2ef4 */
                  lVar14 = *(long *)(lVar13 + 0x10);
                  lVar16 = *(long *)puVar4;
                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  if (lVar14 == 0) goto LAB_024b2ff8;
                  uVar1 = *(uint *)(lVar13 + 0x18);
                    /* try { // try from 024b2d4c to 025b2d63 has its CatchHandler @ 024b2ef8 */
                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = 0;
                    /* try { // try from 024b2d64 to 025b2f13 has its CatchHandler @ 024b2bcc */
                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize_3a2c06c
                              (lVar13,0,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    lVar14 = *(long *)(lVar13 + 0x10);
                    lVar16 = *(long *)puVar4;
                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                    if (lVar14 == 0) goto LAB_024b2ff8;
                  }
                  uVar1 = *(uint *)(lVar13 + 0x18);
                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                    *(int *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = iVar18;
                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize_3a2c06c
                              (lVar13,iVar18,
                               *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    lVar14 = *(long *)(lVar13 + 0x10);
                    lVar16 = *(long *)puVar4;
                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                    if (lVar14 == 0) goto LAB_024b2ff8;
                  }
                  uVar1 = *(uint *)(lVar13 + 0x18);
                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                    *(int *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = iVar10;
                  }
                  else {
                    lVar14 = *(long *)(lVar16 + 0x20);
LAB_024b2f40:
                    /* try { // try from 024b2f44 to 025b2f4f has its CatchHandler @ 024b2bcc */
                    System_Collections_Generic_List_int___AddWithResize_3a2c06c
                              (lVar13,iVar10,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x70));
                  }
                }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024b2f3c with catch @ 024b2f4c
                        */
                iVar10 = *(int *)(param_2 + 0x18);
              } while (iVar18 < iVar10);
            }
            lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa148);
            UnityEngine_Mesh___ctor_4389e48(lVar14,0);
            if (lVar14 != 0) {
              UnityEngine_Object__set_name_43c72ec(lVar14,*(undefined8 *)PTR_DAT_04cbc900,0);
              UnityEngine_Mesh__SetVertices_439178c(lVar14,lVar8,0);
              UnityEngine_Mesh__SetNormals_4391a7c(lVar14,lVar11,0);
              UnityEngine_Mesh__SetTriangles_4394c90(lVar14,lVar13,0,0);
              UnityEngine_Mesh__RecalculateBounds_4395ccc(lVar14,0);
              return lVar14;
            }
          }
        }
      }
    }
  }
LAB_024b2ff8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

