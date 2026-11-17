/* IL2CPP: Dino.Tracking.ServerTrackingAutoRouter$$RegisterSinkFactory
void Dino_Tracking_ServerTrackingAutoRouter__RegisterSinkFactory (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingAutoRouter$$RegisterSinkFactory
   void Dino_Tracking_ServerTrackingAutoRouter__RegisterSinkFactory (const MethodInfo* method); */

void Dino_Tracking_ServerTrackingAutoRouter__RegisterSinkFactory_24605d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_04cc09c8;
  puVar2 = PTR_DAT_04cbf3e0;
  puVar1 = PTR_DAT_04cbf3d8;
  if ((bRam0000000004f9ce20 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf3e0);
    FUN_02132f7c(PTR_DAT_04cc09c8);
    FUN_02132f7c(PTR_DAT_04cbf3d8);
    bRam0000000004f9ce20 = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Func_object____ctor_379de3c(uVar4,0,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9cca4 == '\0') {
    FUN_02132f7c(PTR_DAT_04cbf3d8);
    cRam0000000004f9cca4 = '\x01';
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  **(undefined8 **)(lVar5 + 0xb8) = uVar4;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

