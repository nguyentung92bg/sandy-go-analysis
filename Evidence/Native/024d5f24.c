/* IL2CPP: Dino.BusSand.View.MeshLod$$Simplify
UnityEngine_Mesh_o* Dino_BusSand_View_MeshLod__Simplify (UnityEngine_Mesh_o* src, int32_t res, bool keepReadable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MeshLod$$Simplify
   UnityEngine_Mesh_o* Dino_BusSand_View_MeshLod__Simplify (UnityEngine_Mesh_o* src, int32_t res,
   bool keepReadable, const MethodInfo* method); */

long Dino_BusSand_View_MeshLod__Simplify_23d5f24(long param_1,int param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  int iVar21;
  undefined4 uVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined8 uVar35;
  uint uVar36;
  int iVar37;
  ulong uVar38;
  uint uVar39;
  int iVar40;
  long lVar41;
  undefined4 *puVar42;
  long lVar43;
  int iVar44;
  long lVar45;
  ulong uVar46;
  float *pfVar47;
  float *pfVar48;
  long lVar49;
  ulong uVar50;
  undefined8 *puVar51;
  float fVar52;
  undefined4 uVar53;
  float fVar54;
  float fVar55;
  undefined4 uVar56;
  float fVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  byte bVar64;
  char cVar65;
  byte bVar66;
  float fVar67;
  float fVar68;
  ulong uVar69;
  undefined8 uVar70;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  
  iStack_a4 = param_2;
  if ((bRam0000000004f9ca27 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd760);
    FUN_02132f7c(PTR_DAT_04cbd768);
    FUN_02132f7c(PTR_DAT_04cbd770);
    FUN_02132f7c(PTR_DAT_04cbd778);
    FUN_02132f7c(PTR_DAT_04cbc4f0);
    FUN_02132f7c(PTR_DAT_04cbc418);
    FUN_02132f7c(PTR_DAT_04cbc710);
    FUN_02132f7c(PTR_DAT_04cbc718);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cb7350);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04caa178);
    FUN_02132f7c(PTR_DAT_04cbd780);
    FUN_02132f7c(PTR_DAT_04cbd788);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa188);
    FUN_02132f7c(PTR_DAT_04cb7270);
    FUN_02132f7c(PTR_DAT_04cb7278);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    FUN_02132f7c(PTR_DAT_04cae230);
    FUN_02132f7c(PTR_DAT_04caa1b8);
    FUN_02132f7c(PTR_DAT_04cad718);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cb7280);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04caa1d8);
    FUN_02132f7c(PTR_DAT_04caa148);
    FUN_02132f7c(PTR_DAT_04cabdb8);
    FUN_02132f7c(PTR_DAT_04cbd790);
    bRam0000000004f9ca27 = 1;
  }
  uStack_a8 = 0;
  if (param_1 != 0) {
    lVar24 = UnityEngine_Mesh__get_vertices_4390dfc(param_1,0);
    lVar25 = UnityEngine_Mesh__get_normals_4390ea8(param_1,0);
    lVar26 = UnityEngine_Mesh__get_uv_4391000(param_1,0);
    lVar27 = UnityEngine_Mesh__get_colors32_439160c(param_1,0);
    if (lVar25 == 0) {
      bVar18 = false;
    }
    else {
      if (lVar24 == 0) goto LAB_024d704c;
      bVar18 = *(int *)(lVar25 + 0x18) == *(int *)(lVar24 + 0x18);
    }
    if (lVar26 == 0) {
      bVar19 = false;
    }
    else {
      if (lVar24 == 0) goto LAB_024d704c;
      bVar19 = *(int *)(lVar26 + 0x18) == *(int *)(lVar24 + 0x18);
    }
    if (lVar27 == 0) {
      bVar20 = false;
    }
    else {
      if (lVar24 == 0) goto LAB_024d704c;
      bVar20 = *(int *)(lVar27 + 0x18) == *(int *)(lVar24 + 0x18);
    }
    UnityEngine_Mesh__get_bounds_438fac4(&fStack_c0,param_1,0);
    iVar21 = iStack_a4;
    puVar17 = PTR_DAT_04cbd778;
    puVar16 = PTR_DAT_04cbd768;
    puVar15 = PTR_DAT_04cb7280;
    puVar14 = PTR_DAT_04cb7278;
    puVar13 = PTR_DAT_04cb7270;
    puVar12 = PTR_DAT_04cb3c10;
    puVar11 = PTR_DAT_04cad6e8;
    puVar10 = PTR_DAT_04caa1d8;
    puVar9 = PTR_DAT_04caa1d0;
    puVar8 = PTR_DAT_04caa1c8;
    fVar68 = fStack_b4 + fStack_b4;
    uVar58 = SUB41(fVar68,0);
    uVar60 = (undefined1)((uint)fVar68 >> 8);
    uVar61 = (undefined1)((uint)fVar68 >> 0x10);
    uVar62 = (undefined1)((uint)fVar68 >> 0x18);
    fVar55 = fStack_ac + fStack_ac;
    uVar46 = (ulong)(uint)fVar55;
    fVar52 = fStack_b0 + fStack_b0;
    if (fStack_b0 + fStack_b0 <= fVar55) {
      fVar52 = fVar55;
    }
    if (fVar68 <= fVar52) {
      fVar68 = fVar52;
    }
    if (lVar24 != 0) {
      lVar28 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,*(undefined4 *)(lVar24 + 0x18));
      lVar29 = thunk_FUN_0216e89c(*(undefined8 *)puVar17);
      iVar2 = *(int *)(lVar24 + 0x18);
      iVar23 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar23 = iVar2;
      }
      System_Collections_Generic_Dictionary_long__int____ctor_346f510
                (lVar29,iVar23 >> 2,*(undefined8 *)puVar16);
      lVar30 = thunk_FUN_0216e89c(*(undefined8 *)puVar9);
      System_Collections_Generic_List_Vector3____ctor_3af944c(lVar30,*(undefined8 *)puVar12);
      lVar31 = thunk_FUN_0216e89c(*(undefined8 *)puVar9);
      System_Collections_Generic_List_Vector3____ctor_3af944c(lVar31,*(undefined8 *)puVar12);
      lVar32 = thunk_FUN_0216e89c(*(undefined8 *)puVar10);
      System_Collections_Generic_List_Vector2____ctor_3af6bb0(lVar32,*(undefined8 *)puVar13);
      lVar33 = thunk_FUN_0216e89c(*(undefined8 *)puVar15);
      System_Collections_Generic_List_Color32____ctor_3a0449c(lVar33,*(undefined8 *)puVar14);
      lVar34 = thunk_FUN_0216e89c(*(undefined8 *)puVar8);
      System_Collections_Generic_List_int____ctor_3a2b7dc(lVar34,*(undefined8 *)puVar11);
      if ((int)*(ulong *)(lVar24 + 0x18) < 1) {
        if (lVar30 == 0) goto LAB_024d704c;
      }
      else {
        uVar69 = NEON_fmov(0x3f800000,4);
        uVar70 = NEON_fmov(0x41800000,4);
        puVar51 = (undefined8 *)(lVar26 + 0x20);
        fVar68 = fVar68 / (float)iVar21;
        uVar38 = *(ulong *)(lVar24 + 0x18) & 0xffffffff;
        pfVar47 = (float *)(lVar24 + 0x28);
        lVar49 = 8;
        pfVar48 = (float *)(lVar25 + 0x28);
        do {
          uVar50 = lVar49 - 8;
          if (uVar38 <= uVar50) goto LAB_024d7048;
          fVar52 = (pfVar47[-1] - (fStack_bc - fStack_b0)) / fVar68;
          lVar43 = 0;
          if (fVar52 != INFINITY) {
            lVar43 = (long)fVar52;
          }
          if (bVar19) {
            if (lVar26 == 0) goto LAB_024d704c;
            if (*(uint *)(lVar26 + 0x18) <= uVar50) goto LAB_024d7048;
            fVar52 = (float)*puVar51;
            fVar55 = (float)((ulong)*puVar51 >> 0x20);
            fVar52 = fVar52 - (float)(int)fVar52;
            fVar55 = fVar55 - (float)(int)fVar55;
            uVar58 = (undefined1)((uint)fVar55 >> 8);
            uVar60 = (undefined1)((uint)fVar55 >> 0x10);
            uVar61 = (undefined1)((uint)fVar55 >> 0x18);
            iVar21 = -(uint)((float)(uVar69 >> 0x20) < fVar55);
            uVar46 = CONCAT17(uVar61,CONCAT16(uVar60,CONCAT15(uVar58,CONCAT14(SUB41(fVar55,0),fVar52
                                                                             )))) ^
                     (CONCAT17(uVar61,CONCAT16(uVar60,CONCAT15(uVar58,CONCAT14(SUB41(fVar55,0),
                                                                               fVar52)))) ^ uVar69)
                     & CONCAT17((char)((uint)iVar21 >> 0x18),
                                CONCAT16((char)((uint)iVar21 >> 0x10),
                                         CONCAT15((char)((uint)iVar21 >> 8),
                                                  CONCAT14((char)iVar21,
                                                           -(uint)((float)uVar69 < fVar52)))));
            iVar21 = -(uint)(fVar52 < 0.0);
            iVar23 = -(uint)(fVar55 < 0.0);
            fVar52 = (float)uVar46 * (float)uVar70;
            fVar55 = (float)(uVar46 >> 0x20) * (float)((ulong)uVar70 >> 0x20);
            fVar52 = (float)(int)(float)CONCAT13((byte)((uint)fVar52 >> 0x18) &
                                                 ~(byte)((uint)iVar21 >> 0x18),
                                                 CONCAT12((byte)((uint)fVar52 >> 0x10) &
                                                          ~(byte)((uint)iVar21 >> 0x10),
                                                          CONCAT11((byte)((uint)fVar52 >> 8) &
                                                                   ~(byte)((uint)iVar21 >> 8),
                                                                   SUB41(fVar52,0) & ~(byte)iVar21))
                                                );
            fVar55 = (float)(int)(float)CONCAT13((byte)((uint)fVar55 >> 0x18) &
                                                 ~(byte)((uint)iVar23 >> 0x18),
                                                 CONCAT12((byte)((uint)fVar55 >> 0x10) &
                                                          ~(byte)((uint)iVar23 >> 0x10),
                                                          CONCAT11((byte)((uint)fVar55 >> 8) &
                                                                   ~(byte)((uint)iVar23 >> 8),
                                                                   SUB41(fVar55,0) & ~(byte)iVar23))
                                                );
            iVar21 = -(uint)(fVar52 == INFINITY);
            iVar23 = -(uint)(fVar55 == INFINITY);
            uVar58 = (undefined1)((uint)iVar23 >> 8);
            uVar60 = (undefined1)((uint)iVar23 >> 0x10);
            uVar61 = (undefined1)((uint)iVar23 >> 0x18);
            lVar41 = (long)fVar52 << 4;
            lVar45 = (long)fVar55;
            bVar64 = (byte)(iVar21 >> 0x1f);
            cVar65 = (char)((long)CONCAT17(uVar61,CONCAT16(uVar60,CONCAT15(uVar58,CONCAT14((char)
                                                  iVar23,iVar21)))) >> 0x3f);
            bVar66 = (byte)((ulong)lVar41 >> 0x38);
            lVar41 = CONCAT17(bVar66 & ~bVar64,
                              CONCAT16((byte)((ulong)lVar41 >> 0x30) & ~bVar64,
                                       CONCAT15((byte)((ulong)lVar41 >> 0x28) & ~bVar64,
                                                CONCAT14((byte)((ulong)lVar41 >> 0x20) & ~bVar64,
                                                         CONCAT13((byte)((ulong)lVar41 >> 0x18) &
                                                                  ~(byte)((uint)iVar21 >> 0x18),
                                                                  CONCAT12((byte)((ulong)lVar41 >>
                                                                                 0x10) &
                                                                           ~(byte)((uint)iVar21 >>
                                                                                  0x10),
                                                                           CONCAT11((byte)((ulong)
                                                  lVar41 >> 8) & ~(byte)((uint)iVar21 >> 8),
                                                  (byte)lVar41 & ~(byte)iVar21))))))) +
                     ((ulong)(CONCAT18((char)((ulong)lVar45 >> 0x38),
                                       CONCAT17((char)((ulong)lVar45 >> 0x30),
                                                CONCAT16((char)((ulong)lVar45 >> 0x28),
                                                         CONCAT15((char)((ulong)lVar45 >> 0x20),
                                                                  CONCAT14((char)((ulong)lVar45 >>
                                                                                 0x18),
                                                                           CONCAT13((char)((ulong)
                                                  lVar45 >> 0x10),
                                                  CONCAT12((char)((ulong)lVar45 >> 8),
                                                           CONCAT11((char)lVar45,bVar66)))))))) >> 8
                             ) &
                     ~(ulong)(CONCAT18(cVar65,CONCAT17(cVar65,CONCAT16(cVar65,CONCAT15(cVar65,
                                                  CONCAT14(uVar61,CONCAT13(uVar60,CONCAT12(uVar58,
                                                  CONCAT11((char)iVar23,bVar64)))))))) >> 8));
          }
          else {
            lVar41 = 0;
          }
          if (bVar18) {
            if (lVar25 == 0) goto LAB_024d704c;
            if (*(uint *)(lVar25 + 0x18) <= uVar50) goto LAB_024d7048;
            fVar55 = ABS(*pfVar48);
            fVar67 = ABS(pfVar48[-2]);
            fVar52 = ABS(pfVar48[-1]);
            if ((fVar67 < fVar52) || (fVar67 < fVar55)) {
              if (fVar55 <= fVar52) {
                if (pfVar48[-1] <= 0.0) {
                  uVar46 = 4;
                }
                else {
                  uVar46 = 3;
                }
              }
              else if (*pfVar48 <= 0.0) {
                uVar46 = 6;
              }
              else {
                uVar46 = 5;
              }
            }
            else if (pfVar48[-2] <= 0.0) {
              uVar46 = 2;
            }
            else {
              uVar46 = 1;
            }
          }
          else {
            uVar46 = 0;
          }
          uVar58 = 0;
          uVar60 = 0;
          uVar61 = 0x80;
          uVar62 = 0x7f;
          fVar55 = (pfVar47[-2] - (fStack_c0 - fStack_b4)) / fVar68;
          fVar52 = (*pfVar47 - (fStack_b8 - fStack_ac)) / fVar68;
          lVar45 = 0;
          if (fVar55 != INFINITY) {
            lVar45 = (long)fVar55 << 9;
          }
          lVar1 = 0;
          if (fVar52 != INFINITY) {
            lVar1 = (long)fVar52 << 8;
          }
          if (lVar29 == 0) goto LAB_024d704c;
          uVar46 = uVar46 | (lVar1 + (lVar43 + lVar45) * 0x20000 + lVar41) * 8;
          uVar38 = System_Collections_Generic_Dictionary_long__int___TryGetValue_3471cdc
                             (lVar29,uVar46,&uStack_a8,*(undefined8 *)PTR_DAT_04cbd760);
          if ((uVar38 & 1) == 0) {
            if (lVar30 == 0) goto LAB_024d704c;
            uStack_a8 = *(undefined4 *)(lVar30 + 0x18);
            System_Collections_Generic_Dictionary_long__int___set_Item_3470284
                      (lVar29,uVar46,uStack_a8,*(undefined8 *)PTR_DAT_04cbd770);
            if (cRam0000000004f9b65d == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65d = '\x01';
            }
            puVar8 = PTR_DAT_04caa170;
            puVar42 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
            lVar43 = *(long *)(lVar30 + 0x10);
            uVar53 = *puVar42;
            uVar56 = puVar42[1];
            uVar22 = puVar42[2];
            *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
            if (lVar43 == 0) goto LAB_024d704c;
            uVar36 = *(uint *)(lVar30 + 0x18);
            if (uVar36 < *(uint *)(lVar43 + 0x18)) {
              lVar43 = lVar43 + (long)(int)uVar36 * 0xc;
              *(uint *)(lVar30 + 0x18) = uVar36 + 1;
              *(undefined4 *)(lVar43 + 0x20) = uVar53;
              *(undefined4 *)(lVar43 + 0x24) = uVar56;
              *(undefined4 *)(lVar43 + 0x28) = uVar22;
            }
            else {
              System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                        (lVar30,*(undefined8 *)
                                 (*(long *)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0) + 0x70));
              if (cRam0000000004f9b65d == '\0') {
                FUN_02132f7c(PTR_DAT_04caa208);
                cRam0000000004f9b65d = '\x01';
              }
            }
            puVar8 = PTR_DAT_04caa170;
            if (lVar31 == 0) goto LAB_024d704c;
            puVar42 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
            lVar43 = *(long *)(lVar31 + 0x10);
            uVar53 = *puVar42;
            uVar56 = puVar42[1];
            uVar22 = puVar42[2];
            uVar58 = (undefined1)uVar22;
            uVar60 = (undefined1)((uint)uVar22 >> 8);
            uVar61 = (undefined1)((uint)uVar22 >> 0x10);
            uVar62 = (undefined1)((uint)uVar22 >> 0x18);
            *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
            if (lVar43 == 0) goto LAB_024d704c;
            uVar36 = *(uint *)(lVar31 + 0x18);
            if (uVar36 < *(uint *)(lVar43 + 0x18)) {
              lVar43 = lVar43 + (long)(int)uVar36 * 0xc;
              *(uint *)(lVar31 + 0x18) = uVar36 + 1;
              *(undefined4 *)(lVar43 + 0x20) = uVar53;
              *(undefined4 *)(lVar43 + 0x24) = uVar56;
              *(undefined4 *)(lVar43 + 0x28) = uVar22;
            }
            else {
              System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                        (lVar31,*(undefined8 *)
                                 (*(long *)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0) + 0x70));
            }
            if (lVar34 == 0) goto LAB_024d704c;
            lVar43 = *(long *)(lVar34 + 0x10);
            lVar41 = *(long *)PTR_DAT_04caa160;
            *(int *)(lVar34 + 0x1c) = *(int *)(lVar34 + 0x1c) + 1;
            if (lVar43 == 0) goto LAB_024d704c;
            uVar36 = *(uint *)(lVar34 + 0x18);
            if (uVar36 < *(uint *)(lVar43 + 0x18)) {
                    /* try { // try from 024d669c to 025d6973 has its CatchHandler @ 024d669c
                       catch() { ... } // from try @ 024d669c with catch @ 024d669c
                       catch() { ... } // from try @ 024d69e8 with catch @ 024d669c
                       catch() { ... } // from try @ 024d6a68 with catch @ 024d669c
                       catch() { ... } // from try @ 024d73e4 with catch @ 024d669c
                       catch() { ... } // from try @ 024d7424 with catch @ 024d669c
                       catch() { ... } // from try @ 024d7448 with catch @ 024d669c
                       catch() { ... } // from try @ 024d746c with catch @ 024d669c
                       catch() { ... } // from try @ 024d7490 with catch @ 024d669c */
              *(uint *)(lVar34 + 0x18) = uVar36 + 1;
              *(undefined4 *)(lVar43 + (long)(int)uVar36 * 4 + 0x20) = 0;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (lVar34,0,*(undefined8 *)(*(long *)(*(long *)(lVar41 + 0x20) + 0xc0) + 0x70)
                        );
            }
            if (bVar19) {
              if (lVar26 == 0) goto LAB_024d704c;
              puVar7 = puVar51;
              if (*(uint *)(lVar26 + 0x18) <= uVar50) goto LAB_024d7048;
            }
            else {
              if (cRam0000000004f9b948 == '\0') {
                FUN_02132f7c(PTR_DAT_04cacfc0);
                cRam0000000004f9b948 = '\x01';
              }
              puVar7 = *(undefined8 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
            }
            if (lVar32 == 0) goto LAB_024d704c;
            uVar22 = *(undefined4 *)puVar7;
            fVar55 = *(float *)((long)puVar7 + 4);
            lVar43 = *(long *)(lVar32 + 0x10);
            lVar41 = *(long *)PTR_DAT_04caa178;
            *(int *)(lVar32 + 0x1c) = *(int *)(lVar32 + 0x1c) + 1;
            if (lVar43 == 0) goto LAB_024d704c;
            uVar36 = *(uint *)(lVar32 + 0x18);
            if (uVar36 < *(uint *)(lVar43 + 0x18)) {
              lVar43 = lVar43 + (long)(int)uVar36 * 8;
              *(uint *)(lVar32 + 0x18) = uVar36 + 1;
              *(undefined4 *)(lVar43 + 0x20) = uVar22;
              *(float *)(lVar43 + 0x24) = fVar55;
            }
            else {
              System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                        (lVar32,*(undefined8 *)(*(long *)(*(long *)(lVar41 + 0x20) + 0xc0) + 0x70));
            }
            if (bVar20) {
              if (lVar27 == 0) goto LAB_024d704c;
              if (*(uint *)(lVar27 + 0x18) <= uVar50) goto LAB_024d7048;
              uVar22 = *(undefined4 *)(lVar27 + lVar49 * 4);
            }
            else {
              uVar22 = 0xffffffff;
            }
            if (lVar33 == 0) goto LAB_024d704c;
            lVar43 = *(long *)(lVar33 + 0x10);
            lVar41 = *(long *)PTR_DAT_04cb7350;
            *(int *)(lVar33 + 0x1c) = *(int *)(lVar33 + 0x1c) + 1;
            if (lVar43 == 0) goto LAB_024d704c;
            uVar36 = *(uint *)(lVar33 + 0x18);
            if (uVar36 < *(uint *)(lVar43 + 0x18)) {
              *(uint *)(lVar33 + 0x18) = uVar36 + 1;
              *(undefined4 *)(lVar43 + (long)(int)uVar36 * 4 + 0x20) = uVar22;
            }
            else {
              System_Collections_Generic_List_Color32___AddWithResize_3a04d30
                        (lVar33,uVar22,
                         *(undefined8 *)(*(long *)(*(long *)(lVar41 + 0x20) + 0xc0) + 0x70));
            }
          }
          else if (lVar30 == 0) goto LAB_024d704c;
          uVar22 = uStack_a8;
          fVar52 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                    (lVar30,uStack_a8,*(undefined8 *)PTR_DAT_04caa1a8);
          if (*(uint *)(lVar24 + 0x18) <= uVar50) goto LAB_024d7048;
          uVar46 = (ulong)(uint)(fVar55 + pfVar47[-1]);
          fVar55 = (float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar58))) + *pfVar47;
          uVar58 = SUB41(fVar55,0);
          uVar60 = (undefined1)((uint)fVar55 >> 8);
          uVar61 = (undefined1)((uint)fVar55 >> 0x10);
          uVar62 = (undefined1)((uint)fVar55 >> 0x18);
          System_Collections_Generic_List_Vector3___set_Item_3af9a40
                    (fVar52 + pfVar47[-2],lVar30,uVar22,*(undefined8 *)PTR_DAT_04caa1b8);
          uVar22 = uStack_a8;
          fVar52 = (float)uVar46;
          if (bVar18) {
            if ((lVar31 == 0) ||
               (fVar55 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                          (lVar31,uStack_a8,*(undefined8 *)PTR_DAT_04caa1a8),
               lVar25 == 0)) goto LAB_024d704c;
            if (*(uint *)(lVar25 + 0x18) <= uVar50) goto LAB_024d7048;
            uVar46 = (ulong)(uint)(fVar52 + pfVar48[-1]);
            fVar52 = (float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar58))) + *pfVar48;
            uVar58 = SUB41(fVar52,0);
            uVar60 = (undefined1)((uint)fVar52 >> 8);
            uVar61 = (undefined1)((uint)fVar52 >> 0x10);
            uVar62 = (undefined1)((uint)fVar52 >> 0x18);
            System_Collections_Generic_List_Vector3___set_Item_3af9a40
                      (fVar55 + pfVar48[-2],lVar31,uVar22,*(undefined8 *)PTR_DAT_04caa1b8);
          }
          uVar22 = uStack_a8;
          if (lVar34 == 0) goto LAB_024d704c;
          iVar21 = System_Collections_Generic_List_int___get_Item_3a2bd74
                             (lVar34,uStack_a8,*(undefined8 *)PTR_DAT_04cae230);
          System_Collections_Generic_List_int___set_Item_3a2bdc8
                    (lVar34,uVar22,iVar21 + 1,*(undefined8 *)PTR_DAT_04cad718);
          if (lVar28 == 0) goto LAB_024d704c;
          if (*(uint *)(lVar28 + 0x18) <= uVar50) goto LAB_024d7048;
          uVar36 = *(uint *)(lVar24 + 0x18);
          uVar38 = (ulong)uVar36;
          pfVar47 = pfVar47 + 3;
          *(undefined4 *)(lVar28 + lVar49 * 4) = uStack_a8;
          lVar43 = lVar49 + -7;
          lVar49 = lVar49 + 1;
          puVar51 = puVar51 + 1;
          pfVar48 = pfVar48 + 3;
        } while (lVar43 < (int)uVar36);
      }
      puVar8 = PTR_DAT_04cabdb8;
      lVar24 = FUN_02133068(*(undefined8 *)PTR_DAT_04cabdb8,*(undefined4 *)(lVar30 + 0x18));
      lVar25 = FUN_02133068(*(undefined8 *)puVar8,*(undefined4 *)(lVar30 + 0x18));
      puVar9 = PTR_DAT_04caa200;
      puVar8 = PTR_DAT_04caa1a8;
      fVar52 = _UNK_00e20a08;
      fVar68 = _UNK_00e1fe00;
      if (lVar24 != 0) {
                    /* try { // try from 024d6974 to 025d697b has its CatchHandler @ 024d7404 */
        if (0 < *(int *)(lVar24 + 0x18)) {
          uVar38 = 0;
          pfVar47 = (float *)(lVar24 + 0x28);
          pfVar48 = (float *)(lVar25 + 0x28);
          do {
            fVar67 = (float)uVar46;
            fVar55 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                      (lVar30,uVar38 & 0xffffffff,*(undefined8 *)PTR_DAT_04caa1a8);
            if (lVar34 == 0) goto LAB_024d704c;
            fVar57 = (float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar58)));
                    /* try { // try from 024d69e4 to 025d69e7 has its CatchHandler @ 024d73e8 */
                    /* try { // try from 024d69e8 to 025d6a27 has its CatchHandler @ 024d669c */
            iVar21 = System_Collections_Generic_List_int___get_Item_3a2bd74
                               (lVar34,uVar38 & 0xffffffff,*(undefined8 *)PTR_DAT_04cae230);
            if (*(uint *)(lVar24 + 0x18) <= uVar38) {
LAB_024d7048:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            fVar54 = (float)iVar21;
            fVar67 = fVar67 / fVar54;
            fVar55 = fVar55 / fVar54;
            uVar58 = SUB41(fVar55,0);
            uVar60 = (undefined1)((uint)fVar55 >> 8);
            uVar61 = (undefined1)((uint)fVar55 >> 0x10);
            uVar62 = (undefined1)((uint)fVar55 >> 0x18);
            pfVar47[-2] = fVar55;
            pfVar47[-1] = fVar67;
            *pfVar47 = fVar57 / fVar54;
            if (lVar31 == 0) goto LAB_024d704c;
            fVar55 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                      (lVar31,uVar38 & 0xffffffff,*(undefined8 *)puVar8);
                    /* try { // try from 024d6a28 to 025d6a2f has its CatchHandler @ 024d7400 */
            fVar57 = (float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar58))) *
                     (float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar58)));
            if (fVar57 + fVar55 * fVar55 + fVar67 * fVar67 <= fVar68) {
              if (cRam0000000004f9bcf8 == '\0') {
                FUN_02132f7c(PTR_DAT_04caa208);
                cRam0000000004f9bcf8 = '\x01';
              }
              uVar70 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
              fVar55 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
            }
            else {
                    /* try { // try from 024d6a44 to 025d6a53 has its CatchHandler @ 024d744c */
              fVar67 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                        (lVar31,uVar38 & 0xffffffff,*(undefined8 *)puVar8);
              fVar55 = (float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar58)));
              if (cRam0000000004f9b65c == '\0') {
                    /* try { // try from 024d6a60 to 025d6a67 has its CatchHandler @ 024d73f8 */
                    /* try { // try from 024d6a68 to 025d73d7 has its CatchHandler @ 024d669c */
                FUN_02132f7c(puVar9);
                cRam0000000004f9b65c = '\x01';
              }
              if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              fVar54 = fVar55 * fVar55 + fVar67 * fVar67 + fVar57 * fVar57;
              uVar59 = SUB41(fVar54,0);
              uVar60 = (undefined1)((uint)fVar54 >> 8);
              uVar61 = (undefined1)((uint)fVar54 >> 0x10);
              uVar63 = (undefined1)((uint)fVar54 >> 0x18);
              fVar54 = SQRT(fVar54);
              uVar58 = SUB41(fVar54,0);
              uVar62 = (undefined1)((uint)fVar54 >> 0x18);
              if (fVar52 < fVar54) {
                uVar60 = (undefined1)((uint)fVar54 >> 8);
                uVar61 = (undefined1)((uint)fVar54 >> 0x10);
                fVar55 = fVar55 / fVar54;
                uVar70 = CONCAT44(fVar57 / fVar54,fVar67 / fVar54);
              }
              else {
                if (cRam0000000004f9b65d == '\0') {
                  FUN_02132f7c(PTR_DAT_04caa208);
                  cRam0000000004f9b65d = '\x01';
                }
                uVar70 = **(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
                fVar55 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8) + 1);
                uVar58 = uVar59;
                uVar62 = uVar63;
              }
            }
            if (lVar25 == 0) goto LAB_024d704c;
            uVar46 = (ulong)(uint)fVar55;
            if (*(uint *)(lVar25 + 0x18) <= uVar38) goto LAB_024d7048;
            *(undefined8 *)(pfVar48 + -2) = uVar70;
            uVar38 = uVar38 + 1;
            pfVar47 = pfVar47 + 3;
            *pfVar48 = fVar55;
            pfVar48 = pfVar48 + 3;
          } while ((long)uVar38 < (long)*(int *)(lVar24 + 0x18));
        }
        puVar8 = PTR_DAT_04cbd790;
        lVar26 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa148);
        UnityEngine_Mesh___ctor_4389e48(lVar26,0);
        uVar70 = UnityEngine_Object__get_name_43c71a4(param_1,0);
        uVar35 = System_Int32__ToString_482d750(&iStack_a4,0);
        uVar70 = System_String__Concat_46d2b84(uVar70,*(undefined8 *)puVar8,uVar35,0);
        if (lVar26 != 0) {
          UnityEngine_Object__set_name_43c72ec(lVar26,uVar70,0);
          UnityEngine_Mesh__set_vertices_4390e48(lVar26,lVar24,0);
          if (bVar18) {
            UnityEngine_Mesh__set_normals_4390ef4(lVar26,lVar25,0);
          }
          if (bVar19) {
            if (lVar32 == 0) goto LAB_024d704c;
            uVar70 = System_Collections_Generic_List_Vector2___ToArray_3af8f38
                               (lVar32,*(undefined8 *)PTR_DAT_04cbd780);
            UnityEngine_Mesh__set_uv_439104c(lVar26,uVar70,0);
          }
          if (bVar20) {
            if (lVar33 == 0) goto LAB_024d704c;
            uVar70 = System_Collections_Generic_List_Color32___ToArray_3a067d4
                               (lVar33,*(undefined8 *)PTR_DAT_04cbd788);
            UnityEngine_Mesh__set_colors32_4391660(lVar26,uVar70,0);
          }
          puVar9 = PTR_DAT_04cbc718;
          puVar8 = PTR_DAT_04cbc710;
          uVar22 = UnityEngine_Mesh__get_subMeshCount_436cb4c(param_1,0);
          UnityEngine_Mesh__set_subMeshCount_438f55c(lVar26,uVar22,0);
          lVar24 = thunk_FUN_0216e89c(*(undefined8 *)puVar9);
          System_Collections_Generic_HashSet_long____ctor_37e1cf0(lVar24,*(undefined8 *)puVar8);
          iVar21 = UnityEngine_Mesh__get_subMeshCount_436cb4c(param_1,0);
          puVar8 = PTR_DAT_04cbc4f0;
          if (0 < iVar21) {
            iVar21 = 0;
            do {
              lVar25 = UnityEngine_Mesh__GetTriangles_439400c(param_1,iVar21,0);
              if (lVar25 == 0) goto LAB_024d704c;
              lVar27 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
              System_Collections_Generic_List_int____ctor_3a2b854
                        (lVar27,*(int *)(lVar25 + 0x18) / 3,*(undefined8 *)PTR_DAT_04caa188);
              if (lVar24 == 0) goto LAB_024d704c;
              System_Collections_Generic_HashSet_long___Clear_37e2394
                        (lVar24,*(undefined8 *)PTR_DAT_04cbc418);
              uVar36 = *(uint *)(lVar25 + 0x18);
              if (0 < (int)uVar36) {
                uVar39 = 0;
                do {
                  if (uVar36 <= uVar39) goto LAB_024d7048;
                  if (lVar28 == 0) goto LAB_024d704c;
                  uVar3 = *(uint *)(lVar28 + 0x18);
                  uVar5 = *(uint *)(lVar25 + (long)(int)uVar39 * 4 + 0x20);
                  if ((((uVar3 <= uVar5) || (uVar36 <= uVar39 + 1)) ||
                      (uVar6 = *(uint *)(lVar25 + (long)(int)(uVar39 + 1) * 4 + 0x20),
                      uVar3 <= uVar6)) ||
                     ((uVar36 <= uVar39 + 2 ||
                      (uVar36 = *(uint *)(lVar25 + (long)(int)(uVar39 + 2) * 4 + 0x20),
                      uVar3 <= uVar36)))) goto LAB_024d7048;
                  iVar23 = *(int *)(lVar28 + (long)(int)uVar5 * 4 + 0x20);
                  iVar2 = *(int *)(lVar28 + (long)(int)uVar36 * 4 + 0x20);
                  if (((iVar23 != iVar2) &&
                      (iVar4 = *(int *)(lVar28 + (long)(int)uVar6 * 4 + 0x20), iVar23 != iVar4)) &&
                     (iVar4 != iVar2)) {
                    if ((((iVar23 <= iVar4) ||
                         (iVar40 = iVar2, iVar44 = iVar4, iVar37 = iVar23, iVar2 <= iVar4)) &&
                        (iVar40 = iVar4, iVar44 = iVar23, iVar37 = iVar2, iVar2 < iVar23)) &&
                       (iVar2 < iVar4)) {
                      iVar40 = iVar23;
                      iVar44 = iVar2;
                      iVar37 = iVar4;
                    }
                    uVar46 = System_Collections_Generic_HashSet_long___Add_37e2edc
                                       (lVar24,((long)iVar40 + (long)iVar44 * 0x30d43) * 0x30d43 +
                                               (long)iVar37,*(undefined8 *)puVar8);
                    if ((uVar46 & 1) != 0) {
                      if (lVar27 == 0) goto LAB_024d704c;
                      lVar29 = *(long *)(lVar27 + 0x10);
                      lVar30 = *(long *)PTR_DAT_04caa160;
                      *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
                      if (lVar29 == 0) goto LAB_024d704c;
                      uVar36 = *(uint *)(lVar27 + 0x18);
                      if (uVar36 < *(uint *)(lVar29 + 0x18)) {
                        *(uint *)(lVar27 + 0x18) = uVar36 + 1;
                        *(int *)(lVar29 + (long)(int)uVar36 * 4 + 0x20) = iVar23;
                        *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
                      }
                      else {
                        System_Collections_Generic_List_int___AddWithResize_3a2c06c
                                  (lVar27,iVar23,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
                        lVar29 = *(long *)(lVar27 + 0x10);
                        lVar30 = *(long *)PTR_DAT_04caa160;
                        *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
                        if (lVar29 == 0) goto LAB_024d704c;
                      }
                      uVar36 = *(uint *)(lVar27 + 0x18);
                      if (uVar36 < *(uint *)(lVar29 + 0x18)) {
                        *(uint *)(lVar27 + 0x18) = uVar36 + 1;
                        *(int *)(lVar29 + (long)(int)uVar36 * 4 + 0x20) = iVar4;
                        *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
                      }
                      else {
                        System_Collections_Generic_List_int___AddWithResize_3a2c06c
                                  (lVar27,iVar4,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
                        lVar29 = *(long *)(lVar27 + 0x10);
                        lVar30 = *(long *)PTR_DAT_04caa160;
                        *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
                        if (lVar29 == 0) goto LAB_024d704c;
                      }
                      uVar36 = *(uint *)(lVar27 + 0x18);
                      if (uVar36 < *(uint *)(lVar29 + 0x18)) {
                        *(uint *)(lVar27 + 0x18) = uVar36 + 1;
                        *(int *)(lVar29 + (long)(int)uVar36 * 4 + 0x20) = iVar2;
                      }
                      else {
                        System_Collections_Generic_List_int___AddWithResize_3a2c06c
                                  (lVar27,iVar2,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                  }
                  uVar36 = *(uint *)(lVar25 + 0x18);
                  uVar39 = uVar39 + 3;
                } while ((int)uVar39 < (int)uVar36);
              }
              UnityEngine_Mesh__SetTriangles_4394c90(lVar26,lVar27,iVar21,0);
              iVar21 = iVar21 + 1;
              iVar23 = UnityEngine_Mesh__get_subMeshCount_436cb4c(param_1,0);
            } while (iVar21 < iVar23);
          }
          if (!bVar18) {
            UnityEngine_Mesh__RecalculateNormals_4395d8c(lVar26,0);
          }
          UnityEngine_Mesh__RecalculateBounds_4395ccc(lVar26,0);
          UnityEngine_Mesh__UploadMeshData_43960c0(lVar26,(param_3 ^ 0xffffffff) & 1,0);
          return lVar26;
        }
      }
    }
  }
LAB_024d704c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

