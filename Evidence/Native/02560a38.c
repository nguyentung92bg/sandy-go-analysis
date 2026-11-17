/* IL2CPP: Dino.Tracking.ServerTrackingTicker$$EnsureRunning
void Dino_Tracking_ServerTrackingTicker__EnsureRunning (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingTicker$$EnsureRunning
   void Dino_Tracking_ServerTrackingTicker__EnsureRunning (const MethodInfo* method); */

void Dino_Tracking_ServerTrackingTicker__EnsureRunning_2460a38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_04cc09e8;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ce3d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc09f0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cc09e8);
    FUN_02132f7c(PTR_DAT_04cc09f8);
    bRam0000000004f9ce3d = 1;
  }
  uVar6 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  puVar3 = PTR_DAT_04cc09f8;
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
  UnityEngine_GameObject___ctor_43c20cc(lVar5,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  UnityEngine_Object__DontDestroyOnLoad_43c8450(lVar5,0);
  if (lVar5 != 0) {
    uVar6 = UnityEngine_GameObject__AddComponent_object__275a54c
                      (lVar5,*(undefined8 *)PTR_DAT_04cc09f0);
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar6;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar2 + 0xb8) >> 0xc & 0x3f),
                   (*(ulong *)(*(long *)puVar2 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

