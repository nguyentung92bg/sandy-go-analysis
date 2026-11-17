/* IL2CPP: Dino.BusSand.App.Meta.Economy$$OnLevelEnter
void Dino_BusSand_App_Meta_Economy__OnLevelEnter (int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Economy$$OnLevelEnter
   void Dino_BusSand_App_Meta_Economy__OnLevelEnter (int32_t level, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Economy__OnLevelEnter_2204c3c(int param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bcc5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bcc5 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar3 + 0x6c) == param_1) {
    if (*(int *)(lVar3 + 0x70) < 1) goto LAB_02304cf8;
    *(int *)(lVar3 + 0x68) = *(int *)(lVar3 + 0x68) + *(int *)(lVar3 + 0x70);
  }
  else {
    *(undefined4 *)(lVar3 + 0x68) = 0;
    *(int *)(lVar3 + 0x6c) = param_1;
  }
  *(undefined4 *)(lVar3 + 0x70) = 0;
LAB_02304cf8:
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0ee & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0ee = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  *(undefined1 *)(*(long *)(lVar2 + 0xb8) + 0x28) = 1;
  fVar4 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c) = fVar4 + 0.5;
  return;
}

