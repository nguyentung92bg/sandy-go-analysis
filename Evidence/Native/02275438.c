/* IL2CPP: Dino.BusSand.App.SimulatedAds$$RewardedReady
bool Dino_BusSand_App_SimulatedAds__RewardedReady (Dino_BusSand_App_SimulatedAds_o* __this, System_String_o* slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.SimulatedAds$$RewardedReady
   bool Dino_BusSand_App_SimulatedAds__RewardedReady (Dino_BusSand_App_SimulatedAds_o* __this,
   System_String_o* slot, const MethodInfo* method); */

bool Dino_BusSand_App_SimulatedAds__RewardedReady_2175438(void)

{
  undefined *puVar1;
  bool bVar2;
  float fVar3;
  
  puVar1 = PTR_DAT_04cacf40;
  if ((bRam0000000004f9b8d0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacf40);
    bRam0000000004f9b8d0 = 1;
  }
  if (*(char *)(*(long *)(*(long *)puVar1 + 0xb8) + 1) == '\0') {
    fVar3 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    bVar2 = *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) <= fVar3;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

