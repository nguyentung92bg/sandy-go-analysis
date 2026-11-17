/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$IsSoldOut
bool Dino_BusSand_App_UI_StorePanel__IsSoldOut (int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$IsSoldOut
   bool Dino_BusSand_App_UI_StorePanel__IsSoldOut (int32_t storeItemId, const MethodInfo* method);
    */

bool Dino_BusSand_App_UI_StorePanel__IsSoldOut_22b851c(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04cac018;
  if ((bRam0000000004f9c2f0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab6a0);
    FUN_02132f7c(PTR_DAT_04cab6c8);
    FUN_02132f7c(PTR_DAT_04cab6d0);
    FUN_02132f7c(PTR_DAT_04cab720);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cad2a8);
    FUN_02132f7c(PTR_DAT_04cad238);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cad200);
    bRam0000000004f9c2f0 = 1;
  }
  puVar2 = PTR_DAT_04cad200;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar2,param_1,0);
  if (lVar6 == 0) {
    bVar3 = true;
  }
  else {
    uVar7 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar6,*(undefined8 *)PTR_DAT_04cad238,0);
    iVar4 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar7,0,0);
    if (iVar4 < 1) {
      bVar3 = false;
    }
    else {
      uVar7 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar6,*(undefined8 *)PTR_DAT_04cad2a8,0);
      uVar7 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar7,*(undefined8 *)PTR_DAT_04ca9c30,0);
      puVar1 = PTR_DAT_04cabaf8;
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabaf8);
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar1;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x110), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_48,lVar6,*(undefined8 *)PTR_DAT_04cab720);
      puVar1 = PTR_DAT_04cab6c8;
      iVar9 = 0;
      while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_48,*(undefined8 *)puVar1), (uVar8 & 1) != 0) {
        uVar5 = System_String__op_Equality_46d1108(uStack_38,uVar7,0);
        iVar9 = iVar9 + (uVar5 & 1);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_48,*(undefined8 *)PTR_DAT_04cab6a0);
      bVar3 = iVar4 <= iVar9;
    }
  }
  return bVar3;
}

