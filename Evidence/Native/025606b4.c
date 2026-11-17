/* IL2CPP: Dino.Tracking.ServerTrackingAutoRouter$$CreateServerProvider
Dino_Common_Tracking_ITrackingProvider_o* Dino_Tracking_ServerTrackingAutoRouter__CreateServerProvider (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingAutoRouter$$CreateServerProvider
   Dino_Common_Tracking_ITrackingProvider_o*
   Dino_Tracking_ServerTrackingAutoRouter__CreateServerProvider (const MethodInfo* method); */

undefined8 Dino_Tracking_ServerTrackingAutoRouter__CreateServerProvider_24606b4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_18;
  
  if ((bRam0000000004f9ce21 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc09d0);
    FUN_02132f7c(PTR_DAT_04cc0928);
    bRam0000000004f9ce21 = 1;
  }
  uStack_18 = 0;
  uVar3 = Dino_Tracking_ServerTrackingAutoRouter__get_ShouldUseServerSink_246046c();
  puVar1 = PTR_DAT_04cc09d0;
  uVar4 = 0;
  if ((uVar3 & 1) != 0) {
    Sisus_Init_Service__TryGet_object__28b2b2c(&uStack_18,*(undefined8 *)PTR_DAT_04cc0928);
    uVar2 = uStack_18;
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    Dino_Tracking_ServerTrackingProvider___ctor_2460740(uVar4,uVar2);
    Dino_Tracking_ServerTrackingTicker__EnsureRunning_2460a38();
  }
  return uVar4;
}

