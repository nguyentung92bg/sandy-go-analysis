/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_Config
Dino_BusSand_App_Meta_BattleRoyaleConfig_o* Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_Config
   Dino_BusSand_App_Meta_BattleRoyaleConfig_o* Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config_22206d8(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar3 = PTR_DAT_04cac018;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x24);
  if (iVar1 < 1) {
    return 0;
  }
  if ((bRam0000000004f9bdd4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb2a40);
    bRam0000000004f9bdd4 = 1;
  }
  puVar4 = PTR_DAT_04cb2a40;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar13 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar4,iVar1,0);
  if ((bRam0000000004f9bdd3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2bf0);
    FUN_02132f7c(PTR_DAT_04cb20a8);
    FUN_02132f7c(PTR_DAT_04cb20b0);
    FUN_02132f7c(PTR_DAT_04cb20b8);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04cb20c0);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    FUN_02132f7c(PTR_DAT_04cb2bf8);
    FUN_02132f7c(PTR_DAT_04cb2c00);
    FUN_02132f7c(PTR_DAT_04cb2c08);
    FUN_02132f7c(PTR_DAT_04cb2c10);
    FUN_02132f7c(PTR_DAT_04cb2c18);
    FUN_02132f7c(PTR_DAT_04cb2c20);
    FUN_02132f7c(PTR_DAT_04caf3c0);
    FUN_02132f7c(PTR_DAT_04cb2c28);
    FUN_02132f7c(PTR_DAT_04cb2c30);
    FUN_02132f7c(PTR_DAT_04cb2c38);
    FUN_02132f7c(PTR_DAT_04cac1c8);
    bRam0000000004f9bdd3 = 1;
  }
  puVar3 = PTR_DAT_04cac1c8;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if (lVar13 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2bf0);
    Dino_BusSand_App_Meta_BattleRoyaleConfig___ctor_2225fd4();
    uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar13,*(undefined8 *)puVar3,0);
    uVar12 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
    puVar11 = PTR_DAT_04cb2c38;
    puVar10 = PTR_DAT_04cb2c30;
    puVar9 = PTR_DAT_04cb2c28;
    puVar8 = PTR_DAT_04cb2c20;
    puVar7 = PTR_DAT_04cb2c18;
    puVar6 = PTR_DAT_04cb2c10;
    puVar5 = PTR_DAT_04cb2c08;
    puVar4 = PTR_DAT_04cb2bf8;
    puVar3 = PTR_DAT_04caf3c0;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar15 = *(undefined8 *)PTR_DAT_04cb2c00;
    *(undefined4 *)(lVar14 + 0x10) = uVar12;
    uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar13,uVar15,0);
    uVar12 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
    uVar15 = *(undefined8 *)puVar5;
    *(undefined4 *)(lVar14 + 0x14) = uVar12;
    uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar13,uVar15,0);
    uVar12 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
    uVar15 = *(undefined8 *)puVar9;
    *(undefined4 *)(lVar14 + 0x18) = uVar12;
    uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar13,uVar15,0);
    uVar12 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
    uVar15 = *(undefined8 *)puVar7;
    *(undefined4 *)(lVar14 + 0x1c) = uVar12;
    uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar13,uVar15,0);
    uVar12 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
    uVar15 = *(undefined8 *)puVar10;
    *(undefined4 *)(lVar14 + 0x20) = uVar12;
    uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar13,uVar15,0);
    uVar12 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
    uVar15 = *(undefined8 *)puVar8;
    *(undefined4 *)(lVar14 + 0x24) = uVar12;
    uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar13,uVar15,0);
    uVar12 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
    uVar15 = *(undefined8 *)puVar11;
    *(undefined4 *)(lVar14 + 0x28) = uVar12;
    uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar13,uVar15,0);
    uVar12 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
    uVar15 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar14 + 0x2c) = uVar12;
    uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar13,uVar15,0);
    uVar12 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
    uVar15 = *(undefined8 *)puVar4;
    *(undefined4 *)(lVar14 + 0x30) = uVar12;
    uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar13,uVar15,0);
    uVar12 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
    uVar15 = *(undefined8 *)puVar3;
    *(undefined4 *)(lVar14 + 0x34) = uVar12;
    uVar15 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar13,uVar15,0);
    lVar13 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar15,0);
    if (lVar13 != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_98,lVar13,*(undefined8 *)PTR_DAT_04cb20c0);
      puVar6 = PTR_DAT_04cb20b0;
      puVar5 = PTR_DAT_04cb15c0;
      puVar4 = PTR_DAT_04cae910;
      puVar3 = PTR_DAT_04cae058;
      uStack_78 = puStack_90;
      uStack_80 = uStack_98;
      uStack_70 = uStack_88;
      puStack_90 = &uStack_80;
      uStack_98 = 0;
LAB_02325e34:
      uVar16 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                         (&uStack_80,*(undefined8 *)puVar6);
      if ((uVar16 & 1) != 0) {
        lVar13 = Dino_BusSand_App_MiniJson__Arr_2156264(uStack_70,0);
        if ((lVar13 != 0) && (1 < *(int *)(lVar13 + 0x18))) {
          lVar18 = *(long *)(lVar14 + 0x38);
          uVar15 = System_Collections_Generic_List_object___get_Item_3a81924
                             (lVar13,0,*(undefined8 *)puVar5);
          uVar12 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar15,0,0);
          uVar15 = System_Collections_Generic_List_object___get_Item_3a81924
                             (lVar13,1,*(undefined8 *)puVar5);
          uVar15 = Dino_BusSand_App_MiniJson__Long_2156378(uVar15,0,0);
          uStack_a8 = 0;
          uStack_a0 = 0;
          System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                    (&uStack_a8,uVar12,uVar15,*(undefined8 *)puVar4);
          if (lVar18 != 0) {
            lVar13 = *(long *)(lVar18 + 0x10);
            lVar17 = *(long *)puVar3;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (lVar13 != 0) {
              uVar2 = *(uint *)(lVar18 + 0x18);
              if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                lVar13 = lVar13 + (long)(int)uVar2 * 0x10;
                *(uint *)(lVar18 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar13 + 0x20) = uStack_a8;
                *(undefined8 *)(lVar13 + 0x28) = uStack_a0;
              }
              else {
                System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                          (lVar18,uStack_a8,uStack_a0,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_02325e34;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_02325e34;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_80,*(undefined8 *)PTR_DAT_04cb20a8);
    }
  }
  return lVar14;
}

