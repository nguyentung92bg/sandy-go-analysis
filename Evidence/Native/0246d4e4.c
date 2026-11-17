/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel.<>c$$<OnOpen>b__14_30
void Dino_BusSand_Cheat_CheatMobilePanel___c___OnOpen_b__14_30 (Dino_BusSand_Cheat_CheatMobilePanel___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel.<>c$$<OnOpen>b__14_30
   void Dino_BusSand_Cheat_CheatMobilePanel___c___OnOpen_b__14_30
   (Dino_BusSand_Cheat_CheatMobilePanel___c_o* __this, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatMobilePanel___c___OnOpen_b__14_30_236d4e4(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cabaa8;
  if ((bRam0000000004f9c7b0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    bRam0000000004f9c7b0 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  *(byte *)(*(long *)(lVar2 + 0xb8) + 8) = *(byte *)(*(long *)(lVar2 + 0xb8) + 8) ^ 1;
  return;
}

