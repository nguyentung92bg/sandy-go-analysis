/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel$$RefreshPanel
void Dino_BusSand_App_UI_PowerBuyPanel__RefreshPanel (Dino_BusSand_App_UI_PowerBuyPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel$$RefreshPanel
   void Dino_BusSand_App_UI_PowerBuyPanel__RefreshPanel (Dino_BusSand_App_UI_PowerBuyPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PowerBuyPanel__RefreshPanel_22b0490(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_x1;
  long *plVar9;
  long lStack_40;
  int iStack_34;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c2c9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cadda0);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cad330);
    bRam0000000004f9c2c9 = 1;
  }
  iStack_34 = 0;
  lStack_40 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iStack_34 = Dino_BusSand_App_Meta_Profile__get_Hearts_22724e0(0);
  plVar9 = *(long **)(param_1 + 0x50);
  uVar6 = System_Int32__ToString_482d750(&iStack_34,0);
  puVar2 = PTR_DAT_04cac7b8;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x518))(plVar9,uVar6,*(undefined8 *)(*plVar9 + 0x520));
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = Dino_BusSand_App_UI_CommerceUi__ShopCost_22aba88(0x7d2);
    puVar2 = PTR_DAT_04cad330;
    if (lVar7 != 0) {
      if (0 < *(int *)(lVar7 + 0x18)) {
        uVar6 = *(undefined8 *)(param_1 + 0x58);
        System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                  (lVar7,0,*(undefined8 *)PTR_DAT_04cadda0);
        uVar4 = Dino_BusSand_App_UI_PowerBuyPanel__BuyCountNow_22b0a60(param_1);
        if ((int)uVar4 < 2) {
          uVar4 = 1;
        }
        lStack_40 = extraout_x1 * (ulong)uVar4;
        uVar8 = System_Int64__ToString_482e7e4(&lStack_40,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        Dino_BusSand_App_UI_UiKit__SetLabel_228cb44(uVar6,uVar8,0);
      }
      iVar3 = iStack_34;
      lVar7 = *(long *)(param_1 + 0x60);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar5 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(0);
      if (lVar7 != 0) {
        UnityEngine_GameObject__SetActive_43c1408(lVar7,iVar3 < iVar5,0);
        Dino_BusSand_App_UI_PowerBuyPanel__RefreshRestoreTime_22b0b44(param_1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

