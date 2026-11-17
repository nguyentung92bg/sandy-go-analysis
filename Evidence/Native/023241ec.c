/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$AddStagePlayerWorth
void Dino_BusSand_App_Meta_BattleRoyaleCore__AddStagePlayerWorth (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, int32_t worth, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$AddStagePlayerWorth
   void Dino_BusSand_App_Meta_BattleRoyaleCore__AddStagePlayerWorth
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, int32_t worth, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleCore__AddStagePlayerWorth_22241ec(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((0 < param_2) && (*(int *)(lVar1 + 0x48) == 1)) {
    lVar2 = *(long *)(param_1 + 0x28);
    *(int *)(lVar1 + 0x5c) = *(int *)(lVar1 + 0x5c) + param_2;
    *(ulong *)(lVar1 + 0x50) =
         CONCAT44((int)((ulong)*(undefined8 *)(lVar1 + 0x50) >> 0x20) + param_2,
                  (int)*(undefined8 *)(lVar1 + 0x50) + param_2);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02324238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
  return;
}

