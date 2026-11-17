/* IL2CPP: Dino.Tracking.ServerTrackingCore$$get_PendingCount
int32_t Dino_Tracking_ServerTrackingCore__get_PendingCount (Dino_Tracking_ServerTrackingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingCore$$get_PendingCount
   int32_t Dino_Tracking_ServerTrackingCore__get_PendingCount (Dino_Tracking_ServerTrackingCore_o*
   __this, const MethodInfo* method); */

undefined4 Dino_Tracking_ServerTrackingCore__get_PendingCount_2460b60(long param_1)

{
  if ((bRam0000000004f9ce22 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc0a00);
    bRam0000000004f9ce22 = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

