/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<IapChecks>b__46_7
bool Dino_BusSand_Cheat_AutoQa___c___IapChecks_b__46_7 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<IapChecks>b__46_7
   bool Dino_BusSand_Cheat_AutoQa___c___IapChecks_b__46_7 (Dino_BusSand_Cheat_AutoQa___c_o* __this,
   const MethodInfo* method); */

uint Dino_BusSand_Cheat_AutoQa___c___IapChecks_b__46_7_234683c(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c6ec & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    bRam0000000004f9c6ec = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
  if (lVar3 != 0) {
    uVar2 = Dino_BusSand_App_UI_UIManager__AnyPopupOpen_21fef84(lVar3,0);
    return (uVar2 ^ 0xffffffff) & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

