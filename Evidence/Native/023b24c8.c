/* IL2CPP: Dino.BusSand.App.UI.PurchaseItemPanel$$OnCloseClick
void Dino_BusSand_App_UI_PurchaseItemPanel__OnCloseClick (Dino_BusSand_App_UI_PurchaseItemPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023b2514) */
/* WARNING: Removing unreachable block (ram,0x023b2528) */
/* WARNING: Removing unreachable block (ram,0x023b252c) */
/* WARNING: Removing unreachable block (ram,0x023b2538) */
/* WARNING: Removing unreachable block (ram,0x023b254c) */
/* WARNING: Removing unreachable block (ram,0x023b2558) */
/* WARNING: Removing unreachable block (ram,0x023b2560) */
/* WARNING: Removing unreachable block (ram,0x023b256c) */
/* WARNING: Removing unreachable block (ram,0x023b2574) */
/* IL2CPP: Dino.BusSand.App.UI.PurchaseItemPanel$$OnCloseClick
   void Dino_BusSand_App_UI_PurchaseItemPanel__OnCloseClick
   (Dino_BusSand_App_UI_PurchaseItemPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PurchaseItemPanel__OnCloseClick_22b24c8(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    return;
  }
  if ((bRam0000000004f9c2d7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    bRam0000000004f9c2d7 = 1;
  }
  plVar1 = (long *)(param_1 + 0x38);
  lVar2 = *plVar1;
  *plVar1 = 0;
  thunk_FUN_02134474(plVar1,0);
  Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b25bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),0,*(undefined8 *)(lVar2 + 0x28));
  return;
}

