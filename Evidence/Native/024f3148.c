/* IL2CPP: Dino.BusSand.View.VehicleBatch$$<MergedMesh>g__Add|25_0
void Dino_BusSand_View_VehicleBatch___MergedMesh_g__Add_25_0 (UnityEngine_Vector3_o offset, UnityEngine_Vector3_o scale, int32_t part, Dino_BusSand_View_VehicleBatch___c__DisplayClass25_0_o* , Dino_BusSand_View_VehicleBatch___c__DisplayClass25_1_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleBatch$$<MergedMesh>g__Add|25_0
   void Dino_BusSand_View_VehicleBatch___MergedMesh_g__Add_25_0 (UnityEngine_Vector3_o offset,
   UnityEngine_Vector3_o scale, int32_t part,
   Dino_BusSand_View_VehicleBatch___c__DisplayClass25_0_o* ,
   Dino_BusSand_View_VehicleBatch___c__DisplayClass25_1_o* , const MethodInfo* method); */

void Dino_BusSand_View_VehicleBatch___MergedMesh_g__Add_25_0_23f3148
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               int param_7,long *param_8,long *param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if ((bRam0000000004f9cac1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad8c8);
    FUN_02132f7c(PTR_DAT_04cad890);
    FUN_02132f7c(PTR_DAT_04cad898);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04caa178);
    FUN_02132f7c(PTR_DAT_04cad8a0);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    bRam0000000004f9cac1 = 1;
  }
  puVar7 = PTR_DAT_04cad890;
  puVar6 = PTR_DAT_04caa178;
  puVar5 = PTR_DAT_04caa170;
  puVar4 = PTR_DAT_04caa160;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  if ((*param_8 != 0) && (lVar9 = *param_9, lVar9 != 0)) {
    iVar2 = *(int *)(*param_8 + 0x18);
    lVar14 = 0;
    uVar15 = 0;
    do {
      if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar15) {
        if (param_9[2] != 0) {
          System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                    (&uStack_b8,param_9[2],*(undefined8 *)PTR_DAT_04cad8a0);
          goto LAB_024f3458;
        }
        break;
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar15) {
LAB_024f3510:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      lVar8 = *param_8;
      if (lVar8 == 0) break;
      lVar9 = lVar9 + lVar14;
      lVar10 = *(long *)(lVar8 + 0x10);
      fVar16 = *(float *)(lVar9 + 0x20);
      fVar18 = *(float *)(lVar9 + 0x24);
      fVar20 = *(float *)(lVar9 + 0x28);
      lVar9 = *(long *)puVar5;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar10 == 0) break;
      uVar3 = *(uint *)(lVar8 + 0x18);
      if (uVar3 < *(uint *)(lVar10 + 0x18)) {
        lVar10 = lVar10 + (long)(int)uVar3 * 0xc;
        *(uint *)(lVar8 + 0x18) = uVar3 + 1;
        *(float *)(lVar10 + 0x20) = param_1 + param_4 * fVar16;
        *(float *)(lVar10 + 0x24) = param_2 + param_5 * fVar18;
        *(float *)(lVar10 + 0x28) = param_3 + param_6 * fVar20;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                  (lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      lVar9 = param_9[1];
      if (lVar9 == 0) break;
      lVar8 = param_8[1];
      if ((long)uVar15 < (long)(int)*(uint *)(lVar9 + 0x18)) {
        if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_024f3510;
        lVar9 = lVar9 + lVar14;
        puVar11 = (undefined4 *)(lVar9 + 0x20);
        puVar12 = (undefined4 *)(lVar9 + 0x24);
        puVar13 = (undefined4 *)(lVar9 + 0x28);
      }
      else {
        if (cRam0000000004f9bcf8 == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9bcf8 = '\x01';
        }
        lVar9 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
        puVar11 = (undefined4 *)(lVar9 + 0x18);
        puVar12 = (undefined4 *)(lVar9 + 0x1c);
        puVar13 = (undefined4 *)(lVar9 + 0x20);
      }
      if (lVar8 == 0) break;
      uVar21 = *puVar13;
      uVar19 = *puVar12;
      lVar10 = *(long *)(lVar8 + 0x10);
      uVar17 = *puVar11;
      lVar9 = *(long *)puVar5;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar10 == 0) break;
      uVar3 = *(uint *)(lVar8 + 0x18);
      if (uVar3 < *(uint *)(lVar10 + 0x18)) {
        lVar10 = lVar10 + (long)(int)uVar3 * 0xc;
        *(uint *)(lVar8 + 0x18) = uVar3 + 1;
        *(undefined4 *)(lVar10 + 0x20) = uVar17;
        *(undefined4 *)(lVar10 + 0x24) = uVar19;
        *(undefined4 *)(lVar10 + 0x28) = uVar21;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                  (lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      lVar9 = param_8[2];
      if (lVar9 == 0) break;
      lVar8 = *(long *)(lVar9 + 0x10);
      lVar10 = *(long *)puVar6;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar8 == 0) break;
      uVar3 = *(uint *)(lVar9 + 0x18);
      if (uVar3 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (long)(int)uVar3 * 8;
        *(uint *)(lVar9 + 0x18) = uVar3 + 1;
        *(float *)(lVar8 + 0x20) = (float)param_7;
        *(undefined4 *)(lVar8 + 0x24) = 0;
      }
      else {
        System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                  ((float)param_7,0,lVar9,
                   *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      lVar9 = *param_9;
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 0xc;
    } while (lVar9 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
LAB_024f3458:
  uVar15 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                     (&uStack_b8,*(undefined8 *)puVar7);
  if ((uVar15 & 1) == 0) {
    System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
              (&uStack_b8,*(undefined8 *)PTR_DAT_04cad8c8);
    return;
  }
  lVar9 = param_8[3];
  if (lVar9 == 0) {
LAB_024f350c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar14 = *(long *)(lVar9 + 0x10);
  lVar8 = *(long *)puVar4;
  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
  if (lVar14 == 0) goto LAB_024f350c;
  uVar3 = *(uint *)(lVar9 + 0x18);
  iVar1 = (int)uStack_a8 + iVar2;
  if (uVar3 < *(uint *)(lVar14 + 0x18)) {
    *(uint *)(lVar9 + 0x18) = uVar3 + 1;
    *(int *)(lVar14 + (long)(int)uVar3 * 4 + 0x20) = iVar1;
  }
  else {
    System_Collections_Generic_List_int___AddWithResize_3a2c06c
              (lVar9,iVar1,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
  }
  goto LAB_024f3458;
}

