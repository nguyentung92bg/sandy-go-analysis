/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$OwnsAnyDecorate
bool Dino_BusSand_App_Meta_PlayerIdentity__OwnsAnyDecorate (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0236df90) */
/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$OwnsAnyDecorate
   bool Dino_BusSand_App_Meta_PlayerIdentity__OwnsAnyDecorate (const MethodInfo* method); */

uint Dino_BusSand_App_Meta_PlayerIdentity__OwnsAnyDecorate_226dc6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar1 = PTR_DAT_04cac018;
  if ((bRam0000000004f9c0cf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cad288);
    FUN_02132f7c(PTR_DAT_04cad290);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb4748);
    FUN_02132f7c(PTR_DAT_04cac1c8);
    bRam0000000004f9c0cf = 1;
  }
  puVar2 = PTR_DAT_04cb4748;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar7 = (long *)Dino_BusSand_App_Tables__Rows_215eefc(*(undefined8 *)puVar2,0);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar10 = *plVar7;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04cad288) {
        puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0236dd84;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)PTR_DAT_04cad288,0);
LAB_0236dd84:
  plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
  puVar4 = PTR_DAT_04cae570;
  puVar3 = PTR_DAT_04cad290;
  puVar2 = PTR_DAT_04cac1c8;
  puVar1 = PTR_DAT_04ca9c08;
  do {
    do {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar10 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0236de20;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar1,0);
LAB_0236de20:
      uVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar5 & 1) == 0) {
        uVar5 = 0;
        goto LAB_0236def8;
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar10 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0236de88;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar3,0);
LAB_0236de88:
      uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,*(undefined8 *)puVar2,0);
      iVar6 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar9,0,0);
    } while ((iVar6 == 0x61a81) || (iVar6 == 0x493e1));
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = Dino_BusSand_App_Meta_PlayerIdentity__Owns_226cdcc(iVar6);
  } while ((uVar11 & 1) == 0);
LAB_0236def8:
  if (plVar7 != (long *)0x0) {
    lVar10 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04ca9b30) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0236df58;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)PTR_DAT_04ca9b30,0);
LAB_0236df58:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  return uVar5 & 1;
}

