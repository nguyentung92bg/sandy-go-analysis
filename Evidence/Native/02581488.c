/* IL2CPP: Dino.Tracking.DinoUserPropertyTracking$$TrackActiveDay
void Dino_Tracking_DinoUserPropertyTracking__TrackActiveDay (int32_t day, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoUserPropertyTracking$$TrackActiveDay
   void Dino_Tracking_DinoUserPropertyTracking__TrackActiveDay (int32_t day, const MethodInfo*
   method); */

void Dino_Tracking_DinoUserPropertyTracking__TrackActiveDay_2481488(undefined4 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04cb4ae0;
  if ((bRam0000000004f9cfb5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4ae0);
    bRam0000000004f9cfb5 = 1;
  }
  uStack_24 = param_1;
  uVar2 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_24);
  Dino_Tracking_DinoUserPropertyTracking__SetProperty_2480e28(*(undefined8 *)puVar1,uVar2);
  return;
}

