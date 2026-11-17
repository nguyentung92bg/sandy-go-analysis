/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<QuitPause>b__44_6
bool Dino_BusSand_Cheat_AutoQa___c___QuitPause_b__44_6 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<QuitPause>b__44_6
   bool Dino_BusSand_Cheat_AutoQa___c___QuitPause_b__44_6 (Dino_BusSand_Cheat_AutoQa___c_o* __this,
   const MethodInfo* method); */

undefined1 Dino_BusSand_Cheat_AutoQa___c___QuitPause_b__44_6_23463b8(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c6e3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    bRam0000000004f9c6e3 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
  if (lVar2 != 0) {
    return *(undefined1 *)(lVar2 + 0x39);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

