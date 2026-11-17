/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleConfig$$Load
Dino_BusSand_App_Meta_BattleRoyaleConfig_o* Dino_BusSand_App_Meta_BattleRoyaleConfig__Load (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleConfig$$Load
   Dino_BusSand_App_Meta_BattleRoyaleConfig_o* Dino_BusSand_App_Meta_BattleRoyaleConfig__Load
   (int32_t id, const MethodInfo* method); */

long Dino_BusSand_App_Meta_BattleRoyaleConfig__Load_2220700(undefined4 param_1)

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
  undefined *puVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar2 = PTR_DAT_04cac018;
  if ((bRam0000000004f9bdd4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb2a40);
    bRam0000000004f9bdd4 = 1;
  }
  puVar3 = PTR_DAT_04cb2a40;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar12 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar3,param_1,0);
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
  puVar2 = PTR_DAT_04cac1c8;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if (lVar12 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2bf0);
    Dino_BusSand_App_Meta_BattleRoyaleConfig___ctor_2225fd4();
    uVar14 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,*(undefined8 *)puVar2,0);
    uVar11 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar14,0,0);
    puVar10 = PTR_DAT_04cb2c38;
    puVar9 = PTR_DAT_04cb2c30;
    puVar8 = PTR_DAT_04cb2c28;
    puVar7 = PTR_DAT_04cb2c20;
    puVar6 = PTR_DAT_04cb2c18;
    puVar5 = PTR_DAT_04cb2c10;
    puVar4 = PTR_DAT_04cb2c08;
    puVar3 = PTR_DAT_04cb2bf8;
    puVar2 = PTR_DAT_04caf3c0;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar14 = *(undefined8 *)PTR_DAT_04cb2c00;
    *(undefined4 *)(lVar13 + 0x10) = uVar11;
    uVar14 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,uVar14,0);
    uVar11 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar14,0,0);
    uVar14 = *(undefined8 *)puVar4;
    *(undefined4 *)(lVar13 + 0x14) = uVar11;
    uVar14 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,uVar14,0);
    uVar11 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar14,0,0);
    uVar14 = *(undefined8 *)puVar8;
    *(undefined4 *)(lVar13 + 0x18) = uVar11;
    uVar14 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,uVar14,0);
    uVar11 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar14,0,0);
    uVar14 = *(undefined8 *)puVar6;
    *(undefined4 *)(lVar13 + 0x1c) = uVar11;
    uVar14 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,uVar14,0);
    uVar11 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar14,0,0);
    uVar14 = *(undefined8 *)puVar9;
    *(undefined4 *)(lVar13 + 0x20) = uVar11;
    uVar14 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,uVar14,0);
    uVar11 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar14,0,0);
    uVar14 = *(undefined8 *)puVar7;
    *(undefined4 *)(lVar13 + 0x24) = uVar11;
    uVar14 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,uVar14,0);
    uVar11 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar14,0,0);
    uVar14 = *(undefined8 *)puVar10;
    *(undefined4 *)(lVar13 + 0x28) = uVar11;
    uVar14 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,uVar14,0);
    uVar11 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar14,0,0);
    uVar14 = *(undefined8 *)puVar5;
    *(undefined4 *)(lVar13 + 0x2c) = uVar11;
    uVar14 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,uVar14,0);
    uVar11 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar14,0,0);
    uVar14 = *(undefined8 *)puVar3;
    *(undefined4 *)(lVar13 + 0x30) = uVar11;
    uVar14 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,uVar14,0);
    uVar11 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar14,0,0);
    uVar14 = *(undefined8 *)puVar2;
    *(undefined4 *)(lVar13 + 0x34) = uVar11;
    uVar14 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,uVar14,0);
    lVar12 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar14,0);
    if (lVar12 != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_98,lVar12,*(undefined8 *)PTR_DAT_04cb20c0);
      puVar5 = PTR_DAT_04cb20b0;
      puVar4 = PTR_DAT_04cb15c0;
      puVar3 = PTR_DAT_04cae910;
      puVar2 = PTR_DAT_04cae058;
      uStack_78 = puStack_90;
      uStack_80 = uStack_98;
      uStack_70 = uStack_88;
      puStack_90 = &uStack_80;
      uStack_98 = 0;
LAB_02325e34:
      uVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                         (&uStack_80,*(undefined8 *)puVar5);
      if ((uVar15 & 1) != 0) {
        lVar12 = Dino_BusSand_App_MiniJson__Arr_2156264(uStack_70,0);
        if ((lVar12 != 0) && (1 < *(int *)(lVar12 + 0x18))) {
          lVar17 = *(long *)(lVar13 + 0x38);
          uVar14 = System_Collections_Generic_List_object___get_Item_3a81924
                             (lVar12,0,*(undefined8 *)puVar4);
          uVar11 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar14,0,0);
          uVar14 = System_Collections_Generic_List_object___get_Item_3a81924
                             (lVar12,1,*(undefined8 *)puVar4);
          uVar14 = Dino_BusSand_App_MiniJson__Long_2156378(uVar14,0,0);
          uStack_a8 = 0;
          uStack_a0 = 0;
          System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                    (&uStack_a8,uVar11,uVar14,*(undefined8 *)puVar3);
          if (lVar17 != 0) {
            lVar12 = *(long *)(lVar17 + 0x10);
            lVar16 = *(long *)puVar2;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar12 != 0) {
              uVar1 = *(uint *)(lVar17 + 0x18);
              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                lVar12 = lVar12 + (long)(int)uVar1 * 0x10;
                *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar12 + 0x20) = uStack_a8;
                *(undefined8 *)(lVar12 + 0x28) = uStack_a0;
              }
              else {
                System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                          (lVar17,uStack_a8,uStack_a0,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
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
  return lVar13;
}

