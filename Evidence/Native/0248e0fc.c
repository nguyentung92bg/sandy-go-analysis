/* IL2CPP: Dino.BusSand.View.PackPalette$$UseLevel
void Dino_BusSand_View_PackPalette__UseLevel (System_Collections_Generic_IEnumerable_byte__o* colors, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0248e4b8) */
/* WARNING: Removing unreachable block (ram,0x0248e798) */
/* IL2CPP: Dino.BusSand.View.PackPalette$$UseLevel
   void Dino_BusSand_View_PackPalette__UseLevel (System_Collections_Generic_IEnumerable_byte__o*
   colors, const MethodInfo* method); */

void Dino_BusSand_View_PackPalette__UseLevel_238e0fc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  ulong uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  long lStack_b0;
  long **pplStack_a8;
  long *plStack_58;
  
  puVar2 = PTR_DAT_04cb70d8;
  if ((bRam0000000004f9c8b9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbf58);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cbbf60);
    FUN_02132f7c(PTR_DAT_04cbbf68);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cbbf70);
    FUN_02132f7c(PTR_DAT_04cbbf78);
    FUN_02132f7c(PTR_DAT_04cbbf80);
    FUN_02132f7c(PTR_DAT_04cbbf88);
    FUN_02132f7c(PTR_DAT_04cbbf90);
    FUN_02132f7c(PTR_DAT_04cbbf98);
    FUN_02132f7c(PTR_DAT_04cbbfa0);
    FUN_02132f7c(PTR_DAT_04cbbfa8);
    FUN_02132f7c(PTR_DAT_04cbbfb0);
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    bRam0000000004f9c8b9 = 1;
  }
  plStack_58 = (long *)0x0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_View_PackPalette__Reset_238dfdc();
  lVar10 = Dino_BusSand_View_PackPalette__Swatches_238e800();
  if (lVar10 != 0) {
    if (param_1 == (long *)0x0) {
      return;
    }
    if (*(int *)(lVar10 + 0x18) == 0) {
      return;
    }
    lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbbfb0);
    System_Collections_Generic_List_byte____ctor_39fa29c(lVar11,*(undefined8 *)PTR_DAT_04cbbf88);
    lVar15 = *param_1;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04cbbf60) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_0248e2b0;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar12 = (undefined8 *)FUN_0216b7a4(param_1,*(long *)PTR_DAT_04cbbf60,0);
LAB_0248e2b0:
    plVar13 = (long *)(*(code *)*puVar12)(param_1,puVar12[1]);
    puVar5 = PTR_DAT_04cbbf78;
    puVar4 = PTR_DAT_04cbbf70;
    puVar3 = PTR_DAT_04cbbf68;
    puVar1 = PTR_DAT_04ca9c08;
    pplStack_a8 = &plStack_58;
    lStack_b0 = 0;
    do {
      plStack_58 = plVar13;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar15 = *plVar13;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar1) {
            puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0248e33c;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar12 = (undefined8 *)FUN_0216b7a4(plVar13,*(long *)puVar1,0);
LAB_0248e33c:
      uVar16 = (*(code *)*puVar12)(plVar13,puVar12[1]);
      plVar13 = plStack_58;
      if ((uVar16 & 1) == 0) {
        if (plStack_58 == (long *)0x0) goto LAB_0248e4ac;
        lVar15 = *plStack_58;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 == 0) goto LAB_0248e484;
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_0248e46c;
      }
      if (plStack_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar15 = *plStack_58;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
            puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0248e3a0;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar12 = (undefined8 *)FUN_0216b7a4(plStack_58,*(long *)puVar3,0);
LAB_0248e3a0:
      iVar7 = (*(code *)*puVar12)(plVar13,puVar12[1]);
      plVar13 = plStack_58;
      if (0xbf < (iVar7 - 0x41U & 0xff)) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar16 = System_Collections_Generic_List_byte___Contains_39faeac
                           (lVar11,iVar7,*(undefined8 *)puVar5);
        plVar13 = plStack_58;
        if ((uVar16 & 1) == 0) {
          lVar15 = *(long *)(lVar11 + 0x10);
          lVar17 = *(long *)puVar4;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar9 = *(uint *)(lVar11 + 0x18);
          if (uVar9 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar9 + 1;
            *(char *)(lVar15 + (int)uVar9 + 0x20) = (char)iVar7;
          }
          else {
            System_Collections_Generic_List_byte___AddWithResize_39fab2c
                      (lVar11,iVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            plVar13 = plStack_58;
          }
        }
      }
    } while( true );
  }
  goto LAB_0248e784;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_0248e46c:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_0248e4a0;
    }
  }
LAB_0248e484:
  puVar12 = (undefined8 *)FUN_0216b7a4(plStack_58,*(long *)PTR_DAT_04ca9b30,0);
LAB_0248e4a0:
  (*(code *)*puVar12)(plVar13,puVar12[1]);
LAB_0248e4ac:
  if (lVar11 != 0) {
    if ((*(int *)(lVar11 + 0x18) != 0) && (*(int *)(lVar11 + 0x18) <= *(int *)(lVar10 + 0x18))) {
      System_Collections_Generic_List_byte___Sort_39fc450(lVar11,*(undefined8 *)PTR_DAT_04cbbf80);
      lStack_b0 = (long)*(int *)(lVar11 + 0x18);
      pplStack_a8 = (long **)(long)*(int *)(lVar10 + 0x18);
      lVar15 = FUN_02133070(*(undefined8 *)PTR_DAT_04cbbf58,&lStack_b0);
      puVar4 = PTR_DAT_04cbbfb8;
      puVar3 = PTR_DAT_04cbbfa8;
      puVar1 = PTR_DAT_04cbbfa0;
      uVar16 = (ulong)*(uint *)(lVar11 + 0x18);
      if ((int)*(uint *)(lVar11 + 0x18) < 1) {
        uVar20 = (ulong)*(uint *)(lVar10 + 0x18);
      }
      else {
                    /* try { // try from 0248e524 to 0258e69b has its CatchHandler @ 0248e524
                       catch() { ... } // from try @ 0248e524 with catch @ 0248e524
                       catch() { ... } // from try @ 0248e874 with catch @ 0248e524
                       catch() { ... } // from try @ 0248e93c with catch @ 0248e524
                       catch() { ... } // from try @ 0248e9c0 with catch @ 0248e524 */
        uVar19 = 0;
        do {
          uVar8 = System_Collections_Generic_List_byte___get_Item_39fa834
                            (lVar11,uVar19 & 0xffffffff,*(undefined8 *)puVar3);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar4);
          }
          uVar9 = Dino_BusSand_Core_SandPalette__Color_24196fc(uVar8,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          fVar21 = (float)(uVar9 >> 8 & 0xff) / 255.0;
          fVar22 = (float)(uVar9 >> 0x10 & 0xff) / 255.0;
          uVar8 = Dino_BusSand_View_PackPalette__Lab_238ea5c
                            ((float)(uVar9 & 0xff) / 255.0,fVar21,fVar22,
                             (float)(uVar9 >> 0x18) / 255.0);
          uVar20 = (ulong)*(uint *)(lVar10 + 0x18);
          if (0 < (int)*(uint *)(lVar10 + 0x18)) {
            uVar16 = 0;
            do {
              lVar17 = System_Collections_Generic_List_object___get_Item_3a81924
                                 (lVar10,uVar16 & 0xffffffff,*(undefined8 *)puVar1);
              if (lVar17 == 0) goto LAB_0248e784;
              uVar23 = *(undefined4 *)(lVar17 + 0x18);
              uVar24 = *(undefined4 *)(lVar17 + 0x1c);
              uVar25 = *(undefined4 *)(lVar17 + 0x20);
              uVar26 = *(undefined4 *)(lVar17 + 0x24);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              uVar23 = Dino_BusSand_View_PackPalette__Lab_238ea5c(uVar23,uVar24,uVar25,uVar26);
              uVar14 = Dino_BusSand_View_PackPalette__Distance_238ed10
                                 (uVar8,fVar21,fVar22,uVar23,uVar24,uVar25);
              if (lVar15 == 0) goto LAB_0248e784;
              if ((**(uint **)(lVar15 + 0x10) <= uVar19) ||
                 (uVar20 = *(ulong *)(*(uint **)(lVar15 + 0x10) + 4),
                 (uVar20 & 0xffffffff) <= uVar16)) goto LAB_0248e788;
              lVar17 = uVar16 + uVar19 * uVar20;
              uVar16 = uVar16 + 1;
              *(undefined8 *)(lVar15 + lVar17 * 8 + 0x20) = uVar14;
              uVar20 = (ulong)*(int *)(lVar10 + 0x18);
            } while ((long)uVar16 < (long)uVar20);
          }
          uVar16 = (ulong)*(int *)(lVar11 + 0x18);
          uVar19 = uVar19 + 1;
        } while ((long)uVar19 < (long)uVar16);
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 0248e69c to 0258e6c3 has its CatchHandler @ 0248e98c */
      lVar15 = Dino_BusSand_View_PackPalette__Assign_238edac
                         (lVar15,uVar16 & 0xffffffff,uVar20 & 0xffffffff);
      puVar3 = PTR_DAT_04cbbfa8;
      puVar1 = PTR_DAT_04cbbfa0;
      if (0 < *(int *)(lVar11 + 0x18)) {
        uVar16 = 0;
        do {
          lVar17 = *(long *)puVar2;
          if (*(int *)(lVar17 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar17 = *(long *)puVar2;
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x18);
          bVar6 = System_Collections_Generic_List_byte___get_Item_39fa834
                            (lVar11,uVar16 & 0xffffffff,*(undefined8 *)puVar3);
                    /* try { // try from 0248e700 to 0258e72b has its CatchHandler @ 0248e988 */
          if (lVar15 == 0) goto LAB_0248e784;
          if (*(uint *)(lVar15 + 0x18) <= uVar16) {
LAB_0248e788:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          uVar14 = System_Collections_Generic_List_object___get_Item_3a81924
                             (lVar10,*(undefined4 *)(lVar15 + 0x20 + uVar16 * 4),
                              *(undefined8 *)puVar1);
          if (lVar17 == 0) goto LAB_0248e784;
          if (*(uint *)(lVar17 + 0x18) <= (uint)bVar6) goto LAB_0248e788;
          *(undefined8 *)(lVar17 + (ulong)bVar6 * 8 + 0x20) = uVar14;
          thunk_FUN_02134474();
          uVar16 = uVar16 + 1;
        } while ((long)uVar16 < (long)*(int *)(lVar11 + 0x18));
      }
    }
                    /* try { // try from 0248e760 to 0258e77f has its CatchHandler @ 0248e984 */
                    /* try { // try from 0248e780 to 0258e78f has its CatchHandler @ 0248e978 */
    return;
  }
LAB_0248e784:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

