/* IL2CPP: Dino.Tracking.DinoUserPropertyTracking$$TrackBalanceResource
void Dino_Tracking_DinoUserPropertyTracking__TrackBalanceResource (System_String_o* resourceName, int64_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoUserPropertyTracking$$TrackBalanceResource
   void Dino_Tracking_DinoUserPropertyTracking__TrackBalanceResource (System_String_o* resourceName,
   int64_t amount, const MethodInfo* method); */

void Dino_Tracking_DinoUserPropertyTracking__TrackBalanceResource_248123c
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cc22c8;
  if ((bRam0000000004f9cfaf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc22c8);
    bRam0000000004f9cfaf = 1;
  }
  uVar2 = System_String__Format_46c8eb8(*(undefined8 *)puVar1,param_1,0);
  uStack_28 = param_2;
  uVar3 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&uStack_28);
  Dino_Tracking_DinoUserPropertyTracking__SetProperty_2480e28(uVar2,uVar3);
  return;
}

