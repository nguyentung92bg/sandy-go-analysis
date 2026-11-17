/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$AppPause
void Dino_BusSand_App_Meta_JourneyTracking__AppPause (bool external, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$AppPause
   void Dino_BusSand_App_Meta_JourneyTracking__AppPause (bool external, const MethodInfo* method);
    */

void Dino_BusSand_App_Meta_JourneyTracking__AppPause_22154d4(ulong param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bdaa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9bdaa = 1;
  }
  if ((param_1 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_JourneyTracking__FlushUi_221dac8(0);
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_JourneyTracking__PersistUi_22119a0();
  }
  return;
}

