/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$get_PendingCount
int32_t Dino_Tracking_ServerTrackingProvider__get_PendingCount (Dino_Tracking_ServerTrackingProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$get_PendingCount
   int32_t Dino_Tracking_ServerTrackingProvider__get_PendingCount
   (Dino_Tracking_ServerTrackingProvider_o* __this, const MethodInfo* method); */

undefined4 Dino_Tracking_ServerTrackingProvider__get_PendingCount_24629b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    return 0;
  }
  if ((bRam0000000004f9ce22 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc0a00);
    bRam0000000004f9ce22 = 1;
  }
  lVar1 = *(long *)(lVar1 + 0x40);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

