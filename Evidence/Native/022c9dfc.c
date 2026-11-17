/* IL2CPP: Dino.BusSand.App.UI.GiftPackKitPanel$$OnClose
void Dino_BusSand_App_UI_GiftPackKitPanel__OnClose (Dino_BusSand_App_UI_GiftPackKitPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackKitPanel$$OnClose
   void Dino_BusSand_App_UI_GiftPackKitPanel__OnClose (Dino_BusSand_App_UI_GiftPackKitPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_GiftPackKitPanel__OnClose_21c9dfc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bb0d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    bRam0000000004f9bb0d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_GameTracking__IapClose_221840c(param_1,0);
  puVar2 = PTR_DAT_04caefe8;
  puVar1 = PTR_DAT_04caec48;
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    if ((bRam0000000004f9bec9 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04caec48,0x3ec,0);
      FUN_02132f7c(PTR_DAT_04caefe8);
      bRam0000000004f9bec9 = 1;
    }
    Dino_BusSand_App_Meta_GiftPackFeature__TryActivateFromPendingQueue_2236a88(lVar3);
    Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(lVar3,*(undefined8 *)puVar2);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0233aac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      return;
    }
    return;
  }
  return;
}

