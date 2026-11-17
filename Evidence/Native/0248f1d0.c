/* IL2CPP: Dino.BusSand.View.PackPalette$$MainsFor
UnityEngine_Color_array* Dino_BusSand_View_PackPalette__MainsFor (System_Collections_Generic_IEnumerable_byte__o* colors, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0248f9bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PackPalette$$MainsFor
   UnityEngine_Color_array* Dino_BusSand_View_PackPalette__MainsFor
   (System_Collections_Generic_IEnumerable_byte__o* colors, const MethodInfo* method); */

long Dino_BusSand_View_PackPalette__MainsFor_238f1d0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  ulong uVar19;
  ulong uVar20;
  undefined4 *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  long lStack_d0;
  long **pplStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  
  puVar3 = PTR_DAT_04cbc000;
  if ((bRam0000000004f9c8ba & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc000);
    FUN_02132f7c(PTR_DAT_04cbbf58);
    FUN_02132f7c(PTR_DAT_04cbc008);
    FUN_02132f7c(PTR_DAT_04cbc010);
    FUN_02132f7c(PTR_DAT_04cbc018);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cbbf60);
    FUN_02132f7c(PTR_DAT_04cbbf68);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cbbf70);
    FUN_02132f7c(PTR_DAT_04cbbf78);
    FUN_02132f7c(PTR_DAT_04cbc020);
    FUN_02132f7c(PTR_DAT_04cbbf80);
    FUN_02132f7c(PTR_DAT_04cbbf88);
    FUN_02132f7c(PTR_DAT_04cbbf90);
    FUN_02132f7c(PTR_DAT_04cbbf98);
    FUN_02132f7c(PTR_DAT_04cbbfa0);
    FUN_02132f7c(PTR_DAT_04cbbfa8);
    FUN_02132f7c(PTR_DAT_04cbbfb0);
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    bRam0000000004f9c8ba = 1;
  }
  uStack_b0 = 0;
  plStack_a8 = (long *)0x0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lVar11 = FUN_02133068(*(undefined8 *)puVar3,0x41);
  puVar3 = PTR_DAT_04cbbfb8;
  uVar24 = _UNK_00e6a7d0;
  if (lVar11 != 0) {
    if (1 < *(int *)(lVar11 + 0x18)) {
      uVar19 = 1;
      puVar21 = (undefined4 *)(lVar11 + 0x3c);
      do {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = Dino_BusSand_Core_SandPalette__Color_24196fc(uVar19 & 0xffffffff,0);
        if (*(uint *)(lVar11 + 0x18) <= uVar19) goto LAB_0248f9a4;
        uVar19 = uVar19 + 1;
        uVar22 = NEON_ushl(CONCAT44(uVar8,uVar8),uVar24,4);
        uVar23 = NEON_ucvtf(uVar22 & 0xff000000ff,4);
        puVar21[-3] = (float)(uVar8 & 0xff) / 255.0;
        *(ulong *)(puVar21 + -2) =
             CONCAT44((float)((ulong)uVar23 >> 0x20) / 255.0,(float)uVar23 / 255.0);
        *puVar21 = 0x3f800000;
        puVar21 = puVar21 + 4;
      } while ((long)uVar19 < (long)*(int *)(lVar11 + 0x18));
    }
    puVar3 = PTR_DAT_04cb70d8;
    if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar12 = Dino_BusSand_View_PackPalette__Swatches_238e800();
    if (lVar12 != 0) {
      if (param_1 == (long *)0x0) {
        return lVar11;
      }
      if (*(int *)(lVar12 + 0x18) == 0) {
        return lVar11;
      }
      lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbbfb0);
      System_Collections_Generic_List_byte____ctor_39fa29c(lVar13,*(undefined8 *)PTR_DAT_04cbbf88);
      lVar16 = *param_1;
      uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar19 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04cbbf60) {
            puVar14 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0248f478;
          }
          uVar19 = uVar19 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar19 != 0);
      }
      puVar14 = (undefined8 *)FUN_0216b7a4(param_1,*(long *)PTR_DAT_04cbbf60,0);
LAB_0248f478:
      plVar15 = (long *)(*(code *)*puVar14)(param_1,puVar14[1]);
      puVar6 = PTR_DAT_04cbbf78;
      puVar5 = PTR_DAT_04cbbf70;
      puVar4 = PTR_DAT_04cbbf68;
      puVar2 = PTR_DAT_04ca9c08;
      pplStack_c8 = &plStack_a8;
      lStack_d0 = 0;
      do {
        plStack_a8 = plVar15;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar16 = *plVar15;
        uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar19 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
              puVar14 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0248f504;
            }
            uVar19 = uVar19 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar19 != 0);
        }
        puVar14 = (undefined8 *)FUN_0216b7a4(plVar15,*(long *)puVar2,0);
LAB_0248f504:
        uVar19 = (*(code *)*puVar14)(plVar15,puVar14[1]);
        plVar15 = plStack_a8;
        if ((uVar19 & 1) == 0) {
          if (plStack_a8 == (long *)0x0) goto LAB_0248f670;
          lVar16 = *plStack_a8;
          uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar19 == 0) goto LAB_0248f648;
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          goto LAB_0248f630;
        }
        if (plStack_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar16 = *plStack_a8;
        uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar19 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
              puVar14 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0248f568;
            }
            uVar19 = uVar19 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar19 != 0);
        }
        puVar14 = (undefined8 *)FUN_0216b7a4(plStack_a8,*(long *)puVar4,0);
LAB_0248f568:
        iVar9 = (*(code *)*puVar14)(plVar15,puVar14[1]);
        plVar15 = plStack_a8;
        if (0xbf < (iVar9 - 0x41U & 0xff)) {
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar19 = System_Collections_Generic_List_byte___Contains_39faeac
                             (lVar13,iVar9,*(undefined8 *)puVar6);
          plVar15 = plStack_a8;
          if ((uVar19 & 1) == 0) {
            lVar16 = *(long *)(lVar13 + 0x10);
            lVar17 = *(long *)puVar5;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar8 = *(uint *)(lVar13 + 0x18);
            if (uVar8 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar8 + 1;
              *(char *)(lVar16 + (int)uVar8 + 0x20) = (char)iVar9;
            }
            else {
              System_Collections_Generic_List_byte___AddWithResize_39fab2c
                        (lVar13,iVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              plVar15 = plStack_a8;
            }
          }
        }
      } while( true );
    }
  }
  goto LAB_0248f9a8;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar18 = piVar18 + 4;
    if (uVar19 == 0) break;
LAB_0248f630:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar14 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_0248f664;
    }
  }
LAB_0248f648:
  puVar14 = (undefined8 *)FUN_0216b7a4(plStack_a8,*(long *)PTR_DAT_04ca9b30,0);
LAB_0248f664:
  (*(code *)*puVar14)(plVar15,puVar14[1]);
LAB_0248f670:
  if (lVar13 != 0) {
    System_Collections_Generic_List_byte___Sort_39fc450(lVar13,*(undefined8 *)PTR_DAT_04cbbf80);
    iVar9 = *(int *)(lVar13 + 0x18);
    if (iVar9 != 0) {
      if (*(int *)(lVar12 + 0x18) < iVar9) {
        System_Collections_Generic_List_byte___GetEnumerator_39fb504
                  (&uStack_c0,lVar13,*(undefined8 *)PTR_DAT_04cbc020);
        puVar2 = PTR_DAT_04cbc010;
        lStack_d0 = 0;
        pplStack_c8 = (long **)&uStack_c0;
        while (uVar19 = System_Collections_Generic_List_Enumerator_byte___MoveNext_35c4ee4
                                  (&uStack_c0,*(undefined8 *)puVar2), (uVar19 & 1) != 0) {
          bVar7 = (byte)uStack_b0;
          uVar19 = uStack_b0 & 0xff;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar12 = Dino_BusSand_View_PackPalette__Nearest_238fa7c(uVar19);
          if (lVar12 != 0) {
            if (*(uint *)(lVar11 + 0x18) <= (uint)bVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            lVar13 = lVar11 + uVar19 * 0x10;
            uVar24 = *(undefined8 *)(lVar12 + 0x18);
            *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(lVar12 + 0x20);
            *(undefined8 *)(lVar13 + 0x20) = uVar24;
          }
        }
        System_Collections_Generic_List_Enumerator_byte___Dispose_35c4ee0
                  (&uStack_c0,*(undefined8 *)PTR_DAT_04cbc008);
      }
      else {
        lStack_d0 = (long)iVar9;
        pplStack_c8 = (long **)(long)*(int *)(lVar12 + 0x18);
        lVar16 = FUN_02133070(*(undefined8 *)PTR_DAT_04cbbf58,&lStack_d0);
        puVar5 = PTR_DAT_04cbbfb8;
        puVar4 = PTR_DAT_04cbbfa8;
        puVar2 = PTR_DAT_04cbbfa0;
        uVar19 = (ulong)*(uint *)(lVar13 + 0x18);
        if ((int)*(uint *)(lVar13 + 0x18) < 1) {
          uVar22 = (ulong)*(uint *)(lVar12 + 0x18);
        }
        else {
          uVar20 = 0;
          do {
            uVar10 = System_Collections_Generic_List_byte___get_Item_39fa834
                               (lVar13,uVar20 & 0xffffffff,*(undefined8 *)puVar4);
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar5);
            }
            uVar8 = Dino_BusSand_Core_SandPalette__Color_24196fc(uVar10,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar3);
            }
            fVar25 = (float)(uVar8 >> 8 & 0xff) / 255.0;
            fVar26 = (float)(uVar8 >> 0x10 & 0xff) / 255.0;
            uVar10 = Dino_BusSand_View_PackPalette__Lab_238ea5c
                               ((float)(uVar8 & 0xff) / 255.0,fVar25,fVar26,
                                (float)(uVar8 >> 0x18) / 255.0);
            uVar22 = (ulong)*(uint *)(lVar12 + 0x18);
            if (0 < (int)*(uint *)(lVar12 + 0x18)) {
              uVar19 = 0;
              do {
                lVar17 = System_Collections_Generic_List_object___get_Item_3a81924
                                   (lVar12,uVar19 & 0xffffffff,*(undefined8 *)puVar2);
                if (lVar17 == 0) goto LAB_0248f9a8;
                uVar27 = *(undefined4 *)(lVar17 + 0x18);
                uVar28 = *(undefined4 *)(lVar17 + 0x1c);
                uVar29 = *(undefined4 *)(lVar17 + 0x20);
                uVar30 = *(undefined4 *)(lVar17 + 0x24);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar3);
                }
                uVar27 = Dino_BusSand_View_PackPalette__Lab_238ea5c(uVar27,uVar28,uVar29,uVar30);
                uVar24 = Dino_BusSand_View_PackPalette__Distance_238ed10
                                   (uVar10,fVar25,fVar26,uVar27,uVar28,uVar29);
                if (lVar16 == 0) goto LAB_0248f9a8;
                if ((**(uint **)(lVar16 + 0x10) <= uVar20) ||
                   (uVar22 = *(ulong *)(*(uint **)(lVar16 + 0x10) + 4),
                   (uVar22 & 0xffffffff) <= uVar19)) goto LAB_0248f9a4;
                lVar17 = uVar19 + uVar20 * uVar22;
                uVar19 = uVar19 + 1;
                *(undefined8 *)(lVar16 + lVar17 * 8 + 0x20) = uVar24;
                uVar22 = (ulong)*(int *)(lVar12 + 0x18);
              } while ((long)uVar19 < (long)uVar22);
            }
            uVar19 = (ulong)*(int *)(lVar13 + 0x18);
            uVar20 = uVar20 + 1;
          } while ((long)uVar20 < (long)uVar19);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar16 = Dino_BusSand_View_PackPalette__Assign_238edac
                           (lVar16,uVar19 & 0xffffffff,uVar22 & 0xffffffff);
        puVar2 = PTR_DAT_04cbbfa8;
        puVar3 = PTR_DAT_04cbbfa0;
        if (0 < *(int *)(lVar13 + 0x18)) {
          uVar19 = 0;
          do {
            bVar7 = System_Collections_Generic_List_byte___get_Item_39fa834
                              (lVar13,uVar19 & 0xffffffff,*(undefined8 *)puVar2);
            if (lVar16 == 0) goto LAB_0248f9a8;
            if (*(uint *)(lVar16 + 0x18) <= uVar19) {
LAB_0248f9a4:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            lVar17 = System_Collections_Generic_List_object___get_Item_3a81924
                               (lVar12,*(undefined4 *)(lVar16 + 0x20 + uVar19 * 4),
                                *(undefined8 *)puVar3);
            if (lVar17 == 0) goto LAB_0248f9a8;
            if (*(uint *)(lVar11 + 0x18) <= (uint)bVar7) goto LAB_0248f9a4;
            lVar1 = lVar11 + (ulong)bVar7 * 0x10;
            uVar24 = *(undefined8 *)(lVar17 + 0x18);
            uVar19 = uVar19 + 1;
            *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar17 + 0x20);
            *(undefined8 *)(lVar1 + 0x20) = uVar24;
          } while ((long)uVar19 < (long)*(int *)(lVar13 + 0x18));
        }
      }
    }
    return lVar11;
  }
LAB_0248f9a8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

