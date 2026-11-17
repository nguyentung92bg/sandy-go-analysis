/* IL2CPP: Dino.BusSand.Sdk.SandBusUpdateGate$$Install
void Dino_BusSand_Sdk_SandBusUpdateGate__Install (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusUpdateGate$$Install
   void Dino_BusSand_Sdk_SandBusUpdateGate__Install (const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusUpdateGate__Install_243bcb8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_04cbf510;
  if ((bRam0000000004f9cc83 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf518);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb1c08);
    FUN_02132f7c(PTR_DAT_04cbf520);
    FUN_02132f7c(PTR_DAT_04cbf528);
    FUN_02132f7c(PTR_DAT_04cbf530);
    FUN_02132f7c(PTR_DAT_04cbf510);
    bRam0000000004f9cc83 = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04cb1c08;
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar5[1];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbf518);
    System_Action_object____ctor_35f0008(lVar6,uVar7,*(undefined8 *)PTR_DAT_04cbf520,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar4 = lVar6;
    thunk_FUN_02134474(plVar4,lVar6);
  }
  **(long **)(*(long *)puVar1 + 0xb8) = lVar6;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar6);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar5[2];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(lVar6,uVar7,*(undefined8 *)PTR_DAT_04cbf528,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar4 = lVar6;
    thunk_FUN_02134474(plVar4,lVar6);
  }
  plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *plVar4 = lVar6;
  thunk_FUN_02134474(plVar4,lVar6);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar5[3];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(lVar6,uVar7,*(undefined8 *)PTR_DAT_04cbf530,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar4 = lVar6;
    thunk_FUN_02134474(plVar4,lVar6);
  }
  plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  *plVar4 = lVar6;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)plVar4 >> 0xc & 0x3f),
                 ((ulong)plVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

