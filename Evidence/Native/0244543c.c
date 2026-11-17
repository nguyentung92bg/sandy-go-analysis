/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<DailyRewards>b__40_2
bool Dino_BusSand_Cheat_AutoQa___c___DailyRewards_b__40_2 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<DailyRewards>b__40_2
   bool Dino_BusSand_Cheat_AutoQa___c___DailyRewards_b__40_2 (Dino_BusSand_Cheat_AutoQa___c_o*
   __this, const MethodInfo* method); */

bool Dino_BusSand_Cheat_AutoQa___c___DailyRewards_b__40_2_234543c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c6c9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c6c9 = 1;
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
    lVar3 = *(long *)(lVar2 + 0x188);
    lVar2 = Dino_BusSand_App_Meta_Profile__Day_2271100(0);
    return lVar3 == lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

