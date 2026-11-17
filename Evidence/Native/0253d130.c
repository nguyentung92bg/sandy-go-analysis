/* IL2CPP: Dino.BusSand.Sdk.SandBusLevelService$$get_CurrentLevel
int32_t Dino_BusSand_Sdk_SandBusLevelService__get_CurrentLevel (Dino_BusSand_Sdk_SandBusLevelService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusLevelService$$get_CurrentLevel
   int32_t Dino_BusSand_Sdk_SandBusLevelService__get_CurrentLevel
   (Dino_BusSand_Sdk_SandBusLevelService_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_Sdk_SandBusLevelService__get_CurrentLevel_243d130(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9cc80 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9cc80 = 1;
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
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x10) == 0) {
    uVar2 = 1;
  }
  else {
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
    uVar2 = *(undefined4 *)(lVar3 + 0x14);
  }
  return uVar2;
}

