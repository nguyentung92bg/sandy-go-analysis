/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$RateFromGroups
bool Dino_BusSand_App_UI_EndOfLevelRules__RateFromGroups (System_Collections_Generic_IList_int____o* normal, System_Collections_Generic_IList_int____o* typed, int32_t* id, int32_t* rate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023c2ffc) */
/* WARNING: Removing unreachable block (ram,0x023c30e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$RateFromGroups
   bool Dino_BusSand_App_UI_EndOfLevelRules__RateFromGroups
   (System_Collections_Generic_IList_int____o* normal, System_Collections_Generic_IList_int____o*
   typed, int32_t* id, int32_t* rate, const MethodInfo* method); */

undefined4
Dino_BusSand_App_UI_EndOfLevelRules__RateFromGroups_22c2b74
          (long *param_1,long *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 uVar13;
  uint uVar14;
  
  if ((bRam0000000004f9c340 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cb5ee8);
    FUN_02132f7c(PTR_DAT_04cb5f40);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    bRam0000000004f9c340 = 1;
  }
  uVar13 = 0;
  *param_3 = 0;
  *param_4 = 0;
  puVar3 = PTR_DAT_04cb5ee8;
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    lVar8 = *param_1;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04cb5ee8) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_023c2c50;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_0216b7a4(param_1,*(long *)PTR_DAT_04cb5ee8,0);
LAB_023c2c50:
    plVar6 = (long *)(*(code *)*puVar5)(param_1,puVar5[1]);
    puVar4 = PTR_DAT_04cb5f40;
    puVar2 = PTR_DAT_04ca9c08;
    do {
      do {
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar9 = *plVar6;
        lVar8 = *(long *)puVar2;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar8) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_023c2cd0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_0216b7a4(plVar6,lVar8,0);
LAB_023c2cd0:
        uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        if ((uVar11 & 1) == 0) {
          uVar13 = 0;
          goto LAB_023c3050;
        }
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar9 = *plVar6;
        lVar8 = *(long *)puVar4;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar8) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_023c2d34;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_0216b7a4(plVar6,lVar8,0);
LAB_023c2d34:
        lVar8 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      } while (((lVar8 == 0) || (*(int *)(lVar8 + 0x18) < 2)) || (*(int *)(lVar8 + 0x24) == 0));
      lVar9 = *param_2;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_023c2da8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_0216b7a4(param_2,*(long *)puVar3,0);
LAB_023c2da8:
      plVar7 = (long *)(*(code *)*puVar5)(param_2,puVar5[1]);
      do {
        do {
          do {
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar10 = *plVar7;
            lVar9 = *(long *)puVar2;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar9) {
                  puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_023c2e10;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar5 = (undefined8 *)FUN_0216b7a4(plVar7,lVar9,0);
LAB_023c2e10:
            uVar11 = (*(code *)*puVar5)(plVar7,puVar5[1]);
            if ((uVar11 & 1) == 0) {
              uVar13 = 0;
              uVar14 = 4;
              goto LAB_023c2edc;
            }
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar10 = *plVar7;
            lVar9 = *(long *)puVar4;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar9) {
                  puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_023c2e74;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar5 = (undefined8 *)FUN_0216b7a4(plVar7,lVar9,0);
LAB_023c2e74:
            lVar9 = (*(code *)*puVar5)(plVar7,puVar5[1]);
          } while ((lVar9 == 0) || (*(int *)(lVar9 + 0x18) < 2));
          if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
        } while (*(int *)(lVar9 + 0x20) != *(int *)(lVar8 + 0x20));
        if (*(int *)(lVar8 + 0x18) == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
      } while (*(int *)(lVar9 + 0x24) <= *(int *)(lVar8 + 0x24));
      *param_3 = *(int *)(lVar9 + 0x20);
      uVar14 = 8;
      uVar13 = 1;
      iVar1 = 0;
      if (*(int *)(lVar8 + 0x24) != 0) {
        iVar1 = *(int *)(lVar9 + 0x24) / *(int *)(lVar8 + 0x24);
      }
      *param_4 = iVar1;
LAB_023c2edc:
      if (plVar7 != (long *)0x0) {
        lVar8 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04ca9b30) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_023c2f3c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)PTR_DAT_04ca9b30,0);
LAB_023c2f3c:
        (*(code *)*puVar5)(plVar7,puVar5[1]);
      }
    } while ((uVar14 | 4) == 4);
LAB_023c3050:
    if (plVar6 != (long *)0x0) {
      lVar8 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04ca9b30) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_023c30b0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)PTR_DAT_04ca9b30,0);
LAB_023c30b0:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
    }
  }
  return uVar13;
}

