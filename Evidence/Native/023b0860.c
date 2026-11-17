/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel$$OnCloseClick
void Dino_BusSand_App_UI_PowerBuyPanel__OnCloseClick (Dino_BusSand_App_UI_PowerBuyPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel$$OnCloseClick
   void Dino_BusSand_App_UI_PowerBuyPanel__OnCloseClick (Dino_BusSand_App_UI_PowerBuyPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PowerBuyPanel__OnCloseClick_22b0860(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000004f9c2c6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cb60a0);
    bRam0000000004f9c2c6 = 1;
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    return;
  }
  lVar3 = *(long *)PTR_DAT_04ca9d18;
  lVar2 = *(long *)(lVar3 + 0x38);
  if (lVar2 == 0) {
    FUN_0216b4cc(lVar3);
    lVar2 = *(long *)(lVar3 + 0x38);
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0216b470();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0216b470();
  }
  uVar4 = **(undefined8 **)(lVar2 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac5c0);
  }
  Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb60a0,uVar4,0);
  plVar1 = (long *)(param_1 + 0x38);
  lVar2 = *plVar1;
  *plVar1 = 0;
  thunk_FUN_02134474(plVar1,0);
  Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023b083c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),0,*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  return;
}

