/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$OnPlayerWin
void Dino_BusSand_App_Meta_YachtRacingCore__OnPlayerWin (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$OnPlayerWin
   void Dino_BusSand_App_Meta_YachtRacingCore__OnPlayerWin (Dino_BusSand_App_Meta_YachtRacingCore_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingCore__OnPlayerWin_225624c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    return;
  }
  Dino_BusSand_App_Meta_RacingRobotSession__Tick_22611fc(*(long *)(param_1 + 0x58),0);
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar2 = Dino_BusSand_App_Meta_RacingRobotSession__CheckAnyBotWin_2263820
                      (*(long *)(param_1 + 0x58),0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x60) + 1;
    *(int *)(param_1 + 0x60) = iVar1;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0xa0), lVar4 != 0)) {
      lVar3 = *(long *)(param_1 + 0x58);
      *(int *)(lVar4 + 0x4c) = iVar1;
      if (lVar3 != 0) {
        Dino_BusSand_App_Meta_RacingRobotSession__OnPlayerProgressChanged_2262b0c(lVar3,iVar1,0);
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x023562c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

