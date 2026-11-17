/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$DailyGiftDay
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_Meta_Monetization__DailyGiftDay (int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$DailyGiftDay
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_Meta_Monetization__DailyGiftDay (int32_t index, const MethodInfo* method); */

long Dino_BusSand_App_Meta_Monetization__DailyGiftDay_226802c(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar2 = PTR_DAT_04cb1d58;
  if ((bRam0000000004f9c08d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04cb1e50);
    FUN_02132f7c(PTR_DAT_04cb1e78);
    bRam0000000004f9c08d = 1;
  }
  puVar4 = PTR_DAT_04cb1e78;
  puVar3 = PTR_DAT_04cb1e50;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = Dino_BusSand_App_Meta_EconomySettings__Row_22054c8(*(undefined8 *)puVar4,0);
  uVar11 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar11,*(undefined8 *)puVar3,0);
  lVar12 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar11,0);
  puVar2 = PTR_DAT_04caca50;
  if (((param_1 < 0) || (lVar12 == 0)) || (*(int *)(lVar12 + 0x18) <= param_1)) {
    lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
    System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
              (lVar12,*(undefined8 *)puVar2);
    return lVar12;
  }
  uVar11 = System_Collections_Generic_List_object___get_Item_3a81924
                     (lVar12,param_1,*(undefined8 *)PTR_DAT_04cb15c0);
  puVar3 = PTR_DAT_04caca60;
  puVar2 = PTR_DAT_04caca50;
  if ((bRam0000000004f9c060 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb20a8);
    FUN_02132f7c(PTR_DAT_04cb20b0);
    FUN_02132f7c(PTR_DAT_04cb20b8);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04cb20c0);
    FUN_02132f7c(PTR_DAT_04ca9b98);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    FUN_02132f7c(PTR_DAT_04ca9b90);
    FUN_02132f7c(PTR_DAT_04caca60);
    bRam0000000004f9c060 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
            (lVar12,*(undefined8 *)puVar2);
  lVar9 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar11,0);
  if (lVar9 == 0) {
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b90);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar9,*(undefined8 *)PTR_DAT_04ca9b98);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  puVar6 = PTR_DAT_04cb20b0;
  puVar5 = PTR_DAT_04cb20a8;
  puVar4 = PTR_DAT_04cb15c0;
  puVar3 = PTR_DAT_04cae910;
  puVar2 = PTR_DAT_04cae058;
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_88,lVar9,*(undefined8 *)PTR_DAT_04cb20c0);
  uStack_60 = uStack_78;
  uStack_68 = puStack_80;
  uStack_70 = uStack_88;
  uStack_88 = 0;
  puStack_80 = &uStack_70;
  while( true ) {
    do {
      do {
        uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                           (&uStack_70,*(undefined8 *)puVar6);
        if ((uVar10 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_70,*(undefined8 *)puVar5);
          return lVar12;
        }
        lVar9 = Dino_BusSand_App_MiniJson__Arr_2156264(uStack_60,0);
      } while ((lVar9 == 0) || (*(int *)(lVar9 + 0x18) < 2));
      uVar11 = System_Collections_Generic_List_object___get_Item_3a81924
                         (lVar9,0,*(undefined8 *)puVar4);
      iVar7 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar11,0,0);
    } while (iVar7 < 1);
    uVar11 = System_Collections_Generic_List_object___get_Item_3a81924
                       (lVar9,0,*(undefined8 *)puVar4);
    uVar8 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar11,0,0);
    uVar11 = System_Collections_Generic_List_object___get_Item_3a81924
                       (lVar9,1,*(undefined8 *)puVar4);
    uVar11 = Dino_BusSand_App_MiniJson__Long_2156378(uVar11,0,0);
    uStack_98 = 0;
    uStack_90 = 0;
    System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
              (&uStack_98,uVar8,uVar11,*(undefined8 *)puVar3);
    if (lVar12 == 0) break;
    lVar9 = *(long *)(lVar12 + 0x10);
    lVar13 = *(long *)puVar2;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar1 = *(uint *)(lVar12 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      lVar9 = lVar9 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar9 + 0x20) = uStack_98;
      *(undefined8 *)(lVar9 + 0x28) = uStack_90;
    }
    else {
      System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                (lVar12,uStack_98,uStack_90,
                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

