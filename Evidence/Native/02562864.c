/* IL2CPP: Dino.Tracking.ServerTrackingCore.<>c$$<.ctor>b__13_0
int64_t Dino_Tracking_ServerTrackingCore___c____ctor_b__13_0 (Dino_Tracking_ServerTrackingCore___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingCore.<>c$$<.ctor>b__13_0
   int64_t Dino_Tracking_ServerTrackingCore___c____ctor_b__13_0
   (Dino_Tracking_ServerTrackingCore___c_o* __this, const MethodInfo* method); */

void Dino_Tracking_ServerTrackingCore___c____ctor_b__13_0_2462864(void)

{
  undefined *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = PTR_DAT_04cacfd0;
  if ((bRam0000000004f9ce2f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd0);
    bRam0000000004f9ce2f = 1;
  }
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auStack_30 = System_DateTimeOffset__get_UtcNow_48145cc(0);
  System_DateTimeOffset__ToUnixTimeMilliseconds_48161b4(auStack_30,0);
  return;
}

