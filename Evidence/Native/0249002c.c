/* IL2CPP: Dino.BusSand.View.PackPalette$$Resolve
void Dino_BusSand_View_PackPalette__Resolve (uint8_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x034b1680) */
/* WARNING: Removing unreachable block (ram,0x034b1668) */
/* WARNING: Removing unreachable block (ram,0x034b16a4) */
/* IL2CPP: Dino.BusSand.View.PackPalette$$Resolve
   void Dino_BusSand_View_PackPalette__Resolve (uint8_t id, const MethodInfo* method); */

ulong Dino_BusSand_View_PackPalette__Resolve_239002c(ulong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  uint uStack_84;
  
  uVar6 = param_1;
  if ((bRam0000000004f9c8be & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc030);
    FUN_02132f7c(PTR_DAT_04cb70d8);
    uVar6 = FUN_02132f7c(PTR_DAT_04cbbfb8);
    bRam0000000004f9c8be = 1;
  }
  puVar3 = PTR_DAT_04cb70d8;
  if (0x40 < ((uint)param_1 & 0xff)) {
    return uVar6;
  }
  lVar7 = *(long *)PTR_DAT_04cb70d8;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar3;
  }
  lVar13 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar13 == 0) goto LAB_024902dc;
  uVar5 = (uint)param_1 & 0xff;
  if (*(uint *)(lVar13 + 0x18) <= uVar5) goto LAB_024902e0;
  uVar6 = param_1 & 0xff;
  lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
  *(undefined1 *)(lVar13 + uVar6 + 0x20) = 1;
  if (lVar10 == 0) goto LAB_024902dc;
  if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_024902e0;
  lVar13 = *(long *)(lVar10 + uVar6 * 8 + 0x20);
  if (lVar13 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar13 = Dino_BusSand_View_PackPalette__Nearest_238fa7c(param_1 & 0xffffffff);
    if (lVar13 != 0) {
      lVar7 = *(long *)puVar3;
      goto LAB_02490108;
    }
    if (*(int *)(*(long *)PTR_DAT_04cbbfb8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_Core_SandPalette__Color_24196fc(param_1 & 0xffffffff,0);
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar7);
      lVar7 = *(long *)puVar3;
    }
                    /* try { // try from 02490254 to 0259025b has its CatchHandler @ 02490850 */
    lVar7 = **(long **)(lVar7 + 0xb8);
    if (lVar7 == 0) goto LAB_024902dc;
    if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_024902e0;
    lVar7 = lVar7 + uVar6 * 0x10;
                    /* try { // try from 02490270 to 02590273 has its CatchHandler @ 02490840 */
                    /* try { // try from 02490274 to 02590283 has its CatchHandler @ 0249084c */
    *(undefined4 *)(lVar7 + 0x2c) = 0x3f800000;
    fVar20 = (float)(uVar4 >> 8 & 0xff) / 255.0;
                    /* try { // try from 0249029c to 0259029f has its CatchHandler @ 02490834 */
    fVar23 = (float)(uVar4 >> 0x10 & 0xff) / 255.0;
                    /* try { // try from 024902a0 to 025902af has its CatchHandler @ 02490848 */
    *(float *)(lVar7 + 0x20) = (float)(uVar4 & 0xff) / 255.0;
    *(float *)(lVar7 + 0x24) = fVar20;
    *(float *)(lVar7 + 0x28) = fVar23;
    lVar7 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    uVar19 = Dino_BusSand_View_PackPalette__ShadeOf_23902e4();
                    /* try { // try from 024902bc to 025902c3 has its CatchHandler @ 02490838 */
    if (lVar7 == 0) goto LAB_024902dc;
    if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_024902e0;
    uVar25 = NEON_fmov(0x3f800000,4);
    lVar7 = lVar7 + uVar6 * 0x10;
    uVar25 = CONCAT44((int)((ulong)uVar25 >> 0x20),fVar23);
  }
  else {
LAB_02490108:
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar3;
    }
    lVar7 = **(long **)(lVar7 + 0xb8);
    if (lVar7 == 0) goto LAB_024902dc;
    if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_024902e0;
    uVar25 = *(undefined8 *)(lVar13 + 0x18);
    lVar7 = lVar7 + uVar6 * 0x10;
    *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar13 + 0x20);
    *(undefined8 *)(lVar7 + 0x20) = uVar25;
    lVar7 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    if (lVar7 == 0) goto LAB_024902dc;
    if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_024902e0;
    uVar19 = *(undefined4 *)(lVar13 + 0x28);
    fVar20 = *(float *)(lVar13 + 0x2c);
    lVar7 = lVar7 + uVar6 * 0x10;
    uVar25 = *(undefined8 *)(lVar13 + 0x30);
  }
  *(undefined4 *)(lVar7 + 0x20) = uVar19;
  *(float *)(lVar7 + 0x24) = fVar20;
  lVar13 = *(long *)puVar3;
  *(undefined8 *)(lVar7 + 0x28) = uVar25;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar13 = *(long *)puVar3;
  }
  lVar7 = **(long **)(lVar13 + 0xb8);
  if (lVar7 == 0) {
LAB_024902dc:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(uint *)(lVar7 + 0x18) <= uVar5) {
LAB_024902e0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024902e0 to 025902e3 has its CatchHandler @ 02490820 */
    FUN_0213322c();
  }
  lVar7 = lVar7 + uVar6 * 0x10;
  lVar13 = (*(long **)(lVar13 + 0xb8))[9];
  uVar4 = FUN_023e4c88(*(undefined4 *)(lVar7 + 0x20),*(undefined4 *)(lVar7 + 0x24),
                       *(undefined4 *)(lVar7 + 0x28),*(undefined4 *)(lVar7 + 0x2c),0);
  lVar7 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  if (lVar7 == 0) goto LAB_024902dc;
  if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_024902e0;
  if (lVar13 == 0) goto LAB_024902dc;
  lVar7 = lVar7 + uVar6 * 0x10;
  uVar19 = *(undefined4 *)(lVar7 + 0x20);
  uVar21 = *(undefined4 *)(lVar7 + 0x24);
  uVar22 = *(undefined4 *)(lVar7 + 0x28);
  uVar24 = *(undefined4 *)(lVar7 + 0x2c);
  lVar7 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04cbc030 + 0x20) + 0xc0) + 0x118);
  *(int *)(lVar13 + 0x2c) = *(int *)(lVar13 + 0x2c) + 1;
  uStack_84 = uVar4;
  if (*(long *)(lVar13 + 0x10) == 0) {
    System_Collections_Generic_Dictionary_Color32__Color___Initialize_33b112c
              (lVar13,0,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x10));
  }
  plVar15 = *(long **)(lVar13 + 0x30);
  lVar10 = *(long *)(lVar13 + 0x18);
  if (plVar15 == (long *)0x0) {
    uVar5 = System_Int32__GetHashCode_482d748(&uStack_84,0);
  }
  else {
    lVar9 = *(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470(lVar9);
    }
    lVar11 = *plVar15;
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar9) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_034b130c;
        }
        uVar6 = uVar6 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_0216b7a4(plVar15,lVar9,1);
LAB_034b130c:
    uVar5 = (*(code *)*puVar8)(plVar15,uVar4,puVar8[1]);
  }
  lVar9 = *(long *)(lVar13 + 0x10);
  if (lVar9 == 0) goto LAB_034b16b0;
  uVar4 = *(uint *)(lVar9 + 0x18);
  uVar5 = uVar5 & 0x7fffffff;
  iVar17 = 0;
  if (uVar4 != 0) {
    iVar17 = (int)uVar5 / (int)uVar4;
  }
  uVar16 = uVar5 - iVar17 * uVar4;
  if (uVar16 < uVar4) {
    piVar18 = (int *)(lVar9 + (ulong)uVar16 * 4 + 0x20);
    uVar4 = *piVar18 - 1;
    if (plVar15 == (long *)0x0) {
      if (lVar10 == 0) goto LAB_034b16b0;
      uVar25 = *(undefined8 *)(lVar10 + 0x18);
      uVar16 = (uint)uVar25;
      if (uVar4 < uVar16) {
        iVar17 = 0;
        lVar9 = lVar10 + 0x20;
        do {
          uVar16 = (uint)uVar25;
          if (*(uint *)(lVar9 + (long)(int)uVar4 * 0x1c) == uVar5) {
            plVar15 = (long *)FUN_02771f40(*(undefined8 *)
                                            (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_034b16ac;
            if (plVar15 == (long *)0x0) goto LAB_034b16b0;
            uVar6 = (**(code **)(*plVar15 + 0x1b8))
                              (plVar15,*(undefined4 *)(lVar9 + (long)(int)uVar4 * 0x1c + 8),
                               uStack_84,*(undefined8 *)(*plVar15 + 0x1c0));
            if ((uVar6 & 1) != 0) {
              if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_034b16ac;
              lVar9 = lVar9 + (long)(int)uVar4 * 0x1c;
              goto LAB_034b1658;
            }
            uVar16 = *(uint *)(lVar10 + 0x18);
          }
          if (uVar16 <= uVar4) goto LAB_034b16ac;
          uVar4 = *(uint *)(lVar9 + (long)(int)uVar4 * 0x1c + 4);
          if ((int)uVar16 <= iVar17) {
            System_ThrowHelper__ThrowInvalidOperationException_ConcurrentOperationsNotSupported_4850c40
                      (0);
          }
          uVar25 = *(undefined8 *)(lVar10 + 0x18);
          iVar17 = iVar17 + 1;
          uVar16 = (uint)uVar25;
        } while (uVar4 < uVar16);
      }
    }
    else {
      if (lVar10 == 0) goto LAB_034b16b0;
      uVar25 = *(undefined8 *)(lVar10 + 0x18);
      uVar16 = (uint)uVar25;
      if (uVar4 < uVar16) {
        iVar17 = 0;
        lVar9 = lVar10 + 0x20;
        do {
          uVar2 = uStack_84;
          uVar16 = (uint)uVar25;
          if (*(uint *)(lVar9 + (long)(int)uVar4 * 0x1c) == uVar5) {
            lVar11 = *(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar9 + (long)(int)uVar4 * 0x1c + 8);
            if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_0216b470(lVar11);
            }
            lVar12 = *plVar15;
            uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar6 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar11) {
                  puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_034b1400;
                }
                uVar6 = uVar6 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar6 != 0);
            }
            puVar8 = (undefined8 *)FUN_0216b7a4(plVar15,lVar11,0);
LAB_034b1400:
            uVar6 = (*(code *)*puVar8)(plVar15,uVar1,uVar2,puVar8[1]);
            if ((uVar6 & 1) != 0) {
              if (uVar4 < *(uint *)(lVar10 + 0x18)) {
                lVar9 = lVar9 + (long)(int)uVar4 * 0x1c;
LAB_034b1658:
                *(undefined4 *)(lVar9 + 0xc) = uVar19;
                *(undefined4 *)(lVar9 + 0x10) = uVar21;
                *(undefined4 *)(lVar9 + 0x14) = uVar22;
                *(undefined4 *)(lVar9 + 0x18) = uVar24;
                return 1;
              }
              goto LAB_034b16ac;
            }
            uVar16 = *(uint *)(lVar10 + 0x18);
          }
          if (uVar16 <= uVar4) goto LAB_034b16ac;
          uVar4 = *(uint *)(lVar9 + (long)(int)uVar4 * 0x1c + 4);
          if ((int)uVar16 <= iVar17) {
            System_ThrowHelper__ThrowInvalidOperationException_ConcurrentOperationsNotSupported_4850c40
                      (0);
          }
          uVar25 = *(undefined8 *)(lVar10 + 0x18);
          iVar17 = iVar17 + 1;
          uVar16 = (uint)uVar25;
        } while (uVar4 < uVar16);
      }
    }
    if (*(int *)(lVar13 + 0x28) < 1) {
      uVar4 = *(uint *)(lVar13 + 0x20);
      if (uVar4 == uVar16) {
        System_Collections_Generic_Dictionary_Color32__Color___Resize_33b1a54
                  (lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x1b8));
        lVar7 = *(long *)(lVar13 + 0x10);
        *(uint *)(lVar13 + 0x20) = uVar16 + 1;
        if (lVar7 == 0) goto LAB_034b16b0;
        uVar16 = *(uint *)(lVar7 + 0x18);
        iVar17 = 0;
        if (uVar16 != 0) {
          iVar17 = (int)uVar5 / (int)uVar16;
        }
        uVar2 = uVar5 - iVar17 * uVar16;
        if (uVar16 <= uVar2) goto LAB_034b16ac;
        lVar10 = *(long *)(lVar13 + 0x18);
        piVar18 = (int *)(lVar7 + (ulong)uVar2 * 4 + 0x20);
      }
      else {
        lVar10 = *(long *)(lVar13 + 0x18);
        *(uint *)(lVar13 + 0x20) = uVar4 + 1;
      }
      if (lVar10 == 0) {
LAB_034b16b0:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_034b16ac;
      lVar10 = lVar10 + (long)(int)uVar4 * 0x1c;
    }
    else {
      uVar4 = *(uint *)(lVar13 + 0x24);
      *(int *)(lVar13 + 0x28) = *(int *)(lVar13 + 0x28) + -1;
      if (uVar16 <= uVar4) goto LAB_034b16ac;
      lVar10 = lVar10 + (long)(int)uVar4 * 0x1c;
      *(undefined4 *)(lVar13 + 0x24) = *(undefined4 *)(lVar10 + 0x24);
    }
    *(uint *)(lVar10 + 0x20) = uVar5;
    iVar17 = *piVar18;
    *(undefined4 *)(lVar10 + 0x2c) = uVar19;
    *(undefined4 *)(lVar10 + 0x30) = uVar21;
    *(undefined4 *)(lVar10 + 0x34) = uVar22;
    *(undefined4 *)(lVar10 + 0x38) = uVar24;
    *(int *)(lVar10 + 0x24) = iVar17 + -1;
    *(uint *)(lVar10 + 0x28) = uStack_84;
    *piVar18 = uVar4 + 1;
    return 1;
  }
LAB_034b16ac:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

