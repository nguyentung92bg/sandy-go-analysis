/* IL2CPP: Dino.BusSand.App.UI.GiftPackPanel$$OnCloseClick
void Dino_BusSand_App_UI_GiftPackPanel__OnCloseClick (Dino_BusSand_App_UI_GiftPackPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackPanel$$OnCloseClick
   void Dino_BusSand_App_UI_GiftPackPanel__OnCloseClick (Dino_BusSand_App_UI_GiftPackPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_GiftPackPanel__OnCloseClick_21aa134(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000004f9ba5a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caed20);
    bRam0000000004f9ba5a = 1;
  }
  if (*(char *)(param_1 + 0x45) != '\0') {
    return;
  }
  Dino_BusSand_App_Meta_GiftPackTrack__GiftClick_223faa0
            (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_04caed20,0);
  if ((bRam0000000004f9ba5c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caecc0);
    bRam0000000004f9ba5c = 1;
  }
  puVar1 = PTR_DAT_04caecc0;
  if (*(char *)(param_1 + 0x45) == '\0') {
    *(undefined1 *)(param_1 + 0x45) = 1;
    Dino_BusSand_App_Meta_GiftPackTrack__IapAction_223fb44(*(undefined8 *)puVar1,0,0,0);
    if (*(long *)(param_1 + 0x38) == 0) {
      lVar4 = 0;
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 0x38) + 0x18);
      lVar4 = *plVar2;
      *plVar2 = 0;
      thunk_FUN_02134474(plVar2,0);
    }
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    puVar1 = PTR_DAT_04caec48;
    if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
    if ((lVar3 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
      if ((*(long *)(param_1 + 0x38) == 0) || (lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_Meta_GiftPackFeature__OnPanelClosed_223aa30
                (lVar3,*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x10),0);
    }
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022a9500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      return;
    }
  }
  return;
}

