/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$get_SpeedValue
float Dino_BusSand_Cheat_CheatManager__get_SpeedValue (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$get_SpeedValue
   float Dino_BusSand_Cheat_CheatManager__get_SpeedValue (Dino_BusSand_Cheat_CheatManager_o* __this,
   const MethodInfo* method); */

undefined4 Dino_BusSand_Cheat_CheatManager__get_SpeedValue_2365268(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  if ((*(long *)(param_1 + 0x100) == 0) ||
     (lVar4 = *(long *)(*(long *)(param_1 + 0x100) + 0x28), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar2 = *(uint *)(param_1 + 0x13c);
  uVar3 = *(uint *)(lVar4 + 0x18) - 1;
  uVar1 = uVar2;
  if ((int)uVar3 <= (int)uVar2) {
    uVar1 = uVar3;
  }
  uVar3 = 0;
  if (-1 < (int)uVar2) {
    uVar3 = uVar1;
  }
  if (uVar3 < *(uint *)(lVar4 + 0x18)) {
    return *(undefined4 *)(lVar4 + (long)(int)uVar3 * 4 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

