/* IL2CPP: Dino.Tracking.DinoUserPropertyTracking$$TrackWinStreak
void Dino_Tracking_DinoUserPropertyTracking__TrackWinStreak (int32_t streak, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoUserPropertyTracking$$TrackWinStreak
   void Dino_Tracking_DinoUserPropertyTracking__TrackWinStreak (int32_t streak, const MethodInfo*
   method); */

void Dino_Tracking_DinoUserPropertyTracking__TrackWinStreak_2481540(undefined4 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04cb2398;
  if ((bRam0000000004f9cfb7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2398);
    bRam0000000004f9cfb7 = 1;
  }
  uStack_24 = param_1;
  uVar2 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_24);
  Dino_Tracking_DinoUserPropertyTracking__SetProperty_2480e28(*(undefined8 *)puVar1,uVar2);
  return;
}

