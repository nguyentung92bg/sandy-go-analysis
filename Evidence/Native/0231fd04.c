/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFinalStage$$LoadAll
System_Collections_Generic_List_BattleRoyaleFinalStage__o* Dino_BusSand_App_Meta_BattleRoyaleFinalStage__LoadAll (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02320258) */
/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFinalStage$$LoadAll
   System_Collections_Generic_List_BattleRoyaleFinalStage__o*
   Dino_BusSand_App_Meta_BattleRoyaleFinalStage__LoadAll (const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleFinalStage__LoadAll_221fd04(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  
  puVar4 = PTR_DAT_04cb29e0;
  puVar3 = PTR_DAT_04cb29d8;
  puVar2 = PTR_DAT_04cac018;
  if ((bRam0000000004f9bdd8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb29e8);
    FUN_02132f7c(PTR_DAT_04cb29f0);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cad288);
    FUN_02132f7c(PTR_DAT_04cad290);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cb29f8);
    FUN_02132f7c(PTR_DAT_04cb2a00);
    FUN_02132f7c(PTR_DAT_04cb29e0);
    FUN_02132f7c(PTR_DAT_04cb29d8);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb2a08);
    FUN_02132f7c(PTR_DAT_04cb2a10);
    FUN_02132f7c(PTR_DAT_04cb2a18);
    FUN_02132f7c(PTR_DAT_04cb2a20);
    FUN_02132f7c(PTR_DAT_04cb2a28);
    FUN_02132f7c(PTR_DAT_04cb2a30);
    FUN_02132f7c(PTR_DAT_04cb2a38);
    FUN_02132f7c(PTR_DAT_04cac1c8);
    bRam0000000004f9bdd8 = 1;
  }
  puVar5 = PTR_DAT_04cb2a30;
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar11,*(undefined8 *)puVar4);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar12 = (long *)Dino_BusSand_App_Tables__Rows_215eefc(*(undefined8 *)puVar5,0);
  if (plVar12 != (long *)0x0) {
    lVar17 = *plVar12;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_04cad288) {
          puVar13 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_0231fec8;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)PTR_DAT_04cad288,0);
LAB_0231fec8:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar9 = PTR_DAT_04cb2a38;
    puVar8 = PTR_DAT_04cb2a28;
    puVar7 = PTR_DAT_04cb2a20;
    puVar6 = PTR_DAT_04cb2a18;
    puVar5 = PTR_DAT_04cb29f8;
    puVar4 = PTR_DAT_04cb29e8;
    puVar3 = PTR_DAT_04cac1c8;
    puVar2 = PTR_DAT_04ca9c08;
    do {
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar17 = *plVar12;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_0231ff74;
          }
          uVar19 = uVar19 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar19 != 0);
      }
      puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)puVar2,0);
LAB_0231ff74:
      uVar19 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar19 & 1) == 0) {
        if (plVar12 == (long *)0x0) goto LAB_02320184;
        lVar17 = *plVar12;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 == 0) goto LAB_0232015c;
        piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        goto LAB_02320144;
      }
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar17 = *plVar12;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_04cad290) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_0231ffe0;
          }
          uVar19 = uVar19 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar19 != 0);
      }
      puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)PTR_DAT_04cad290,0);
LAB_0231ffe0:
      uVar14 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      lVar17 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
      System_Object___ctor_4870e5c(lVar17,0);
      uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar14,*(undefined8 *)puVar3,0);
      uVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar15 = *(undefined8 *)puVar8;
      *(undefined4 *)(lVar17 + 0x10) = uVar10;
      uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar14,uVar15,0);
      uVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
      uVar15 = *(undefined8 *)puVar6;
      *(undefined4 *)(lVar17 + 0x14) = uVar10;
      uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar14,uVar15,0);
      uVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
      uVar15 = *(undefined8 *)puVar7;
      *(undefined4 *)(lVar17 + 0x18) = uVar10;
      uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar14,uVar15,0);
      uVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
      uVar15 = *(undefined8 *)puVar9;
      *(undefined4 *)(lVar17 + 0x1c) = uVar10;
      uVar14 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar14,uVar15,0);
      uVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar14,0,0);
      *(undefined4 *)(lVar17 + 0x20) = uVar10;
      if (lVar11 == 0) {
LAB_02320248:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar18 = *(long *)(lVar11 + 0x10);
      lVar20 = *(long *)puVar5;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_02320248;
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        plVar16 = (long *)(lVar18 + (long)(int)uVar1 * 8 + 0x20);
        *plVar16 = lVar17;
        thunk_FUN_02134474(plVar16,lVar17);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (lVar11,lVar17,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70))
        ;
      }
    } while( true );
  }
  goto LAB_02320254;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar21 = piVar21 + 4;
    if (uVar19 == 0) break;
LAB_02320144:
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar13 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_02320178;
    }
  }
LAB_0232015c:
  puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)PTR_DAT_04ca9b30,0);
LAB_02320178:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_02320184:
  puVar2 = PTR_DAT_04cb2a10;
  lVar17 = *(long *)PTR_DAT_04cb2a10;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar17 = *(long *)puVar2;
  }
  puVar13 = *(undefined8 **)(lVar17 + 0xb8);
  lVar18 = puVar13[1];
  if (lVar18 == 0) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar13 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar14 = *puVar13;
    lVar18 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb29f0);
    System_Comparison_object____ctor_3326afc(lVar18,uVar14,*(undefined8 *)PTR_DAT_04cb2a08,0);
    plVar12 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar12 = lVar18;
    thunk_FUN_02134474(plVar12,lVar18);
  }
  if (lVar11 != 0) {
    System_Collections_Generic_List_object___Sort_3a83690
              (lVar11,lVar18,*(undefined8 *)PTR_DAT_04cb2a00);
    return lVar11;
  }
LAB_02320254:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

