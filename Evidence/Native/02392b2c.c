/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_Checkpoints
System_Collections_Generic_List_WinStreakCheckpoint__o* Dino_BusSand_App_Meta_WinStreak__get_Checkpoints (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_Checkpoints
   System_Collections_Generic_List_WinStreakCheckpoint__o*
   Dino_BusSand_App_Meta_WinStreak__get_Checkpoints (const MethodInfo* method); */

long Dino_BusSand_App_Meta_WinStreak__get_Checkpoints_2292b2c(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  int iStack_64;
  
  puVar2 = PTR_DAT_04cb5400;
  if ((bRam0000000004f9c1e5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5408);
    FUN_02132f7c(PTR_DAT_04cb20a8);
    FUN_02132f7c(PTR_DAT_04cb20b0);
    FUN_02132f7c(PTR_DAT_04cb20b8);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cb5410);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04cb20c0);
    FUN_02132f7c(PTR_DAT_04cb5418);
    FUN_02132f7c(PTR_DAT_04ca9b98);
    FUN_02132f7c(PTR_DAT_04cb5420);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb5428);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    FUN_02132f7c(PTR_DAT_04cb5430);
    FUN_02132f7c(PTR_DAT_04cb5438);
    FUN_02132f7c(PTR_DAT_04ca9b90);
    FUN_02132f7c(PTR_DAT_04cb5440);
    FUN_02132f7c(PTR_DAT_04cb5448);
    FUN_02132f7c(PTR_DAT_04cb5450);
    FUN_02132f7c(PTR_DAT_04cb5400);
    FUN_02132f7c(PTR_DAT_04cb5458);
    FUN_02132f7c(PTR_DAT_04cb1e68);
    FUN_02132f7c(PTR_DAT_04cad280);
    FUN_02132f7c(PTR_DAT_04cb4088);
    bRam0000000004f9c1e5 = 1;
  }
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  iStack_64 = 0;
  lVar16 = **(long **)(*(long *)puVar2 + 0xb8);
  if (lVar16 == 0) {
    lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb5438);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar16,*(undefined8 *)PTR_DAT_04cb5420);
    puVar6 = PTR_DAT_04cb20b0;
    puVar4 = PTR_DAT_04cb15c0;
    puVar3 = PTR_DAT_04cae910;
    puVar2 = PTR_DAT_04cae058;
    iStack_64 = 1;
    do {
      uVar9 = System_Int32__ToString_482d750(&iStack_64,0);
      System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb5458,uVar9,0);
      lVar10 = Dino_BusSand_App_Meta_WinStreak__Row_22927fc();
      if (lVar10 == 0) break;
      lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb5450);
      Dino_BusSand_App_Meta_WinStreakCheckpoint___ctor_2292774();
      uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar10,*(undefined8 *)PTR_DAT_04cb4088,0);
      uVar7 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar9,0,0);
      puVar5 = PTR_DAT_04cb1e68;
      if (lVar11 == 0) goto LAB_0239312c;
      *(undefined4 *)(lVar11 + 0x14) = uVar7;
      uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar10,*(undefined8 *)puVar5,0);
      iVar8 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar9,0,0);
      uVar9 = *(undefined8 *)PTR_DAT_04cad280;
      if (6 < iVar8) {
        iVar8 = 7;
      }
      if (iVar8 < 2) {
        iVar8 = 1;
      }
      *(int *)(lVar11 + 0x18) = iVar8;
      uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar10,uVar9,0);
      lVar10 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar9,0);
      if (lVar10 == 0) {
        lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b90);
        System_Collections_Generic_List_object____ctor_3a8138c
                  (lVar10,*(undefined8 *)PTR_DAT_04ca9b98);
        if (lVar10 == 0) goto LAB_0239312c;
      }
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_98,lVar10,*(undefined8 *)PTR_DAT_04cb20c0);
      uStack_80 = uStack_98;
      uStack_98 = 0;
      puStack_78 = puStack_90;
      uStack_70 = uStack_88;
      puStack_90 = &uStack_80;
LAB_02392e2c:
      uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                         (&uStack_80,*(undefined8 *)puVar6);
      if ((uVar12 & 1) != 0) {
        lVar10 = Dino_BusSand_App_MiniJson__Arr_2156264(uStack_70,0);
        if ((lVar10 != 0) && (1 < *(int *)(lVar10 + 0x18))) {
          lVar17 = *(long *)(lVar11 + 0x20);
          uVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                            (lVar10,0,*(undefined8 *)puVar4);
          uVar7 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar9,0,0);
          uVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                            (lVar10,1,*(undefined8 *)puVar4);
          uVar9 = Dino_BusSand_App_MiniJson__Long_2156378(uVar9,0,0);
          uStack_a8 = 0;
          uStack_a0 = 0;
          System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                    (&uStack_a8,uVar7,uVar9,*(undefined8 *)puVar3);
          if (lVar17 != 0) {
            lVar10 = *(long *)(lVar17 + 0x10);
            lVar15 = *(long *)puVar2;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar10 != 0) {
              uVar1 = *(uint *)(lVar17 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
                *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar10 + 0x20) = uStack_a8;
                *(undefined8 *)(lVar10 + 0x28) = uStack_a0;
              }
              else {
                System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                          (lVar17,uStack_a8,uStack_a0,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_02392e2c;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_02392e2c;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_80,*(undefined8 *)PTR_DAT_04cb20a8);
      if (lVar16 == 0) goto LAB_0239312c;
      lVar10 = *(long *)(lVar16 + 0x10);
      lVar17 = *(long *)PTR_DAT_04cb5410;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_0239312c;
      uVar1 = *(uint *)(lVar16 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar1 + 1;
        plVar13 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *plVar13 = lVar11;
        thunk_FUN_02134474(plVar13,lVar11);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (lVar16,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
        ;
      }
      iStack_64 = iStack_64 + 1;
    } while (iStack_64 < 0x33);
    puVar2 = PTR_DAT_04cb5448;
    lVar10 = *(long *)PTR_DAT_04cb5448;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar2;
    }
    puVar14 = *(undefined8 **)(lVar10 + 0xb8);
    lVar11 = puVar14[1];
    if (lVar11 == 0) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar14 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar9 = *puVar14;
      lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb5408);
      System_Comparison_object____ctor_3326afc(lVar11,uVar9,*(undefined8 *)PTR_DAT_04cb5440,0);
      plVar13 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar13 = lVar11;
      thunk_FUN_02134474(plVar13,lVar11);
    }
    if (lVar16 == 0) {
LAB_0239312c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___Sort_3a83690
              (lVar16,lVar11,*(undefined8 *)PTR_DAT_04cb5418);
    puVar2 = PTR_DAT_04cb5430;
    if (0 < *(int *)(lVar16 + 0x18)) {
      iVar8 = 0;
      do {
        lVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                           (lVar16,iVar8,*(undefined8 *)puVar2);
        if (lVar10 == 0) goto LAB_0239312c;
        *(int *)(lVar10 + 0x10) = iVar8;
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar16 + 0x18));
    }
    puVar2 = PTR_DAT_04cb5400;
    **(long **)(*(long *)PTR_DAT_04cb5400 + 0xb8) = lVar16;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar16);
  }
  return lVar16;
}

