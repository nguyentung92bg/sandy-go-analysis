/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$<StartStage>b__68_0
void Dino_BusSand_App_Meta_YachtRacingCore___StartStage_b__68_0 (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, bool win, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$<StartStage>b__68_0
   void Dino_BusSand_App_Meta_YachtRacingCore___StartStage_b__68_0
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, bool win, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingCore___StartStage_b__68_0_2259030(long param_1,ulong param_2)

{
  long lVar1;
  
  if ((param_2 & 1) != 0) {
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0xa0), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_Meta_RacingRobotSave__AdvanceStage_225fb7c(lVar1,0);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0235906c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}

