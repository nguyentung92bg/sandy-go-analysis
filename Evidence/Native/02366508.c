/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$RowRewards
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_Meta_Monetization__RowRewards (System_String_o* id, System_String_o* field, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$RowRewards
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_Meta_Monetization__RowRewards (System_String_o* id, System_String_o* field,
   const MethodInfo* method); */

long Dino_BusSand_App_Meta_Monetization__RowRewards_2266508(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
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
  if ((bRam0000000004f9c05f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    bRam0000000004f9c05f = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = Dino_BusSand_App_Meta_EconomySettings__Row_22054c8(param_1,0);
  uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,param_2,0);
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
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
            (lVar10,*(undefined8 *)puVar2);
  lVar11 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar9,0);
  if (lVar11 == 0) {
    lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b90);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar11,*(undefined8 *)PTR_DAT_04ca9b98);
    if (lVar11 == 0) {
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
            (&uStack_88,lVar11,*(undefined8 *)PTR_DAT_04cb20c0);
  uStack_60 = uStack_78;
  uStack_68 = puStack_80;
  uStack_70 = uStack_88;
  uStack_88 = 0;
  puStack_80 = &uStack_70;
  while( true ) {
    do {
      do {
        uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                           (&uStack_70,*(undefined8 *)puVar6);
        if ((uVar12 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_70,*(undefined8 *)puVar5);
          return lVar10;
        }
        lVar11 = Dino_BusSand_App_MiniJson__Arr_2156264(uStack_60,0);
      } while ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) < 2));
      uVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                        (lVar11,0,*(undefined8 *)puVar4);
      iVar7 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar9,0,0);
    } while (iVar7 < 1);
    uVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                      (lVar11,0,*(undefined8 *)puVar4);
    uVar8 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar9,0,0);
    uVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                      (lVar11,1,*(undefined8 *)puVar4);
    uVar9 = Dino_BusSand_App_MiniJson__Long_2156378(uVar9,0,0);
    uStack_98 = 0;
    uStack_90 = 0;
    System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
              (&uStack_98,uVar8,uVar9,*(undefined8 *)puVar3);
    if (lVar10 == 0) break;
    lVar11 = *(long *)(lVar10 + 0x10);
    lVar13 = *(long *)puVar2;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar11 == 0) break;
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      lVar11 = lVar11 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar11 + 0x20) = uStack_98;
      *(undefined8 *)(lVar11 + 0x28) = uStack_90;
    }
    else {
      System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                (lVar10,uStack_98,uStack_90,
                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

