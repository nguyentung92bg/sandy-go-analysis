/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$AvailableTabs
System_Collections_Generic_List_int__o* Dino_BusSand_App_UI_StorePanel__AvailableTabs (int32_t storeId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$AvailableTabs
   System_Collections_Generic_List_int__o* Dino_BusSand_App_UI_StorePanel__AvailableTabs (int32_t
   storeId, const MethodInfo* method); */

long Dino_BusSand_App_UI_StorePanel__AvailableTabs_22b7ffc(undefined4 param_1)

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
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar4 = PTR_DAT_04cad6e8;
  puVar3 = PTR_DAT_04cac018;
  puVar2 = PTR_DAT_04caa1c8;
  if ((bRam0000000004f9c2ed & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb20a8);
    FUN_02132f7c(PTR_DAT_04cb20b0);
    FUN_02132f7c(PTR_DAT_04cb20b8);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cb20c0);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04caa1c8);
                    /* try { // try from 023b809c to 024b80a3 has its CatchHandler @ 023b81ec */
    FUN_02132f7c(PTR_DAT_04cac018);
                    /* try { // try from 023b80a4 to 024b8207 has its CatchHandler @ 023b7f5c */
    FUN_02132f7c(PTR_DAT_04cb6358);
    FUN_02132f7c(PTR_DAT_04cb6360);
    bRam0000000004f9c2ed = 1;
  }
  puVar6 = PTR_DAT_04cb6360;
  puVar5 = PTR_DAT_04cb6358;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_int____ctor_3a2b7dc(lVar8,*(undefined8 *)puVar4);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar6,param_1,0);
  uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,*(undefined8 *)puVar5,0);
  lVar10 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar9,0);
  puVar4 = PTR_DAT_04cb20b0;
  puVar3 = PTR_DAT_04cb20a8;
  puVar2 = PTR_DAT_04caa160;
  if (lVar10 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_78,lVar10,*(undefined8 *)PTR_DAT_04cb20c0);
    uStack_50 = uStack_68;
    uStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
LAB_023b816c:
    uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                       (&uStack_60,*(undefined8 *)puVar4);
    if ((uVar11 & 1) != 0) {
      uVar7 = Dino_BusSand_App_MiniJson__Int_21562dc(uStack_50,0,0);
      lVar10 = Dino_BusSand_App_UI_StorePanel__AvailableItems_22b8294();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 023b8208 with catch @ 023b822c */
        FUN_02133224();
      }
      if (0 < *(int *)(lVar10 + 0x18)) {
        if (lVar8 != 0) {
          lVar10 = *(long *)(lVar8 + 0x10);
          lVar12 = *(long *)puVar2;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar10 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = uVar7;
            }
            else {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023b809c with catch @ 023b81ec
                        */
              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                        (lVar8,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_023b816c;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_023b816c;
    }
                    /* try { // try from 023b8208 to 024b820b has its CatchHandler @ 023b822c */
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_60,*(undefined8 *)puVar3);
  }
                    /* try { // try from 023b820c to 024b822f has its CatchHandler @ 023b7f5c */
  return lVar8;
}

