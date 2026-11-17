/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<Boosters>b__38_1
bool Dino_BusSand_Cheat_AutoQa___c___Boosters_b__38_1 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<Boosters>b__38_1
   bool Dino_BusSand_Cheat_AutoQa___c___Boosters_b__38_1 (Dino_BusSand_Cheat_AutoQa___c_o* __this,
   const MethodInfo* method); */

uint Dino_BusSand_Cheat_AutoQa___c___Boosters_b__38_1_2345190(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c6c5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    bRam0000000004f9c6c5 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_Cheat_AutoQa__get_Gc_2340f5c();
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x20) == 2) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar3 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
      if (lVar3 == 0) goto LAB_02445220;
      uVar2 = Dino_BusSand_App_UI_UIManager__AnyPopupOpen_21fef84(lVar3,0);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
    return uVar2 & 1;
  }
LAB_02445220:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

