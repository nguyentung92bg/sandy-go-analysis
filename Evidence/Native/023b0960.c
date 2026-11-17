/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel$$PerBuy
int32_t Dino_BusSand_App_UI_PowerBuyPanel__PerBuy (Dino_BusSand_App_UI_PowerBuyPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel$$PerBuy
   int32_t Dino_BusSand_App_UI_PowerBuyPanel__PerBuy (Dino_BusSand_App_UI_PowerBuyPanel_o* __this,
   const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_PowerBuyPanel__PerBuy_22b0960(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x1;
  undefined8 extraout_x1_00;
  
  puVar1 = PTR_DAT_04cac7b8;
  if ((bRam0000000004f9c2c7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cadda0);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c2c7 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_UI_CommerceUi__ShopGet_22ab710(0x7d2);
  puVar1 = PTR_DAT_04cadda0;
  if (lVar2 != 0) {
    if ((0 < *(int *)(lVar2 + 0x18)) &&
       (System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                  (lVar2,0,*(undefined8 *)PTR_DAT_04cadda0), 0 < extraout_x1)) {
      System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                (lVar2,0,*(undefined8 *)puVar1);
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = System_Math__Min_4831124(0x7fffffff,extraout_x1_00,0);
      return uVar3;
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

