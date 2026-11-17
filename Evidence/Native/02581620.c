/* IL2CPP: Dino.Tracking.UserPropertyAutoTracker$$Init
void Dino_Tracking_UserPropertyAutoTracker__Init (Dino_Tracking_UserPropertyAutoTracker_o* __this, Dino_Common_IUserIdProvider_o* userIdProvider, Dino_Common_IDayActiveProvider_o* dayActiveProvider, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.UserPropertyAutoTracker$$Init
   void Dino_Tracking_UserPropertyAutoTracker__Init (Dino_Tracking_UserPropertyAutoTracker_o*
   __this, Dino_Common_IUserIdProvider_o* userIdProvider, Dino_Common_IDayActiveProvider_o*
   dayActiveProvider, const MethodInfo* method); */

void Dino_Tracking_UserPropertyAutoTracker__Init_2481620
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  thunk_FUN_02134474();
  puVar1 = (undefined8 *)(param_1 + 0x30);
  *puVar1 = param_3;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

