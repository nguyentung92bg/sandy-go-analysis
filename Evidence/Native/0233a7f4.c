/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$CanShowPopup
bool Dino_BusSand_App_Meta_GiftPackFeature__CanShowPopup (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$CanShowPopup
   bool Dino_BusSand_App_Meta_GiftPackFeature__CanShowPopup
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method); */

byte Dino_BusSand_App_Meta_GiftPackFeature__CanShowPopup_223a7f4
               (undefined8 param_1,undefined4 param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000004f9bec6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    bRam0000000004f9bec6 = 1;
  }
  Dino_BusSand_App_Meta_GiftPackFeature__RefreshActiveStates_223669c(param_1);
  lVar2 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(param_1,param_2);
  lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(param_1,param_2);
  if (lVar2 != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar1 = 0;
    if (*(char *)(lVar3 + 0x30) == '\0') goto LAB_0233a868;
    if (*(char *)(lVar3 + 0x6d) == '\0') {
      lVar4 = *(long *)PTR_DAT_04caec48;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        lVar4 = thunk_FUN_0218fdac();
      }
      if ((*(int *)(lVar2 + 0x20) < 1) || (*(int *)(lVar3 + 0x1c) < *(int *)(lVar2 + 0x20))) {
        bVar1 = Dino_BusSand_App_Meta_GiftPackFeature__IsInCooldown_22387b4(lVar4,lVar2,lVar3);
        bVar1 = bVar1 ^ 1;
        goto LAB_0233a868;
      }
    }
  }
  bVar1 = 0;
LAB_0233a868:
  return bVar1 & 1;
}

