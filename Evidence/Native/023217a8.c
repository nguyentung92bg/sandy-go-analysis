/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$StrategyFor
int32_t Dino_BusSand_App_Meta_BattleRoyaleRules__StrategyFor (Dino_BusSand_App_Meta_BattleRoyalePersona_o* persona, int32_t stage, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$StrategyFor
   int32_t Dino_BusSand_App_Meta_BattleRoyaleRules__StrategyFor
   (Dino_BusSand_App_Meta_BattleRoyalePersona_o* persona, int32_t stage, const MethodInfo* method);
    */

undefined4 Dino_BusSand_App_Meta_BattleRoyaleRules__StrategyFor_22217a8(long param_1,uint param_2)

{
  long lVar1;
  
  if ((bRam0000000004f9bdee & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cae230);
    bRam0000000004f9bdee = 1;
  }
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((((int)param_2 < *(int *)(lVar1 + 0x18)) && (-1 < (int)param_2)) &&
       (*(int *)(lVar1 + 0x18) != 0)) {
      if (*(uint *)(lVar1 + 0x18) <= param_2) {
        System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_48509f0
                  (0,param_2,*(undefined8 *)PTR_DAT_04cae230);
      }
      lVar1 = *(long *)(lVar1 + 0x10);
      if (lVar1 != 0) {
        if (param_2 < *(uint *)(lVar1 + 0x18)) {
          return *(undefined4 *)(lVar1 + (long)(int)param_2 * 4 + 0x20);
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return 1;
}

