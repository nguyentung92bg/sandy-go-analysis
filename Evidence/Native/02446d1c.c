/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c__DisplayClass39_0$$<Mechanics>b__0
bool Dino_BusSand_Cheat_AutoQa___c__DisplayClass39_0___Mechanics_b__0 (Dino_BusSand_Cheat_AutoQa___c__DisplayClass39_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c__DisplayClass39_0$$<Mechanics>b__0
   bool Dino_BusSand_Cheat_AutoQa___c__DisplayClass39_0___Mechanics_b__0
   (Dino_BusSand_Cheat_AutoQa___c__DisplayClass39_0_o* __this, const MethodInfo* method); */

bool Dino_BusSand_Cheat_AutoQa___c__DisplayClass39_0___Mechanics_b__0_2346d1c(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c6f3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    bRam0000000004f9c6f3 = 1;
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
      lVar3 = Dino_BusSand_Cheat_AutoQa__get_Gc_2340f5c();
      if (lVar3 == 0) goto LAB_02446db0;
      bVar2 = *(int *)(lVar3 + 0x28) == *(int *)(param_1 + 0x10);
    }
    else {
      bVar2 = false;
    }
    return bVar2;
  }
LAB_02446db0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

