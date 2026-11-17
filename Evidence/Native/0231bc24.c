/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$RewardedReady
bool Dino_BusSand_App_Meta_JourneyTracking__RewardedReady (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$RewardedReady
   bool Dino_BusSand_App_Meta_JourneyTracking__RewardedReady (const MethodInfo* method); */

uint Dino_BusSand_App_Meta_JourneyTracking__RewardedReady_221bc24(void)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = PTR_DAT_04cabaa8;
  if ((bRam0000000004f9bd9f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cac740);
    bRam0000000004f9bd9f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_App_Ads__RewardedAvailable_2176af8(*(undefined8 *)PTR_DAT_04cac740,0);
  return uVar2 & 1;
}

