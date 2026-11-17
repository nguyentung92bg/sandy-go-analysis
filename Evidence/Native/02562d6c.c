/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$get_Instance
Dino_Tracking_ServerTrackingProvider_o* Dino_Tracking_ServerTrackingProvider__get_Instance (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$get_Instance
   Dino_Tracking_ServerTrackingProvider_o* Dino_Tracking_ServerTrackingProvider__get_Instance (const
   MethodInfo* method); */

undefined8 Dino_Tracking_ServerTrackingProvider__get_Instance_2462d6c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04cc09d0;
  if ((bRam0000000004f9ce34 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc09d0);
    bRam0000000004f9ce34 = 1;
  }
  return **(undefined8 **)(*(long *)puVar1 + 0xb8);
}

