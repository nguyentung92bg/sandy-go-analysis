/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c__DisplayClass38_0$$<Boosters>b__2
bool Dino_BusSand_Cheat_AutoQa___c__DisplayClass38_0___Boosters_b__2 (Dino_BusSand_Cheat_AutoQa___c__DisplayClass38_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c__DisplayClass38_0$$<Boosters>b__2
   bool Dino_BusSand_Cheat_AutoQa___c__DisplayClass38_0___Boosters_b__2
   (Dino_BusSand_Cheat_AutoQa___c__DisplayClass38_0_o* __this, const MethodInfo* method); */

bool Dino_BusSand_Cheat_AutoQa___c__DisplayClass38_0___Boosters_b__2_2346ca4(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c6f2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c6f2 = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Meta_Profile__Count_225b150(uVar1,0);
  return lVar3 == *(long *)(param_1 + 0x18) + -1;
}

