/* IL2CPP: Dino.BusSand.App.UI.FailPanel$$OnBack
bool Dino_BusSand_App_UI_FailPanel__OnBack (Dino_BusSand_App_UI_FailPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.FailPanel$$OnBack
   bool Dino_BusSand_App_UI_FailPanel__OnBack (Dino_BusSand_App_UI_FailPanel_o* __this, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_FailPanel__OnBack_2317c48(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if ((bRam0000000004f9c56f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    bRam0000000004f9c56f = 1;
  }
  puVar1 = PTR_DAT_04caba50;
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_GameApp__GiveUp_21688e0(**(long **)(lVar2 + 0xb8),0);
  }
  return 1;
}

