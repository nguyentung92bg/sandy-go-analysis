/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$get_Rewarded
Dino_BusSand_App_Meta_RewardedSettings_o* Dino_BusSand_App_Meta_MonetizationSettings__get_Rewarded (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$get_Rewarded
   Dino_BusSand_App_Meta_RewardedSettings_o*
   Dino_BusSand_App_Meta_MonetizationSettings__get_Rewarded (const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_MonetizationSettings__get_Rewarded_2266b34(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04cacfd8;
  if ((bRam0000000004f9c0a7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd8);
    bRam0000000004f9c0a7 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_MonetizationSettings__Ensure_2269070();
  return *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
}

