/* IL2CPP: Dino.BusSand.App.Meta.ActivityContinueFeature$$.ctor
void Dino_BusSand_App_Meta_ActivityContinueFeature___ctor (Dino_BusSand_App_Meta_ActivityContinueFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03538228) */
/* WARNING: Removing unreachable block (ram,0x03538210) */
/* WARNING: Removing unreachable block (ram,0x0353824c) */
/* IL2CPP: Dino.BusSand.App.Meta.ActivityContinueFeature$$.ctor
   void Dino_BusSand_App_Meta_ActivityContinueFeature___ctor
   (Dino_BusSand_App_Meta_ActivityContinueFeature_o* __this, const MethodInfo* method); */

ulong Dino_BusSand_App_Meta_ActivityContinueFeature___ctor_221def0(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  int iVar20;
  int *piVar21;
  long *plVar22;
  uint uVar23;
  undefined8 uVar24;
  uint uVar25;
  long lVar26;
  undefined4 uStack_64;
  
  puVar3 = PTR_DAT_04cadaa0;
  if ((bRam0000000004f9bdb0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadaa0);
    bRam0000000004f9bdb0 = 1;
  }
                    /* catch() { ... } // from try @ 0231e06c with catch @ 0231df28
                       catch() { ... } // from try @ 0231e154 with catch @ 0231df28 */
  System_Object___ctor_4870e5c(param_1,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar8 = PTR_DAT_04cb28d8;
  puVar7 = PTR_DAT_04cb28d0;
  puVar6 = PTR_DAT_04caf8c0;
  puVar5 = PTR_DAT_04caf8b0;
  puVar4 = PTR_DAT_04cadaa0;
  puVar3 = PTR_DAT_04cac7e8;
  if ((bRam0000000004f9bdb1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb28d0);
    FUN_02132f7c(PTR_DAT_04cb28d8);
    FUN_02132f7c(PTR_DAT_04cadaa0);
    FUN_02132f7c(PTR_DAT_04cac7e8);
    FUN_02132f7c(PTR_DAT_04cb28e0);
    FUN_02132f7c(PTR_DAT_04cb28e8);
    FUN_02132f7c(PTR_DAT_04caf8c0);
    FUN_02132f7c(PTR_DAT_04caf8b0);
    FUN_02132f7c(PTR_DAT_04cb28f0);
    bRam0000000004f9bdb1 = 1;
  }
  uVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Func_object__object__bool____ctor_37a6890(uVar11,0,*(undefined8 *)puVar7,0);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar11;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar11);
  uVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
  System_Func_object__object__bool____ctor_37a6890(uVar11,0,*(undefined8 *)puVar8,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  *puVar12 = uVar11;
  thunk_FUN_02134474(puVar12,uVar11);
  lVar13 = *(long *)puVar4;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar13 = *(long *)puVar4;
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x20);
  if (lVar13 == 0) {
LAB_0231e130:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar14 = System_Collections_Generic_Dictionary_int__object___ContainsKey_3437520
                     (lVar13,6,*(undefined8 *)PTR_DAT_04cb28e0);
  if ((uVar14 & 1) != 0) {
    return uVar14;
  }
  lVar13 = *(long *)puVar4;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar13 = *(long *)puVar4;
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x20);
  uVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Func_object__object__bool____ctor_37a6890(uVar11,0,*(undefined8 *)PTR_DAT_04cb28f0,0);
  if (lVar13 == 0) goto LAB_0231e130;
  lVar15 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04cb28e8 + 0x20) + 0xc0) + 0x118);
  uStack_64 = 6;
  *(int *)(lVar13 + 0x2c) = *(int *)(lVar13 + 0x2c) + 1;
  if (*(long *)(lVar13 + 0x10) == 0) {
    System_Collections_Generic_Dictionary_int__object___Initialize_3437cd8
              (lVar13,0,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x10));
  }
  plVar22 = *(long **)(lVar13 + 0x30);
  lVar26 = *(long *)(lVar13 + 0x18);
  lVar16 = *(long *)(*(long *)(lVar15 + 0x20) + 0xc0);
  if (plVar22 == (long *)0x0) {
    uVar10 = System_Int32__GetHashCode_482d748(&uStack_64,*(undefined8 *)(lVar16 + 400));
  }
  else {
    lVar16 = *(long *)(lVar16 + 8);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_0216b470(lVar16);
    }
    lVar17 = *plVar22;
    uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar14 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar16) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          goto LAB_03537ea4;
        }
        uVar14 = uVar14 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar14 != 0);
    }
    puVar12 = (undefined8 *)FUN_0216b7a4(plVar22,lVar16,1);
LAB_03537ea4:
    uVar10 = (*(code *)*puVar12)(plVar22,6,puVar12[1]);
  }
  lVar16 = *(long *)(lVar13 + 0x10);
  if (lVar16 == 0) goto LAB_03538258;
  uVar25 = *(uint *)(lVar16 + 0x18);
  uVar10 = uVar10 & 0x7fffffff;
  iVar20 = 0;
  if (uVar25 != 0) {
    iVar20 = (int)uVar10 / (int)uVar25;
  }
  uVar23 = uVar10 - iVar20 * uVar25;
  if (uVar25 <= uVar23) {
LAB_03538254:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  piVar21 = (int *)(lVar16 + (ulong)uVar23 * 4 + 0x20);
  uVar25 = *piVar21 - 1;
  if (plVar22 == (long *)0x0) {
    if (lVar26 == 0) goto LAB_03538258;
    uVar24 = *(undefined8 *)(lVar26 + 0x18);
    uVar23 = (uint)uVar24;
    if (uVar25 < uVar23) {
      iVar20 = 0;
      lVar16 = lVar26 + 0x20;
      do {
        uVar23 = (uint)uVar24;
        if (*(uint *)(lVar16 + (long)(int)uVar25 * 0x18) == uVar10) {
          plVar22 = (long *)FUN_02772e00(*(undefined8 *)
                                          (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(lVar26 + 0x18) <= uVar25) goto LAB_03538254;
          if (plVar22 == (long *)0x0) goto LAB_03538258;
          uVar14 = (**(code **)(*plVar22 + 0x1b8))
                             (plVar22,*(undefined4 *)(lVar16 + (long)(int)uVar25 * 0x18 + 8),
                              uStack_64,*(undefined8 *)(*plVar22 + 0x1c0));
          if ((uVar14 & 1) != 0) {
            if (*(uint *)(lVar26 + 0x18) <= uVar25) goto LAB_03538254;
            puVar12 = (undefined8 *)(lVar16 + (long)(int)uVar25 * 0x18 + 0x10);
            *puVar12 = uVar11;
            goto LAB_03538208;
          }
          uVar23 = *(uint *)(lVar26 + 0x18);
        }
        if (uVar23 <= uVar25) goto LAB_03538254;
        uVar25 = *(uint *)(lVar16 + (long)(int)uVar25 * 0x18 + 4);
        if ((int)uVar23 <= iVar20) {
          System_ThrowHelper__ThrowInvalidOperationException_ConcurrentOperationsNotSupported_4850c40
                    (0);
        }
        uVar24 = *(undefined8 *)(lVar26 + 0x18);
        iVar20 = iVar20 + 1;
        uVar23 = (uint)uVar24;
      } while (uVar25 < uVar23);
    }
  }
  else {
    if (lVar26 == 0) goto LAB_03538258;
    uVar24 = *(undefined8 *)(lVar26 + 0x18);
    uVar23 = (uint)uVar24;
    if (uVar25 < uVar23) {
      iVar20 = 0;
      lVar16 = lVar26 + 0x20;
      do {
        uVar9 = uStack_64;
        uVar23 = (uint)uVar24;
        if (*(uint *)(lVar16 + (long)(int)uVar25 * 0x18) == uVar10) {
          lVar17 = *(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 8);
          uVar1 = *(undefined4 *)(lVar16 + (long)(int)uVar25 * 0x18 + 8);
          if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_0216b470(lVar17);
          }
          lVar18 = *plVar22;
          uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar14 != 0) {
            piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar17) {
                puVar12 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_03537f98;
              }
              uVar14 = uVar14 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar14 != 0);
          }
          puVar12 = (undefined8 *)FUN_0216b7a4(plVar22,lVar17,0);
LAB_03537f98:
          uVar14 = (*(code *)*puVar12)(plVar22,uVar1,uVar9,puVar12[1]);
          if ((uVar14 & 1) != 0) {
            if (uVar25 < *(uint *)(lVar26 + 0x18)) {
              puVar12 = (undefined8 *)(lVar16 + (long)(int)uVar25 * 0x18 + 0x10);
              *puVar12 = uVar11;
LAB_03538208:
              thunk_FUN_02134474(puVar12,uVar11);
              return 1;
            }
            goto LAB_03538254;
          }
          uVar23 = *(uint *)(lVar26 + 0x18);
        }
        if (uVar23 <= uVar25) goto LAB_03538254;
        uVar25 = *(uint *)(lVar16 + (long)(int)uVar25 * 0x18 + 4);
        if ((int)uVar23 <= iVar20) {
          System_ThrowHelper__ThrowInvalidOperationException_ConcurrentOperationsNotSupported_4850c40
                    (0);
        }
        uVar24 = *(undefined8 *)(lVar26 + 0x18);
        iVar20 = iVar20 + 1;
        uVar23 = (uint)uVar24;
      } while (uVar25 < uVar23);
    }
  }
  if (*(int *)(lVar13 + 0x28) < 1) {
    uVar25 = *(uint *)(lVar13 + 0x20);
    if (uVar25 == uVar23) {
      System_Collections_Generic_Dictionary_int__object___Resize_34385f4
                (lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x1b8));
      lVar15 = *(long *)(lVar13 + 0x10);
      *(uint *)(lVar13 + 0x20) = uVar23 + 1;
      if (lVar15 == 0) goto LAB_03538258;
      uVar23 = *(uint *)(lVar15 + 0x18);
      iVar20 = 0;
      if (uVar23 != 0) {
        iVar20 = (int)uVar10 / (int)uVar23;
      }
      uVar2 = uVar10 - iVar20 * uVar23;
      if (uVar23 <= uVar2) goto LAB_03538254;
      lVar26 = *(long *)(lVar13 + 0x18);
      piVar21 = (int *)(lVar15 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      lVar26 = *(long *)(lVar13 + 0x18);
      *(uint *)(lVar13 + 0x20) = uVar25 + 1;
    }
    if (lVar26 == 0) {
LAB_03538258:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(uint *)(lVar26 + 0x18) <= uVar25) goto LAB_03538254;
    lVar26 = lVar26 + (long)(int)uVar25 * 0x18;
  }
  else {
    uVar25 = *(uint *)(lVar13 + 0x24);
    *(int *)(lVar13 + 0x28) = *(int *)(lVar13 + 0x28) + -1;
    if (uVar23 <= uVar25) goto LAB_03538254;
    lVar26 = lVar26 + (long)(int)uVar25 * 0x18;
    *(undefined4 *)(lVar13 + 0x24) = *(undefined4 *)(lVar26 + 0x24);
  }
  *(uint *)(lVar26 + 0x20) = uVar10;
  *(int *)(lVar26 + 0x24) = *piVar21 + -1;
  *(undefined4 *)(lVar26 + 0x28) = uStack_64;
  *(undefined8 *)(lVar26 + 0x30) = uVar11;
  thunk_FUN_02134474((undefined8 *)(lVar26 + 0x30),uVar11);
  *piVar21 = uVar25 + 1;
  return 1;
}

