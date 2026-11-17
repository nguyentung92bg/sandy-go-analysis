/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<BusStreak>b__42_1
bool Dino_BusSand_Cheat_AutoQa___c___BusStreak_b__42_1 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<BusStreak>b__42_1
   bool Dino_BusSand_Cheat_AutoQa___c___BusStreak_b__42_1 (Dino_BusSand_Cheat_AutoQa___c_o* __this,
   const MethodInfo* method); */

uint Dino_BusSand_Cheat_AutoQa___c___BusStreak_b__42_1_2345bac(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c6d5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cb97c0);
    bRam0000000004f9c6d5 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
  if (lVar3 != 0) {
    uVar2 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (lVar3,*(undefined8 *)PTR_DAT_04cb97c0);
    return (uVar2 ^ 0xffffffff) & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

