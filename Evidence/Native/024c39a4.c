/* IL2CPP: Dino.BusSand.View.MechanicLayer$$RebuildLane
void Dino_BusSand_View_MechanicLayer__RebuildLane (Dino_BusSand_View_MechanicLayer_o* __this, Dino_BusSand_View_MechanicLayer_LaneVis_o* lv, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$RebuildLane
   void Dino_BusSand_View_MechanicLayer__RebuildLane (Dino_BusSand_View_MechanicLayer_o* __this,
   Dino_BusSand_View_MechanicLayer_LaneVis_o* lv, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__RebuildLane_23c39a4
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],long param_4
               ,long param_5)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  double *pdVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  float *pfVar23;
  undefined4 *puVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  uint uVar33;
  int iVar34;
  ulong uVar35;
  int iVar36;
  long lVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  double dVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar48;
  double dVar47;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar52 [8];
  double dVar53;
  float fVar54;
  float fVar55;
  double dVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  undefined4 uVar64;
  float fVar65;
  float fVar66;
  undefined4 uVar67;
  float fVar68;
  float fVar69;
  double dStack_110;
  double *pdStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  double *pdStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  
  uVar12 = param_3._8_8_;
  dVar47 = param_3._0_8_;
  if ((bRam0000000004f9c9cc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc9d8);
    FUN_02132f7c(PTR_DAT_04cad6c0);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04cad708);
    FUN_02132f7c(PTR_DAT_04cad7c8);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    FUN_02132f7c(PTR_DAT_04cac5d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd088);
    FUN_02132f7c(PTR_DAT_04cafe78);
    bRam0000000004f9c9cc = 1;
  }
  puVar10 = PTR_DAT_04cac5d0;
  auVar3._8_8_ = uStack_b8;
  auVar3._0_8_ = auStack_c0;
  if (param_5 == 0) goto LAB_024c3dec;
  uVar32 = *(undefined8 *)(param_5 + 0x10);
  fVar55 = *(float *)(param_5 + 0x58);
  fVar58 = *(float *)(param_4 + 0x50);
  if (*(int *)(*(long *)PTR_DAT_04cac5d0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar16 = Dino_BusSand_View_MechanicLayer__TailCut_23c4754(fVar55 * fVar58,uVar32);
  uVar17 = Dino_BusSand_View_MechanicLayer__get_ArtHighway_23c35dc();
  auVar3._8_8_ = uStack_b8;
  auVar3._0_8_ = auStack_c0;
  if ((uVar17 & 1) == 0) {
    Dino_BusSand_View_MechanicLayer__FillLaneFloor_23c4aac
              (*(float *)(param_4 + 0x50) * _UNK_00e200e4,param_4,*(undefined8 *)(param_5 + 0x48),
               lVar16);
    puVar7 = PTR_DAT_04cad6c0;
    puVar6 = PTR_DAT_04cab4b0;
    auVar4._8_8_ = uStack_b8;
    auVar4._0_8_ = auStack_c0;
    auVar3._8_8_ = uStack_b8;
    auVar3._0_8_ = auStack_c0;
    if (lVar16 != 0) {
      iVar36 = *(int *)(lVar16 + 0x18);
      lVar18 = *(long *)(param_5 + 0x50);
      dStack_b0 = (double)CONCAT44(dStack_b0._4_4_,iVar36);
      iVar26 = iVar36 * 2 + -1;
      plVar5 = (long *)PTR_DAT_04ca9ae8;
      puVar13 = (undefined8 *)PTR_DAT_04cad7c8;
      if (iVar36 < 2) {
        iVar26 = 0;
      }
      while (PTR_DAT_04ca9ae8 = (undefined *)plVar5, PTR_DAT_04cad7c8 = (undefined *)puVar13,
            auVar3 = auVar4, lVar18 != 0) {
        if (iVar26 <= *(int *)(lVar18 + 0x18)) {
          iVar36 = 0;
          goto LAB_024c3d24;
        }
        if (*(int *)(*(long *)PTR_DAT_04cbd088 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar32 = Dino_BusSand_View_PropKit__get_LaneRail_23dddbc(0);
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65d = '\x01';
        }
        puVar24 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
        uVar40 = *puVar24;
        uVar45 = puVar24[1];
        uVar19 = puVar24[2];
        if (cRam0000000004f9b88b == '\0') {
          FUN_02132f7c(puVar6);
          cRam0000000004f9b88b = '\x01';
        }
        puVar24 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
        uVar60 = *puVar24;
        uVar61 = puVar24[1];
        uVar64 = puVar24[2];
        uVar67 = puVar24[3];
        if (cRam0000000004f9b65e == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65e = '\x01';
        }
        dVar47 = (double)(ulong)uVar19;
        uVar12 = 0;
        uVar32 = Dino_BusSand_View_MechanicLayer__Prop_23c2534
                           (uVar40,uVar45,dVar47,uVar60,uVar61,uVar64,uVar67,param_4,uVar32,
                            *(undefined8 *)(param_5 + 0x40),*(undefined8 *)PTR_DAT_04cafe78);
        auVar3._8_8_ = uStack_b8;
        auVar3._0_8_ = auStack_c0;
        lVar25 = *(long *)(lVar18 + 0x10);
        lVar30 = *(long *)puVar7;
        *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
        if (lVar25 == 0) break;
        uVar19 = *(uint *)(lVar18 + 0x18);
        if (uVar19 < *(uint *)(lVar25 + 0x18)) {
          *(uint *)(lVar18 + 0x18) = uVar19 + 1;
          *(undefined8 *)(lVar25 + (long)(int)uVar19 * 8 + 0x20) = uVar32;
          thunk_FUN_02134474();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar18,uVar32,
                     *(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
        }
        auVar4._8_8_ = uStack_b8;
        auVar4._0_8_ = auStack_c0;
        plVar5 = (long *)PTR_DAT_04ca9ae8;
        puVar13 = (undefined8 *)PTR_DAT_04cad7c8;
        lVar18 = *(long *)(param_5 + 0x50);
      }
    }
    goto LAB_024c3dec;
  }
  if (*(long *)(param_4 + 0x28) == 0) goto LAB_024c3dec;
  fVar55 = *(float *)(*(long *)(param_4 + 0x28) + 0xfc);
  lVar18 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
  auVar3._8_8_ = uStack_b8;
  auVar3._0_8_ = auStack_c0;
  if (lVar18 == 0) goto LAB_024c3dec;
  lVar25 = *(long *)(param_5 + 0x40);
  lVar30 = *(long *)(param_5 + 0x48);
  fVar55 = fVar55 * _UNK_00e20574;
  dVar47 = *(double *)(lVar18 + 0xd8);
  dVar53 = *(double *)(lVar18 + 0xe0);
  if (*(int *)(*(long *)PTR_DAT_04cbc9d8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cbc9d8);
  }
  fVar41 = _UNK_00e207ec;
  fVar58 = _UNK_00e201bc;
  uVar17 = (ulong)(uint)_UNK_00e207ec;
  if ((bRam0000000004f9c98a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbca00);
    FUN_02132f7c(PTR_DAT_04cbca08);
    FUN_02132f7c(PTR_DAT_04cbca10);
    FUN_02132f7c(PTR_DAT_04cbc9d8);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cbca18);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04caa178);
    FUN_02132f7c(PTR_DAT_04cb7338);
    FUN_02132f7c(PTR_DAT_04cb7340);
    FUN_02132f7c(PTR_DAT_04cbca20);
    FUN_02132f7c(PTR_DAT_04cad858);
    FUN_02132f7c(PTR_DAT_04cbca28);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caadd0);
    bRam0000000004f9c98a = 1;
  }
  puVar10 = PTR_DAT_04cbc9d8;
  dStack_b0 = 0.0;
  uStack_a8 = 0;
  uStack_d8 = (ulong)uStack_d8._4_4_ << 0x20;
  dStack_e0 = 0.0;
  uStack_e8 = (ulong)uStack_e8._4_4_ << 0x20;
  pdStack_c8 = (double *)0x0;
  dStack_d0 = 0.0;
  uStack_b8 = 0;
  auStack_c0 = (undefined1  [8])0x0;
  uStack_f0 = 0;
  if (lVar30 == 0) goto LAB_024b8340;
  UnityEngine_Mesh__Clear_4395cc4(lVar30,0);
  if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar15 = (ulong)(uint)fVar55;
  lVar16 = Dino_BusSand_View_HighwayMesh__Smooth_23b8428(fVar55 * _UNK_00e20178,lVar16);
  if (lVar16 == 0) goto LAB_024b8340;
  if (*(int *)(lVar16 + 0x18) < 2) {
    return;
  }
  lVar18 = *(long *)puVar10;
  if (*(int *)(lVar18 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar18 = *(long *)puVar10;
  }
  lVar27 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x38);
  if (lVar27 == 0) goto LAB_024b8340;
  if (*(int *)(lVar27 + 0x18) < *(int *)(lVar16 + 0x18)) {
    uVar12 = FUN_02133068(*(undefined8 *)PTR_DAT_04caadd0,*(int *)(lVar16 + 0x18) << 1);
    lVar18 = *(long *)puVar10;
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar18);
      lVar18 = *(long *)puVar10;
    }
    puVar13 = (undefined8 *)(*(long *)(lVar18 + 0xb8) + 0x38);
    *puVar13 = uVar12;
    thunk_FUN_02134474(puVar13,uVar12);
    lVar18 = *(long *)puVar10;
  }
  if (*(int *)(lVar18 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar18 = *(long *)puVar10;
  }
  lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x38);
  if (lVar18 == 0) goto LAB_024b8340;
  uVar19 = *(uint *)(lVar18 + 0x18);
  uVar21 = (ulong)uVar19;
  if (uVar21 == 0) {
LAB_024b833c:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  *(undefined4 *)(lVar18 + 0x20) = 0;
  puVar7 = PTR_DAT_04caa200;
  puVar6 = PTR_DAT_04caa1a8;
  iVar26 = *(int *)(lVar16 + 0x18);
  if (1 < iVar26) {
    fVar57 = 0.0;
    uVar35 = 0;
    do {
      fVar49 = (float)uVar17;
      fVar44 = (float)uVar15;
      if (uVar21 <= uVar35) goto LAB_024b833c;
      fVar38 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                (lVar16,uVar35 & 0xffffffff,*(undefined8 *)puVar6);
      fVar65 = fVar44;
      fVar62 = fVar49;
      fVar39 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                (lVar16,(int)uVar35 + 1,*(undefined8 *)puVar6);
      if (cRam0000000004f9b9df == '\0') {
        FUN_02132f7c(puVar7);
        cRam0000000004f9b9df = '\x01';
      }
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar19 = *(uint *)(lVar18 + 0x18);
      uVar21 = (ulong)uVar19;
      if (uVar21 <= uVar35 + 1) goto LAB_024b833c;
      lVar27 = uVar35 + 2;
      fVar44 = (fVar44 - fVar65) * (fVar44 - fVar65);
      uVar15 = (ulong)(uint)fVar44;
      fVar49 = (fVar49 - fVar62) * (fVar49 - fVar62);
      uVar17 = (ulong)(uint)fVar49;
      fVar57 = fVar57 + SQRT(fVar49 + (fVar38 - fVar39) * (fVar38 - fVar39) + fVar44);
      *(float *)(lVar18 + 0x24 + uVar35 * 4) = fVar57;
      uVar35 = uVar35 + 1;
      iVar26 = *(int *)(lVar16 + 0x18);
    } while (lVar27 < iVar26);
  }
  if (uVar19 <= iVar26 - 1U) goto LAB_024b833c;
  fVar57 = *(float *)(lVar18 + (long)(int)(iVar26 - 1U) * 4 + 0x20);
  if (fVar57 < _UNK_00e20948) {
    return;
  }
  if ((dVar53 == 0.0) || (UnityEngine_Mesh__get_bounds_438fac4(&dStack_110,dVar53,0), dVar47 == 0.0)
     ) goto LAB_024b8340;
  fVar44 = uStack_100._4_4_;
  UnityEngine_Mesh__get_bounds_438fac4(&dStack_110,dVar47,0);
  if (dVar47 == 0.0) goto LAB_024b8340;
  fVar49 = uStack_100._4_4_;
  UnityEngine_Mesh__get_bounds_438fac4(&dStack_110,dVar47,0);
  lVar27 = *(long *)puVar10;
  fVar65 = uStack_100._4_4_;
  if (*(int *)(lVar27 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar27 = *(long *)puVar10;
  }
  lVar27 = *(long *)(*(long *)(lVar27 + 0xb8) + 0x30);
  if (lVar27 == 0) goto LAB_024b8340;
  iVar26 = *(int *)(lVar27 + 0x18);
  fVar62 = (fVar44 + fVar44) * fVar55;
  fVar44 = (fVar49 + fVar49) * fVar55;
  *(undefined4 *)(lVar27 + 0x18) = 0;
  *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
  if (0 < iVar26) {
    System_Array__Clear_4851dc8(*(undefined8 *)(lVar27 + 0x10),0,iVar26,0);
  }
  if (fVar57 <= fVar62 + fVar44) {
    uStack_a8 = 0;
    dStack_b0 = dVar53;
    thunk_FUN_02134474(&dStack_b0,dVar53);
    puVar6 = PTR_DAT_04cbca18;
    fVar44 = fVar62 * (fVar57 / (fVar62 + fVar44));
    lVar22 = *(long *)(lVar27 + 0x10);
    lVar28 = *(long *)PTR_DAT_04cbca18;
    uStack_a8 = (ulong)(uint)fVar44 << 0x20;
    *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
    if (lVar22 == 0) goto LAB_024b8340;
    uVar19 = *(uint *)(lVar27 + 0x18);
    if (uVar19 < *(uint *)(lVar22 + 0x18)) {
      lVar22 = lVar22 + (long)(int)uVar19 * 0x10;
      *(uint *)(lVar27 + 0x18) = uVar19 + 1;
      pdVar14 = (double *)(lVar22 + 0x20);
      *pdVar14 = dStack_b0;
      *(long *)(lVar22 + 0x28) = uStack_a8;
      thunk_FUN_02134474(pdVar14,0);
    }
    else {
      System_Collections_Generic_List_HighwayMesh_Piece___AddWithResize_3b403c4
                (lVar27,dStack_b0,uStack_a8,
                 *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
    }
    uStack_a8 = 0;
    dStack_b0 = dVar47;
    thunk_FUN_02134474(&dStack_b0,dVar47);
    iVar26 = *(int *)(lVar27 + 0x1c);
    lVar22 = *(long *)(lVar27 + 0x10);
    lVar28 = *(long *)puVar6;
  }
  else {
    fVar49 = (fVar65 + fVar65) * fVar55;
    fVar65 = (fVar57 - fVar62) - fVar44;
    if (cRam0000000004f9b891 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b891 = '\x01';
    }
    fVar38 = fVar65 / fVar49;
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    dVar56 = (double)fVar38;
    dVar43 = (double)FUN_049b52f0(dVar56,&dStack_110);
    if (0.0 <= fVar38) {
      if (dVar43 == 0.5) {
        dVar43 = 1.0;
        goto LAB_024b78fc;
      }
      dVar56 = (double)(long)(dVar56 + 0.5);
    }
    else if (dVar43 == -0.5) {
      dVar43 = -1.0;
LAB_024b78fc:
      dVar56 = dStack_110;
      if (((long)dStack_110 & 1U) != 0) {
        dVar56 = dStack_110 + dVar43;
      }
    }
    else {
      dVar56 = (double)(long)(dVar56 + -0.5);
    }
    uVar19 = (uint)dVar56;
    uStack_a8 = 0;
    if ((int)uVar19 < 2) {
      uVar19 = 1;
    }
    if (dVar56 == INFINITY) {
      uVar19 = 1;
    }
    dStack_b0 = dVar53;
    thunk_FUN_02134474(&dStack_b0,dVar53);
    puVar6 = PTR_DAT_04cbca18;
    uStack_a8 = (ulong)(uint)fVar62 << 0x20;
    lVar22 = *(long *)(lVar27 + 0x10);
    lVar28 = *(long *)PTR_DAT_04cbca18;
    *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
    if (lVar22 == 0) goto LAB_024b8340;
    uVar33 = *(uint *)(lVar27 + 0x18);
    if (uVar33 < *(uint *)(lVar22 + 0x18)) {
      lVar22 = lVar22 + (long)(int)uVar33 * 0x10;
      *(uint *)(lVar27 + 0x18) = uVar33 + 1;
      pdVar14 = (double *)(lVar22 + 0x20);
      *pdVar14 = dStack_b0;
      *(long *)(lVar22 + 0x28) = uStack_a8;
      thunk_FUN_02134474(pdVar14,0);
    }
    else {
      System_Collections_Generic_List_HighwayMesh_Piece___AddWithResize_3b403c4
                (lVar27,dStack_b0,uStack_a8,
                 *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
    }
    uStack_a8 = 0;
    dStack_b0 = dVar47;
    thunk_FUN_02134474(&dStack_b0,dVar47);
    fVar65 = fVar62 + fVar49 + (fVar65 - fVar49 * (float)(int)uVar19);
    lVar22 = *(long *)(lVar27 + 0x10);
    lVar28 = *(long *)puVar6;
    *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
    uStack_a8 = CONCAT44(fVar65,fVar62);
    if (lVar22 == 0) goto LAB_024b8340;
    uVar33 = *(uint *)(lVar27 + 0x18);
    if (uVar33 < *(uint *)(lVar22 + 0x18)) {
      lVar22 = lVar22 + (long)(int)uVar33 * 0x10;
      *(uint *)(lVar27 + 0x18) = uVar33 + 1;
      pdVar14 = (double *)(lVar22 + 0x20);
      *pdVar14 = dStack_b0;
      *(long *)(lVar22 + 0x28) = uStack_a8;
      thunk_FUN_02134474(pdVar14,0);
    }
    else {
      System_Collections_Generic_List_HighwayMesh_Piece___AddWithResize_3b403c4
                (lVar27,dStack_b0,uStack_a8,
                 *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
    }
    if (1 < uVar19) {
      uVar33 = 1;
      do {
        uStack_a8 = 0;
        dStack_b0 = dVar47;
        thunk_FUN_02134474(&dStack_b0,dVar47);
        lVar22 = *(long *)(lVar27 + 0x10);
        lVar28 = *(long *)puVar6;
        *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
        uStack_a8 = CONCAT44(fVar65 + fVar49 * (float)(int)uVar33,
                             fVar65 + fVar49 * (float)(int)(uVar33 - 1));
        if (lVar22 == 0) goto LAB_024b8340;
        uVar2 = *(uint *)(lVar27 + 0x18);
        if (uVar2 < *(uint *)(lVar22 + 0x18)) {
          lVar22 = lVar22 + (long)(int)uVar2 * 0x10;
          *(uint *)(lVar27 + 0x18) = uVar2 + 1;
          pdVar14 = (double *)(lVar22 + 0x20);
          *pdVar14 = dStack_b0;
          *(long *)(lVar22 + 0x28) = uStack_a8;
          thunk_FUN_02134474(pdVar14,0);
        }
        else {
          System_Collections_Generic_List_HighwayMesh_Piece___AddWithResize_3b403c4
                    (lVar27,dStack_b0,uStack_a8,
                     *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
        }
        uVar33 = uVar33 + 1;
      } while (uVar19 != uVar33);
    }
    uStack_a8 = 0;
    dStack_b0 = dVar47;
    thunk_FUN_02134474(&dStack_b0,dVar47);
    fVar44 = fVar57 - fVar44;
    iVar26 = *(int *)(lVar27 + 0x1c);
    lVar22 = *(long *)(lVar27 + 0x10);
    lVar28 = *(long *)puVar6;
  }
  uStack_a8 = CONCAT44(fVar57,fVar44);
  *(int *)(lVar27 + 0x1c) = iVar26 + 1;
  if (lVar22 != 0) {
    uVar19 = *(uint *)(lVar27 + 0x18);
    if (uVar19 < *(uint *)(lVar22 + 0x18)) {
      lVar22 = lVar22 + (long)(int)uVar19 * 0x10;
      *(uint *)(lVar27 + 0x18) = uVar19 + 1;
      pdVar14 = (double *)(lVar22 + 0x20);
      *pdVar14 = dStack_b0;
      *(long *)(lVar22 + 0x28) = uStack_a8;
      thunk_FUN_02134474(pdVar14,0);
    }
    else {
      System_Collections_Generic_List_HighwayMesh_Piece___AddWithResize_3b403c4
                (lVar27,dStack_b0,uStack_a8,
                 *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
    }
    lVar22 = *(long *)puVar10;
    if (*(int *)(lVar22 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar22 = *(long *)puVar10;
    }
    lVar22 = *(long *)(lVar22 + 0xb8);
    lVar28 = *(long *)(lVar22 + 8);
    if (lVar28 != 0) {
      *(undefined4 *)(lVar28 + 0x18) = 0;
      *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
      lVar28 = *(long *)(lVar22 + 0x10);
      if (lVar28 != 0) {
        *(undefined4 *)(lVar28 + 0x18) = 0;
        *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
        lVar28 = *(long *)(lVar22 + 0x20);
        if (lVar28 != 0) {
          *(undefined4 *)(lVar28 + 0x18) = 0;
          *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
          puVar6 = PTR_DAT_04cbca28;
          lVar22 = *(long *)(lVar22 + 0x28);
          if (lVar22 != 0) {
            fVar44 = fVar55 * _UNK_00e20094;
            *(undefined4 *)(lVar22 + 0x18) = 0;
            *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
            System_Collections_Generic_List_HighwayMesh_Piece___GetEnumerator_3b40e04
                      (&dStack_110,lVar27,*(undefined8 *)puVar6);
            dStack_d0 = dStack_110;
            puVar9 = PTR_DAT_04caa208;
            puVar7 = PTR_DAT_04caa170;
            puVar6 = PTR_DAT_04ca9ae8;
            fVar57 = _UNK_00e20a08;
            dStack_110 = 0.0;
            pdStack_c8 = pdStack_108;
            uStack_b8 = uStack_f8;
            auStack_c0 = (undefined1  [8])uStack_100;
            pdStack_108 = &dStack_d0;
            while (uVar17 = System_Collections_Generic_List_Enumerator_HighwayMesh_Piece___MoveNext_3611334
                                      (&dStack_d0,*(undefined8 *)PTR_DAT_04cbca08),
                  auVar52 = auStack_c0, (uVar17 & 1) != 0) {
              fVar49 = (float)uStack_b8;
              fVar65 = uStack_b8._4_4_;
              if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              lVar27 = Dino_BusSand_View_HighwayMesh__Read_23b70f0(auVar52);
              lVar22 = *(long *)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar28 = *(long *)(lVar27 + 0x10);
              if (lVar28 == 0) {
LAB_024b8318:
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              iVar26 = *(int *)(lVar22 + 0x18);
              lVar31 = 0;
              lVar22 = 0;
              uVar17 = 0;
              while ((long)uVar17 < (long)(int)*(uint *)(lVar28 + 0x18)) {
                if (*(uint *)(lVar28 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                lVar28 = lVar28 + lVar31;
                fVar66 = *(float *)(lVar28 + 0x20);
                fVar63 = *(float *)(lVar28 + 0x24);
                fVar62 = *(float *)(lVar28 + 0x28);
                fVar38 = *(float *)(lVar27 + 0x30);
                fVar39 = *(float *)(lVar27 + 0x34);
                if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                Dino_BusSand_View_HighwayMesh__Sample_23b8c70
                          ((fVar65 - fVar49) * ((fVar62 - fVar38) / fVar39) + fVar49,fVar44,lVar16,
                           lVar18,&dStack_e0,&uStack_f0);
                dVar47 = dStack_e0;
                lVar28 = uStack_e8;
                fVar62 = (float)uStack_f0;
                fVar38 = (float)uStack_d8;
                if (cRam0000000004f9bcf8 == '\0') {
                  FUN_02132f7c(puVar9);
                  cRam0000000004f9bcf8 = '\x01';
                }
                fVar39 = *(float *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x20);
                uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x18);
                lVar37 = *(long *)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
                if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar15 = UnityEngine_Object__op_Inequality_43c8dec(lVar25,0,0);
                fVar66 = fVar66 * fVar55 * fVar58;
                fVar50 = (float)lVar28;
                fVar51 = fVar63 * fVar55 + fVar41;
                fVar63 = fVar66 * 0.0 + (float)((ulong)dVar47 >> 0x20) +
                         (float)((ulong)uVar12 >> 0x20) * fVar51;
                uVar21 = CONCAT44(fVar63,fVar50 * fVar66 + SUB84(dVar47,0) + (float)uVar12 * fVar51)
                ;
                fVar38 = (fVar38 - fVar66 * fVar62) + fVar51 * fVar39;
                if ((uVar15 & 1) != 0) {
                  if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  uVar40 = UnityEngine_Transform__InverseTransformPoint_43d3ffc(lVar25,0);
                  uVar21 = CONCAT44(fVar63,uVar40);
                }
                if (lVar37 == 0) {
LAB_024b830c:
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar29 = *(long *)(lVar37 + 0x10);
                lVar28 = *(long *)puVar7;
                *(int *)(lVar37 + 0x1c) = *(int *)(lVar37 + 0x1c) + 1;
                if (lVar29 == 0) goto LAB_024b830c;
                uVar19 = *(uint *)(lVar37 + 0x18);
                if (uVar19 < *(uint *)(lVar29 + 0x18)) {
                  lVar29 = lVar29 + (long)(int)uVar19 * 0xc;
                  *(uint *)(lVar37 + 0x18) = uVar19 + 1;
                  *(ulong *)(lVar29 + 0x20) = uVar21;
                  *(float *)(lVar29 + 0x28) = fVar38;
                }
                else {
                  System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                            (uVar21,uVar21 >> 0x20,lVar37,
                             *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
                }
                lVar28 = *(long *)(lVar27 + 0x18);
                if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                if ((long)uVar17 < (long)(int)*(uint *)(lVar28 + 0x18)) {
                  if (*(uint *)(lVar28 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                  lVar28 = lVar28 + lVar31;
                  fVar38 = *(float *)(lVar28 + 0x24);
                  fVar39 = *(float *)(lVar28 + 0x28);
                  fVar63 = *(float *)(lVar28 + 0x20);
                  if (cRam0000000004f9bcf8 == '\0') {
                    FUN_02132f7c(puVar9);
                    cRam0000000004f9bcf8 = '\x01';
                  }
                }
                else {
                  if (cRam0000000004f9bcf8 == '\0') {
                    FUN_02132f7c(puVar9);
                    cRam0000000004f9bcf8 = '\x01';
                  }
                  lVar28 = *(long *)(*(long *)puVar9 + 0xb8);
                  fVar38 = *(float *)(lVar28 + 0x1c);
                  fVar39 = *(float *)(lVar28 + 0x20);
                  fVar63 = *(float *)(lVar28 + 0x18);
                }
                fVar66 = uStack_f0._4_4_;
                lVar28 = *(long *)(*(long *)puVar9 + 0xb8);
                fVar51 = *(float *)(lVar28 + 0x18);
                fVar59 = *(float *)(lVar28 + 0x1c);
                fVar68 = *(float *)(lVar28 + 0x20);
                if (cRam0000000004f9b65c == '\0') {
                  FUN_02132f7c(PTR_DAT_04caa200);
                  cRam0000000004f9b65c = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                fVar51 = fVar50 * fVar63 + fVar38 * fVar51 + fVar39 * fVar62;
                fVar66 = fVar63 * 0.0 + fVar38 * fVar59 + fVar39 * fVar66;
                fVar62 = (fVar38 * fVar68 - fVar62 * fVar63) + fVar39 * fVar50;
                fVar38 = SQRT(fVar62 * fVar62 + fVar51 * fVar51 + fVar66 * fVar66);
                if (fVar38 <= fVar57) {
                  if (cRam0000000004f9b65d == '\0') {
                    FUN_02132f7c(puVar9);
                    cRam0000000004f9b65d = '\x01';
                  }
                  pfVar23 = *(float **)(*(long *)puVar9 + 0xb8);
                  fVar51 = *pfVar23;
                  fVar66 = pfVar23[1];
                  fVar62 = pfVar23[2];
                }
                else {
                  fVar51 = fVar51 / fVar38;
                  fVar66 = fVar66 / fVar38;
                  fVar62 = fVar62 / fVar38;
                }
                lVar28 = *(long *)puVar10;
                if (*(int *)(lVar28 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar28 = *(long *)puVar10;
                }
                lVar37 = *(long *)puVar6;
                lVar28 = *(long *)(*(long *)(lVar28 + 0xb8) + 0x10);
                if (*(int *)(lVar37 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar37);
                }
                uVar15 = UnityEngine_Object__op_Inequality_43c8dec(lVar25,0,0);
                if ((uVar15 & 1) != 0) {
                  if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  fVar51 = (float)UnityEngine_Transform__InverseTransformDirection_43d311c
                                            (fVar51,lVar25,0);
                }
                if (lVar28 == 0) goto LAB_024b830c;
                lVar37 = *(long *)(lVar28 + 0x10);
                lVar29 = *(long *)puVar7;
                *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
                if (lVar37 == 0) goto LAB_024b830c;
                uVar19 = *(uint *)(lVar28 + 0x18);
                if (uVar19 < *(uint *)(lVar37 + 0x18)) {
                  lVar37 = lVar37 + (long)(int)uVar19 * 0xc;
                  *(uint *)(lVar28 + 0x18) = uVar19 + 1;
                  *(float *)(lVar37 + 0x20) = fVar51;
                  *(float *)(lVar37 + 0x24) = fVar66;
                  *(float *)(lVar37 + 0x28) = fVar62;
                }
                else {
                  System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                            (fVar51,fVar66,fVar62,lVar28,
                             *(undefined8 *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
                }
                lVar28 = *(long *)puVar10;
                if (*(int *)(lVar28 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar28 = *(long *)puVar10;
                }
                puVar8 = PTR_DAT_04caa178;
                lVar37 = *(long *)(lVar27 + 0x20);
                if (lVar37 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                if (*(uint *)(lVar37 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                lVar28 = *(long *)(*(long *)(lVar28 + 0xb8) + 0x20);
                if (lVar28 == 0) {
LAB_024b8310:
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar29 = *(long *)(lVar28 + 0x10);
                uVar40 = *(undefined4 *)(lVar37 + lVar22 + 0x20);
                uVar45 = *(undefined4 *)(lVar37 + lVar22 + 0x24);
                *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
                if (lVar29 == 0) goto LAB_024b8310;
                uVar19 = *(uint *)(lVar28 + 0x18);
                if (uVar19 < *(uint *)(lVar29 + 0x18)) {
                  lVar29 = lVar29 + (long)(int)uVar19 * 8;
                  *(uint *)(lVar28 + 0x18) = uVar19 + 1;
                  *(undefined4 *)(lVar29 + 0x20) = uVar40;
                  *(undefined4 *)(lVar29 + 0x24) = uVar45;
                }
                else {
                  System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                            (lVar28,*(undefined8 *)
                                     (*(long *)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0) + 0x70));
                }
                lVar28 = *(long *)(lVar27 + 0x10);
                uVar17 = uVar17 + 1;
                lVar22 = lVar22 + 8;
                lVar31 = lVar31 + 0xc;
                if (lVar28 == 0) goto LAB_024b8318;
              }
              lVar27 = *(long *)(lVar27 + 0x28);
              if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if (0 < (int)*(ulong *)(lVar27 + 0x18)) {
                uVar17 = 0;
                uVar15 = *(ulong *)(lVar27 + 0x18) & 0xffffffff;
                do {
                  if (uVar15 <= uVar17) {
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                  lVar22 = *(long *)puVar10;
                  iVar36 = *(int *)(lVar27 + 0x20 + uVar17 * 4);
                  if (*(int *)(lVar22 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar22 = *(long *)puVar10;
                  }
                  lVar22 = *(long *)(*(long *)(lVar22 + 0xb8) + 0x28);
                  if (lVar22 == 0) {
LAB_024b8314:
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  lVar28 = *(long *)(lVar22 + 0x10);
                  lVar31 = *(long *)PTR_DAT_04caa160;
                  *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
                  if (lVar28 == 0) goto LAB_024b8314;
                  uVar19 = *(uint *)(lVar22 + 0x18);
                  iVar36 = iVar36 + iVar26;
                  if (uVar19 < *(uint *)(lVar28 + 0x18)) {
                    *(uint *)(lVar22 + 0x18) = uVar19 + 1;
                    *(int *)(lVar28 + (long)(int)uVar19 * 4 + 0x20) = iVar36;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize_3a2c06c
                              (lVar22,iVar36,
                               *(undefined8 *)(*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar15 = (ulong)*(uint *)(lVar27 + 0x18);
                  uVar17 = uVar17 + 1;
                } while ((long)uVar17 < (long)(int)*(uint *)(lVar27 + 0x18));
              }
            }
            System_Collections_Generic_List_Enumerator_HighwayMesh_Piece___Dispose_3611330
                      (&dStack_d0,*(undefined8 *)PTR_DAT_04cbca00);
            lVar16 = *(long *)puVar10;
            if (*(int *)(lVar16 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar16 = *(long *)puVar10;
            }
            lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
            if (lVar16 != 0) {
              UnityEngine_Mesh__set_indexFormat_438a024(lVar30,65000 < *(int *)(lVar16 + 0x18),0);
              lVar16 = *(long *)puVar10;
              if (*(int *)(lVar16 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar16 = *(long *)puVar10;
              }
              UnityEngine_Mesh__SetVertices_439178c
                        (lVar30,*(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8),0);
              UnityEngine_Mesh__SetNormals_4391a7c
                        (lVar30,*(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x10),0);
              UnityEngine_Mesh__SetUVs_4392594
                        (lVar30,0,*(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x20),0);
              UnityEngine_Mesh__SetTriangles_4394c90
                        (lVar30,*(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x28),0,0);
              UnityEngine_Mesh__RecalculateBounds_4395ccc(lVar30,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_024b8340:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
  while( true ) {
    auVar3._8_8_ = uStack_b8;
    auVar3._0_8_ = auStack_c0;
    lVar18 = *(long *)(param_5 + 0x50);
    iVar36 = iVar36 + 1;
    if (lVar18 == 0) break;
LAB_024c3d24:
    fVar55 = _UNK_00e20900;
    if (*(int *)(lVar18 + 0x18) <= iVar36) {
      if (dStack_b0._0_4_ < 2) {
        return;
      }
      dStack_110 = (double)(ulong)(uint)(*(float *)(param_4 + 0x50) * 0.25);
      pdStack_108 = (double *)0x0;
      if (*(int *)(lVar16 + 0x18) < 2) {
        iVar26 = 0;
      }
      else {
        uVar17 = (ulong)(uint)_UNK_00e204ac;
        uVar32 = 0;
        fVar58 = *(float *)(param_4 + 0x50) * _UNK_00e204ac;
        iVar36 = 0;
        iVar34 = 0;
        iVar20 = 1;
        do {
          puVar6 = PTR_DAT_04caa1a8;
          fVar41 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                    (lVar16,iVar34,*(undefined8 *)PTR_DAT_04caa1a8);
          uStack_f0 = uVar17;
          uStack_e8 = uVar32;
          dStack_d0 = dVar47;
          pdStack_c8 = (double *)uVar12;
          fVar57 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                    (lVar16,iVar20,*(undefined8 *)puVar6);
          uStack_100 = uVar17;
          uStack_f8 = uVar32;
          dStack_e0 = dVar47;
          uStack_d8 = uVar12;
          if (cRam0000000004f9c959 == '\0') {
            FUN_02132f7c(PTR_DAT_04caa200);
            cRam0000000004f9c959 = '\x01';
          }
          fVar44 = SUB84(dStack_e0,0);
          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            fVar44 = SUB84(dStack_e0,0);
          }
          fVar65 = fVar57 - fVar41;
          fVar49 = fVar44 - SUB84(dStack_d0,0);
          fVar62 = SQRT(fVar65 * fVar65 + fVar49 * fVar49);
          if (fVar62 <= fVar55) {
            if (cRam0000000004f9c41d == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              fVar44 = SUB84(dStack_e0,0);
              cRam0000000004f9c41d = '\x01';
            }
            dStack_b0 = *(double *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x48);
            fVar49 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x50);
          }
          else {
            fVar49 = fVar49 / fVar62;
            dStack_b0 = (double)CONCAT44(0.0 / fVar62,fVar65 / fVar62);
          }
          uStack_a8 = 0;
          auStack_c0 = (undefined1  [8])(ulong)(uint)fVar49;
          uStack_b8 = 0;
          if (cRam0000000004f9bcf8 == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            fVar44 = SUB84(dStack_e0,0);
            cRam0000000004f9bcf8 = '\x01';
          }
          iVar26 = iVar36 + 2;
          iVar34 = -1;
          fVar51 = SUB84(dStack_b0,0);
          fVar50 = (float)uStack_f0;
          fVar68 = SUB84(dStack_d0,0);
          fVar54 = (float)uStack_100;
          fVar59 = (float)((ulong)dStack_b0 >> 0x20);
          fVar38 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
          uVar12 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
          fVar66 = auStack_c0._0_4_;
          fVar49 = (float)uVar12;
          fVar69 = (float)((ulong)uVar12 >> 0x20);
          fVar39 = fVar51 * fVar38;
          fVar63 = fVar59 * fVar49;
          uVar15 = CONCAT44(fVar63,fVar39);
          fVar65 = SUB84(dStack_110,0);
          do {
            auVar3._8_8_ = uStack_b8;
            auVar3._0_8_ = auStack_c0;
            uVar40 = (undefined4)uVar15;
            if (*(long *)(param_5 + 0x50) == 0) goto LAB_024c3dec;
            lVar18 = System_Collections_Generic_List_object___get_Item_3a81924
                               (*(long *)(param_5 + 0x50),iVar36,*puVar13);
            lVar25 = *(long *)puVar10;
            if (*(int *)(lVar25 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar25);
            }
            auVar52 = auStack_c0;
            fVar46 = fVar59;
            uVar19 = Dino_BusSand_View_MechanicLayer__AlongX_23c24ac(dStack_b0,fVar59,auStack_c0);
            auVar3._8_8_ = uStack_b8;
            auVar3._0_8_ = auStack_c0;
            if (lVar18 == 0) goto LAB_024c3dec;
            fVar42 = (float)iVar34;
            uVar15 = (ulong)uVar19;
            fVar48 = (fVar68 + fVar44) * 0.5 + (fVar63 - fVar51 * fVar69) * fVar58 * fVar42;
            UnityEngine_Transform__SetPositionAndRotation_43d2064
                      ((fVar41 + fVar57) * 0.5 +
                       fVar58 * (fVar66 * fVar69 - fVar38 * fVar59) * fVar42,
                       CONCAT44(fVar48,(fVar50 + fVar54) * 0.5 +
                                       (fVar39 - fVar66 * fVar49) * fVar58 * fVar42),fVar48,uVar15,
                       fVar46,(ulong)auVar52 & 0xffffffff,uVar40,lVar18,0);
            uVar17 = (ulong)*(uint *)(param_4 + 0x50);
            uVar32 = 0;
            dVar47 = (double)(ulong)*(uint *)(param_4 + 0x50);
            uVar12 = 0;
            UnityEngine_Transform__set_localScale_43d1be0(fVar65 + fVar62,lVar18,0);
            iVar34 = iVar34 + 2;
            iVar36 = iVar36 + 1;
          } while (iVar34 != 3);
          iVar1 = iVar20 + 1;
          iVar36 = iVar26;
          iVar34 = iVar20;
          iVar20 = iVar1;
        } while (iVar1 < *(int *)(lVar16 + 0x18));
      }
      puVar6 = PTR_DAT_04caa1a8;
      fVar57 = SUB84(dVar47,0);
      fVar58 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                (lVar16,1,*(undefined8 *)PTR_DAT_04caa1a8);
      fVar55 = fVar57;
      fVar41 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                (lVar16,0,*(undefined8 *)puVar6);
      fVar58 = fVar58 - fVar41;
      fVar57 = fVar57 - fVar55;
      dVar47 = (double)(ulong)(uint)(fVar57 * fVar57);
      uVar12 = 0;
      fVar41 = fVar58 * fVar58 + fVar57 * fVar57;
      if (fVar41 <= _UNK_00e1fe00) {
        if (cRam0000000004f9c41d == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9c41d = '\x01';
        }
        dStack_b0 = *(double *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x48);
        fVar57 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x50);
      }
      else {
        dVar53 = (double)(ulong)(uint)fVar58;
        uVar12 = 0;
        fVar44 = fVar55;
        if (cRam0000000004f9b65c == '\0') {
          uStack_a8 = 0;
          dStack_b0 = (double)(ulong)(uint)fVar58;
          FUN_02132f7c(PTR_DAT_04caa200);
          cRam0000000004f9b65c = '\x01';
          dVar53 = dStack_b0;
          uVar12 = uStack_a8;
        }
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          dStack_b0 = dVar53;
          uStack_a8 = uVar12;
          thunk_FUN_0218fdac();
          dVar53 = dStack_b0;
        }
        fVar55 = SQRT(fVar41);
        dVar47 = (double)(ulong)(uint)_UNK_00e20a08;
        uVar12 = 0;
        if (fVar55 <= _UNK_00e20a08) {
          fVar55 = fVar44;
          if (cRam0000000004f9b65d == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65d = '\x01';
          }
          dStack_b0 = **(double **)(*(long *)PTR_DAT_04caa208 + 0xb8);
          fVar57 = *(float *)(*(double **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
        }
        else {
          fVar57 = fVar57 / fVar55;
          dVar47 = (double)CONCAT44(0.0 / fVar55,SUB84(dVar53,0) / fVar55);
          uVar12 = 0;
          dStack_b0 = dVar47;
        }
      }
      auVar3._8_8_ = uStack_b8;
      auVar3._0_8_ = auStack_c0;
      uStack_a8 = 0;
      if (*(long *)(param_5 + 0x50) != 0) {
        lVar18 = System_Collections_Generic_List_object___get_Item_3a81924
                           (*(long *)(param_5 + 0x50),iVar26,*puVar13);
        _auStack_c0 = System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                (lVar16,0,*(undefined8 *)puVar6);
        dStack_d0 = dVar47;
        pdStack_c8 = (double *)uVar12;
        if (cRam0000000004f9bcf8 == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9bcf8 = '\x01';
        }
        lVar16 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
        fVar41 = (float)((ulong)dStack_b0 >> 0x20);
        fVar44 = fVar57 * *(float *)(lVar16 + 0x1c);
        fVar49 = fVar44 - *(float *)(lVar16 + 0x20) * fVar41;
        fVar58 = *(float *)(lVar16 + 0x20) * SUB84(dStack_b0,0) - fVar57 * *(float *)(lVar16 + 0x18)
        ;
        fVar41 = *(float *)(lVar16 + 0x18) * fVar41 - *(float *)(lVar16 + 0x1c) * SUB84(dStack_b0,0)
        ;
        if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar40 = Dino_BusSand_View_MechanicLayer__AlongX_23c24ac(fVar49,fVar58,fVar41);
        auVar3 = _auStack_c0;
        if (lVar18 != 0) {
          fVar65 = SUB84(dStack_110,0);
          fVar49 = SUB84(dStack_d0,0) + (float)((ulong)dStack_b0 >> 0x20) * fVar65 * -0.5;
          UnityEngine_Transform__SetPositionAndRotation_43d2064
                    (CONCAT44(fVar49,auStack_c0._0_4_ + SUB84(dStack_b0,0) * fVar65 * -0.5),fVar49,
                     fVar55 + fVar65 * fVar57 * -0.5,uVar40,fVar58,fVar41,fVar44,lVar18,0);
          if ((bRam0000000004fa8b3e & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7a00,0);
            bRam0000000004fa8b3e = 1;
          }
          if (lVar18 != 0) {
            lVar16 = *(long *)(lVar18 + 0x10);
            if (lVar16 != 0) {
              if (pcRam0000000004fa8bf0 == (code *)0x0) {
                pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
              }
              (*pcRam0000000004fa8bf0)(lVar16,&stack0xffffffffffffffd4);
              return;
            }
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
      break;
    }
    uVar32 = System_Collections_Generic_List_object___get_Item_3a81924(lVar18,iVar36,*puVar13);
    if (*(int *)(*plVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*plVar5);
    }
    uVar17 = UnityEngine_Object__op_Inequality_43c8dec(uVar32,0,0);
    auVar3._8_8_ = uStack_b8;
    auVar3._0_8_ = auStack_c0;
    if ((uVar17 & 1) != 0) {
      if (*(long *)(param_5 + 0x50) == 0) break;
      lVar18 = System_Collections_Generic_List_object___get_Item_3a81924
                         (*(long *)(param_5 + 0x50),iVar36,*puVar13);
      auVar3._8_8_ = uStack_b8;
      auVar3._0_8_ = auStack_c0;
      if (lVar18 == 0) break;
      lVar18 = UnityEngine_Component__get_gameObject_43bcde8(lVar18,0);
      auVar3._8_8_ = uStack_b8;
      auVar3._0_8_ = auStack_c0;
      if (lVar18 == 0) break;
      bVar11 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar18,0);
      auVar3._8_8_ = uStack_b8;
      auVar3._0_8_ = auStack_c0;
      if (iVar36 < iVar26 != (bool)(bVar11 & 1)) {
        if (*(long *)(param_5 + 0x50) == 0) break;
        lVar18 = System_Collections_Generic_List_object___get_Item_3a81924
                           (*(long *)(param_5 + 0x50),iVar36,*puVar13);
        auVar3._8_8_ = uStack_b8;
        auVar3._0_8_ = auStack_c0;
        if (lVar18 == 0) break;
        lVar18 = UnityEngine_Component__get_gameObject_43bcde8(lVar18,0);
        auVar3._8_8_ = uStack_b8;
        auVar3._0_8_ = auStack_c0;
        if (lVar18 == 0) break;
        UnityEngine_GameObject__SetActive_43c1408(lVar18,iVar36 < iVar26,0);
      }
    }
  }
LAB_024c3dec:
  _auStack_c0 = auVar3;
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

