/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$UnlockLevel
int32_t Dino_BusSand_App_Meta_Monetization__UnlockLevel (int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023662d8) */
/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$UnlockLevel
   int32_t Dino_BusSand_App_Meta_Monetization__UnlockLevel (int32_t item, const MethodInfo* method);
    */

undefined4 Dino_BusSand_App_Meta_Monetization__UnlockLevel_2265fd8(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  
  puVar1 = PTR_DAT_04cac018;
  if ((bRam0000000004f9c05c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cad288);
    FUN_02132f7c(PTR_DAT_04cad290);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb4608);
    FUN_02132f7c(PTR_DAT_04cb2130);
    FUN_02132f7c(PTR_DAT_04cb1d70);
    bRam0000000004f9c05c = 1;
  }
  puVar2 = PTR_DAT_04cb1d70;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar7 = (long *)Dino_BusSand_App_Tables__Rows_215eefc(*(undefined8 *)puVar2,0);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar11 = *plVar7;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04cad288) {
        puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_023660f0;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)PTR_DAT_04cad288,0);
LAB_023660f0:
  puVar4 = PTR_DAT_04cb2130;
  puVar3 = PTR_DAT_04cad290;
  puVar2 = PTR_DAT_04ca9c08;
  puVar1 = PTR_DAT_04ca9b30;
  plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
  do {
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0236617c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar2,0);
LAB_0236617c:
    uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar12 & 1) == 0) {
      uVar6 = 0;
      goto LAB_02366248;
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_023661e0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar3,0);
LAB_023661e0:
    uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,*(undefined8 *)puVar4,0);
    iVar5 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar10,0,0);
  } while (iVar5 != param_1);
  uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,*(undefined8 *)PTR_DAT_04cb4608,0);
  uVar6 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar9,0,0);
LAB_02366248:
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_023662a0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar1,0);
LAB_023662a0:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  return uVar6;
}

