/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$QaHoldAt
void Dino_BusSand_App_UI_UiMotion__QaHoldAt (float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$QaHoldAt
   void Dino_BusSand_App_UI_UiMotion__QaHoldAt (float seconds, const MethodInfo* method); */

void Dino_BusSand_App_UI_UiMotion__QaHoldAt_2290a84(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cac1e8;
  if ((bRam0000000004f9c1bb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac1e8);
    bRam0000000004f9c1bb = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 8) = param_1;
  return;
}

