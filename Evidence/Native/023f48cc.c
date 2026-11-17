/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$Dome
UnityEngine_Mesh_o* Dino_BusSand_App_UI_HomeToonRig__Dome (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$Dome
   UnityEngine_Mesh_o* Dino_BusSand_App_UI_HomeToonRig__Dome (const MethodInfo* method); */

long Dino_BusSand_App_UI_HomeToonRig__Dome_22f48cc(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  float fVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  int *piVar23;
  int iVar24;
  ulong uVar25;
  int iVar26;
  int iVar27;
  float *pfVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  float *pfVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fStack_b0;
  float fStack_ac;
  long lStack_a8;
  
  puVar13 = PTR_DAT_04caec70;
  puVar12 = PTR_DAT_04cabdb8;
  if ((bRam0000000004f9c48a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7810);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    FUN_02132f7c(PTR_DAT_04cb77b0);
    bRam0000000004f9c48a = 1;
  }
  lStack_a8 = 0;
  lVar16 = FUN_02133068(*(undefined8 *)puVar12,0x1e1);
  lVar17 = FUN_02133068(*(undefined8 *)puVar13,0xb40);
  puVar14 = PTR_DAT_04cb7810;
  puVar13 = PTR_DAT_04cb77b0;
  puVar12 = PTR_DAT_04caa148;
  lStack_a8 = lVar17;
  if (lVar16 != 0) {
    if (*(int *)(lVar16 + 0x18) == 0) {
LAB_023f4d90:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    *(undefined8 *)(lVar16 + 0x20) = _UNK_00e698c8;
    fVar10 = _UNK_00e2082c;
    fVar7 = _UNK_00e201f4;
    uVar6 = _UNK_00e20180;
    pfVar28 = (float *)(lVar16 + 0x34);
    lVar29 = 1;
    lVar30 = 1;
    *(undefined4 *)(lVar16 + 0x28) = 0;
    fVar11 = _UNK_00e20838;
    fVar9 = _UNK_00e20754;
    fVar8 = _UNK_00e205f8;
    fVar5 = _UNK_00e20174;
    do {
      fVar39 = (float)(int)lVar30 / 10.0;
      fVar33 = 1.0 - fVar39 * fVar39;
      fVar34 = 0.0;
      if (0.0 <= fVar33) {
        fVar34 = fVar33;
      }
      fVar34 = (float)func_0x049b5300(fVar34,uVar6);
      lVar31 = 0;
      pfVar32 = pfVar28;
      do {
        if ((ulong)*(uint *)(lVar16 + 0x18) <= (ulong)(lVar29 + lVar31)) goto LAB_023f4d90;
        fVar35 = ((float)(int)lVar31 / 48.0) * fVar10;
        fVar35 = fVar35 + fVar35;
        sincosf(fVar35,&fStack_ac,&fStack_b0);
        fVar15 = fStack_ac;
        fVar33 = fStack_b0;
        fVar36 = (float)func_0x049b5300(ABS(fStack_b0),0x41000000);
        fVar37 = (float)func_0x049b5300(ABS(fVar15),0x41000000);
        fVar36 = (float)func_0x049b5300(fVar36 + fVar37,0x3e000000);
        fVar37 = (float)func_0x049b5320(fVar39 * 4.0 + fVar35 * 3.0);
        fVar38 = (float)func_0x049b5320(fVar35 * 7.0 + fVar11);
        fVar37 = (1.0 - fVar39) * fVar39 * (fVar37 * fVar9 + fVar38 * fVar5) * 2.5 + 1.0;
        fVar35 = (float)func_0x049b5320(fVar35 * 5.0 + 2.0);
        lVar31 = lVar31 + 1;
        pfVar32[-2] = fVar39 * fVar33 * (1.0 / fVar36) * fVar37;
        pfVar32[-1] = fVar34 * (fVar39 * fVar35 * fVar8 + 1.0) - fVar39 * fVar39 * fVar7;
        *pfVar32 = fVar39 * fVar15 * (1.0 / fVar36) * fVar37;
        pfVar32 = pfVar32 + 3;
      } while (lVar31 != 0x30);
      lVar30 = lVar30 + 1;
      lVar29 = lVar29 + 0x30;
      pfVar28 = pfVar28 + 0x90;
    } while (lVar30 != 0xb);
    if (lVar17 != 0) {
      uVar20 = *(ulong *)(lVar17 + 0x18);
      uVar25 = 0;
      iVar24 = 2;
      uVar22 = uVar20 & 0xffffffff;
      piVar23 = (int *)(lVar17 + 0x28);
      do {
        if ((uVar22 <= uVar25) || (piVar23[-2] = 0, uVar22 <= uVar25 + 1)) goto LAB_023f4d90;
        iVar21 = iVar24;
        if (iVar24 == 0x31) {
          iVar21 = 1;
        }
        piVar23[-1] = iVar21;
        if (uVar22 <= uVar25 + 2) goto LAB_023f4d90;
        iVar21 = iVar24 + -1;
        iVar24 = iVar24 + 1;
        uVar25 = uVar25 + 3;
        *piVar23 = iVar21;
        piVar23 = piVar23 + 3;
      } while (iVar24 != 0x32);
      iVar21 = 0;
      iVar24 = 1;
      iVar18 = 0x90;
      do {
        iVar26 = 0;
        iVar27 = 0;
        do {
          uVar2 = iVar18 + iVar26;
          iVar4 = 0;
          if (iVar26 != 0x11a) {
            iVar4 = iVar27 + 1;
          }
          uVar19 = (uint)uVar20;
          if (uVar19 <= uVar2) goto LAB_023f4d90;
          *(int *)(lVar17 + (long)(int)uVar2 * 4 + 0x20) = iVar21 + iVar27 + 1;
          if (uVar19 <= uVar2 + 1) goto LAB_023f4d90;
          iVar4 = iVar4 + iVar24 * 0x30 + -0x2f;
          *(int *)(lVar17 + (long)(int)(uVar2 + 1) * 4 + 0x20) = iVar4;
          if (uVar19 <= uVar2 + 2) goto LAB_023f4d90;
          iVar1 = iVar21 + iVar27 + 0x31;
          *(int *)(lVar17 + (long)(iVar18 + iVar26 + 2) * 4 + 0x20) = iVar1;
          if ((uVar19 <= uVar2 + 3) ||
             (*(int *)(lVar17 + (long)(iVar18 + iVar26 + 3) * 4 + 0x20) = iVar4, uVar19 <= uVar2 + 4
             )) goto LAB_023f4d90;
          iVar3 = iVar18 + iVar26;
          *(int *)(lVar17 + (long)(iVar3 + 4) * 4 + 0x20) = iVar4 + 0x30;
          if (uVar19 <= uVar2 + 5) goto LAB_023f4d90;
          iVar26 = iVar26 + 6;
          iVar27 = iVar27 + 1;
          *(int *)(lVar17 + (long)(iVar3 + 5) * 4 + 0x20) = iVar1;
        } while (iVar26 != 0x120);
        iVar24 = iVar24 + 1;
        iVar18 = iVar18 + 0x120;
        iVar21 = iVar21 + 0x30;
      } while (iVar24 != 10);
      System_Array__Resize_int__2663f54(&lStack_a8,iVar18,*(undefined8 *)puVar14);
      lVar17 = thunk_FUN_0216e89c(*(undefined8 *)puVar12);
      UnityEngine_Mesh___ctor_4389e48(lVar17,0);
      if (lVar17 != 0) {
        UnityEngine_Object__set_name_43c72ec(lVar17,*(undefined8 *)puVar13,0);
        UnityEngine_Mesh__set_vertices_4390e48(lVar17,lVar16,0);
        UnityEngine_Mesh__set_triangles_4393ee8(lVar17,lStack_a8,0);
        UnityEngine_Mesh__RecalculateNormals_4395d8c(lVar17,0);
        UnityEngine_Mesh__RecalculateBounds_4395ccc(lVar17,0);
        return lVar17;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

