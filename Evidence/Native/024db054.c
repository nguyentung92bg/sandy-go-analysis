/* IL2CPP: Dino.BusSand.View.PicturePaper$$Build
Dino_BusSand_View_PicturePaper_o* Dino_BusSand_View_PicturePaper__Build (Dino_BusSand_Core_LevelData_o* level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PicturePaper$$Build
   Dino_BusSand_View_PicturePaper_o* Dino_BusSand_View_PicturePaper__Build
   (Dino_BusSand_Core_LevelData_o* level, const MethodInfo* method); */

long Dino_BusSand_View_PicturePaper__Build_23db054(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined1 uVar18;
  ushort uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  uint *puVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  undefined4 *puVar35;
  long lVar36;
  int iVar37;
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  undefined8 uVar41;
  ulong uVar42;
  int iVar43;
  long lVar44;
  int iVar45;
  long *plVar46;
  ulong uVar47;
  double dVar48;
  undefined4 uVar49;
  double dVar50;
  float fVar51;
  ulong uStack_f0;
  double dStack_d8;
  double *pdStack_d0;
  long lStack_c8;
  double dStack_c0;
  double *pdStack_b8;
  long lStack_b0;
  
  if ((bRam0000000004f9ca42 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4b88);
    FUN_02132f7c(PTR_DAT_04caaad0);
    FUN_02132f7c(PTR_DAT_04cb6a60);
    FUN_02132f7c(PTR_DAT_04cb59a8);
    FUN_02132f7c(PTR_DAT_04cb59b0);
    FUN_02132f7c(PTR_DAT_04cb59b8);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cbbf70);
    FUN_02132f7c(PTR_DAT_04cbbf78);
    FUN_02132f7c(PTR_DAT_04cb59c0);
    FUN_02132f7c(PTR_DAT_04caa188);
    FUN_02132f7c(PTR_DAT_04cbbf88);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cae230);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cbbfb0);
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04cb6f30);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    FUN_02132f7c(PTR_DAT_04cbd858);
    FUN_02132f7c(PTR_DAT_04cbd860);
    FUN_02132f7c(PTR_DAT_04cbd868);
    FUN_02132f7c(PTR_DAT_04cbd870);
    FUN_02132f7c(PTR_DAT_04cbd878);
    FUN_02132f7c(PTR_DAT_04cb4ef0);
    FUN_02132f7c(PTR_DAT_04caed88);
    FUN_02132f7c(PTR_DAT_04cbd880);
    FUN_02132f7c(PTR_DAT_04cbd888);
    bRam0000000004f9ca42 = 1;
  }
  puVar14 = PTR_DAT_04caaad0;
  dStack_c0 = 0.0;
  pdStack_b8 = (double *)0x0;
  lStack_b0 = 0;
  if ((((param_1 == 0) || (lVar44 = *(long *)(param_1 + 0x18), lVar44 == 0)) ||
      (lVar30 = *(long *)(lVar44 + 0x40), lVar30 == 0)) ||
     ((uVar26 = *(ulong *)(lVar30 + 0x18), uVar26 == 0 || (*(long *)(lVar44 + 0x38) == 0)))) {
    return 0;
  }
  iVar22 = (int)uVar26;
  if (iVar22 != 0) {
    if (*(long *)(lVar30 + 0x20) != 0) {
      iVar6 = *(int *)(*(long *)(lVar30 + 0x20) + 0x10);
      iVar43 = iVar6;
      if (iVar6 <= iVar22) {
        iVar43 = iVar22;
      }
      iVar12 = 0;
      if (iVar43 != 0) {
        iVar12 = 0x200 / iVar43;
      }
      iVar43 = *(int *)(lVar44 + 0x20);
      if (iVar12 < 2) {
        iVar12 = 1;
      }
      iVar5 = iVar43;
      if (iVar12 <= iVar43) {
        iVar5 = iVar12;
      }
      if (iVar43 < 1) {
        iVar5 = 1;
      }
      lVar30 = FUN_02133068(*(undefined8 *)PTR_DAT_04caaad0,
                            *(undefined4 *)(*(long *)(lVar44 + 0x38) + 0x18));
      puVar15 = PTR_DAT_04cbbfb8;
      if (lVar30 != 0) {
        if (0 < *(int *)(lVar30 + 0x18)) {
          uVar42 = 0;
          do {
            lVar27 = *(long *)(lVar44 + 0x38);
            if (lVar27 == 0) goto LAB_024dc404;
            if (*(uint *)(lVar27 + 0x18) <= uVar42) goto LAB_024dc400;
            uVar41 = *(undefined8 *)(lVar27 + uVar42 * 8 + 0x20);
            if (*(int *)(*(long *)puVar15 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar18 = Dino_BusSand_Core_SandPalette__Id_2419278(uVar41,0);
            uVar7 = *(uint *)(lVar30 + 0x18);
            if (uVar7 <= uVar42) goto LAB_024dc400;
            *(undefined1 *)(lVar30 + 0x20 + uVar42) = uVar18;
            uVar42 = uVar42 + 1;
          } while ((long)uVar42 < (long)(int)uVar7);
        }
        uVar7 = iVar5 * iVar6;
        uVar42 = (ulong)uVar7;
        uVar10 = iVar5 * iVar22;
        iVar43 = uVar10 * uVar7;
        lVar27 = FUN_02133068(*(undefined8 *)puVar14);
        lVar23 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbbfb0);
        System_Collections_Generic_List_byte____ctor_39fa29c(lVar23,*(undefined8 *)PTR_DAT_04cbbf88)
        ;
        if (0 < iVar22) {
          uVar47 = 0;
          uVar20 = 0;
          iVar12 = iVar5;
          do {
            lVar28 = *(long *)(lVar44 + 0x40);
            if (lVar28 == 0) goto LAB_024dc404;
            uVar21 = ~(uint)uVar47 + iVar22;
            if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_024dc400;
            if (0 < iVar6) {
              lVar28 = *(long *)(lVar28 + (long)(int)uVar21 * 8 + 0x20);
              if (lVar28 == 0) goto LAB_024dc404;
              iVar11 = iVar5 * (uint)uVar47;
              iVar45 = 0;
              uVar21 = uVar20;
              do {
                if (*(int *)(lVar28 + 0x10) <= iVar45) break;
                uVar19 = System_String__get_Chars_46ccb24(lVar28,iVar45,0);
                if (*(int *)(*(long *)PTR_DAT_04cb6f30 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb6f30);
                }
                uVar38 = (uint)uVar19;
                if ((ushort)(uVar19 - 0x3a) < 0xfff6) {
                  if (0xffe5 < (ushort)(uVar19 - 0x7b)) {
                    uVar38 = uVar38 - 0x57;
                    goto joined_r0x024db448;
                  }
                  if (0xffe5 < (ushort)(uVar19 - 0x5b)) {
                    uVar38 = uVar38 - 0x37;
                    goto joined_r0x024db448;
                  }
                }
                else {
                  uVar38 = uVar38 - 0x30;
joined_r0x024db448:
                  if (((-1 < (int)uVar38) && ((int)uVar38 < *(int *)(lVar30 + 0x18))) &&
                     (cVar8 = *(char *)(lVar30 + (ulong)uVar38 + 0x20), cVar8 != '\0')) {
                    if (lVar23 == 0) goto LAB_024dc404;
                    uVar24 = System_Collections_Generic_List_byte___Contains_39faeac
                                       (lVar23,cVar8,*(undefined8 *)PTR_DAT_04cbbf78);
                    if ((uVar24 & 1) == 0) {
                      lVar25 = *(long *)(lVar23 + 0x10);
                      lVar32 = *(long *)PTR_DAT_04cbbf70;
                      *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
                      if (lVar25 == 0) goto LAB_024dc404;
                      uVar38 = *(uint *)(lVar23 + 0x18);
                      if (uVar38 < *(uint *)(lVar25 + 0x18)) {
                        *(uint *)(lVar23 + 0x18) = uVar38 + 1;
                        *(char *)(lVar25 + (int)uVar38 + 0x20) = cVar8;
                      }
                      else {
                        System_Collections_Generic_List_byte___AddWithResize_39fab2c
                                  (lVar23,cVar8,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                    if (iVar11 < iVar11 + iVar5) {
                      iVar37 = iVar11;
                      uVar38 = uVar21;
                      do {
                        if (iVar45 * iVar5 < iVar45 * iVar5 + iVar5) {
                          iVar13 = iVar5;
                          uVar34 = uVar38;
                          if (lVar27 == 0) goto LAB_024dc404;
                          do {
                            if (*(uint *)(lVar27 + 0x18) <= uVar34) goto LAB_024dc400;
                            iVar13 = iVar13 + -1;
                            *(char *)(lVar27 + (int)uVar34 + 0x20) = cVar8;
                            uVar34 = uVar34 + 1;
                          } while (iVar13 != 0);
                        }
                        iVar37 = iVar37 + 1;
                        uVar38 = uVar38 + uVar7;
                      } while (iVar37 != iVar12);
                    }
                  }
                }
                iVar45 = iVar45 + 1;
                uVar21 = uVar21 + iVar5;
              } while (iVar45 != iVar6);
            }
            uVar47 = uVar47 + 1;
            iVar12 = iVar12 + iVar5;
            uVar20 = uVar20 + iVar5 * iVar5 * iVar6;
          } while (uVar47 != (uVar26 & 0xffffffff));
        }
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (lVar44 = *(long *)(*(long *)(param_1 + 0x30) + 0x18), lVar44 != 0)) {
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&dStack_d8,lVar44,*(undefined8 *)PTR_DAT_04cb59c0);
          puVar17 = PTR_DAT_04cbbfb8;
          puVar16 = PTR_DAT_04cbbf78;
          puVar15 = PTR_DAT_04cbbf70;
          puVar14 = PTR_DAT_04cb59b0;
          pdStack_b8 = pdStack_d0;
          dStack_c0 = dStack_d8;
          lStack_b0 = lStack_c8;
          pdStack_d0 = &dStack_c0;
          dStack_d8 = 0.0;
          while (uVar26 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                    (&dStack_c0,*(undefined8 *)puVar14), (uVar26 & 1) != 0) {
            if (lStack_b0 != 0) {
              uVar41 = *(undefined8 *)(lStack_b0 + 0x28);
              if (*(int *)(*(long *)puVar17 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar20 = Dino_BusSand_Core_SandPalette__Id_2419278(uVar41,0);
              if ((uVar20 & 0xff) != 0) {
                if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uVar26 = System_Collections_Generic_List_byte___Contains_39faeac
                                   (lVar23,uVar20,*(undefined8 *)puVar16);
                if ((uVar26 & 1) == 0) {
                  lVar30 = *(long *)puVar15;
                  lVar44 = *(long *)(lVar23 + 0x10);
                  *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
                  if (lVar44 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  uVar21 = *(uint *)(lVar23 + 0x18);
                  if (uVar21 < *(uint *)(lVar44 + 0x18)) {
                    *(uint *)(lVar23 + 0x18) = uVar21 + 1;
                    *(char *)(lVar44 + (int)uVar21 + 0x20) = (char)uVar20;
                  }
                  else {
                    System_Collections_Generic_List_byte___AddWithResize_39fab2c
                              (lVar23,uVar20,
                               *(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
                  }
                }
              }
            }
          }
          FUN_01e79934(&dStack_d8);
        }
        lVar44 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb4b88,iVar43);
        if ((int)uVar10 < 1) {
          iVar22 = 0;
        }
        else {
          uVar20 = 0;
          uVar26 = 0;
          iVar22 = 0;
          uVar47 = uVar42;
          do {
            uVar26 = uVar26 + 1;
            if (0 < (int)uVar7) {
              if (lVar27 == 0) goto LAB_024dc404;
              uVar39 = *(ulong *)(lVar27 + 0x18);
              lVar30 = (ulong)uVar20 << 0x20;
              uVar40 = uVar39 & 0xffffffff;
              uVar24 = 0;
              do {
                uVar3 = uVar20 + uVar24;
                if (uVar40 <= uVar3) goto LAB_024dc400;
                uVar2 = uVar24 + 1;
                cVar8 = *(char *)(lVar27 + (lVar30 >> 0x20) + 0x20);
                if ((long)uVar2 < (long)(int)uVar7) {
                    /* try { // try from 024db7ac to 025dbc03 has its CatchHandler @ 024db7ac
                       catch() { ... } // from try @ 024db7ac with catch @ 024db7ac
                       catch() { ... } // from try @ 024dbc38 with catch @ 024db7ac
                       catch() { ... } // from try @ 024dbca8 with catch @ 024db7ac
                       catch() { ... } // from try @ 024dbcd8 with catch @ 024db7ac
                       catch() { ... } // from try @ 024dbd04 with catch @ 024db7ac */
                  if (uVar40 <= uVar20 + uVar24 + 1) goto LAB_024dc400;
                  if (*(char *)(lVar27 + (lVar30 + 0x100000000 >> 0x20) + 0x20) == cVar8)
                  goto LAB_024db7c4;
LAB_024db7e8:
                  if (lVar44 == 0) goto LAB_024dc404;
                  if (*(uint *)(lVar44 + 0x18) <= uVar3) goto LAB_024dc400;
                  iVar22 = iVar22 + 1;
                  *(undefined1 *)(lVar44 + (lVar30 >> 0x20) + 0x20) = 1;
                }
                else {
LAB_024db7c4:
                  if (uVar26 < uVar10) {
                    uVar21 = (int)uVar47 + (int)uVar24;
                    if ((uint)uVar39 <= uVar21) goto LAB_024dc400;
                    if (*(char *)(lVar27 + (int)uVar21 + 0x20) != cVar8) goto LAB_024db7e8;
                  }
                }
                lVar30 = lVar30 + 0x100000000;
                uVar24 = uVar2;
              } while (uVar42 != uVar2);
            }
            uVar20 = uVar20 + uVar7;
            uVar47 = uVar47 + uVar42;
          } while (uVar26 != uVar10);
        }
        lVar30 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,iVar43);
        if (lVar30 != 0) {
          uVar20 = (uint)*(ulong *)(lVar30 + 0x18);
          if (0 < (int)uVar20) {
            uVar26 = (ulong)(uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU));
            uVar47 = *(ulong *)(lVar30 + 0x18) & 0xffffffff;
            puVar35 = (undefined4 *)(lVar30 + 0x20);
            do {
              if (uVar47 == 0) goto LAB_024dc400;
              uVar26 = uVar26 - 1;
              uVar47 = uVar47 - 1;
              *puVar35 = 0xffffffff;
              puVar35 = puVar35 + 1;
            } while (uVar26 != 0);
          }
          lVar28 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
          System_Collections_Generic_List_int____ctor_3a2b854
                    (lVar28,iVar22,*(undefined8 *)PTR_DAT_04caa188);
          lVar25 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbd878);
          System_Collections_Generic_Stack_int____ctor_2ec54bc
                    (lVar25,*(undefined8 *)PTR_DAT_04cbd868);
          puVar14 = PTR_DAT_04cb6f30;
          uStack_f0 = (ulong)(uVar10 - 1);
          if (-1 < (int)(uVar10 - 1)) {
            do {
              if (0 < (int)uVar7) {
                if (lVar44 == 0) goto LAB_024dc404;
                uVar26 = 0;
                do {
                  uVar47 = uVar26 + uVar7 * (int)uStack_f0;
                  if (*(uint *)(lVar44 + 0x18) <= uVar47) goto LAB_024dc400;
                  if (*(char *)(lVar44 + (int)uVar47 + 0x20) != '\0') {
                    if (*(uint *)(lVar30 + 0x18) <= uVar47) goto LAB_024dc400;
                    if (*(int *)(lVar30 + (long)(int)uVar47 * 4 + 0x20) < 0) {
                      if (lVar25 == 0) goto LAB_024dc404;
                      System_Collections_Generic_Stack_int___Push_2ec5b30
                                (lVar25,uVar47,*(undefined8 *)PTR_DAT_04cbd860);
                      iVar22 = *(int *)(lVar25 + 0x18);
                      while (0 < iVar22) {
                        uVar20 = System_Collections_Generic_Stack_int___Pop_2ec5a90
                                           (lVar25,*(undefined8 *)PTR_DAT_04cbd858);
                        if (*(uint *)(lVar30 + 0x18) <= uVar20) goto LAB_024dc400;
                        puVar31 = (uint *)(lVar30 + (long)(int)uVar20 * 4 + 0x20);
                        if ((int)*puVar31 < 0) {
                          if (lVar28 == 0) goto LAB_024dc404;
                          uVar21 = *(uint *)(lVar28 + 0x18);
                          *puVar31 = uVar21;
                          lVar32 = *(long *)(lVar28 + 0x10);
                          lVar36 = *(long *)PTR_DAT_04caa160;
                          *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
                          if (lVar32 == 0) goto LAB_024dc404;
                          if (uVar21 < *(uint *)(lVar32 + 0x18)) {
                            *(uint *)(lVar28 + 0x18) = uVar21 + 1;
                            *(uint *)(lVar32 + (long)(int)uVar21 * 4 + 0x20) = uVar20;
                          }
                          else {
                            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                                      (lVar28,uVar20,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar36 + 0x20) + 0xc0) + 0x70));
                          }
                          iVar22 = 0;
                          if (uVar7 != 0) {
                            iVar22 = (int)uVar20 / (int)uVar7;
                          }
                          lVar32 = *(long *)puVar14;
                          lVar36 = 0xf;
                          do {
                            if (*(int *)(lVar32 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                              lVar32 = *(long *)puVar14;
                            }
                            lVar29 = **(long **)(lVar32 + 0xb8);
                            if (lVar29 == 0) goto LAB_024dc404;
                            if ((ulong)*(uint *)(lVar29 + 0x18) <= lVar36 - 8U) goto LAB_024dc400;
                            lVar33 = (*(long **)(lVar32 + 0xb8))[1];
                            if (lVar33 == 0) goto LAB_024dc404;
                            if ((ulong)*(uint *)(lVar33 + 0x18) <= lVar36 - 8U) goto LAB_024dc400;
                            uVar21 = *(int *)(lVar33 + lVar36 * 4) + iVar22;
                            if ((((int)uVar21 < (int)uVar10) &&
                                (uVar38 = *(int *)(lVar29 + lVar36 * 4) + (uVar20 - iVar22 * uVar7),
                                (int)uVar38 < (int)uVar7)) && (-1 < (int)(uVar21 | uVar38))) {
                              uVar38 = uVar38 + uVar21 * uVar7;
                              if (*(uint *)(lVar44 + 0x18) <= uVar38) goto LAB_024dc400;
                              lVar29 = (long)(int)uVar38;
                              if (*(char *)(lVar44 + lVar29 + 0x20) != '\0') {
                                if (*(uint *)(lVar30 + 0x18) <= uVar38) goto LAB_024dc400;
                                if (*(int *)(lVar30 + lVar29 * 4 + 0x20) < 0) {
                                  System_Collections_Generic_Stack_int___Push_2ec5b30
                                            (lVar25,lVar29,*(undefined8 *)PTR_DAT_04cbd860);
                                  lVar32 = *(long *)puVar14;
                                }
                              }
                            }
                            lVar36 = lVar36 + -1;
                          } while (lVar36 != 7);
                        }
                        iVar22 = *(int *)(lVar25 + 0x18);
                      }
                    }
                  }
                  uVar26 = uVar26 + 1;
                } while (uVar26 != uVar42);
              }
              bVar1 = 0 < (long)uStack_f0;
              uStack_f0 = uStack_f0 - 1;
            } while (bVar1);
          }
          lVar25 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb6a60,iVar43);
          if (lVar28 != 0) {
            iVar22 = *(int *)(lVar28 + 0x18) + -1;
            if (iVar22 < 2) {
              iVar22 = 1;
            }
            if (lVar25 != 0) {
              if (0 < *(int *)(lVar25 + 0x18)) {
                uVar26 = 0;
                do {
                  if (*(uint *)(lVar30 + 0x18) <= uVar26) goto LAB_024dc400;
                  iVar43 = *(int *)(lVar30 + 0x20 + uVar26 * 4);
                  if (iVar43 < 0) {
                    uVar20 = 0;
                  }
                  else {
                    if (cRam0000000004f9b891 == '\0') {
                      FUN_02132f7c(PTR_DAT_04caa200);
                      cRam0000000004f9b891 = '\x01';
                    }
                    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    fVar51 = ((float)iVar43 / (float)iVar22) * 255.0;
                    dVar50 = (double)fVar51;
                    dVar48 = (double)FUN_049b52f0(dVar50,&dStack_d8);
                    if (0.0 <= fVar51) {
                      if (dVar48 == 0.5) {
                        dVar48 = dStack_d8 + 1.0;
                        goto LAB_024dbc00;
                      }
                      dVar50 = (double)(long)(dVar50 + 0.5);
                    }
                    else if (dVar48 == -0.5) {
                      dVar48 = dStack_d8 + -1.0;
LAB_024dbc00:
                      dVar50 = dStack_d8;
                    /* try { // try from 024dbc04 to 025dbc0b has its CatchHandler @ 024dbcb8 */
                      if (((long)dStack_d8 & 1U) != 0) {
                        dVar50 = dVar48;
                      }
                    }
                    else {
                      dVar50 = (double)(long)(dVar50 + -0.5);
                    }
                    /* try { // try from 024dbc2c to 025dbc37 has its CatchHandler @ 024dbcb4 */
                    uVar20 = 0;
                    if (dVar50 != INFINITY) {
                      uVar20 = (int)dVar50 & 0xff;
                    }
                  }
                    /* try { // try from 024dbc38 to 025dbc9f has its CatchHandler @ 024db7ac */
                  if (lVar27 == 0) goto LAB_024dc404;
                  if (*(uint *)(lVar27 + 0x18) <= uVar26) goto LAB_024dc400;
                  if (lVar44 == 0) goto LAB_024dc404;
                  if ((*(uint *)(lVar44 + 0x18) <= uVar26) || (*(uint *)(lVar25 + 0x18) <= uVar26))
                  goto LAB_024dc400;
                  uVar21 = 0;
                  if (*(char *)(lVar44 + 0x20 + uVar26) != '\0') {
                    uVar21 = 0xff00;
                  }
                  uVar34 = (uint)*(byte *)(lVar27 + 0x20 + uVar26);
                  uVar38 = 0;
                  if (uVar34 != 0) {
                    uVar38 = 0xff000000;
                  }
                  iVar43 = *(int *)(lVar25 + 0x18);
                  *(uint *)(lVar25 + 0x20 + uVar26 * 4) = uVar21 | uVar34 | uVar38 | uVar20 << 0x10;
                  uVar26 = uVar26 + 1;
                    /* try { // try from 024dbca0 to 025dbca3 has its CatchHandler @ 024dbcb0 */
                    /* try { // try from 024dbca4 to 025dbca7 has its CatchHandler @ 024dbcac */
                } while ((long)uVar26 < (long)iVar43);
              }
                    /* try { // try from 024dbca8 to 025dbcd3 has its CatchHandler @ 024db7ac */
              puVar14 = PTR_DAT_04cb6f30;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024dbca4 with catch @ 024dbcac
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024dbca0 with catch @ 024dbcb0
                        */
              if (0 < (int)uVar10) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024dbc2c with catch @ 024dbcb4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024dbc04 with catch @ 024dbcb8
                        */
                uVar20 = 0;
                    /* try { // try from 024dbcd4 to 025dbcd7 has its CatchHandler @ 024dbcf8 */
                    /* try { // try from 024dbcd8 to 025dbcfb has its CatchHandler @ 024db7ac */
                do {
                  if (0 < (int)uVar7) {
                    if (lVar44 == 0) goto LAB_024dc404;
                    uVar26 = 0;
                    do {
                    /* catch() { ... } // from try @ 024dbcd4 with catch @ 024dbcf8 */
                      uVar21 = uVar20 * uVar7 + (int)uVar26;
                    /* try { // try from 024dbcfc to 025dbd03 has its CatchHandler @ 024dbd0c */
                      if (*(uint *)(lVar44 + 0x18) <= uVar21) goto LAB_024dc400;
                    /* try { // try from 024dbd04 to 025dbd0f has its CatchHandler @ 024db7ac */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024dbcfc with catch @ 024dbd0c
                        */
                      if (*(char *)(lVar44 + (int)uVar21 + 0x20) == '\0') {
                        lVar36 = *(long *)puVar14;
                        iVar43 = 0x7fffffff;
                        lVar32 = 8;
                        do {
                          if (*(int *)(lVar36 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                            lVar36 = *(long *)puVar14;
                          }
                          lVar29 = **(long **)(lVar36 + 0xb8);
                          if (lVar29 == 0) goto LAB_024dc404;
                          if ((ulong)*(uint *)(lVar29 + 0x18) <= lVar32 - 8U) goto LAB_024dc400;
                          lVar33 = (*(long **)(lVar36 + 0xb8))[1];
                          if (lVar33 == 0) goto LAB_024dc404;
                          if ((ulong)*(uint *)(lVar33 + 0x18) <= lVar32 - 8U) goto LAB_024dc400;
                          uVar38 = *(int *)(lVar33 + lVar32 * 4) + uVar20;
                          iVar6 = iVar43;
                          if ((((int)uVar38 < (int)uVar10) &&
                              (uVar34 = *(int *)(lVar29 + lVar32 * 4) + (int)uVar26,
                              (int)uVar34 < (int)uVar7)) && (-1 < (int)(uVar38 | uVar34))) {
                            uVar34 = uVar34 + uVar38 * uVar7;
                            if (*(uint *)(lVar44 + 0x18) <= uVar34) goto LAB_024dc400;
                            if (*(char *)(lVar44 + (int)uVar34 + 0x20) != '\0') {
                              if (*(uint *)(lVar30 + 0x18) <= uVar34) goto LAB_024dc400;
                              iVar6 = *(int *)(lVar30 + (long)(int)uVar34 * 4 + 0x20);
                              if (iVar43 <= iVar6) {
                                iVar6 = iVar43;
                              }
                            }
                          }
                          iVar43 = iVar6;
                          lVar32 = lVar32 + 1;
                        } while (lVar32 != 0x10);
                        if (iVar43 != 0x7fffffff) {
                          if (cRam0000000004f9b891 == '\0') {
                            FUN_02132f7c(PTR_DAT_04caa200);
                            cRam0000000004f9b891 = '\x01';
                          }
                          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          fVar51 = ((float)iVar43 / (float)iVar22) * 255.0;
                          dVar50 = (double)fVar51;
                          dVar48 = (double)FUN_049b52f0(dVar50,&dStack_d8);
                          if (0.0 <= fVar51) {
                            if (dVar48 == 0.5) {
                              dVar48 = dStack_d8 + 1.0;
                              goto LAB_024dbe74;
                            }
                            dVar50 = (double)(long)(dVar50 + 0.5);
                          }
                          else if (dVar48 == -0.5) {
                            dVar48 = dStack_d8 + -1.0;
LAB_024dbe74:
                            dVar50 = dStack_d8;
                            if (((long)dStack_d8 & 1U) != 0) {
                              dVar50 = dVar48;
                            }
                          }
                          else {
                    /* try { // try from 024dbe80 to 025dc3af has its CatchHandler @ 024dbe80
                       catch() { ... } // from try @ 024dbe80 with catch @ 024dbe80
                       catch() { ... } // from try @ 024dc3b8 with catch @ 024dbe80
                       catch() { ... } // from try @ 024dcbe8 with catch @ 024dbe80
                       catch() { ... } // from try @ 024dcc0c with catch @ 024dbe80
                       catch() { ... } // from try @ 024dcc38 with catch @ 024dbe80 */
                            dVar50 = (double)(long)(dVar50 + -0.5);
                          }
                          if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_024dc400;
                          uVar18 = 0;
                          if (dVar50 != INFINITY) {
                            uVar18 = (char)(int)dVar50;
                          }
                          *(undefined1 *)(lVar25 + 0x22 + (long)(int)uVar21 * 4) = uVar18;
                        }
                      }
                      uVar26 = uVar26 + 1;
                    } while (uVar26 != uVar42);
                  }
                  uVar20 = uVar20 + 1;
                } while (uVar20 != uVar10);
              }
              lVar44 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb6f30);
              System_Object___ctor_4870e5c(lVar44,0);
              if (lVar44 != 0) {
                *(long *)(lVar44 + 0x30) = lVar27;
                *(uint *)(lVar44 + 0x20) = uVar7;
                *(uint *)(lVar44 + 0x24) = uVar10;
                thunk_FUN_02134474((long *)(lVar44 + 0x30),lVar27);
                puVar14 = PTR_DAT_04cb4ef0;
                lVar30 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4ef0);
                UnityEngine_Texture2D___ctor_439df00(lVar30,uVar7,uVar10,4,0,1,0);
                if (lVar30 != 0) {
                  UnityEngine_Texture__set_filterMode_4398f60(lVar30,1,0);
                  UnityEngine_Texture__set_wrapMode_4398ac8(lVar30,1,0);
                  UnityEngine_Object__set_name_43c72ec(lVar30,*(undefined8 *)PTR_DAT_04cbd888,0);
                  plVar46 = (long *)(lVar44 + 0x10);
                  *plVar46 = lVar30;
                  thunk_FUN_02134474(plVar46,lVar30);
                  if (*plVar46 != 0) {
                    UnityEngine_Texture2D__SetPixels32_439edd8(*plVar46,lVar25,0);
                    if (*plVar46 != 0) {
                      UnityEngine_Texture2D__Apply_439ea14(*plVar46,0,1,0);
                      puVar15 = PTR_DAT_04caec70;
                      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      lVar30 = Dino_BusSand_View_PackPalette__MainsFor_238f1d0(lVar23,0);
                      *(long *)(lVar44 + 0x38) = lVar30;
                      thunk_FUN_02134474((long *)(lVar44 + 0x38),lVar30);
                      lVar23 = FUN_02133068(*(undefined8 *)puVar15,0x80);
                      if (lVar27 != 0) {
                        uVar20 = *(uint *)(lVar27 + 0x18);
                        if (0 < (int)uVar20) {
                          uVar21 = 0;
                          do {
                            if (uVar20 == uVar21) goto LAB_024dc400;
                            if (lVar23 == 0) goto LAB_024dc404;
                            bVar9 = *(byte *)(lVar27 + (int)uVar21 + 0x20);
                            if (*(uint *)(lVar23 + 0x18) <= (uint)bVar9) goto LAB_024dc400;
                            uVar21 = uVar21 + 1;
                            *(int *)(lVar23 + 0x20 + (ulong)bVar9 * 4) =
                                 *(int *)(lVar23 + 0x20 + (ulong)(uint)bVar9 * 4) + 1;
                          } while ((uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU)) != uVar21);
                        }
                        if (lVar30 != 0) {
                          uVar38 = *(uint *)(lVar30 + 0x18);
                          lVar27 = 0;
                          uVar20 = 0;
                          uVar21 = uVar38;
                          if ((int)uVar38 < 2) {
                            uVar21 = 1;
                          }
                          do {
                            if ((ulong)uVar21 - 1 == lVar27) break;
                            if (lVar23 == 0) goto LAB_024dc404;
                            if (((ulong)*(uint *)(lVar23 + 0x18) <= lVar27 + 1U) ||
                               (*(uint *)(lVar23 + 0x18) <= uVar20)) goto LAB_024dc400;
                            iVar22 = *(int *)(lVar23 + 0x24 + lVar27 * 4);
                            if (*(int *)(lVar23 + (long)(int)uVar20 * 4 + 0x20) < iVar22) {
LAB_024dc0bc:
                              uVar20 = (int)lVar27 + 1;
                            }
                            else if (uVar20 == 0) {
                              if (0 < iVar22) goto LAB_024dc0bc;
                              uVar20 = 0;
                            }
                            lVar27 = lVar27 + 1;
                          } while (lVar27 != 0x7f);
                          if ((int)uVar20 < 1) {
                            uVar41 = NEON_fmov(0x3f800000,4);
                            uVar49 = 0x3f800000;
                          }
                          else {
                            if (uVar38 <= uVar20) goto LAB_024dc400;
                            lVar27 = lVar30 + (ulong)uVar20 * 0x10;
                            uVar41 = *(undefined8 *)(lVar27 + 0x20);
                            uVar49 = *(undefined4 *)(lVar27 + 0x28);
                          }
                          *(undefined8 *)(lVar44 + 0x40) = uVar41;
                          *(undefined4 *)(lVar44 + 0x48) = uVar49;
                          puVar15 = PTR_DAT_04cb6a60;
                          *(undefined4 *)(lVar44 + 0x4c) = 0x3f800000;
                          lVar27 = FUN_02133068(*(undefined8 *)puVar15,0x80);
                          uVar26 = 0;
                          puVar35 = (undefined4 *)(lVar30 + 0x2c);
                          do {
                            if (uVar26 == 0) {
                              uVar42 = 0;
LAB_024dc178:
                              uVar49 = 0xffffffff;
                            }
                            else {
                              if ((long)*(int *)(lVar30 + 0x18) <= (long)uVar26) {
                                uVar42 = uVar26 & 0xffffffff;
                                goto LAB_024dc178;
                              }
                              uVar49 = FUN_023e4c88(puVar35[-3],puVar35[-2],puVar35[-1],*puVar35,0);
                              uVar42 = uVar26 & 0xffffffff;
                            }
                            if (lVar27 == 0) goto LAB_024dc404;
                            if (*(uint *)(lVar27 + 0x18) <= uVar42) goto LAB_024dc400;
                            uVar26 = uVar26 + 1;
                            puVar35 = puVar35 + 4;
                            *(undefined4 *)(lVar27 + uVar42 * 4 + 0x20) = uVar49;
                          } while (uVar26 != 0x80);
                          lVar30 = thunk_FUN_0216e89c(*(undefined8 *)puVar14);
                          UnityEngine_Texture2D___ctor_439df00(lVar30,0x80,1,4,0,0,0);
                          if (lVar30 != 0) {
                            UnityEngine_Texture__set_filterMode_4398f60(lVar30,0,0);
                            UnityEngine_Texture__set_wrapMode_4398ac8(lVar30,1,0);
                            UnityEngine_Object__set_name_43c72ec
                                      (lVar30,*(undefined8 *)PTR_DAT_04cbd880,0);
                            plVar46 = (long *)(lVar44 + 0x18);
                            *plVar46 = lVar30;
                            thunk_FUN_02134474(plVar46,lVar30);
                            if (*plVar46 != 0) {
                              UnityEngine_Texture2D__SetPixels32_439edd8(*plVar46,lVar27,0);
                              if (*plVar46 != 0) {
                                UnityEngine_Texture2D__Apply_439ea14(*plVar46,0,1,0);
                                uVar20 = *(uint *)(lVar28 + 0x18);
                                if (399 < (int)uVar20) {
                                  uVar20 = 400;
                                }
                                if ((int)uVar20 < 3) {
                                  uVar20 = 2;
                                }
                                lVar30 = FUN_02133068(*(undefined8 *)PTR_DAT_04caed88,(ulong)uVar20)
                                ;
                                plVar46 = (long *)(lVar44 + 0x28);
                                *plVar46 = lVar30;
                                thunk_FUN_02134474(plVar46,lVar30);
                                puVar14 = PTR_DAT_04cae230;
                                uVar26 = 0;
                                lVar30 = 0x20;
                                do {
                                  iVar22 = *(int *)(lVar28 + 0x18) + -1;
                                  if (*(int *)(lVar28 + 0x18) < 1) {
                                    iVar22 = 0;
                                  }
                                  else {
                                    if (cRam0000000004f9b891 == '\0') {
                                      FUN_02132f7c(PTR_DAT_04caa200);
                                      cRam0000000004f9b891 = '\x01';
                                    }
                                    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                                      thunk_FUN_0218fdac();
                                    }
                                    fVar51 = ((float)(int)uVar26 / (float)(int)(uVar20 - 1)) *
                                             (float)iVar22;
                                    dVar50 = (double)fVar51;
                                    dVar48 = (double)FUN_049b52f0(dVar50,&dStack_d8);
                                    if (0.0 <= fVar51) {
                                      if (dVar48 == 0.5) {
                                        dVar48 = 1.0;
                                        goto LAB_024dc360;
                                      }
                                      dVar50 = (double)(long)(dVar50 + 0.5);
                                    }
                                    else if (dVar48 == -0.5) {
                                      dVar48 = -1.0;
LAB_024dc360:
                                      dVar50 = dStack_d8;
                                      if (((long)dStack_d8 & 1U) != 0) {
                                        dVar50 = dStack_d8 + dVar48;
                                      }
                                    }
                                    else {
                                      dVar50 = (double)(long)(dVar50 + -0.5);
                                    }
                                    iVar43 = -0x80000000;
                                    if (dVar50 != INFINITY) {
                                      iVar43 = (int)dVar50;
                                    }
                                    if (iVar43 <= iVar22) {
                                      iVar22 = iVar43;
                                    }
                                    iVar22 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                                       (lVar28,iVar22,*(undefined8 *)puVar14);
                                  }
                    /* try { // try from 024dc3b0 to 025dc3b7 has its CatchHandler @ 024dcbec */
                                  lVar27 = *plVar46;
                                  if (lVar27 == 0) break;
                    /* try { // try from 024dc3b8 to 025dcbe3 has its CatchHandler @ 024dbe80 */
                                  if (*(uint *)(lVar27 + 0x18) <= uVar26) goto LAB_024dc400;
                                  iVar43 = 0;
                                  if (uVar7 != 0) {
                                    iVar43 = iVar22 / (int)uVar7;
                                  }
                                  uVar26 = uVar26 + 1;
                                  pfVar4 = (float *)(lVar27 + lVar30);
                                  lVar30 = lVar30 + 8;
                                  *pfVar4 = ((float)(int)(iVar22 - iVar43 * uVar7) + 0.5) /
                                            (float)(int)uVar7;
                                  pfVar4[1] = ((float)iVar43 + 0.5) / (float)(int)uVar10;
                                  if (uVar20 == uVar26) {
                                    return lVar44;
                                  }
                                } while( true );
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_024dc404:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_024dc400:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

