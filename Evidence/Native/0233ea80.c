/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$StoreItems
System_Collections_Generic_List_object__o* Dino_BusSand_App_Meta_GiftPackTrack__StoreItems (int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$StoreItems
   System_Collections_Generic_List_object__o* Dino_BusSand_App_Meta_GiftPackTrack__StoreItems
   (int32_t storeItemId, const MethodInfo* method); */

long Dino_BusSand_App_Meta_GiftPackTrack__StoreItems_223ea80(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar4 = PTR_DAT_04cad280;
  puVar3 = PTR_DAT_04ca9b98;
  puVar2 = PTR_DAT_04ca9b90;
  if ((bRam0000000004f9beee & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb20a8);
    FUN_02132f7c(PTR_DAT_04cb20b0);
    FUN_02132f7c(PTR_DAT_04cb20b8);
    FUN_02132f7c(PTR_DAT_04ca9ba0);
    FUN_02132f7c(PTR_DAT_04cb20c0);
    FUN_02132f7c(PTR_DAT_04ca9b98);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    FUN_02132f7c(PTR_DAT_04ca9b90);
    FUN_02132f7c(PTR_DAT_04cad280);
    bRam0000000004f9beee = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar8,*(undefined8 *)puVar3);
  uVar9 = Dino_BusSand_App_Meta_GiftPackTrack__Row_223e618(param_1);
  uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,*(undefined8 *)puVar4,0);
  lVar10 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar9,0);
  puVar5 = PTR_DAT_04cb20b0;
  puVar4 = PTR_DAT_04cb20a8;
  puVar3 = PTR_DAT_04cb15c0;
  puVar2 = PTR_DAT_04ca9ba0;
  if (lVar10 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_78,lVar10,*(undefined8 *)PTR_DAT_04cb20c0);
    uStack_50 = uStack_68;
    uStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
LAB_0233ebc4:
    uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                       (&uStack_60,*(undefined8 *)puVar5);
    if ((uVar11 & 1) != 0) {
      lVar10 = Dino_BusSand_App_MiniJson__Arr_2156264(uStack_50,0);
      if ((lVar10 != 0) && (1 < *(int *)(lVar10 + 0x18))) {
        uVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar10,0,*(undefined8 *)puVar3);
        iVar6 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar9,0,0);
        if (0 < iVar6) {
          uVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                            (lVar10,0,*(undefined8 *)puVar3);
          uVar7 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar9,0,0);
          uVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                            (lVar10,1,*(undefined8 *)puVar3);
          uVar9 = Dino_BusSand_App_MiniJson__Long_2156378(uVar9,0,0);
          uVar9 = Dino_BusSand_App_Meta_GiftPackTrack__Item_223e8ec(uVar7,uVar9);
          if (lVar8 != 0) {
            lVar10 = *(long *)(lVar8 + 0x10);
            lVar12 = *(long *)puVar2;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar10 != 0) {
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                thunk_FUN_02134474();
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar8,uVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_0233ebc4;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
      goto LAB_0233ebc4;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_60,*(undefined8 *)puVar4);
  }
  return lVar8;
}

