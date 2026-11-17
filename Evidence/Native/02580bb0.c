/* IL2CPP: Dino.Tracking.TrackingSinkRouter$$get_Sinks
System_Collections_Generic_IReadOnlyList_ITrackingProvider__o* Dino_Tracking_TrackingSinkRouter__get_Sinks (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingSinkRouter$$get_Sinks
   System_Collections_Generic_IReadOnlyList_ITrackingProvider__o*
   Dino_Tracking_TrackingSinkRouter__get_Sinks (const MethodInfo* method); */

undefined8 Dino_Tracking_TrackingSinkRouter__get_Sinks_2480bb0(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cbf3d8;
  if ((bRam0000000004f9cfa0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf3d8);
    bRam0000000004f9cfa0 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
}

