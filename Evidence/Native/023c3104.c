/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$RewardRow
System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_UI_EndOfLevelRules__RewardRow (int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023c34fc) */
/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$RewardRow
   System_Collections_Generic_Dictionary_string__object__o*
   Dino_BusSand_App_UI_EndOfLevelRules__RewardRow (int32_t type, const MethodInfo* method); */

long Dino_BusSand_App_UI_EndOfLevelRules__RewardRow_22c3104(int param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int iVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined8 uVar20;
  
  puVar2 = PTR_DAT_04cb3b78;
  puVar13 = (undefined8 *)PTR_DAT_04cb3b70;
  puVar4 = PTR_DAT_04cac018;
  puVar1 = (undefined8 *)PTR_DAT_04cab3a8;
  if ((bRam0000000004f9c343 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cad288);
    FUN_02132f7c(PTR_DAT_04cad290);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cab3a8);
    FUN_02132f7c(PTR_DAT_04cb3b80);
    FUN_02132f7c(PTR_DAT_04cb3b88);
    FUN_02132f7c(PTR_DAT_04cb3b70);
    FUN_02132f7c(PTR_DAT_04cb6768);
    FUN_02132f7c(PTR_DAT_04cb3b78);
    FUN_02132f7c(PTR_DAT_04cb3b90);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cac1c8);
    bRam0000000004f9c343 = 1;
  }
  puVar3 = PTR_DAT_04cb3b90;
  if (param_1 != 2) {
    puVar13 = (undefined8 *)puVar2;
  }
  if (param_1 != 1) {
    puVar1 = puVar13;
  }
  uVar20 = *puVar1;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar12 = (long *)Dino_BusSand_App_Tables__Rows_215eefc(*(undefined8 *)puVar3,0);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar16 = *plVar12;
  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_04cad288) {
        puVar13 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_023c3298;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)PTR_DAT_04cad288,0);
LAB_023c3298:
  plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
  puVar9 = PTR_DAT_04cb6768;
  puVar8 = PTR_DAT_04cb3b88;
  puVar7 = PTR_DAT_04cb3b80;
  puVar6 = PTR_DAT_04cad290;
  puVar5 = PTR_DAT_04cac1c8;
  puVar3 = PTR_DAT_04ca9c30;
  puVar2 = PTR_DAT_04ca9c08;
  do {
    do {
      do {
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar16 = *plVar12;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_023c333c;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)puVar2,0);
LAB_023c333c:
        uVar18 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if ((uVar18 & 1) == 0) {
          lVar16 = 0;
          goto LAB_023c3460;
        }
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar16 = *plVar12;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar6) {
              puVar13 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_023c33a0;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)puVar6,0);
LAB_023c33a0:
        uVar14 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar14,*(undefined8 *)puVar8,0);
        uVar15 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar15,*(undefined8 *)puVar3,0);
        uVar18 = System_String__op_Inequality_46d110c(uVar15,uVar20,0);
      } while ((uVar18 & 1) != 0);
      uVar14 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar14,*(undefined8 *)puVar5,0);
      uVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar14,0,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar16 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar7,uVar10,0);
    } while (lVar16 == 0);
    uVar14 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar16,*(undefined8 *)puVar9,0);
    iVar11 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar14,0,0);
  } while (iVar11 != 1);
LAB_023c3460:
  if (plVar12 != (long *)0x0) {
    lVar17 = *plVar12;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_04ca9b30) {
          puVar13 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_023c34c0;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)PTR_DAT_04ca9b30,0);
LAB_023c34c0:
    (*(code *)*puVar13)(plVar12,puVar13[1]);
  }
  return lVar16;
}

