/* IL2CPP: Dino.BusSand.App.Meta.Segments$$get_MoneyNow
int32_t Dino_BusSand_App_Meta_Segments__get_MoneyNow (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Segments$$get_MoneyNow
   int32_t Dino_BusSand_App_Meta_Segments__get_MoneyNow (const MethodInfo* method); */

undefined1 Dino_BusSand_App_Meta_Segments__get_MoneyNow_220f3d8(void)

{
  undefined *puVar1;
  undefined1 uVar2;
  long lVar3;
  float fVar4;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd31 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cacfe0);
    bRam0000000004f9bd31 = 1;
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
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else if (0.0 < *(double *)(lVar3 + 0x140)) {
    uVar2 = 2;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04cacfe0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar4 = (float)Dino_BusSand_App_Meta_Segments__RewardedPerDay_220f4b4();
    uVar2 = 3.0 <= fVar4;
  }
  return uVar2;
}

