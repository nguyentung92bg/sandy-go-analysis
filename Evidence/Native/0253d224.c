/* IL2CPP: Dino.BusSand.Sdk.SandBusRemoveAds$$get_IsRemoveAds
bool Dino_BusSand_Sdk_SandBusRemoveAds__get_IsRemoveAds (Dino_BusSand_Sdk_SandBusRemoveAds_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusRemoveAds$$get_IsRemoveAds
   bool Dino_BusSand_Sdk_SandBusRemoveAds__get_IsRemoveAds (Dino_BusSand_Sdk_SandBusRemoveAds_o*
   __this, const MethodInfo* method); */

byte Dino_BusSand_Sdk_SandBusRemoveAds__get_IsRemoveAds_243d224(void)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9cc81 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9cc81 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  bVar2 = 0;
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x10) != 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar2 = 0;
    if (*(char *)(lVar3 + 0xdc) != '\0') {
      bVar2 = Dino_BusSand_App_QaPilot__get_IgnoresNoAds_21566bc(0);
      bVar2 = bVar2 ^ 1;
    }
  }
  return bVar2 & 1;
}

