/* IL2CPP: Dino.BusSand.Sdk.SdkBootstrap$$Register
void Dino_BusSand_Sdk_SdkBootstrap__Register (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SdkBootstrap$$Register
   void Dino_BusSand_Sdk_SdkBootstrap__Register (const MethodInfo* method); */

void Dino_BusSand_Sdk_SdkBootstrap__Register_243b5dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000004f9cc75 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cbf498);
    bRam0000000004f9cc75 = 1;
  }
  puVar3 = PTR_DAT_04cbf498;
  puVar2 = PTR_DAT_04caba50;
  puVar1 = PTR_DAT_04caa458;
  if (cRam0000000004f9cca9 == '\0') {
    FUN_02132f7c(PTR_DAT_04cbf490);
    cRam0000000004f9cca9 = '\x01';
  }
  uVar4 = *(undefined8 *)puVar1;
  **(undefined1 **)(*(long *)PTR_DAT_04cbf490 + 0xb8) = 0;
  uVar4 = thunk_FUN_0216e89c(uVar4);
  System_Action___ctor_47b5ed0(uVar4,0,*(undefined8 *)puVar3,0);
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  puVar6 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
  *puVar6 = uVar4;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar6 >> 0xc & 0x3f),
                 ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

