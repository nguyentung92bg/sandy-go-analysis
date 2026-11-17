/* IL2CPP: Dino.BusSand.App.Meta.Economy$$OnReviveWait
void Dino_BusSand_App_Meta_Economy__OnReviveWait (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Economy$$OnReviveWait
   void Dino_BusSand_App_Meta_Economy__OnReviveWait (const MethodInfo* method); */

void Dino_BusSand_App_Meta_Economy__OnReviveWait_2204d18(void)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bcc6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bcc6 = 1;
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
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x70) = 1;
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
    fVar3 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c) = fVar3 + 0.5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

