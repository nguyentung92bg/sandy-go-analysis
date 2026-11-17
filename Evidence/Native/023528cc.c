/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature$$PendingGuides
System_Collections_Generic_List_int__o* Dino_BusSand_App_Meta_SystemOpenFeature__PendingGuides (bool fromGame, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02352cdc) */
/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature$$PendingGuides
   System_Collections_Generic_List_int__o* Dino_BusSand_App_Meta_SystemOpenFeature__PendingGuides
   (bool fromGame, const MethodInfo* method); */

long Dino_BusSand_App_Meta_SystemOpenFeature__PendingGuides_22528cc(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  
  puVar4 = PTR_DAT_04cad6e8;
  puVar3 = PTR_DAT_04cac018;
  puVar2 = PTR_DAT_04caa1c8;
  if ((bRam0000000004f9bfde & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d10);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cad288);
    FUN_02132f7c(PTR_DAT_04cad290);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cb3d00);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb38e8);
    FUN_02132f7c(PTR_DAT_04cac1c8);
    bRam0000000004f9bfde = 1;
  }
  puVar5 = PTR_DAT_04cb38e8;
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_int____ctor_3a2b7dc(lVar10,*(undefined8 *)puVar4);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar11 = (long *)Dino_BusSand_App_Tables__Rows_215eefc(*(undefined8 *)puVar5,0);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar14 = *plVar11;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04cad288) {
        puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_02352a3c;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)PTR_DAT_04cad288,0);
LAB_02352a3c:
  plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
  puVar7 = PTR_DAT_04cb3d00;
  puVar6 = PTR_DAT_04cb1d10;
  puVar5 = PTR_DAT_04cad290;
  puVar4 = PTR_DAT_04cac1c8;
  puVar3 = PTR_DAT_04caa160;
  puVar2 = PTR_DAT_04ca9c08;
joined_r0x02352a54:
  do {
    do {
      do {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar14 = *plVar11;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_02352ad8;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)puVar2,0);
LAB_02352ad8:
        uVar15 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar15 & 1) == 0) {
          if (plVar11 == (long *)0x0) {
            return lVar10;
          }
          lVar14 = *plVar11;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 == 0) goto LAB_02352c84;
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_02352c6c;
        }
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar14 = *plVar11;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
              puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_02352b3c;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)puVar5,0);
LAB_02352b3c:
        uVar13 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        uVar13 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar13,*(undefined8 *)puVar4,0);
        uVar8 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar13,0,0);
        lVar14 = *(long *)puVar7;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar14 = *(long *)puVar7;
        }
        iVar9 = System_Array__IndexOf_int__2906224
                          (*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),uVar8,*(undefined8 *)puVar6
                          );
      } while (iVar9 < 0);
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar15 = Dino_BusSand_App_Meta_SystemOpenFeature__NeedShowGuide_2252820(uVar8);
    } while (((uVar15 & 1) == 0) ||
            (uVar15 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(uVar8), (uVar15 & 1) == 0));
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar15 = Dino_BusSand_App_Meta_SystemOpenFeature__IsActiveInConditions_2252d58
                       (uVar8,param_1 & 1);
  } while ((uVar15 & 1) == 0);
  if (lVar10 != 0) {
    lVar14 = *(long *)(lVar10 + 0x10);
    lVar16 = *(long *)puVar3;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar14 != 0) {
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = uVar8;
      }
      else {
        System_Collections_Generic_List_int___AddWithResize_3a2c06c
                  (lVar10,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
      goto joined_r0x02352a54;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
LAB_02352c6c:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_02352ca0;
    }
  }
LAB_02352c84:
  puVar12 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)PTR_DAT_04ca9b30,0);
LAB_02352ca0:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
  return lVar10;
}

