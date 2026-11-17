/* IL2CPP: Dino.BusSand.Sdk.SandBusReview$$Install
void Dino_BusSand_Sdk_SandBusReview__Install (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusReview$$Install
   void Dino_BusSand_Sdk_SandBusReview__Install (const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusReview__Install_2438b20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_04cbf360;
  if ((bRam0000000004f9cc5c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf368);
    FUN_02132f7c(PTR_DAT_04cb4820);
    FUN_02132f7c(PTR_DAT_04cbf370);
    FUN_02132f7c(PTR_DAT_04cbf360);
    bRam0000000004f9cc5c = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04cb4820;
  puVar6 = *(undefined8 **)(lVar3 + 0xb8);
  lVar7 = puVar6[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbf368);
    System_Action_object____ctor_35f0008(lVar7,uVar8,*(undefined8 *)PTR_DAT_04cbf370,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar4 = lVar7;
    thunk_FUN_02134474(plVar4,lVar7);
  }
  **(long **)(*(long *)puVar1 + 0xb8) = lVar7;
  uVar5 = *(ulong *)(*(long *)puVar1 + 0xb8);
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar5 >> 0xc & 0x3f),(uVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

