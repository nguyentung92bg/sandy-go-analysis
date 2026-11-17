/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyalePersona$$LoadAll
System_Collections_Generic_List_BattleRoyalePersona__o* Dino_BusSand_App_Meta_BattleRoyalePersona__LoadAll (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0231fb84) */
/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyalePersona$$LoadAll
   System_Collections_Generic_List_BattleRoyalePersona__o*
   Dino_BusSand_App_Meta_BattleRoyalePersona__LoadAll (const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyalePersona__LoadAll_221f63c(void)

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
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long **pplStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  puVar4 = PTR_DAT_04cb2998;
  puVar3 = PTR_DAT_04cb2990;
  puVar2 = PTR_DAT_04cac018;
  if ((bRam0000000004f9bdd6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb29a0);
    FUN_02132f7c(PTR_DAT_04cb20a8);
    FUN_02132f7c(PTR_DAT_04cb20b0);
    FUN_02132f7c(PTR_DAT_04cb20b8);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cad288);
    FUN_02132f7c(PTR_DAT_04cad290);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cb29a8);
    FUN_02132f7c(PTR_DAT_04cb20c0);
    FUN_02132f7c(PTR_DAT_04cb2998);
    FUN_02132f7c(PTR_DAT_04cb2990);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb29b0);
    FUN_02132f7c(PTR_DAT_04cb29b8);
    FUN_02132f7c(PTR_DAT_04cb29c0);
    FUN_02132f7c(PTR_DAT_04cb29c8);
    FUN_02132f7c(PTR_DAT_04cb29d0);
    FUN_02132f7c(PTR_DAT_04cac1c8);
    bRam0000000004f9bdd6 = 1;
  }
  puVar5 = PTR_DAT_04cb29c8;
  plStack_68 = (long *)0x0;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar11,*(undefined8 *)puVar4);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar12 = (long *)Dino_BusSand_App_Tables__Rows_215eefc(*(undefined8 *)puVar5,0);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231fa54 with catch @ 0231fb8c
                        */
    FUN_02133224();
  }
  lVar17 = *plVar12;
  uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar19 != 0) {
    piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_04cad288) {
        puVar13 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
        goto LAB_0231f814;
      }
      uVar19 = uVar19 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar19 != 0);
  }
  puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)PTR_DAT_04cad288,0);
LAB_0231f814:
  plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
  puVar9 = PTR_DAT_04cb29d0;
  puVar8 = PTR_DAT_04cb29c0;
  puVar7 = PTR_DAT_04cb29b8;
  puVar6 = PTR_DAT_04cb29b0;
  puVar5 = PTR_DAT_04cb29a8;
  puVar4 = PTR_DAT_04cb20b0;
  puVar3 = PTR_DAT_04caa160;
  puVar2 = PTR_DAT_04ca9c08;
  pplStack_88 = &plStack_68;
  lStack_90 = 0;
  do {
    plStack_68 = plVar12;
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
          goto LAB_0231f8c0;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)puVar2,0);
LAB_0231f8c0:
    uVar19 = (*(code *)*puVar13)(plVar12,puVar13[1]);
    plVar12 = plStack_68;
    if ((uVar19 & 1) == 0) {
      plVar12 = *pplStack_88;
      if (plVar12 == (long *)0x0) goto LAB_0231fc80;
      lVar17 = *plVar12;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 == 0) goto LAB_0231fc58;
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      break;
    }
    if (plStack_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar17 = *plStack_68;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_04cad290) {
          puVar13 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_0231f92c;
        }
        uVar19 = uVar19 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar19 != 0);
    }
    puVar13 = (undefined8 *)FUN_0216b7a4(plStack_68,*(long *)PTR_DAT_04cad290,0);
LAB_0231f92c:
    uVar14 = (*(code *)*puVar13)(plVar12,puVar13[1]);
    lVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb29a0);
    Dino_BusSand_App_Meta_BattleRoyalePersona___ctor_222605c();
    uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar14,*(undefined8 *)PTR_DAT_04cac1c8,0);
    uVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar15 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar17 + 0x10) = uVar10;
                    /* try { // try from 0231f984 to 0241f9f3 has its CatchHandler @ 0231f984
                       catch(type#1 @ 00000000) { ... } // from try @ 0231f984 with catch @ 0231f984
                       catch(type#1 @ 00000000) { ... } // from try @ 0231fb04 with catch @ 0231f984
                       catch(type#1 @ 00000000) { ... } // from try @ 0231fb20 with catch @ 0231f984
                       catch(type#1 @ 00000000) { ... } // from try @ 0231fb98 with catch @ 0231f984
                        */
    uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar14,uVar15,0);
    uVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
    uVar15 = *(undefined8 *)puVar9;
    *(undefined4 *)(lVar17 + 0x14) = uVar10;
    uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar14,uVar15,0);
    uVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
    uVar15 = *(undefined8 *)puVar7;
    *(undefined4 *)(lVar17 + 0x18) = uVar10;
    uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar14,uVar15,0);
    uVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
    uVar15 = *(undefined8 *)puVar8;
    *(undefined4 *)(lVar17 + 0x1c) = uVar10;
    uVar14 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar14,uVar15,0);
                    /* try { // try from 0231f9f4 to 0241f9f7 has its CatchHandler @ 0231f9f8 */
    lVar16 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar14,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231f9f4 with catch @ 0231f9f8
                        */
    if (lVar16 != 0) {
                    /* try { // try from 0231fa08 to 0241fa13 has its CatchHandler @ 0231fb90 */
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_a8,lVar16,*(undefined8 *)PTR_DAT_04cb20c0);
      uStack_70 = uStack_98;
      puStack_78 = puStack_a0;
      uStack_80 = uStack_a8;
      uStack_a8 = 0;
      puStack_a0 = &uStack_80;
      while (uVar19 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&uStack_80,*(undefined8 *)puVar4), (uVar19 & 1) != 0) {
        lVar16 = *(long *)(lVar17 + 0x20);
        uVar10 = Dino_BusSand_App_MiniJson__Int_21562dc(uStack_70,0,0);
        if (lVar16 == 0) {
LAB_0231fb30:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0231fb30 to 0241fb43 has its CatchHandler @ 0231fb74 */
          FUN_02133224();
        }
                    /* try { // try from 0231fa54 to 0241fa57 has its CatchHandler @ 0231fb8c */
        lVar18 = *(long *)(lVar16 + 0x10);
        lVar20 = *(long *)puVar3;
                    /* try { // try from 0231fa64 to 0241fa6b has its CatchHandler @ 0231fb88 */
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (lVar18 == 0) goto LAB_0231fb30;
        uVar1 = *(uint *)(lVar16 + 0x18);
        if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                    /* try { // try from 0231fa84 to 0241facb has its CatchHandler @ 0231fb84 */
          *(uint *)(lVar16 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar18 + (long)(int)uVar1 * 4 + 0x20) = uVar10;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar16,uVar10,
                     *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_80,*(undefined8 *)PTR_DAT_04cb20a8);
    }
    if (lVar11 == 0) {
LAB_0231fb74:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231fae0 with catch @ 0231fb74
                       catch(type#1 @ 00000000) { ... } // from try @ 0231fb1c with catch @ 0231fb74
                       catch(type#1 @ 00000000) { ... } // from try @ 0231fb30 with catch @ 0231fb74
                        */
      FUN_02133224();
    }
    lVar16 = *(long *)(lVar11 + 0x10);
    lVar18 = *(long *)puVar5;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar16 == 0) goto LAB_0231fb74;
                    /* try { // try from 0231fae0 to 0241fb03 has its CatchHandler @ 0231fb74 */
    uVar1 = *(uint *)(lVar11 + 0x18);
    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
      plVar12 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
      *plVar12 = lVar17;
                    /* try { // try from 0231fb04 to 0241fb1b has its CatchHandler @ 0231f984 */
      thunk_FUN_02134474(plVar12,lVar17);
      plVar12 = plStack_68;
    }
    else {
                    /* try { // try from 0231fb1c to 0241fb1f has its CatchHandler @ 0231fb74 */
                    /* try { // try from 0231fb20 to 0241fb2f has its CatchHandler @ 0231f984 */
      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                (lVar11,lVar17,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
      plVar12 = plStack_68;
    }
  } while( true );
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar21 = piVar21 + 4;
    if (uVar19 == 0) break;
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar13 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_0231fc74;
    }
  }
LAB_0231fc58:
  puVar13 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)PTR_DAT_04ca9b30,0);
LAB_0231fc74:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0231fc80:
  if (lStack_90 == 0) {
    return lVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213321c();
}

