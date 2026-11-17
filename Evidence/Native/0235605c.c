/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$EndStage
void Dino_BusSand_App_Meta_YachtRacingCore__EndStage (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$EndStage
   void Dino_BusSand_App_Meta_YachtRacingCore__EndStage (Dino_BusSand_App_Meta_YachtRacingCore_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingCore__EndStage_225605c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    Dino_BusSand_App_Meta_RacingRobotSession__Dispose_2263c78(lVar1,0);
    *(undefined8 *)(param_1 + 0x58) = 0;
    thunk_FUN_02134474((long *)(param_1 + 0x58),0);
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023560a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
  return;
}

