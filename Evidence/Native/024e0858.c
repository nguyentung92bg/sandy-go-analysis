/* IL2CPP: Dino.BusSand.View.PropKit.MeshBuilder$$Sphere
void Dino_BusSand_View_PropKit_MeshBuilder__Sphere (Dino_BusSand_View_PropKit_MeshBuilder_o* __this, UnityEngine_Vector3_o c, float r, int32_t seg, UnityEngine_Color_o col, float emit, float spec, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PropKit.MeshBuilder$$Sphere
   void Dino_BusSand_View_PropKit_MeshBuilder__Sphere (Dino_BusSand_View_PropKit_MeshBuilder_o*
   __this, UnityEngine_Vector3_o c, float r, int32_t seg, UnityEngine_Color_o col, float emit, float
   spec, const MethodInfo* method); */

void Dino_BusSand_View_PropKit_MeshBuilder__Sphere_23e0858
               (float param_1,float param_2,float param_3,float param_4,long param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  
  if ((bRam0000000004f9ca60 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa160);
    bRam0000000004f9ca60 = 1;
  }
  puVar7 = PTR_DAT_04caa160;
  fVar6 = _UNK_00e2082c;
  fVar5 = _UNK_00e1fdf4;
  iVar3 = param_6;
  if (param_6 < 0) {
    iVar3 = param_6 + 1;
  }
  iVar3 = iVar3 >> 1;
  if (iVar3 < 4) {
    iVar3 = 3;
  }
  iVar17 = 0;
  do {
    iVar1 = iVar17 + 1;
    if (0 < param_6) {
      sincosf(((float)iVar17 * fVar6) / (float)iVar3,&fStack_9c,&fStack_a0);
      fVar10 = fStack_9c;
      fVar9 = fStack_a0;
      sincosf(((float)iVar1 * fVar6) / (float)iVar3,&fStack_94,&fStack_98);
      fVar12 = fStack_94;
      fVar11 = fStack_98;
      iVar17 = 0;
      fVar21 = param_2 + fVar9 * param_4;
      fVar18 = param_2 + fStack_98 * param_4;
      do {
        fVar19 = (float)iVar17;
        iVar17 = iVar17 + 1;
        sincosf((fVar19 * fVar5) / (float)param_6,&fStack_a4,&fStack_a8);
        fVar8 = fStack_a4;
        fVar19 = fStack_a8;
        fVar25 = fVar10 * fStack_a8;
        fVar26 = fVar10 * fStack_a4;
        sincosf(((float)iVar17 * fVar5) / (float)param_6,&fStack_ac,&fStack_b0);
        fVar23 = fVar10 * fStack_b0;
        fVar22 = fVar10 * fStack_ac;
        fVar24 = fVar12 * fStack_b0;
        fVar20 = fVar12 * fStack_ac;
        iVar13 = Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0
                           (param_1 + fVar25 * param_4,fVar21,param_3 + fVar26 * param_4,fVar25,
                            fVar9,fVar26,param_5);
        Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0
                  (param_1 + fVar23 * param_4,fVar21,param_3 + fVar22 * param_4,fVar23,fVar9,param_5
                  );
        Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0
                  (param_1 + fVar24 * param_4,fVar18,param_3 + fVar20 * param_4,fVar24,fVar11,
                   param_5);
        Dino_BusSand_View_PropKit_MeshBuilder__Vert_23de7c0
                  (param_1 + fVar12 * fVar19 * param_4,fVar18,param_3 + fVar12 * fVar8 * param_4,
                   fVar12 * fVar19,fVar11,param_5);
        lVar14 = *(long *)(param_5 + 0x30);
        if (lVar14 == 0) {
LAB_024e0d9c:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar15 = *(long *)(lVar14 + 0x10);
        lVar16 = *(long *)puVar7;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_024e0d9c;
        uVar4 = *(uint *)(lVar14 + 0x18);
        if (uVar4 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar4 + 1;
          *(int *)(lVar15 + (long)(int)uVar4 * 4 + 0x20) = iVar13;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar14,iVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          lVar14 = *(long *)(param_5 + 0x30);
          if (lVar14 == 0) goto LAB_024e0d9c;
        }
        lVar15 = *(long *)(lVar14 + 0x10);
        lVar16 = *(long *)puVar7;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_024e0d9c;
        uVar4 = *(uint *)(lVar14 + 0x18);
        if (uVar4 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar4 + 1;
          *(int *)(lVar15 + (long)(int)uVar4 * 4 + 0x20) = iVar13 + 1;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar14,iVar13 + 1,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          lVar14 = *(long *)(param_5 + 0x30);
          if (lVar14 == 0) goto LAB_024e0d9c;
        }
        lVar15 = *(long *)(lVar14 + 0x10);
        lVar16 = *(long *)puVar7;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_024e0d9c;
        uVar4 = *(uint *)(lVar14 + 0x18);
        iVar2 = iVar13 + 2;
        if (uVar4 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar4 + 1;
          *(int *)(lVar15 + (long)(int)uVar4 * 4 + 0x20) = iVar2;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar14,iVar2,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70)
                    );
          lVar14 = *(long *)(param_5 + 0x30);
          if (lVar14 == 0) goto LAB_024e0d9c;
        }
        lVar15 = *(long *)(lVar14 + 0x10);
        lVar16 = *(long *)puVar7;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_024e0d9c;
        uVar4 = *(uint *)(lVar14 + 0x18);
        if (uVar4 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar4 + 1;
          *(int *)(lVar15 + (long)(int)uVar4 * 4 + 0x20) = iVar13;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar14,iVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          lVar14 = *(long *)(param_5 + 0x30);
          if (lVar14 == 0) goto LAB_024e0d9c;
        }
        lVar15 = *(long *)(lVar14 + 0x10);
        lVar16 = *(long *)puVar7;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_024e0d9c;
        uVar4 = *(uint *)(lVar14 + 0x18);
        if (uVar4 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar4 + 1;
          *(int *)(lVar15 + (long)(int)uVar4 * 4 + 0x20) = iVar2;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar14,iVar2,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70)
                    );
          lVar14 = *(long *)(param_5 + 0x30);
          if (lVar14 == 0) goto LAB_024e0d9c;
        }
        lVar15 = *(long *)(lVar14 + 0x10);
        lVar16 = *(long *)puVar7;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_024e0d9c;
        uVar4 = *(uint *)(lVar14 + 0x18);
        if (uVar4 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar4 + 1;
          *(int *)(lVar15 + (long)(int)uVar4 * 4 + 0x20) = iVar13 + 3;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar14,iVar13 + 3,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      } while (param_6 != iVar17);
    }
    iVar17 = iVar1;
    if (iVar1 == iVar3) {
      return;
    }
  } while( true );
}

