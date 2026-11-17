/* IL2CPP: Dino.Tracking.UserPropertyAutoTracker$$.ctor
void Dino_Tracking_UserPropertyAutoTracker___ctor (Dino_Tracking_UserPropertyAutoTracker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.UserPropertyAutoTracker$$.ctor
   void Dino_Tracking_UserPropertyAutoTracker___ctor (Dino_Tracking_UserPropertyAutoTracker_o*
   __this, const MethodInfo* method); */

undefined1  [16] Dino_Tracking_UserPropertyAutoTracker___ctor_2481a14(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_04cc22e0;
  if ((bRam0000000004f9cfbc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc22e0);
    bRam0000000004f9cfbc = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  uVar3 = *(undefined8 *)puVar2;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

