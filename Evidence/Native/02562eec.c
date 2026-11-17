/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$WaitForReady
Cysharp_Threading_Tasks_UniTask_bool__o Dino_Tracking_ServerTrackingProvider__WaitForReady (Dino_Tracking_ServerTrackingProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$WaitForReady
   Cysharp_Threading_Tasks_UniTask_bool__o Dino_Tracking_ServerTrackingProvider__WaitForReady
   (Dino_Tracking_ServerTrackingProvider_o* __this, const MethodInfo* method); */

undefined1  [16] Dino_Tracking_ServerTrackingProvider__WaitForReady_2462eec(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_DAT_04caa970;
  if ((bRam0000000004f9ce38 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbfa30);
    FUN_02132f7c(PTR_DAT_04caa970);
    bRam0000000004f9ce38 = 1;
  }
  puVar3 = PTR_DAT_04cbfa30;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (*(long *)(*(long *)puVar3 + 0x38) == 0) {
    FUN_0216b4cc(*(long *)puVar3);
  }
  thunk_FUN_02134474(&stack0xffffffffffffffe0,0);
  auVar1._9_7_ = 0;
  auVar1._0_9_ = (unkuint9)1 << 0x40;
  return auVar1;
}

