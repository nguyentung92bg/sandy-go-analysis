/* IL2CPP: Dino.Tracking.ServerTrackingAutoRouter$$get_ShouldUseServerSink
bool Dino_Tracking_ServerTrackingAutoRouter__get_ShouldUseServerSink (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingAutoRouter$$get_ShouldUseServerSink
   bool Dino_Tracking_ServerTrackingAutoRouter__get_ShouldUseServerSink (const MethodInfo* method);
    */

undefined1 Dino_Tracking_ServerTrackingAutoRouter__get_ShouldUseServerSink_246046c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_24 [4];
  
  puVar1 = PTR_DAT_04caa210;
  if ((bRam0000000004f9ce1d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    bRam0000000004f9ce1d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Application__get_isEditor_43543ec(0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Debug__get_isDebugBuild_4362220(0);
    puVar2 = PTR_DAT_04cc09b8;
    puVar1 = PTR_DAT_04cc09b0;
    if ((uVar3 & 1) == 0) {
      if ((bRam0000000004f9ce1e & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cc09b8);
        FUN_02132f7c(PTR_DAT_04cc09b0);
        bRam0000000004f9ce1e = 1;
      }
      uVar4 = *(undefined8 *)puVar1;
      lVar5 = *(long *)puVar2;
      lVar6 = *(long *)(lVar5 + 0x38);
      if (lVar6 == 0) {
        FUN_0216b4cc(lVar5);
        lVar6 = *(long *)(lVar5 + 0x38);
      }
      auStack_24[0] = 0;
      Dino_Common_SaveLoadLocalDevice__TryLoad_bool__28aad30
                (uVar4,0,auStack_24,*(undefined8 *)(lVar6 + 8));
      return auStack_24[0];
    }
  }
  return 1;
}

