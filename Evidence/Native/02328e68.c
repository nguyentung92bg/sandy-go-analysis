/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$Config
void Dino_BusSand_App_Meta_ClimbTowerFeature__Config (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023292a4) */
/* WARNING: Removing unreachable block (ram,0x0232918c) */
/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$Config
   void Dino_BusSand_App_Meta_ClimbTowerFeature__Config (Dino_BusSand_App_Meta_ClimbTowerFeature_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_ClimbTowerFeature__Config_2228e68(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar2 = PTR_DAT_04caf910;
  if ((bRam0000000004f9be12 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cad288);
    FUN_02132f7c(PTR_DAT_04cad290);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04caf910);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb2dd0);
    FUN_02132f7c(PTR_DAT_04cb2dd8);
    FUN_02132f7c(PTR_DAT_04cb2de0);
    FUN_02132f7c(PTR_DAT_04cb2de8);
    FUN_02132f7c(PTR_DAT_04cb2df0);
    FUN_02132f7c(PTR_DAT_04cb2df8);
    FUN_02132f7c(PTR_DAT_04cb2e00);
    bRam0000000004f9be12 = 1;
  }
  lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar2)
  ;
  puVar2 = PTR_DAT_04cac018;
  if (lVar6 == 0) {
LAB_023292a0:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *(int *)(lVar6 + 0x1c);
  if (*(int *)(param_1 + 0x1c) != iVar1) {
    *(int *)(param_1 + 0x1c) = iVar1;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    plVar7 = (long *)Dino_BusSand_App_Tables__Rows_215eefc(*(undefined8 *)PTR_DAT_04cb2e00,0);
    if (plVar7 == (long *)0x0) goto LAB_023292a0;
    lVar6 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04cad288) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02328fe8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)PTR_DAT_04cad288,0);
LAB_02328fe8:
    plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    puVar4 = PTR_DAT_04cb2de8;
    puVar3 = PTR_DAT_04cad290;
    puVar2 = PTR_DAT_04ca9c08;
    do {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar6 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0232906c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar2,0);
LAB_0232906c:
      uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar11 & 1) == 0) {
        uVar9 = 0;
        break;
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar6 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_023290d0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar3,0);
LAB_023290d0:
      uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,*(undefined8 *)puVar4,0);
      iVar5 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar10,0,0);
    } while (iVar5 != iVar1);
    if (plVar7 != (long *)0x0) {
      lVar6 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04ca9b30) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02329174;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)PTR_DAT_04ca9b30,0);
LAB_02329174:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
    }
    uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,*(undefined8 *)PTR_DAT_04cb2de0,0);
    uVar10 = Dino_BusSand_App_Meta_StreakTowerUtil__IntArr_224be24(uVar10,0);
    *(undefined8 *)(param_1 + 0x20) = uVar10;
    thunk_FUN_02134474();
    uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,*(undefined8 *)PTR_DAT_04cb2df8,0);
    uVar10 = Dino_BusSand_App_Meta_StreakTowerUtil__IntArr_224be24(uVar10,0);
    *(undefined8 *)(param_1 + 0x28) = uVar10;
    thunk_FUN_02134474();
    uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,*(undefined8 *)PTR_DAT_04cb2df0,0);
    uVar10 = Dino_BusSand_App_Meta_StreakTowerUtil__IntArr_224be24(uVar10,0);
    *(undefined8 *)(param_1 + 0x30) = uVar10;
    thunk_FUN_02134474();
    uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,*(undefined8 *)PTR_DAT_04cb2dd8,0);
    uVar10 = Dino_BusSand_App_Meta_StreakTowerUtil__IntArr_224be24(uVar10,0);
    *(undefined8 *)(param_1 + 0x38) = uVar10;
    thunk_FUN_02134474();
    uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,*(undefined8 *)PTR_DAT_04cb2dd0,0);
    uVar9 = Dino_BusSand_App_Meta_StreakTowerUtil__IntArr_224be24(uVar9,0);
    *(undefined8 *)(param_1 + 0x40) = uVar9;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x40),uVar9);
  }
  return;
}

