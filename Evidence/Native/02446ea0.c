/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c__DisplayClass40_0$$<DailyRewards>b__1
bool Dino_BusSand_Cheat_AutoQa___c__DisplayClass40_0___DailyRewards_b__1 (Dino_BusSand_Cheat_AutoQa___c__DisplayClass40_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c__DisplayClass40_0$$<DailyRewards>b__1
   bool Dino_BusSand_Cheat_AutoQa___c__DisplayClass40_0___DailyRewards_b__1
   (Dino_BusSand_Cheat_AutoQa___c__DisplayClass40_0_o* __this, const MethodInfo* method); */

uint Dino_BusSand_Cheat_AutoQa___c__DisplayClass40_0___DailyRewards_b__1_2346ea0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c6f5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c6f5 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar3 & 1) == 0) {
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x10),0),
       lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar4,0);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 1;
  }
  return uVar2 & 1;
}

