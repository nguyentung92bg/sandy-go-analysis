/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_HeadIds
System_Collections_Generic_List_int__o* Dino_BusSand_App_Meta_BattleRoyaleCore__get_HeadIds (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02320648) */
/* WARNING: Removing unreachable block (ram,0x02320674) */
/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_HeadIds
   System_Collections_Generic_List_int__o* Dino_BusSand_App_Meta_BattleRoyaleCore__get_HeadIds
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleCore__get_HeadIds_22202e0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  
  if ((bRam0000000004f9bdbc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cad288);
    FUN_02132f7c(PTR_DAT_04cad290);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cae5c8);
    FUN_02132f7c(PTR_DAT_04cac1c8);
    bRam0000000004f9bdbc = 1;
  }
  plVar15 = (long *)(param_1 + 0x50);
  if (*plVar15 != 0) {
    return *plVar15;
  }
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
  System_Collections_Generic_List_int____ctor_3a2b7dc(lVar7,*(undefined8 *)PTR_DAT_04cad6e8);
  *plVar15 = lVar7;
  thunk_FUN_02134474(plVar15,lVar7);
  if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar8 = (long *)Dino_BusSand_App_Tables__Rows_215eefc(*(undefined8 *)PTR_DAT_04cae5c8,0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar7 = *plVar8;
  uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar12 != 0) {
    piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04cad288) {
        puVar9 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_0232044c;
      }
      uVar12 = uVar12 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar12 != 0);
  }
  puVar9 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)PTR_DAT_04cad288,0);
LAB_0232044c:
  plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
  puVar5 = PTR_DAT_04cad290;
  puVar4 = PTR_DAT_04cac1c8;
  puVar3 = PTR_DAT_04caa160;
  puVar2 = PTR_DAT_04ca9c08;
  do {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar7 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_023204d8;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)puVar2,0);
LAB_023204d8:
    uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_0232063c;
      lVar7 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar12 == 0) goto LAB_02320614;
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar7 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0232053c;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)puVar5,0);
LAB_0232053c:
    uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    lVar7 = *plVar15;
    uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar10,*(undefined8 *)puVar4,0);
    uVar6 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar10,0,0);
    if (lVar7 == 0) {
LAB_02320668:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar11 = *(long *)(lVar7 + 0x10);
    lVar13 = *(long *)puVar3;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_02320668;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = uVar6;
    }
    else {
      System_Collections_Generic_List_int___AddWithResize_3a2c06c
                (lVar7,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_02320630;
    }
  }
LAB_02320614:
  puVar9 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)PTR_DAT_04ca9b30,0);
LAB_02320630:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_0232063c:
  return *plVar15;
}

