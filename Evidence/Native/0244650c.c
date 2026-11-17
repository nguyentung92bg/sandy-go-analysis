/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<QuitPause>b__44_10
bool Dino_BusSand_Cheat_AutoQa___c___QuitPause_b__44_10 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<QuitPause>b__44_10
   bool Dino_BusSand_Cheat_AutoQa___c___QuitPause_b__44_10 (Dino_BusSand_Cheat_AutoQa___c_o* __this,
   const MethodInfo* method); */

bool Dino_BusSand_Cheat_AutoQa___c___QuitPause_b__44_10_234650c(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c6e6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cb97d8);
    FUN_02132f7c(PTR_DAT_04cac808);
    bRam0000000004f9c6e6 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
  if (lVar2 != 0) {
    uVar3 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (lVar2,*(undefined8 *)PTR_DAT_04cb97d8);
    if ((uVar3 & 1) != 0) {
      return false;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar2 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
    if (lVar2 != 0) {
      uVar3 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                        (lVar2,*(undefined8 *)PTR_DAT_04cac808);
      if ((uVar3 & 1) != 0) {
        return false;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar2 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
      if (lVar2 != 0) {
        if (*(char *)(lVar2 + 0x38) == '\0') {
          return false;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar2 = Dino_BusSand_Cheat_AutoQa__get_Gc_2340f5c();
        if (lVar2 != 0) {
          return *(int *)(lVar2 + 0x20) == 2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

