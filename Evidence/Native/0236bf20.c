/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$HeadIds
System_Collections_Generic_List_int__o* Dino_BusSand_App_Meta_PlayerIdentity__HeadIds (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0236c2a8) */
/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$HeadIds
   System_Collections_Generic_List_int__o* Dino_BusSand_App_Meta_PlayerIdentity__HeadIds (const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_PlayerIdentity__HeadIds_226bf20(void)

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
  
  puVar4 = PTR_DAT_04cad6e8;
  puVar3 = PTR_DAT_04cac018;
  puVar2 = PTR_DAT_04caa1c8;
  if ((bRam0000000004f9c0be & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cad288);
    FUN_02132f7c(PTR_DAT_04cad290);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cb4728);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cae5c8);
    FUN_02132f7c(PTR_DAT_04cac1c8);
    bRam0000000004f9c0be = 1;
  }
  puVar5 = PTR_DAT_04cae5c8;
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_int____ctor_3a2b7dc(lVar7,*(undefined8 *)puVar4);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar8 = (long *)Dino_BusSand_App_Tables__Rows_215eefc(*(undefined8 *)puVar5,0);
  if (plVar8 != (long *)0x0) {
    lVar11 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04cad288) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0236c07c;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)PTR_DAT_04cad288,0);
LAB_0236c07c:
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
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0236c108;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)puVar2,0);
LAB_0236c108:
      uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_0236c264;
        lVar11 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto LAB_0236c23c;
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0236c224;
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0236c16c;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)puVar5,0);
LAB_0236c16c:
      uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar10,*(undefined8 *)puVar4,0);
      uVar6 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar10,0,0);
      if (lVar7 == 0) {
LAB_0236c29c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar11 = *(long *)(lVar7 + 0x10);
      lVar13 = *(long *)puVar3;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_0236c29c;
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
  }
  goto LAB_0236c2a4;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_0236c224:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0236c258;
    }
  }
LAB_0236c23c:
  puVar9 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)PTR_DAT_04ca9b30,0);
LAB_0236c258:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_0236c264:
  if (lVar7 != 0) {
    System_Collections_Generic_List_int___Sort_3a2d988(lVar7,*(undefined8 *)PTR_DAT_04cb4728);
    return lVar7;
  }
LAB_0236c2a4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

