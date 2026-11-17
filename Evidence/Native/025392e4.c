/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider$$Install
void Dino_BusSand_Sdk_SandBusTrackingProvider__Install (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider$$Install
   void Dino_BusSand_Sdk_SandBusTrackingProvider__Install (const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusTrackingProvider__Install_24392e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_DAT_04cbf3d8;
  if ((bRam0000000004f9cc64 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf3e0);
    FUN_02132f7c(PTR_DAT_04cbf3d0);
    FUN_02132f7c(PTR_DAT_04cbf3d8);
    FUN_02132f7c(PTR_DAT_04cbf3e8);
    FUN_02132f7c(PTR_DAT_04cbf3f0);
    bRam0000000004f9cc64 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9cca3 == '\0') {
    FUN_02132f7c(PTR_DAT_04cbf3d8);
    cRam0000000004f9cca3 = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_04cbf3f0;
  puVar1 = PTR_DAT_04cbf3d0;
  lVar4 = **(long **)(lVar4 + 0xb8);
  if ((lVar4 == 0) ||
     (uVar5 = System_Delegate__op_Inequality_4877af4
                        (lVar4,*(undefined8 *)(*(long *)(*(long *)PTR_DAT_04cbf3d0 + 0xb8) + 8),0),
     (uVar5 & 1) != 0)) {
    plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *plVar6 = lVar4;
    thunk_FUN_02134474(plVar6,lVar4);
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  puVar7 = *(undefined8 **)(lVar4 + 0xb8);
  lVar8 = puVar7[1];
  if (lVar8 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar7 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar9 = *puVar7;
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbf3e0);
    System_Func_object____ctor_379de3c(lVar8,uVar9,*(undefined8 *)PTR_DAT_04cbf3e8,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar6 = lVar8;
    thunk_FUN_02134474(plVar6,lVar8);
  }
  plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *plVar6 = lVar8;
  thunk_FUN_02134474(plVar6,lVar8);
  uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9cca4 == '\0') {
    FUN_02132f7c(PTR_DAT_04cbf3d8);
    cRam0000000004f9cca4 = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  **(undefined8 **)(lVar4 + 0xb8) = uVar9;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar2 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar2 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

