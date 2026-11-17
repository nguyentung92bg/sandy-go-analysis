/* IL2CPP: Dino.BusSand.App.Meta.FeatureGate$$Set
void Dino_BusSand_App_Meta_FeatureGate__Set (int32_t f, bool on, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.FeatureGate$$Set
   void Dino_BusSand_App_Meta_FeatureGate__Set (int32_t f, bool on, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_FeatureGate__Set_220bb18(int param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  long *plVar20;
  uint uVar21;
  ulong uVar22;
  int *piVar23;
  
  puVar2 = PTR_DAT_04cac458;
  if ((bRam0000000004f9bcf4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cb2148);
    FUN_02132f7c(PTR_DAT_04cb2150);
    bRam0000000004f9bcf4 = 1;
  }
  lVar4 = *(long *)puVar2;
  if ((param_2 & 1) != 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (lVar4 != 0) {
      lVar8 = *(long *)PTR_DAT_04cb2150;
      if (*(long *)(lVar4 + 0x10) != 0) {
        iVar3 = System_Collections_Generic_HashSet_Int32Enum___InternalGetHashCode_37e1c48
                          (lVar4,param_1,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0xb0));
        lVar9 = *(long *)(lVar4 + 0x10);
        if (lVar9 == 0) {
LAB_038df180:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar21 = *(uint *)(lVar9 + 0x18);
        iVar19 = 0;
        if (uVar21 != 0) {
          iVar19 = iVar3 / (int)uVar21;
        }
        uVar17 = iVar3 - iVar19 * uVar21;
        if (uVar21 <= uVar17) {
LAB_038df140:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        uVar21 = *(int *)(lVar9 + (ulong)uVar17 * 4 + 0x20) - 1;
        if (-1 < (int)uVar21) {
          lVar9 = *(long *)(lVar4 + 0x18);
          if (lVar9 == 0) goto LAB_038df180;
          uVar10 = *(undefined8 *)(lVar9 + 0x18);
          iVar19 = 0;
          lVar16 = lVar9 + 0x20;
          uVar18 = 0xffffffff;
          do {
            if ((uint)uVar10 <= uVar21) goto LAB_038df140;
            piVar23 = (int *)(lVar16 + (ulong)uVar21 * 0xc);
            uVar22 = (ulong)uVar21;
            if (*piVar23 == iVar3) {
              plVar20 = *(long **)(lVar4 + 0x30);
              if (plVar20 == (long *)0x0) goto LAB_038df180;
              lVar7 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x20);
              uVar1 = *(undefined4 *)(lVar16 + uVar22 * 0xc + 8);
              if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_0216b470(lVar7);
              }
              lVar11 = *plVar20;
              uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar7) {
                    puVar5 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_038df004;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar5 = (undefined8 *)FUN_0216b7a4(plVar20,lVar7,0);
LAB_038df004:
              uVar14 = (*(code *)*puVar5)(plVar20,uVar1,param_1,puVar5[1]);
              if ((uVar14 & 1) != 0) {
                if ((int)(uint)uVar18 < 0) {
                  uVar13 = *(uint *)(lVar9 + 0x18);
                  if (uVar13 <= uVar21) goto LAB_038df140;
                  lVar8 = *(long *)(lVar4 + 0x10);
                  if (lVar8 == 0) goto LAB_038df180;
                  if (*(uint *)(lVar8 + 0x18) <= uVar17) goto LAB_038df140;
                  *(int *)(lVar8 + (ulong)uVar17 * 4 + 0x20) =
                       *(int *)(lVar16 + uVar22 * 0xc + 4) + 1;
                }
                else {
                  uVar13 = *(uint *)(lVar9 + 0x18);
                  if ((uVar13 <= uVar21) || (uVar13 <= (uint)uVar18)) goto LAB_038df140;
                  *(undefined4 *)(lVar16 + uVar18 * 0xc + 4) =
                       *(undefined4 *)(lVar16 + uVar22 * 0xc + 4);
                }
                if (uVar21 < uVar13) {
                  iVar3 = *(int *)(lVar4 + 0x38);
                  uVar1 = *(undefined4 *)(lVar4 + 0x28);
                  iVar19 = *(int *)(lVar4 + 0x20) + -1;
                  *piVar23 = -1;
                  *(int *)(lVar4 + 0x20) = iVar19;
                  *(undefined4 *)(lVar16 + uVar22 * 0xc + 4) = uVar1;
                  *(int *)(lVar4 + 0x38) = iVar3 + 1;
                  if (iVar19 == 0) {
                    uVar21 = 0xffffffff;
                    *(undefined4 *)(lVar4 + 0x24) = 0;
                  }
                  *(uint *)(lVar4 + 0x28) = uVar21;
                  return 1;
                }
                goto LAB_038df140;
              }
              uVar10 = *(undefined8 *)(lVar9 + 0x18);
            }
            if ((int)(uint)uVar10 <= iVar19) {
              thunk_FUN_021985a8(PTR_DAT_04caa348);
              uVar10 = thunk_FUN_0216e89c();
              uVar6 = thunk_FUN_021985a8(PTR_DAT_04cc7428);
              System_InvalidOperationException___ctor_482ff30(uVar10,uVar6,0);
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar10,lVar8);
            }
            if ((uint)uVar10 <= uVar21) goto LAB_038df140;
            iVar19 = iVar19 + 1;
            uVar18 = (ulong)uVar21;
            uVar21 = *(uint *)(lVar16 + uVar22 * 0xc + 4);
          } while (-1 < (int)uVar21);
        }
      }
      return 0;
    }
LAB_0230bbe8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar4 == 0) goto LAB_0230bbe8;
  lVar8 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04cb2148 + 0x20) + 0xc0) + 0xa8);
  if (*(long *)(lVar4 + 0x10) == 0) {
    System_Collections_Generic_HashSet_Int32Enum___Initialize_37e0410
              (lVar4,0,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
  }
  iVar3 = System_Collections_Generic_HashSet_Int32Enum___InternalGetHashCode_37e1c48
                    (lVar4,param_1,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0xb0)
                    );
  lVar9 = *(long *)(lVar4 + 0x10);
  if (lVar9 == 0) goto LAB_038e09f4;
  uVar21 = *(uint *)(lVar9 + 0x18);
  iVar19 = 0;
  if (uVar21 != 0) {
    iVar19 = iVar3 / (int)uVar21;
  }
  uVar17 = iVar3 - iVar19 * uVar21;
  if (uVar17 < uVar21) {
    lVar16 = *(long *)(lVar4 + 0x18);
    uVar21 = *(int *)(lVar9 + (ulong)uVar17 * 4 + 0x20) - 1;
    if (-1 < (int)uVar21) {
      if (lVar16 == 0) goto LAB_038e09f4;
      uVar10 = *(undefined8 *)(lVar16 + 0x18);
      iVar19 = 0;
      lVar9 = lVar16 + 0x20;
      do {
        if ((uint)uVar10 <= uVar21) goto LAB_038e09b4;
        if (*(int *)(lVar9 + (ulong)uVar21 * 0xc) == iVar3) {
          plVar20 = *(long **)(lVar4 + 0x30);
          if (plVar20 == (long *)0x0) goto LAB_038e09f4;
          lVar7 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x20);
          uVar1 = *(undefined4 *)(lVar9 + (ulong)uVar21 * 0xc + 8);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0216b470(lVar7);
          }
          lVar11 = *plVar20;
          uVar18 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar18 != 0) {
            piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == lVar7) {
                puVar5 = (undefined8 *)(lVar11 + (long)*piVar23 * 0x10 + 0x138);
                goto LAB_038e083c;
              }
              uVar18 = uVar18 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar18 != 0);
          }
          puVar5 = (undefined8 *)FUN_0216b7a4(plVar20,lVar7,0);
LAB_038e083c:
          uVar18 = (*(code *)*puVar5)(plVar20,uVar1,param_1,puVar5[1]);
          if ((uVar18 & 1) != 0) {
            return 0;
          }
          uVar10 = *(undefined8 *)(lVar16 + 0x18);
        }
        if ((int)(uint)uVar10 <= iVar19) {
          thunk_FUN_021985a8(PTR_DAT_04caa348);
          uVar10 = thunk_FUN_0216e89c();
          uVar6 = thunk_FUN_021985a8(PTR_DAT_04cc7428);
          System_InvalidOperationException___ctor_482ff30(uVar10,uVar6,0);
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar10,lVar8);
        }
        if ((uint)uVar10 <= uVar21) goto LAB_038e09b4;
        iVar19 = iVar19 + 1;
        uVar21 = *(uint *)(lVar9 + (ulong)uVar21 * 0xc + 4);
      } while (-1 < (int)uVar21);
    }
    uVar21 = *(uint *)(lVar4 + 0x28);
    if ((int)uVar21 < 0) {
      if (lVar16 == 0) goto LAB_038e09f4;
      uVar21 = *(uint *)(lVar4 + 0x24);
      uVar13 = *(uint *)(lVar16 + 0x18);
      if (uVar21 == uVar13) {
        System_Collections_Generic_HashSet_Int32Enum___IncreaseCapacity_37e04ec
                  (lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x188));
        if (*(long *)(lVar4 + 0x10) == 0) goto LAB_038e09f4;
        uVar21 = *(uint *)(lVar4 + 0x24);
        lVar16 = *(long *)(lVar4 + 0x18);
        uVar10 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x18);
        *(uint *)(lVar4 + 0x24) = uVar21 + 1;
        if (lVar16 == 0) goto LAB_038e09f4;
        iVar19 = 0;
        iVar12 = (int)uVar10;
        if (iVar12 != 0) {
          iVar19 = iVar3 / iVar12;
        }
        uVar17 = iVar3 - iVar19 * iVar12;
        uVar13 = *(uint *)(lVar16 + 0x18);
      }
      else {
        *(uint *)(lVar4 + 0x24) = uVar21 + 1;
      }
    }
    else {
      if (lVar16 == 0) goto LAB_038e09f4;
      uVar13 = *(uint *)(lVar16 + 0x18);
      if (uVar13 <= uVar21) goto LAB_038e09b4;
      *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar16 + (ulong)uVar21 * 0xc + 0x24);
    }
    if (uVar21 < uVar13) {
      piVar23 = (int *)(lVar16 + 0x20 + (long)(int)uVar21 * 0xc);
      lVar8 = *(long *)(lVar4 + 0x10);
      *piVar23 = iVar3;
      piVar23[2] = param_1;
      if (lVar8 == 0) {
LAB_038e09f4:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (uVar17 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (ulong)uVar17 * 4;
        *(int *)(lVar16 + 0x20 + (long)(int)uVar21 * 0xc + 4) = *(int *)(lVar8 + 0x20) + -1;
        *(uint *)(lVar8 + 0x20) = uVar21 + 1;
        *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
        *(int *)(lVar4 + 0x38) = *(int *)(lVar4 + 0x38) + 1;
        return 1;
      }
    }
  }
LAB_038e09b4:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

