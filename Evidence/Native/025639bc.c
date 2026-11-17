/* IL2CPP: Dino.Tracking.ServerTrackingTicker$$Update
void Dino_Tracking_ServerTrackingTicker__Update (Dino_Tracking_ServerTrackingTicker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingTicker$$Update
   void Dino_Tracking_ServerTrackingTicker__Update (Dino_Tracking_ServerTrackingTicker_o* __this,
   const MethodInfo* method); */

void Dino_Tracking_ServerTrackingTicker__Update_24639bc(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  float fVar4;
  undefined1 auStack_14 [4];
  
  if (cRam0000000004f9ce44 == '\0') {
    FUN_02132f7c(PTR_DAT_04cc09d0);
    cRam0000000004f9ce44 = '\x01';
  }
  lVar3 = **(long **)(*(long *)PTR_DAT_04cc09d0 + 0xb8);
  if (lVar3 != 0) {
    fVar4 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
    lVar1 = *(long *)(lVar3 + 0x20);
    if ((lVar1 != 0) &&
       ((*(char *)(lVar1 + 0x4c) != '\0' ||
        (fVar4 = fVar4 + *(float *)(lVar1 + 0x48), *(float *)(lVar1 + 0x48) = fVar4,
        *(float *)(lVar1 + 0x14) <= fVar4)))) {
      if ((bRam0000000004f9ce39 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cab2a8);
        bRam0000000004f9ce39 = 1;
      }
      auStack_14[0] = 0;
      if (*(long *)(lVar3 + 0x20) != 0) {
        if (*(char *)(lVar3 + 0x28) == '\0') {
          lVar1 = Dino_Tracking_ServerTrackingCore__BuildBatchJson_24611c4();
          if (lVar1 == 0) {
            puVar2 = (undefined8 *)(lVar3 + 0x38);
            *puVar2 = *(undefined8 *)PTR_DAT_04cab2a8;
            if (iRam00000000051c1b10 != 0) {
              FUN_02220bf0(1L << ((ulong)puVar2 >> 0xc & 0x3f),
                           ((ulong)puVar2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
            }
            return;
          }
          *(undefined1 *)(lVar3 + 0x28) = 1;
          auStack_14[0] =
               Dino_Tracking_ServerTrackingProvider__SendBatchAsync_2463038
                         (lVar3,*(undefined8 *)(lVar3 + 0x18),lVar1);
          Cysharp_Threading_Tasks_UniTaskVoid__Forget_4078d30(auStack_14,0);
        }
        else {
          *(undefined1 *)(lVar3 + 0x29) = 1;
        }
      }
      return;
    }
  }
  return;
}

