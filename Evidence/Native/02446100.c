/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<QuitPause>b__44_1
bool Dino_BusSand_Cheat_AutoQa___c___QuitPause_b__44_1 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<QuitPause>b__44_1
   bool Dino_BusSand_Cheat_AutoQa___c___QuitPause_b__44_1 (Dino_BusSand_Cheat_AutoQa___c_o* __this,
   const MethodInfo* method); */

bool Dino_BusSand_Cheat_AutoQa___c___QuitPause_b__44_1_2346100(void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c6de & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cb7fe0);
    bRam0000000004f9c6de = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
  if (lVar3 != 0) {
    uVar4 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (lVar3,*(undefined8 *)PTR_DAT_04cb7fe0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar3 = Dino_BusSand_Cheat_AutoQa__get_Gc_2340f5c();
      if (lVar3 == 0) goto LAB_024461a0;
      bVar2 = *(int *)(lVar3 + 0x20) == 2;
    }
    else {
      bVar2 = false;
    }
    return bVar2;
  }
LAB_024461a0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

