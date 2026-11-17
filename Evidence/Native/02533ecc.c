/* IL2CPP: Dino.BusSand.Sdk.SandBusAdConfig$$get_Value
Dino_Advertisement_AdConfigPayload_o* Dino_BusSand_Sdk_SandBusAdConfig__get_Value (Dino_BusSand_Sdk_SandBusAdConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusAdConfig$$get_Value
   Dino_Advertisement_AdConfigPayload_o* Dino_BusSand_Sdk_SandBusAdConfig__get_Value
   (Dino_BusSand_Sdk_SandBusAdConfig_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Sdk_SandBusAdConfig__get_Value_2433ecc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar2 = PTR_DAT_04cbf1a8;
  if ((bRam0000000004f9cc33 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd8);
    FUN_02132f7c(PTR_DAT_04cbf1a8);
    bRam0000000004f9cc33 = 1;
  }
  puVar1 = PTR_DAT_04cacfd8;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = **(long **)(lVar3 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  if (cRam0000000004f9c123 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfd8);
    cRam0000000004f9c123 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(lVar3 + 0x10);
    *puVar5 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x28);
    thunk_FUN_02134474(puVar5);
    return **(undefined8 **)(*(long *)puVar2 + 0xb8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

