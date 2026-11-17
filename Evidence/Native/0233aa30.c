/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$OnPanelClosed
void Dino_BusSand_App_Meta_GiftPackFeature__OnPanelClosed (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$OnPanelClosed
   void Dino_BusSand_App_Meta_GiftPackFeature__OnPanelClosed
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__OnPanelClosed_223aa30(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_04caefe8;
  puVar1 = PTR_DAT_04caec48;
  if ((bRam0000000004f9bec9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caefe8);
    bRam0000000004f9bec9 = 1;
  }
  Dino_BusSand_App_Meta_GiftPackFeature__TryActivateFromPendingQueue_2236a88(param_1);
  Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,*(undefined8 *)puVar2);
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

