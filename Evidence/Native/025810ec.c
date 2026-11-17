/* IL2CPP: Dino.Tracking.DinoUserPropertyTracking$$TrackBalanceCoin
void Dino_Tracking_DinoUserPropertyTracking__TrackBalanceCoin (int64_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoUserPropertyTracking$$TrackBalanceCoin
   void Dino_Tracking_DinoUserPropertyTracking__TrackBalanceCoin (int64_t amount, const MethodInfo*
   method); */

void Dino_Tracking_DinoUserPropertyTracking__TrackBalanceCoin_24810ec(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cb2400;
  if ((bRam0000000004f9cfac & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2400);
    bRam0000000004f9cfac = 1;
  }
  uStack_28 = param_1;
  uVar2 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&uStack_28);
  Dino_Tracking_DinoUserPropertyTracking__SetProperty_2480e28(*(undefined8 *)puVar1,uVar2);
  return;
}

