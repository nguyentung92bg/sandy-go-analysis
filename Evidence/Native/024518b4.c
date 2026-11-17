/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<Mechanics>d__39$$MoveNext
bool Dino_BusSand_Cheat_AutoQa__Mechanics_d__39__MoveNext (Dino_BusSand_Cheat_AutoQa__Mechanics_d__39_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02451ec0) */
/* WARNING: Removing unreachable block (ram,0x024520a8) */
/* WARNING: Removing unreachable block (ram,0x024520c4) */
/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<Mechanics>d__39$$MoveNext
   bool Dino_BusSand_Cheat_AutoQa__Mechanics_d__39__MoveNext
   (Dino_BusSand_Cheat_AutoQa__Mechanics_d__39_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_AutoQa__Mechanics_d__39__MoveNext_23518b4(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined4 uVar15;
  long lVar16;
  long lVar17;
  char cVar18;
  undefined8 uVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  long *plStack_90;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = param_1;
  if ((bRam0000000004f9c710 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cab6a0);
    FUN_02132f7c(PTR_DAT_04cb9e88);
    FUN_02132f7c(PTR_DAT_04cab6c8);
    FUN_02132f7c(PTR_DAT_04cab6d0);
    FUN_02132f7c(PTR_DAT_04cb9e90);
    FUN_02132f7c(PTR_DAT_04cac8c0);
    FUN_02132f7c(PTR_DAT_04cab7e0);
    FUN_02132f7c(PTR_DAT_04cab7f0);
    FUN_02132f7c(PTR_DAT_04cab800);
    FUN_02132f7c(PTR_DAT_04cb1868);
    FUN_02132f7c(PTR_DAT_04cb9e98);
    FUN_02132f7c(PTR_DAT_04cab720);
    FUN_02132f7c(PTR_DAT_04cb9ea0);
    FUN_02132f7c(PTR_DAT_04cb9ea8);
    FUN_02132f7c(PTR_DAT_04cb9eb0);
    FUN_02132f7c(PTR_DAT_04cb9eb8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb9ec0);
    FUN_02132f7c(PTR_DAT_04cb9ec8);
    FUN_02132f7c(PTR_DAT_04cb9ed0);
    FUN_02132f7c(PTR_DAT_04cb4bf0);
    FUN_02132f7c(PTR_DAT_04cb9ed8);
    FUN_02132f7c(PTR_DAT_04cb1870);
    FUN_02132f7c(PTR_DAT_04cb9ee0);
    FUN_02132f7c(PTR_DAT_04cb9ee8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb9ef0);
    bRam0000000004f9c710 = 1;
  }
  puVar3 = PTR_DAT_04cb1868;
  iVar8 = *(int *)(param_1 + 0x10);
  lVar17 = *(long *)(param_1 + 0x20);
  uVar9 = 0;
  plStack_90 = &lStack_68;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  iStack_84 = 0;
  lStack_98 = 0;
  if (iVar8 < 2) {
    if (iVar8 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar8 = Dino_BusSand_Core_LevelCatalog__get_Count_2410650(0);
      lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab800);
      System_Collections_Generic_HashSet_object____ctor_37e5358
                (lVar11,*(undefined8 *)PTR_DAT_04cab7f0);
      uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb9eb8);
      System_Collections_Generic_List_ValueTuple_int__object_____ctor_39b0c6c
                (uVar9,*(undefined8 *)PTR_DAT_04cb9ea8);
      *(undefined8 *)(lStack_68 + 0x30) = uVar9;
      thunk_FUN_02134474((undefined8 *)(lStack_68 + 0x30),uVar9);
      puVar7 = PTR_DAT_04cb9e98;
      puVar6 = PTR_DAT_04cb4bf0;
      puVar5 = PTR_DAT_04cab7e0;
      puVar4 = PTR_DAT_04cab6c8;
      puVar3 = PTR_DAT_04cab6a0;
      if (0 < iVar8) {
        iVar20 = 1;
        do {
          uVar9 = Dino_BusSand_Core_LevelData__Load_2410944(iVar20,0);
          lVar12 = Dino_BusSand_App_Gameplay_MechanicIntro__Present_22a084c(uVar9,0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&uStack_c0,lVar12,*(undefined8 *)PTR_DAT_04cab720);
          uStack_80 = uStack_c0;
          uStack_c0 = 0;
          puStack_78 = puStack_b8;
          uStack_70 = uStack_b0;
          puStack_b8 = &uStack_80;
LAB_02451dec:
          uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_80,*(undefined8 *)puVar4);
          uVar9 = uStack_70;
          if ((uVar10 & 1) != 0) {
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar10 = System_Collections_Generic_HashSet_object___Add_37e654c
                               (lVar11,uStack_70,*(undefined8 *)puVar5);
            if ((uVar10 & 1) != 0) {
                    /* try { // try from 02451e20 to 02551e27 has its CatchHandler @ 02451fb4 */
              uStack_e0 = 0;
              puStack_d8 = (undefined8 *)0x0;
              lVar12 = *(long *)(lStack_68 + 0x30);
                    /* try { // try from 02451e30 to 02551e37 has its CatchHandler @ 02451fb0 */
              System_ValueTuple_int__object____ctor_30e15d8
                        (&uStack_e0,iVar20,uVar9,*(undefined8 *)puVar6);
              if (lVar12 != 0) {
                lVar14 = *(long *)(lVar12 + 0x10);
                lVar16 = *(long *)puVar7;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                if (lVar14 != 0) {
                    /* try { // try from 02451e58 to 02551e63 has its CatchHandler @ 02451fa4 */
                  uVar2 = *(uint *)(lVar12 + 0x18);
                    /* try { // try from 02451e64 to 02551e6f has its CatchHandler @ 02451fa8 */
                  if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)uVar2 * 0x10;
                    *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                    plVar13 = (long *)(lVar14 + 0x28);
                    *plVar13 = (long)puStack_d8;
                    /* try { // try from 02451e78 to 02551e83 has its CatchHandler @ 02451fa0 */
                    *(undefined8 *)(lVar14 + 0x20) = uStack_e0;
                    thunk_FUN_02134474(plVar13,0);
                    /* try { // try from 02451e84 to 02551e8f has its CatchHandler @ 02451f9c */
                  }
                  else {
                    System_Collections_Generic_List_ValueTuple_int__object____AddWithResize_39b1524
                              (lVar12,uStack_e0,puStack_d8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                  }
                  goto LAB_02451dec;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            goto LAB_02451dec;
          }
                    /* try { // try from 02451eac to 02551eb7 has its CatchHandler @ 02451f94 */
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_80,*(undefined8 *)puVar3);
                    /* try { // try from 02451eb8 to 02551ec3 has its CatchHandler @ 02451f90 */
          iVar20 = iVar20 + 1;
        } while (iVar20 <= iVar8);
      }
      if (*(long *)(lStack_68 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      iVar8 = *(int *)(*(long *)(lStack_68 + 0x30) + 0x18);
                    /* try { // try from 02451f4c to 02551f57 has its CatchHandler @ 02451f98 */
      iStack_84 = iVar8;
      uVar9 = System_Int32__ToString_482d750(&iStack_84,0);
                    /* try { // try from 02451f58 to 02551f8b has its CatchHandler @ 02451c7c */
      System_String__Concat_46c82e0(uVar9,*(undefined8 *)PTR_DAT_04cb9ee0,0);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* try { // try from 02451f8c to 02551f8f has its CatchHandler @ 02451fac */
      uVar9 = Dino_BusSand_Cheat_AutoQa__Add_23430d8
                        (lVar17,0 < iVar8,*(undefined8 *)PTR_DAT_04cb9ed8);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02451eb8 with catch @ 02451f90
                       try { // try from 02451f90 to 02551fcf has its CatchHandler @ 02451c7c */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02451eac with catch @ 02451f94
                        */
      uVar9 = Dino_BusSand_Cheat_AutoQa__Fresh_23421dc(uVar9,1);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02451f4c with catch @ 02451f98
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02451e84 with catch @ 02451f9c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02451e78 with catch @ 02451fa0
                        */
      *(undefined8 *)(lStack_68 + 0x18) = uVar9;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02451e58 with catch @ 02451fa4
                        */
      thunk_FUN_02134474();
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02451e64 with catch @ 02451fa8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02451f8c with catch @ 02451fac
                        */
      uVar9 = 1;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02451e30 with catch @ 02451fb0
                        */
      *(undefined4 *)(lStack_68 + 0x10) = 1;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02451e20 with catch @ 02451fb4
                        */
      goto LAB_02452080;
    }
    if (iVar8 != 1) goto LAB_02452080;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_ValueTuple_int__object____GetEnumerator_39b1f70
              (&uStack_e0,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cb9ea0);
    puStack_b8 = puStack_d8;
    uStack_c0 = uStack_e0;
    uStack_a8 = uStack_c8;
    uStack_b0 = uStack_d0;
    *(undefined8 **)(lStack_68 + 0x40) = puStack_d8;
    *(undefined8 *)(lStack_68 + 0x38) = uStack_e0;
    *(undefined8 *)(lStack_68 + 0x50) = uStack_c8;
    *(undefined8 *)(lStack_68 + 0x48) = uStack_d0;
    thunk_FUN_02134474(lStack_68 + 0x38,0);
    *(undefined4 *)(lStack_68 + 0x10) = 0xfffffffd;
LAB_02451afc:
    uVar10 = System_Collections_Generic_List_Enumerator_ValueTuple_int__object____MoveNext_35bb7d4
                       (lStack_68 + 0x38,*(undefined8 *)PTR_DAT_04cb9e88);
    if ((uVar10 & 1) == 0) {
      Dino_BusSand_Cheat_AutoQa__Mechanics_d__39____m__Finally1_23521fc(lStack_68);
      uVar9 = 0;
      *(undefined8 *)(lStack_68 + 0x40) = 0;
      *(undefined8 *)(lStack_68 + 0x38) = 0;
      *(undefined8 *)(lStack_68 + 0x50) = 0;
      *(undefined8 *)(lStack_68 + 0x48) = 0;
      goto LAB_02452080;
    }
    uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb9ed0);
    System_Object___ctor_4870e5c(uVar9,0);
    *(undefined8 *)(lStack_68 + 0x28) = uVar9;
    thunk_FUN_02134474((undefined8 *)(lStack_68 + 0x28),uVar9);
    lVar11 = *(long *)(lStack_68 + 0x28);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar9 = *(undefined8 *)(lStack_68 + 0x48);
    *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(lStack_68 + 0x50);
    *(int *)(lVar11 + 0x10) = (int)uVar9;
    thunk_FUN_02134474();
    if (*(long *)(lStack_68 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar9 = System_String__Concat_46c82e0
                      (*(undefined8 *)PTR_DAT_04cb1870,
                       *(undefined8 *)(*(long *)(lStack_68 + 0x28) + 0x18),0);
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__SetFlag_227375c(uVar9,0,0);
    if (*(long *)(lStack_68 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_Meta_Profile__SetLevel_22735a8
              (*(undefined4 *)(*(long *)(lStack_68 + 0x28) + 0x10),0);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_Cheat_AutoQa__KeepHearts_23423b4();
    if (*(int *)(*(long *)PTR_DAT_04cb9568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar11 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_GameApp__EnterLevel_21644c8(lVar11,0,0);
    uVar19 = *(undefined8 *)(lStack_68 + 0x28);
    uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac8c0);
    System_Func_bool____ctor_379d5fc(uVar9,uVar19,*(undefined8 *)PTR_DAT_04cb9ec0,0);
    uVar9 = Dino_BusSand_Cheat_AutoQa__WaitFor_2342e88(0x41700000,lVar17,uVar9);
    *(undefined8 *)(lStack_68 + 0x18) = uVar9;
    thunk_FUN_02134474();
    uVar15 = 2;
  }
  else if (iVar8 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0);
    }
    uVar19 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 02451c7c to 02551e1f has its CatchHandler @ 02451c7c
                       catch() { ... } // from try @ 02451c7c with catch @ 02451c7c
                       catch() { ... } // from try @ 02451f58 with catch @ 02451c7c
                       catch() { ... } // from try @ 02451f90 with catch @ 02451c7c
                       catch() { ... } // from try @ 02451fd4 with catch @ 02451c7c
                       catch() { ... } // from try @ 02451ff8 with catch @ 02451c7c */
    uVar9 = *(undefined8 *)PTR_DAT_04cac8c0;
    *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(lVar17 + 0x28);
    uVar9 = thunk_FUN_0216e89c(uVar9);
    System_Func_bool____ctor_379d5fc(uVar9,uVar19,*(undefined8 *)PTR_DAT_04cb9ec8,0);
    uVar9 = Dino_BusSand_Cheat_AutoQa__WaitFor_2342e88(0x40c00000,lVar17,uVar9);
    *(undefined8 *)(lStack_68 + 0x18) = uVar9;
    thunk_FUN_02134474();
    uVar15 = 3;
  }
  else {
    if (iVar8 != 3) {
      if (iVar8 != 4) goto LAB_02452080;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),0);
      goto LAB_02451afc;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    if (*(char *)(param_1 + 0x58) == '\0') {
      cVar18 = '\0';
    }
    else {
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224(0);
      }
      cVar18 = *(char *)(lVar17 + 0x28);
    }
    lVar11 = *(long *)(param_1 + 0x28);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0);
    }
    uVar19 = *(undefined8 *)(lVar11 + 0x18);
                    /* try { // try from 02451fd0 to 02551fd3 has its CatchHandler @ 02451fec */
    uVar9 = System_Int32__ToString_482d750(lVar11 + 0x10,0);
                    /* try { // try from 02451fd4 to 02551fef has its CatchHandler @ 02451c7c */
                    /* catch() { ... } // from try @ 02451fd0 with catch @ 02451fec */
    auVar21 = System_String__Concat_46d2b84(uVar19,*(undefined8 *)PTR_DAT_04cb9ee8,uVar9,0);
                    /* try { // try from 02451ff0 to 02551ff7 has its CatchHandler @ 02452000 */
                    /* try { // try from 02451ff8 to 02552003 has its CatchHandler @ 02451c7c */
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0,auVar21._8_8_,auVar21._0_8_);
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02451ff0 with catch @ 02452000
                        */
    puVar1 = (undefined8 *)PTR_DAT_04cb9ef0;
    if (*(char *)(lStack_68 + 0x58) != '\0') {
      puVar1 = (undefined8 *)PTR_DAT_04ca9c30;
    }
    Dino_BusSand_Cheat_AutoQa__Add_23430d8(lVar17,cVar18 != '\0',auVar21._0_8_,*puVar1);
    if (*(int *)(*(long *)PTR_DAT_04cb9568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar17 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_GameApp__GoHall_21678c4(lVar17,0,0);
    uVar9 = Dino_BusSand_Cheat_AutoQa__Frames_2342f28(10);
    *(undefined8 *)(lStack_68 + 0x18) = uVar9;
    thunk_FUN_02134474();
    uVar15 = 4;
  }
  *(undefined4 *)(lStack_68 + 0x10) = uVar15;
  uVar9 = 1;
LAB_02452080:
  lVar17 = lStack_98;
  if (lStack_98 == 0) {
    return uVar9;
  }
  FUN_01e7a464(&plStack_90);
                    /* WARNING: Subroutine does not return */
  FUN_0213321c(lVar17);
}

