/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$OnPlayerFail
void Dino_BusSand_App_Meta_YachtRacingCore__OnPlayerFail (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$OnPlayerFail
   void Dino_BusSand_App_Meta_YachtRacingCore__OnPlayerFail
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingCore__OnPlayerFail_22562d0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    return;
  }
  Dino_BusSand_App_Meta_RacingRobotSession__Tick_22611fc(*(long *)(param_1 + 0x58),0);
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar1 = Dino_BusSand_App_Meta_RacingRobotSession__CheckAnyBotWin_2263820
                      (*(long *)(param_1 + 0x58),0);
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      Dino_BusSand_App_Meta_RacingRobotSession__OnPlayerFailed_22630d8(*(long *)(param_1 + 0x58),0);
      *(undefined4 *)(param_1 + 0x60) = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0xa0), lVar3 != 0)) {
        lVar2 = *(long *)(param_1 + 0x58);
        *(undefined4 *)(lVar3 + 0x4c) = 0;
        if (lVar2 != 0) {
          Dino_BusSand_App_Meta_RacingRobotSession__OnPlayerProgressChanged_2262b0c(lVar2,0,0);
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x02356350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

