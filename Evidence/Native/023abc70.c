/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$StoreGet
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_UI_CommerceUi__StoreGet (int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$StoreGet
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_UI_CommerceUi__StoreGet (int32_t storeItemId, const MethodInfo* method); */

long Dino_BusSand_App_UI_CommerceUi__StoreGet_22abc70(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar4 = PTR_DAT_04caca60;
  puVar3 = PTR_DAT_04caca50;
  puVar2 = PTR_DAT_04cac018;
  if ((bRam0000000004f9c2a8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb20a8);
    FUN_02132f7c(PTR_DAT_04cb20b0);
    FUN_02132f7c(PTR_DAT_04cb20b8);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04cb20c0);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cad280);
    FUN_02132f7c(PTR_DAT_04cad200);
    bRam0000000004f9c2a8 = 1;
  }
  puVar6 = PTR_DAT_04cad280;
  puVar5 = PTR_DAT_04cad200;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
            (lVar8,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar5,param_1,0);
  uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,*(undefined8 *)puVar6,0);
  lVar10 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar9,0);
  puVar6 = PTR_DAT_04cb20b0;
  puVar5 = PTR_DAT_04cb20a8;
  puVar4 = PTR_DAT_04cb15c0;
  puVar3 = PTR_DAT_04cae910;
  puVar2 = PTR_DAT_04cae058;
  if (lVar10 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_88,lVar10,*(undefined8 *)PTR_DAT_04cb20c0);
    uStack_60 = uStack_78;
    uStack_68 = puStack_80;
    uStack_70 = uStack_88;
    uStack_88 = 0;
    puStack_80 = &uStack_70;
LAB_023abe0c:
    uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                       (&uStack_70,*(undefined8 *)puVar6);
    if ((uVar11 & 1) != 0) {
      lVar10 = Dino_BusSand_App_MiniJson__Arr_2156264(uStack_60,0);
      if ((lVar10 != 0) && (1 < *(int *)(lVar10 + 0x18))) {
        uVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar10,0,*(undefined8 *)puVar4);
        uVar7 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar9,0,0);
        uVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar10,1,*(undefined8 *)puVar4);
        uVar9 = Dino_BusSand_App_MiniJson__Long_2156378(uVar9,0,0);
        uStack_98 = 0;
        uStack_90 = 0;
        System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                  (&uStack_98,uVar7,uVar9,*(undefined8 *)puVar3);
        if (lVar8 != 0) {
          lVar10 = *(long *)(lVar8 + 0x10);
          lVar12 = *(long *)puVar2;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar10 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar10 + 0x20) = uStack_98;
              *(undefined8 *)(lVar10 + 0x28) = uStack_90;
            }
            else {
              System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                        (lVar8,uStack_98,uStack_90,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_023abe0c;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_023abe0c;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_70,*(undefined8 *)puVar5);
  }
  return lVar8;
}

