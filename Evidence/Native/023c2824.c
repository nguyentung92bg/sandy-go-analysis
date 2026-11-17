/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$LevelRate
void Dino_BusSand_App_UI_EndOfLevelRules__LevelRate (int32_t type, int32_t* id, int32_t* rate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023c2ffc) */
/* WARNING: Removing unreachable block (ram,0x023c30e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$LevelRate
   void Dino_BusSand_App_UI_EndOfLevelRules__LevelRate (int32_t type, int32_t* id, int32_t* rate,
   const MethodInfo* method); */

ulong Dino_BusSand_App_UI_EndOfLevelRules__LevelRate_22c2824
                (undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  
  if ((bRam0000000004f9c341 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6758);
    FUN_02132f7c(PTR_DAT_04cb6760);
    bRam0000000004f9c341 = 1;
  }
  *param_2 = 0;
  *param_3 = 0;
  lVar5 = Dino_BusSand_App_UI_EndOfLevelRules__RewardRow_22c3104(param_1);
  uVar6 = Dino_BusSand_App_UI_EndOfLevelRules__RewardRow_22c3104(0);
  puVar3 = PTR_DAT_04cb6760;
  uVar9 = uVar6;
  if ((lVar5 != 0) && (uVar6 != 0)) {
    uVar7 = Dino_BusSand_App_UI_EndOfLevelRules__Pairs_22c3574
                      (uVar6,*(undefined8 *)PTR_DAT_04cb6760);
    uVar8 = Dino_BusSand_App_UI_EndOfLevelRules__Pairs_22c3574(lVar5,*(undefined8 *)puVar3);
    uVar9 = Dino_BusSand_App_UI_EndOfLevelRules__RateFromGroups_22c2b74(uVar7,uVar8,param_2,param_3)
    ;
    puVar3 = PTR_DAT_04cb6758;
    if ((uVar9 & 1) == 0) {
      plVar10 = (long *)Dino_BusSand_App_UI_EndOfLevelRules__Pairs_22c3574
                                  (uVar6,*(undefined8 *)PTR_DAT_04cb6758);
      plVar11 = (long *)Dino_BusSand_App_UI_EndOfLevelRules__Pairs_22c3574
                                  (lVar5,*(undefined8 *)puVar3);
      if ((bRam0000000004f9c340 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9b30);
        FUN_02132f7c(PTR_DAT_04cb5ee8);
        FUN_02132f7c(PTR_DAT_04cb5f40);
        FUN_02132f7c(PTR_DAT_04ca9c08);
        bRam0000000004f9c340 = 1;
      }
      uVar17 = 0;
      *param_2 = 0;
      *param_3 = 0;
      puVar3 = PTR_DAT_04cb5ee8;
      if ((plVar10 != (long *)0x0) && (plVar11 != (long *)0x0)) {
        lVar5 = *plVar10;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar16 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_04cb5ee8) {
              puVar12 = (undefined8 *)(lVar5 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_023c2c50;
            }
            uVar9 = uVar9 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar9 != 0);
        }
        puVar12 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)PTR_DAT_04cb5ee8,0);
LAB_023c2c50:
        plVar10 = (long *)(*(code *)*puVar12)(plVar10,puVar12[1]);
        puVar4 = PTR_DAT_04cb5f40;
        puVar2 = PTR_DAT_04ca9c08;
        do {
          do {
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar14 = *plVar10;
            lVar5 = *(long *)puVar2;
            uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar9 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar5) {
                  puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_023c2cd0;
                }
                uVar9 = uVar9 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar9 != 0);
            }
            puVar12 = (undefined8 *)FUN_0216b7a4(plVar10,lVar5,0);
LAB_023c2cd0:
            uVar9 = (*(code *)*puVar12)(plVar10,puVar12[1]);
            if ((uVar9 & 1) == 0) {
              uVar17 = 0;
              goto LAB_023c3050;
            }
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar14 = *plVar10;
            lVar5 = *(long *)puVar4;
            uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar9 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar5) {
                  puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_023c2d34;
                }
                uVar9 = uVar9 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar9 != 0);
            }
            puVar12 = (undefined8 *)FUN_0216b7a4(plVar10,lVar5,0);
LAB_023c2d34:
            lVar5 = (*(code *)*puVar12)(plVar10,puVar12[1]);
          } while (((lVar5 == 0) || (*(int *)(lVar5 + 0x18) < 2)) || (*(int *)(lVar5 + 0x24) == 0));
          lVar14 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_023c2da8;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)puVar3,0);
LAB_023c2da8:
          plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
          do {
            do {
              do {
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar15 = *plVar13;
                lVar14 = *(long *)puVar2;
                uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar9 != 0) {
                  piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar14) {
                      puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_023c2e10;
                    }
                    uVar9 = uVar9 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar9 != 0);
                }
                puVar12 = (undefined8 *)FUN_0216b7a4(plVar13,lVar14,0);
LAB_023c2e10:
                uVar9 = (*(code *)*puVar12)(plVar13,puVar12[1]);
                if ((uVar9 & 1) == 0) {
                  uVar17 = 0;
                  uVar18 = 4;
                  goto LAB_023c2edc;
                }
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar15 = *plVar13;
                lVar14 = *(long *)puVar4;
                uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar9 != 0) {
                  piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar14) {
                      puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_023c2e74;
                    }
                    uVar9 = uVar9 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar9 != 0);
                }
                puVar12 = (undefined8 *)FUN_0216b7a4(plVar13,lVar14,0);
LAB_023c2e74:
                lVar14 = (*(code *)*puVar12)(plVar13,puVar12[1]);
              } while ((lVar14 == 0) || (*(int *)(lVar14 + 0x18) < 2));
              if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
            } while (*(int *)(lVar14 + 0x20) != *(int *)(lVar5 + 0x20));
            if (*(int *)(lVar5 + 0x18) == 1) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
          } while (*(int *)(lVar14 + 0x24) <= *(int *)(lVar5 + 0x24));
          *param_2 = *(int *)(lVar14 + 0x20);
          uVar18 = 8;
          uVar17 = 1;
          iVar1 = 0;
          if (*(int *)(lVar5 + 0x24) != 0) {
            iVar1 = *(int *)(lVar14 + 0x24) / *(int *)(lVar5 + 0x24);
          }
          *param_3 = iVar1;
LAB_023c2edc:
          if (plVar13 != (long *)0x0) {
            lVar5 = *plVar13;
            uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar9 != 0) {
              piVar16 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_04ca9b30) {
                  puVar12 = (undefined8 *)(lVar5 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_023c2f3c;
                }
                uVar9 = uVar9 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar9 != 0);
            }
            puVar12 = (undefined8 *)FUN_0216b7a4(plVar13,*(long *)PTR_DAT_04ca9b30,0);
LAB_023c2f3c:
            (*(code *)*puVar12)(plVar13,puVar12[1]);
          }
        } while ((uVar18 | 4) == 4);
LAB_023c3050:
        if (plVar10 != (long *)0x0) {
          lVar5 = *plVar10;
          uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_04ca9b30) {
                puVar12 = (undefined8 *)(lVar5 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_023c30b0;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          puVar12 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)PTR_DAT_04ca9b30,0);
LAB_023c30b0:
          (*(code *)*puVar12)(plVar10,puVar12[1]);
        }
      }
      return (ulong)uVar17;
    }
  }
  return uVar9;
}

