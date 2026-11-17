/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$TrackEvent
void Dino_Tracking_ServerTrackingProvider__TrackEvent (Dino_Tracking_ServerTrackingProvider_o* __this, System_String_o* eventName, Dino_Common_DinoTrackingParameter_array* parameters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$TrackEvent
   void Dino_Tracking_ServerTrackingProvider__TrackEvent (Dino_Tracking_ServerTrackingProvider_o*
   __this, System_String_o* eventName, Dino_Common_DinoTrackingParameter_array* parameters, const
   MethodInfo* method); */

void Dino_Tracking_ServerTrackingProvider__TrackEvent_2462f54
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  uVar2 = System_String__IsNullOrEmpty_46d2084(param_2,0);
  if (((uVar2 & 1) == 0) && (*(long *)(param_1 + 0x20) != 0)) {
    Dino_Tracking_ServerTrackingCore__Enqueue_2460e14(*(long *)(param_1 + 0x20),param_2,param_3);
    if ((bRam0000000004f9ce39 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cab2a8);
      bRam0000000004f9ce39 = 1;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      if (*(char *)(param_1 + 0x28) == '\0') {
        lVar1 = Dino_Tracking_ServerTrackingCore__BuildBatchJson_24611c4();
        if (lVar1 == 0) {
          puVar3 = (undefined8 *)(param_1 + 0x38);
          *puVar3 = *(undefined8 *)PTR_DAT_04cab2a8;
          if (iRam00000000051c1b10 != 0) {
            FUN_02220bf0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                         ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
          }
          return;
        }
        *(undefined1 *)(param_1 + 0x28) = 1;
        Dino_Tracking_ServerTrackingProvider__SendBatchAsync_2463038
                  (param_1,*(undefined8 *)(param_1 + 0x18),lVar1);
        Cysharp_Threading_Tasks_UniTaskVoid__Forget_4078d30(&stack0xffffffffffffffec,0);
      }
      else {
        *(undefined1 *)(param_1 + 0x29) = 1;
      }
    }
    return;
  }
  return;
}

