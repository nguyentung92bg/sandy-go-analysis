/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel$$BuyCountNow
int32_t Dino_BusSand_App_UI_PowerBuyPanel__BuyCountNow (Dino_BusSand_App_UI_PowerBuyPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel$$BuyCountNow
   int32_t Dino_BusSand_App_UI_PowerBuyPanel__BuyCountNow (Dino_BusSand_App_UI_PowerBuyPanel_o*
   __this, const MethodInfo* method); */

int Dino_BusSand_App_UI_PowerBuyPanel__BuyCountNow_22b0a60(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c2c8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c2c8 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar2 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(0);
  iVar3 = Dino_BusSand_App_Meta_Profile__get_Hearts_22724e0(0);
  iVar4 = *(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x40) == -1) {
    iVar4 = Dino_BusSand_App_UI_PowerBuyPanel__PerBuy_22b0960();
    if (cRam0000000004f9ba93 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9ba93 = '\x01';
    }
    fVar5 = (float)(iVar2 - iVar3) / (float)iVar4;
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar4 = -0x80000000;
    if ((float)(int)fVar5 != INFINITY) {
      iVar4 = (int)fVar5;
    }
  }
  return iVar4;
}

