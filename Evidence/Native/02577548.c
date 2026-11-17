/* IL2CPP: Dino.Tracking.CustomTrackingParameters$$get_SessionCount
int32_t Dino_Tracking_CustomTrackingParameters__get_SessionCount (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.CustomTrackingParameters$$get_SessionCount
   int32_t Dino_Tracking_CustomTrackingParameters__get_SessionCount (const MethodInfo* method); */

undefined4 Dino_Tracking_CustomTrackingParameters__get_SessionCount_2477548(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cc18d8;
  if ((bRam0000000004f9ced8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc18d8);
    FUN_02132f7c(PTR_DAT_04cc1890);
    bRam0000000004f9ced8 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    return *(undefined4 *)(**(long **)(lVar2 + 0xb8) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

