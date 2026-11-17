/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$ChangeState
void Dino_BusSand_App_Meta_BattleRoyaleCore__ChangeState (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, int32_t s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$ChangeState
   void Dino_BusSand_App_Meta_BattleRoyaleCore__ChangeState
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, int32_t s, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleCore__ChangeState_22220e0(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar1 + 0x48) != param_2) {
    lVar2 = *(long *)(param_1 + 0x28);
    *(int *)(lVar1 + 0x48) = param_2;
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0232210c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
  return;
}

