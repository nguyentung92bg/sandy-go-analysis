/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$BuildSideButtons
void Dino_BusSand_App_UI_HomePanel__BuildSideButtons (Dino_BusSand_App_UI_HomePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023ea7d4) */
/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$BuildSideButtons
   void Dino_BusSand_App_UI_HomePanel__BuildSideButtons (Dino_BusSand_App_UI_HomePanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_HomePanel__BuildSideButtons_22ea48c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  
  puVar2 = PTR_DAT_04caf600;
  if ((bRam0000000004f9c449 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf600);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cb7540);
    FUN_02132f7c(PTR_DAT_04cb7548);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cb7550);
    bRam0000000004f9c449 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_UI_HomeEntries__RegisterCore_22e7504();
  Dino_BusSand_App_UI_LiveOpsHome__RegisterEntries_2322908(0);
  if (cRam0000000004f9c499 == '\0') {
    FUN_02132f7c(PTR_DAT_04caf600);
    cRam0000000004f9c499 = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  plVar12 = (long *)**(undefined8 **)(lVar5 + 0xb8);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar5 = *plVar12;
  uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar9 != 0) {
    piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04cb7540) {
        puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_023ea5bc;
      }
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)PTR_DAT_04cb7540,0);
LAB_023ea5bc:
  plVar12 = (long *)(*(code *)*puVar6)(plVar12,puVar6[1]);
  puVar4 = PTR_DAT_04cb7550;
  puVar3 = PTR_DAT_04cb7548;
  puVar2 = PTR_DAT_04ca9c08;
  do {
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar5 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_023ea644;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)puVar2,0);
LAB_023ea644:
    uVar9 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar12 == (long *)0x0) goto LAB_023ea7a0;
      lVar5 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 == 0) goto LAB_023ea778;
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar5 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_023ea6a8;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)puVar3,0);
LAB_023ea6a8:
    uVar7 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    lVar5 = *(long *)(param_1 + 0xc0);
    uVar7 = Dino_BusSand_App_UI_HomeSideButton__Build_22e8364(0xc40d0000,param_1,uVar7);
    if (lVar5 == 0) {
LAB_023ea7c8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar8 = *(long *)(lVar5 + 0x10);
    lVar10 = *(long *)puVar4;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_023ea7c8;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
      thunk_FUN_02134474();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_023ea794;
    }
  }
LAB_023ea778:
  puVar6 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)PTR_DAT_04ca9b30,0);
LAB_023ea794:
  (*(code *)*puVar6)(plVar12,puVar6[1]);
LAB_023ea7a0:
  Dino_BusSand_App_UI_HomePanel__Layout_22ece0c(param_1,1);
  return;
}

