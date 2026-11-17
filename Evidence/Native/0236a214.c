/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$ResetForTests
void Dino_BusSand_App_Meta_MonetizationSettings__ResetForTests (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$ResetForTests
   void Dino_BusSand_App_Meta_MonetizationSettings__ResetForTests (const MethodInfo* method); */

void Dino_BusSand_App_Meta_MonetizationSettings__ResetForTests_226a214(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_04cacfd8;
  if ((bRam0000000004f9c0af & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd8);
    FUN_02132f7c(PTR_DAT_04cb1db8);
    FUN_02132f7c(PTR_DAT_04cb1dc0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c0af = 1;
  }
  puVar3 = PTR_DAT_04cb1dc0;
  puVar1 = PTR_DAT_04ca9c30;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar5 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
  *puVar5 = 0;
  thunk_FUN_02134474(puVar5,0);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = *(undefined8 *)puVar1;
  thunk_FUN_02134474();
  uVar6 = *(undefined8 *)puVar3;
  if (cRam0000000004f9c125 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfd8);
    cRam0000000004f9c125 = '\x01';
  }
  puVar3 = PTR_DAT_04cb1db8;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar5 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x28);
  *puVar5 = uVar6;
  thunk_FUN_02134474(puVar5,uVar6);
  uVar6 = *(undefined8 *)puVar3;
  if (cRam0000000004f9c126 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfd8);
    cRam0000000004f9c126 = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar5 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x30);
  *puVar5 = uVar6;
  thunk_FUN_02134474(puVar5,uVar6);
  uVar6 = *(undefined8 *)puVar1;
  if (cRam0000000004f9c127 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfd8);
    cRam0000000004f9c127 = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar5 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x38);
  *puVar5 = uVar6;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                 ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

