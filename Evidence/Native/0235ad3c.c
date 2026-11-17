/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$PlayerAssets
float Dino_BusSand_App_Meta_YachtRacingFeature__PlayerAssets (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0235b0dc) */
/* WARNING: Removing unreachable block (ram,0x0235b0b0) */
/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$PlayerAssets
   float Dino_BusSand_App_Meta_YachtRacingFeature__PlayerAssets (const MethodInfo* method); */

float Dino_BusSand_App_Meta_YachtRacingFeature__PlayerAssets_225ad3c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c00f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cad288);
    FUN_02132f7c(PTR_DAT_04cad290);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb2cf8);
    FUN_02132f7c(PTR_DAT_04cb2d00);
    FUN_02132f7c(PTR_DAT_04cac1c8);
    bRam0000000004f9c00f = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04cb2d00;
  if (*(long *)(*(long *)(lVar8 + 0xb8) + 0x10) == 0) {
    return 0.0;
  }
  if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar9 = (long *)Dino_BusSand_App_Tables__Rows_215eefc(*(undefined8 *)puVar1,0);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar8 = *plVar9;
  uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04cad288) {
        puVar10 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_0235aebc;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar10 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)PTR_DAT_04cad288,0);
LAB_0235aebc:
  puVar5 = PTR_DAT_04cb2cf8;
  puVar4 = PTR_DAT_04cad290;
  puVar3 = PTR_DAT_04cac1c8;
  puVar1 = PTR_DAT_04ca9c08;
  plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
  lVar8 = 0;
  do {
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar13 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0235af4c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)puVar1,0);
LAB_0235af4c:
    uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if ((uVar14 & 1) == 0) {
      if (plVar9 == (long *)0x0) goto LAB_0235b0a4;
      lVar13 = *plVar9;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 == 0) goto LAB_0235b07c;
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar13 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0235afb0;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)puVar4,0);
LAB_0235afb0:
    uVar11 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    uVar12 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar11,*(undefined8 *)puVar5,0);
    iVar6 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar12,0,0);
    if (0 < iVar6) {
      uVar11 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar11,*(undefined8 *)puVar3,0);
      uVar7 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar11,0,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = Dino_BusSand_App_Meta_Profile__Count_225b150(uVar7);
      lVar13 = Dino_BusSand_App_Meta_BattleRoyaleRules__WorthOf_2226e10(uVar7,uVar11,0);
      lVar8 = lVar13 + lVar8;
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0235b098;
    }
  }
LAB_0235b07c:
  puVar10 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)PTR_DAT_04ca9b30,0);
LAB_0235b098:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_0235b0a4:
  return (float)lVar8;
}

