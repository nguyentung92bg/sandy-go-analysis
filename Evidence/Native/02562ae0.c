/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$FlushNow
void Dino_Tracking_ServerTrackingProvider__FlushNow (Dino_Tracking_ServerTrackingProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$FlushNow
   void Dino_Tracking_ServerTrackingProvider__FlushNow (Dino_Tracking_ServerTrackingProvider_o*
   __this, const MethodInfo* method); */

void Dino_Tracking_ServerTrackingProvider__FlushNow_2462ae0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auStack_14 [4];
  
  if ((bRam0000000004f9ce39 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab2a8);
    bRam0000000004f9ce39 = 1;
  }
  auStack_14[0] = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(char *)(param_1 + 0x28) == '\0') {
      lVar1 = Dino_Tracking_ServerTrackingCore__BuildBatchJson_24611c4();
      if (lVar1 == 0) {
        puVar2 = (undefined8 *)(param_1 + 0x38);
        *puVar2 = *(undefined8 *)PTR_DAT_04cab2a8;
        if (iRam00000000051c1b10 != 0) {
          FUN_02220bf0(1L << ((ulong)puVar2 >> 0xc & 0x3f),
                       ((ulong)puVar2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
        }
        return;
      }
      *(undefined1 *)(param_1 + 0x28) = 1;
      auStack_14[0] =
           Dino_Tracking_ServerTrackingProvider__SendBatchAsync_2463038
                     (param_1,*(undefined8 *)(param_1 + 0x18),lVar1);
      Cysharp_Threading_Tasks_UniTaskVoid__Forget_4078d30(auStack_14,0);
    }
    else {
      *(undefined1 *)(param_1 + 0x29) = 1;
    }
  }
  return;
}

