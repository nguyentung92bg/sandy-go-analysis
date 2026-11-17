/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$LevelStreakRate
int32_t Dino_BusSand_App_Meta_StreakTowerUtil__LevelStreakRate (int32_t t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0234c710) */
/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$LevelStreakRate
   int32_t Dino_BusSand_App_Meta_StreakTowerUtil__LevelStreakRate (int32_t t, const MethodInfo*
   method); */

undefined4 Dino_BusSand_App_Meta_StreakTowerUtil__LevelStreakRate_224c2f8(int param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  uint uVar19;
  
  puVar2 = PTR_DAT_04cb3b78;
  puVar11 = (undefined8 *)PTR_DAT_04cb3b70;
  puVar4 = PTR_DAT_04cac018;
  puVar1 = (undefined8 *)PTR_DAT_04cab3a8;
  if ((bRam0000000004f9bfd8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cad288);
    FUN_02132f7c(PTR_DAT_04cad290);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cab3a8);
    FUN_02132f7c(PTR_DAT_04cb3b80);
    FUN_02132f7c(PTR_DAT_04cb3b88);
    FUN_02132f7c(PTR_DAT_04cb2178);
    FUN_02132f7c(PTR_DAT_04cb3b70);
    FUN_02132f7c(PTR_DAT_04cb3b78);
    FUN_02132f7c(PTR_DAT_04cb3b90);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cac1c8);
    bRam0000000004f9bfd8 = 1;
  }
  puVar3 = PTR_DAT_04cb3b90;
  if (param_1 != 2) {
    puVar11 = (undefined8 *)puVar2;
  }
  if (param_1 != 1) {
    puVar1 = puVar11;
  }
  uVar18 = *puVar1;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar10 = (long *)Dino_BusSand_App_Tables__Rows_215eefc(*(undefined8 *)puVar3,0);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar15 = *plVar10;
  uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04cad288) {
        puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_0234c48c;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)PTR_DAT_04cad288,0);
LAB_0234c48c:
  plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
  puVar8 = PTR_DAT_04cb3b88;
  puVar7 = PTR_DAT_04cb3b80;
  puVar6 = PTR_DAT_04cad290;
  puVar5 = PTR_DAT_04cac1c8;
  puVar3 = PTR_DAT_04ca9c30;
  puVar2 = PTR_DAT_04ca9c08;
  do {
    do {
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar15 = *plVar10;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0234c528;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)puVar2,0);
LAB_0234c528:
      uVar16 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if ((uVar16 & 1) == 0) {
        uVar9 = 0;
        uVar19 = 8;
        goto LAB_0234c650;
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar15 = *plVar10;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0234c58c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)puVar6,0);
LAB_0234c58c:
      uVar12 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar12,*(undefined8 *)puVar8,0);
      uVar13 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar13,*(undefined8 *)puVar3,0);
      uVar16 = System_String__op_Inequality_46d110c(uVar13,uVar18,0);
    } while ((uVar16 & 1) != 0);
    uVar12 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar12,*(undefined8 *)puVar5,0);
    uVar9 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar12,0,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar15 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar7,uVar9,0);
  } while (lVar15 == 0);
  uVar18 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar15,*(undefined8 *)PTR_DAT_04cb2178,0);
  uVar9 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar18,0,0);
  uVar19 = 7;
LAB_0234c650:
  if (plVar10 != (long *)0x0) {
    lVar15 = *plVar10;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04ca9b30) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0234c6b0;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)PTR_DAT_04ca9b30,0);
LAB_0234c6b0:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  if ((uVar19 | 8) == 8) {
    uVar14 = 4;
    if (param_1 != 2) {
      uVar14 = 1;
    }
    uVar9 = 2;
    if (param_1 != 1) {
      uVar9 = uVar14;
    }
  }
  return uVar9;
}

