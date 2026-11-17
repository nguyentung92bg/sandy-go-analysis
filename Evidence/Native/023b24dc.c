/* IL2CPP: Dino.BusSand.App.UI.PurchaseItemPanel$$Finish
void Dino_BusSand_App_UI_PurchaseItemPanel__Finish (Dino_BusSand_App_UI_PurchaseItemPanel_o* __this, bool ok, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PurchaseItemPanel$$Finish
   void Dino_BusSand_App_UI_PurchaseItemPanel__Finish (Dino_BusSand_App_UI_PurchaseItemPanel_o*
   __this, bool ok, const MethodInfo* method); */

void Dino_BusSand_App_UI_PurchaseItemPanel__Finish_22b24dc(long param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  if ((bRam0000000004f9c2d7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    bRam0000000004f9c2d7 = 1;
  }
  puVar1 = PTR_DAT_04cad568;
  if ((param_2 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__Purchase_23830b8(**(long **)(lVar2 + 0xb8),0);
    }
    Dino_BusSand_App_UI_PurchaseItemPanel__FlyBooster_22b29b0(param_1);
  }
  plVar3 = (long *)(param_1 + 0x38);
  lVar2 = *plVar3;
  *plVar3 = 0;
  thunk_FUN_02134474(plVar3,0);
  Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023b25bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),param_2 & 1,*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  return;
}

