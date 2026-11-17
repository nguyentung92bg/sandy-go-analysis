/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_RewardedLoadWaitSec
float Dino_BusSand_App_Meta_Monetization__get_RewardedLoadWaitSec (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_RewardedLoadWaitSec
   float Dino_BusSand_App_Meta_Monetization__get_RewardedLoadWaitSec (const MethodInfo* method); */

float Dino_BusSand_App_Meta_Monetization__get_RewardedLoadWaitSec_2266b90(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cacfd8;
  if ((bRam0000000004f9c065 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd8);
    bRam0000000004f9c065 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_Meta_MonetizationSettings__get_Rewarded_2266b34();
  if (lVar2 != 0) {
    return (float)*(int *)(lVar2 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

