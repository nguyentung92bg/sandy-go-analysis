/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$OnDisable
void Dino_BusSand_App_UI_KitTopBar__OnDisable (Dino_BusSand_App_UI_KitTopBar_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitTopBar$$OnDisable
   void Dino_BusSand_App_UI_KitTopBar__OnDisable (Dino_BusSand_App_UI_KitTopBar_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitTopBar__OnDisable_2283158(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if ((bRam0000000004f9c14f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf420);
    bRam0000000004f9c14f = 1;
  }
  puVar2 = PTR_DAT_04caf420;
  if (*(char *)(param_1 + 0x90) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_04caf420 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9c1d2 == '\0') {
      FUN_02132f7c(PTR_DAT_04caf420);
      cRam0000000004f9c1d2 = '\x01';
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    iVar1 = **(int **)(lVar3 + 0xb8);
    if (cRam0000000004f9c1d3 == '\0') {
      FUN_02132f7c(puVar2);
      lVar3 = *(long *)puVar2;
      cRam0000000004f9c1d3 = '\x01';
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    **(int **)(lVar3 + 0xb8) = iVar1 + -1;
  }
  return;
}

