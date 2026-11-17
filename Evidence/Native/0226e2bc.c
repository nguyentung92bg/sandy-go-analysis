/* IL2CPP: Dino.BusSand.App.Ads$$OnLevelResult
void Dino_BusSand_App_Ads__OnLevelResult (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads$$OnLevelResult
   void Dino_BusSand_App_Ads__OnLevelResult (const MethodInfo* method); */

void Dino_BusSand_App_Ads__OnLevelResult_216e2bc(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9b8d9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9b8d9 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar3 + 0xe4);
    *(int *)(lVar4 + 0xd8) = *(int *)(lVar4 + 0xd8) + 1;
    if (iVar1 == 0) {
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04cabaf8;
    if ((bRam0000000004f9c0ee & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      bRam0000000004f9c0ee = 1;
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x28) = 1;
    fVar5 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2c) = fVar5 + 0.5;
    return;
  }
  return;
}

