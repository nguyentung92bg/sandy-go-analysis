/* IL2CPP: Dino.BusSand.View.GarageView$$Extrude
UnityEngine_Mesh_o* Dino_BusSand_View_GarageView__Extrude (System_Collections_Generic_List_Vector2__o* o, float z0, float z1, bool caps, bool inside, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GarageView$$Extrude
   UnityEngine_Mesh_o* Dino_BusSand_View_GarageView__Extrude
   (System_Collections_Generic_List_Vector2__o* o, float z0, float z1, bool caps, bool inside, const
   MethodInfo* method); */

long Dino_BusSand_View_GarageView__Extrude_23b1eec
               (undefined4 param_1,float param_2,long param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  puVar8 = PTR_DAT_04cb3c10;
  puVar7 = PTR_DAT_04cad6e8;
  puVar6 = PTR_DAT_04caa1d0;
  puVar5 = PTR_DAT_04caa1c8;
  fVar23 = param_2;
  if ((bRam0000000004f9c975 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc8b8);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04cbc8c0);
    FUN_02132f7c(PTR_DAT_04cbc8c8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04cbc8d0);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04cbc8d8);
    bRam0000000004f9c975 = 1;
  }
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  System_Collections_Generic_List_Vector3____ctor_3af944c(lVar9,*(undefined8 *)puVar8);
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_List_int____ctor_3a2b7dc(lVar10,*(undefined8 *)puVar7);
  puVar7 = PTR_DAT_04cbc8c8;
  puVar6 = PTR_DAT_04caa170;
  puVar5 = PTR_DAT_04caa160;
  fVar4 = _UNK_00e20948;
  if (param_3 != 0) {
    iVar2 = *(int *)(param_3 + 0x18);
    if (0 < iVar2) {
      iVar18 = 1;
      do {
        uVar21 = System_Collections_Generic_List_Vector2___get_Item_3af7148
                           (param_3,iVar18 + -1,*(undefined8 *)puVar7);
        iVar12 = 0;
        if (iVar18 != iVar2) {
          iVar12 = iVar18;
        }
        fVar24 = fVar23;
        uVar22 = System_Collections_Generic_List_Vector2___get_Item_3af7148
                           (param_3,iVar12,*(undefined8 *)puVar7);
        if ((fVar4 < fVar23) || (fVar4 < fVar24)) {
          if (lVar9 == 0) goto LAB_024b28cc;
          uVar1 = *(uint *)(lVar9 + 0x18);
          lVar13 = *(long *)(lVar9 + 0x10);
          lVar16 = *(long *)puVar6;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_024b28cc;
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + (long)(int)uVar1 * 0xc;
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar13 + 0x20) = uVar21;
            *(float *)(lVar13 + 0x24) = fVar23;
            *(undefined4 *)(lVar13 + 0x28) = param_1;
            fVar25 = fVar24;
          }
          else {
            fVar25 = fVar23;
            System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                      (uVar21,fVar23,param_1,lVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          lVar13 = *(long *)(lVar9 + 0x10);
          lVar16 = *(long *)puVar6;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_024b28cc;
          uVar3 = *(uint *)(lVar9 + 0x18);
          if (uVar3 < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + (long)(int)uVar3 * 0xc;
            *(uint *)(lVar9 + 0x18) = uVar3 + 1;
            *(undefined4 *)(lVar13 + 0x20) = uVar22;
            *(float *)(lVar13 + 0x24) = fVar24;
            *(undefined4 *)(lVar13 + 0x28) = param_1;
          }
          else {
            fVar25 = fVar24;
            System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                      (uVar22,fVar24,param_1,lVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          lVar16 = *(long *)(lVar9 + 0x10);
          lVar13 = *(long *)puVar6;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_024b28cc;
          uVar3 = *(uint *)(lVar9 + 0x18);
          if (uVar3 < *(uint *)(lVar16 + 0x18)) {
            lVar16 = lVar16 + (long)(int)uVar3 * 0xc;
            *(uint *)(lVar9 + 0x18) = uVar3 + 1;
            *(undefined4 *)(lVar16 + 0x20) = uVar22;
            *(float *)(lVar16 + 0x24) = fVar24;
            *(float *)(lVar16 + 0x28) = param_2;
            fVar24 = fVar25;
          }
          else {
            System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                      (uVar22,fVar24,param_2,lVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          lVar16 = *(long *)(lVar9 + 0x10);
          lVar13 = *(long *)puVar6;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_024b28cc;
          uVar3 = *(uint *)(lVar9 + 0x18);
          if (uVar3 < *(uint *)(lVar16 + 0x18)) {
            lVar16 = lVar16 + (long)(int)uVar3 * 0xc;
            *(uint *)(lVar9 + 0x18) = uVar3 + 1;
            *(undefined4 *)(lVar16 + 0x20) = uVar21;
            *(float *)(lVar16 + 0x24) = fVar23;
            *(float *)(lVar16 + 0x28) = param_2;
          }
          else {
            System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                      (uVar21,fVar23,param_2,lVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            fVar24 = fVar23;
          }
          if ((param_5 & 1) == 0) {
            if (lVar10 == 0) goto LAB_024b28cc;
            lVar13 = *(long *)(lVar10 + 0x10);
            lVar16 = *(long *)puVar5;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_024b28cc;
            uVar3 = *(uint *)(lVar10 + 0x18);
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar3 + 1;
              *(uint *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) = uVar1;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (lVar10,uVar1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              lVar13 = *(long *)(lVar10 + 0x10);
              lVar16 = *(long *)puVar5;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_024b28cc;
            }
            uVar3 = *(uint *)(lVar10 + 0x18);
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar3 + 1;
              *(uint *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) = uVar1 + 1;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (lVar10,uVar1 + 1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              lVar13 = *(long *)(lVar10 + 0x10);
              lVar16 = *(long *)puVar5;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_024b28cc;
            }
            uVar3 = *(uint *)(lVar10 + 0x18);
            iVar12 = uVar1 + 2;
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar3 + 1;
              *(int *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) = iVar12;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (lVar10,iVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              lVar13 = *(long *)(lVar10 + 0x10);
              lVar16 = *(long *)puVar5;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_024b28cc;
            }
            uVar3 = *(uint *)(lVar10 + 0x18);
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar3 + 1;
              *(uint *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) = uVar1;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (lVar10,uVar1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              lVar13 = *(long *)(lVar10 + 0x10);
              lVar16 = *(long *)puVar5;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_024b28cc;
            }
            uVar3 = *(uint *)(lVar10 + 0x18);
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar3 + 1;
              *(int *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) = iVar12;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (lVar10,iVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              lVar13 = *(long *)(lVar10 + 0x10);
              lVar16 = *(long *)puVar5;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_024b28cc;
            }
            uVar3 = *(uint *)(lVar10 + 0x18);
            iVar12 = uVar1 + 3;
            if (*(uint *)(lVar13 + 0x18) <= uVar3) {
              lVar13 = *(long *)(lVar16 + 0x20);
              goto LAB_024b268c;
            }
            *(uint *)(lVar10 + 0x18) = uVar3 + 1;
            *(int *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) = iVar12;
          }
          else {
            if (lVar10 == 0) goto LAB_024b28cc;
            lVar13 = *(long *)(lVar10 + 0x10);
            lVar16 = *(long *)puVar5;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_024b28cc;
            uVar3 = *(uint *)(lVar10 + 0x18);
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar3 + 1;
              *(uint *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) = uVar1;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (lVar10,uVar1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              lVar13 = *(long *)(lVar10 + 0x10);
              lVar16 = *(long *)puVar5;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_024b28cc;
            }
            uVar3 = *(uint *)(lVar10 + 0x18);
            iVar12 = uVar1 + 2;
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar3 + 1;
              *(int *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) = iVar12;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (lVar10,iVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              lVar13 = *(long *)(lVar10 + 0x10);
              lVar16 = *(long *)puVar5;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_024b28cc;
            }
            uVar3 = *(uint *)(lVar10 + 0x18);
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar3 + 1;
              *(uint *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) = uVar1 + 1;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            }
            else {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024b1eac with catch @ 024b2458
                        */
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (lVar10,uVar1 + 1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              lVar13 = *(long *)(lVar10 + 0x10);
              lVar16 = *(long *)puVar5;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    /* try { // try from 024b2474 to 025b2477 has its CatchHandler @ 024b2490 */
              if (lVar13 == 0) goto LAB_024b28cc;
            }
                    /* try { // try from 024b2478 to 025b2493 has its CatchHandler @ 024b1ac0 */
            uVar3 = *(uint *)(lVar10 + 0x18);
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
                    /* catch() { ... } // from try @ 024b2474 with catch @ 024b2490 */
              *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                    /* try { // try from 024b2494 to 025b249b has its CatchHandler @ 024b24a4 */
              *(uint *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) = uVar1;
                    /* try { // try from 024b249c to 025b24a7 has its CatchHandler @ 024b1ac0 */
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024b2494 with catch @ 024b24a4
                        */
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (lVar10,uVar1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              lVar13 = *(long *)(lVar10 + 0x10);
              lVar16 = *(long *)puVar5;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_024b28cc;
            }
            uVar3 = *(uint *)(lVar10 + 0x18);
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar3 + 1;
              *(uint *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) = uVar1 + 3;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (lVar10,uVar1 + 3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              lVar13 = *(long *)(lVar10 + 0x10);
              lVar16 = *(long *)puVar5;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_024b28cc;
            }
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
              *(int *)(lVar13 + (long)(int)uVar1 * 4 + 0x20) = iVar12;
            }
            else {
              lVar13 = *(long *)(lVar16 + 0x20);
LAB_024b268c:
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (lVar10,iVar12,*(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x70));
            }
          }
        }
        iVar18 = iVar18 + 1;
        fVar23 = fVar24;
      } while (iVar18 - iVar2 != 1);
    }
    if ((param_4 & 1) != 0) {
      lVar13 = FUN_02133068(*(undefined8 *)PTR_DAT_04cbc8d0,2);
      uVar11 = Dino_BusSand_View_GarageView__Cap_23b28d4(param_2,param_3,1);
      if (lVar13 == 0) goto LAB_024b28cc;
      if (*(int *)(lVar13 + 0x18) == 0) {
LAB_024b28d0:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      *(undefined8 *)(lVar13 + 0x20) = uVar11;
      thunk_FUN_02134474((undefined8 *)(lVar13 + 0x20),uVar11);
      uVar11 = Dino_BusSand_View_GarageView__Cap_23b28d4(param_1,param_3,0);
      if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) == 0) goto LAB_024b28d0;
      *(undefined8 *)(lVar13 + 0x28) = uVar11;
      thunk_FUN_02134474((undefined8 *)(lVar13 + 0x28),uVar11);
      puVar6 = PTR_DAT_04cbc8b8;
      uVar1 = *(uint *)(lVar13 + 0x18);
      if (0 < (int)uVar1) {
        uVar19 = 0;
        do {
          if (uVar1 <= uVar19) goto LAB_024b28d0;
          if ((lVar9 == 0) || (lVar16 = *(long *)(lVar13 + uVar19 * 8 + 0x20), lVar16 == 0))
          goto LAB_024b28cc;
          iVar2 = *(int *)(lVar9 + 0x18);
          uVar11 = UnityEngine_Mesh__get_vertices_4390dfc(lVar16,0);
          System_Collections_Generic_List_Vector3___AddRange_3af9f48
                    (lVar9,uVar11,*(undefined8 *)puVar6);
          lVar16 = UnityEngine_Mesh__get_triangles_4393e74(lVar16,0);
          if (lVar16 == 0) goto LAB_024b28cc;
          if (0 < (int)*(ulong *)(lVar16 + 0x18)) {
            uVar20 = 0;
            uVar14 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
            do {
              if (uVar14 <= uVar20) goto LAB_024b28d0;
              if (lVar10 == 0) goto LAB_024b28cc;
              lVar15 = *(long *)(lVar10 + 0x10);
              iVar18 = *(int *)(lVar16 + 0x20 + uVar20 * 4);
              lVar17 = *(long *)puVar5;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar15 == 0) goto LAB_024b28cc;
              uVar1 = *(uint *)(lVar10 + 0x18);
              iVar18 = iVar18 + iVar2;
              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                *(int *)(lVar15 + (long)(int)uVar1 * 4 + 0x20) = iVar18;
              }
              else {
                System_Collections_Generic_List_int___AddWithResize_3a2c06c
                          (lVar10,iVar18,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              uVar14 = (ulong)*(uint *)(lVar16 + 0x18);
              uVar20 = uVar20 + 1;
            } while ((long)uVar20 < (long)(int)*(uint *)(lVar16 + 0x18));
          }
          uVar1 = *(uint *)(lVar13 + 0x18);
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < (int)uVar1);
      }
    }
    lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa148);
    UnityEngine_Mesh___ctor_4389e48(lVar13,0);
    if (lVar13 != 0) {
      UnityEngine_Object__set_name_43c72ec(lVar13,*(undefined8 *)PTR_DAT_04cbc8d8,0);
      UnityEngine_Mesh__SetVertices_439178c(lVar13,lVar9,0);
      UnityEngine_Mesh__SetTriangles_4394c90(lVar13,lVar10,0,0);
      UnityEngine_Mesh__RecalculateNormals_4395d8c(lVar13,0);
      UnityEngine_Mesh__RecalculateBounds_4395ccc(lVar13,0);
      return lVar13;
    }
  }
LAB_024b28cc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

