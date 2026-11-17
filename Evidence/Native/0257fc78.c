/* IL2CPP: Dino.Tracking.TrackingService$$SetUserProperty
void Dino_Tracking_TrackingService__SetUserProperty (Dino_Tracking_TrackingService_o* __this, System_String_o* propertyName, Il2CppObject* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x035b5298) */
/* WARNING: Removing unreachable block (ram,0x035b52a4) */
/* IL2CPP: Dino.Tracking.TrackingService$$SetUserProperty
   void Dino_Tracking_TrackingService__SetUserProperty (Dino_Tracking_TrackingService_o* __this,
   System_String_o* propertyName, Il2CppObject* value, const MethodInfo* method); */

ulong Dino_Tracking_TrackingService__SetUserProperty_247fc78
                (long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  int *piVar18;
  
  if ((bRam0000000004f9cf94 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b58);
    bRam0000000004f9cf94 = 1;
  }
  uVar4 = System_String__IsNullOrEmpty_46d2084(param_2,0);
  if ((uVar4 & 1) != 0) {
    return uVar4;
  }
  if ((*(char *)(param_1 + 0x24) != '\0') && (*(char *)(param_1 + 0x25) != '\0')) {
    if ((bRam0000000004f9cf95 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cbf428);
      bRam0000000004f9cf95 = 1;
    }
    puVar2 = PTR_DAT_04cbf428;
    plVar12 = *(long **)(param_1 + 0x28);
    if (plVar12 != (long *)0x0) {
      lVar7 = *plVar12;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04cbf428) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar18 + 3) * 0x10 + 0x138);
            goto LAB_0257fdc8;
          }
          uVar4 = uVar4 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)PTR_DAT_04cbf428,3);
LAB_0257fdc8:
      uVar4 = (*(code *)*puVar5)(plVar12,param_2,param_3,puVar5[1]);
      lVar7 = *(long *)(param_1 + 0x30);
      if (lVar7 != 0) {
        uVar3 = *(uint *)(lVar7 + 0x18);
        if (0 < (int)uVar3) {
          uVar14 = 0;
          do {
            if (uVar3 <= uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            plVar12 = *(long **)(lVar7 + (long)(int)uVar14 * 8 + 0x20);
            if (plVar12 == (long *)0x0) goto LAB_0257fe90;
            lVar8 = *plVar12;
            uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar4 != 0) {
              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar8 + (long)(*piVar18 + 3) * 0x10 + 0x138);
                  goto LAB_0257fe58;
                }
                uVar4 = uVar4 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)puVar2,3);
LAB_0257fe58:
            uVar4 = (*(code *)*puVar5)(plVar12,param_2,param_3,puVar5[1]);
            uVar3 = *(uint *)(lVar7 + 0x18);
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)uVar3);
        }
        return uVar4;
      }
    }
LAB_0257fe90:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar7 = *(long *)(param_1 + 0x40);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar8 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04ca9b58 + 0x20) + 0xc0) + 0x118);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException_48419e0(5);
  }
  *(int *)(lVar7 + 0x2c) = *(int *)(lVar7 + 0x2c) + 1;
  if (*(long *)(lVar7 + 0x10) == 0) {
    System_Collections_Generic_Dictionary_object__object___Initialize_34b4d50
              (lVar7,0,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x10));
  }
  plVar12 = *(long **)(lVar7 + 0x30);
  lVar17 = *(long *)(lVar7 + 0x18);
  if (plVar12 == (long *)0x0) {
    if (param_2 == (long *)0x0) goto LAB_035b52b0;
    uVar3 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0216b470(lVar6);
    }
    lVar9 = *plVar12;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_035b4f2c;
        }
        uVar4 = uVar4 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_0216b7a4(plVar12,lVar6,1);
LAB_035b4f2c:
    uVar3 = (*(code *)*puVar5)(plVar12,param_2,puVar5[1]);
  }
  lVar6 = *(long *)(lVar7 + 0x10);
  if (lVar6 == 0) goto LAB_035b52b0;
  uVar14 = *(uint *)(lVar6 + 0x18);
  uVar3 = uVar3 & 0x7fffffff;
  iVar13 = 0;
  if (uVar14 != 0) {
    iVar13 = (int)uVar3 / (int)uVar14;
  }
  uVar15 = uVar3 - iVar13 * uVar14;
  if (uVar14 <= uVar15) {
LAB_035b52ac:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  piVar18 = (int *)(lVar6 + (ulong)uVar15 * 4 + 0x20);
  uVar14 = *piVar18 - 1;
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)FUN_02773e98(*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x18)
                                  );
    if (lVar17 == 0) goto LAB_035b52b0;
    uVar16 = *(undefined8 *)(lVar17 + 0x18);
    uVar15 = (uint)uVar16;
    if (uVar14 < uVar15) {
      iVar13 = 0;
      lVar6 = lVar17 + 0x20;
      do {
        uVar15 = (uint)uVar16;
        if (*(uint *)(lVar6 + (long)(int)uVar14 * 0x18) == uVar3) {
          if (plVar12 == (long *)0x0) goto LAB_035b52b0;
          uVar4 = (**(code **)(*plVar12 + 0x1b8))
                            (plVar12,*(undefined8 *)(lVar6 + (long)(int)uVar14 * 0x18 + 8),param_2,
                             *(undefined8 *)(*plVar12 + 0x1c0));
          if ((uVar4 & 1) != 0) {
            if (*(uint *)(lVar17 + 0x18) <= uVar14) goto LAB_035b52ac;
            lVar6 = lVar6 + (long)(int)uVar14 * 0x18;
            goto LAB_035b5288;
          }
          uVar15 = *(uint *)(lVar17 + 0x18);
        }
        if (uVar15 <= uVar14) goto LAB_035b52ac;
        uVar14 = *(uint *)(lVar6 + (long)(int)uVar14 * 0x18 + 4);
        if ((int)uVar15 <= iVar13) {
          System_ThrowHelper__ThrowInvalidOperationException_ConcurrentOperationsNotSupported_4850c40
                    (0);
        }
        uVar16 = *(undefined8 *)(lVar17 + 0x18);
        iVar13 = iVar13 + 1;
        uVar15 = (uint)uVar16;
      } while (uVar14 < uVar15);
    }
  }
  else {
    if (lVar17 == 0) goto LAB_035b52b0;
    uVar16 = *(undefined8 *)(lVar17 + 0x18);
    uVar15 = (uint)uVar16;
    if (uVar14 < uVar15) {
      iVar13 = 0;
      lVar6 = lVar17 + 0x20;
      do {
        uVar15 = (uint)uVar16;
        if (*(uint *)(lVar6 + (long)(int)uVar14 * 0x18) == uVar3) {
          lVar9 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 8);
          uVar16 = *(undefined8 *)(lVar6 + (long)(int)uVar14 * 0x18 + 8);
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_0216b470(lVar9);
          }
          lVar10 = *plVar12;
          uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar4 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar9) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_035b501c;
              }
              uVar4 = uVar4 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_0216b7a4(plVar12,lVar9,0);
LAB_035b501c:
          uVar4 = (*(code *)*puVar5)(plVar12,uVar16,param_2,puVar5[1]);
          if ((uVar4 & 1) != 0) {
            if (uVar14 < *(uint *)(lVar17 + 0x18)) {
              lVar6 = lVar6 + (long)(int)uVar14 * 0x18;
LAB_035b5288:
              *(undefined8 *)(lVar6 + 0x10) = param_3;
              thunk_FUN_02134474();
              return 1;
            }
            goto LAB_035b52ac;
          }
          uVar15 = *(uint *)(lVar17 + 0x18);
        }
        if (uVar15 <= uVar14) goto LAB_035b52ac;
        uVar14 = *(uint *)(lVar6 + (long)(int)uVar14 * 0x18 + 4);
        if ((int)uVar15 <= iVar13) {
          System_ThrowHelper__ThrowInvalidOperationException_ConcurrentOperationsNotSupported_4850c40
                    (0);
        }
        uVar16 = *(undefined8 *)(lVar17 + 0x18);
        iVar13 = iVar13 + 1;
        uVar15 = (uint)uVar16;
      } while (uVar14 < uVar15);
    }
  }
  if (*(int *)(lVar7 + 0x28) < 1) {
    uVar14 = *(uint *)(lVar7 + 0x20);
    if (uVar14 == uVar15) {
      System_Collections_Generic_Dictionary_object__object___Resize_34b5670
                (lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x1b8));
      lVar8 = *(long *)(lVar7 + 0x10);
      *(uint *)(lVar7 + 0x20) = uVar15 + 1;
      if (lVar8 == 0) goto LAB_035b52b0;
      uVar15 = *(uint *)(lVar8 + 0x18);
      iVar13 = 0;
      if (uVar15 != 0) {
        iVar13 = (int)uVar3 / (int)uVar15;
      }
      uVar1 = uVar3 - iVar13 * uVar15;
      if (uVar15 <= uVar1) goto LAB_035b52ac;
      lVar17 = *(long *)(lVar7 + 0x18);
      piVar18 = (int *)(lVar8 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar17 = *(long *)(lVar7 + 0x18);
      *(uint *)(lVar7 + 0x20) = uVar14 + 1;
    }
    if (lVar17 == 0) {
LAB_035b52b0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(uint *)(lVar17 + 0x18) <= uVar14) goto LAB_035b52ac;
    lVar17 = lVar17 + (long)(int)uVar14 * 0x18;
  }
  else {
    uVar14 = *(uint *)(lVar7 + 0x24);
    *(int *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + -1;
    if (uVar15 <= uVar14) goto LAB_035b52ac;
    lVar17 = lVar17 + (long)(int)uVar14 * 0x18;
    *(undefined4 *)(lVar7 + 0x24) = *(undefined4 *)(lVar17 + 0x24);
  }
  *(uint *)(lVar17 + 0x20) = uVar3;
  iVar13 = *piVar18;
  *(long *)(lVar17 + 0x28) = (long)param_2;
  *(int *)(lVar17 + 0x24) = iVar13 + -1;
  thunk_FUN_02134474((long *)(lVar17 + 0x28),param_2);
  *(undefined8 *)(lVar17 + 0x30) = param_3;
  thunk_FUN_02134474((undefined8 *)(lVar17 + 0x30),param_3);
  *piVar18 = uVar14 + 1;
  return 1;
}

