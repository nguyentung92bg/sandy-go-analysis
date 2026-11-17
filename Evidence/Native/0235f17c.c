/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotAgent$$Advance
int32_t Dino_BusSand_App_Meta_RacingRobotAgent__Advance (Dino_BusSand_App_Meta_RacingRobotAgent_o* __this, float deltaSeconds, int32_t playerProgress, bool playerJustFailed, float sessionElapsed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotAgent$$Advance
   int32_t Dino_BusSand_App_Meta_RacingRobotAgent__Advance
   (Dino_BusSand_App_Meta_RacingRobotAgent_o* __this, float deltaSeconds, int32_t playerProgress,
   bool playerJustFailed, float sessionElapsed, const MethodInfo* method); */

undefined4
Dino_BusSand_App_Meta_RacingRobotAgent__Advance_225f17c
          (undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4,uint param_5)

{
                    /* try { // try from 0235f180 to 0245f187 has its CatchHandler @ 0235f23c */
  if ((*(int *)(param_3 + 0xa0) == 0) &&
     ((*(int *)(param_3 + 0x80) < 1 ||
      (*(int *)(param_3 + 0x9c) < *(int *)(param_3 + 0x18) - *(int *)(param_3 + 0x80))))) {
    if (*(long *)(param_3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 0235f1c8 to 0245f1cf has its CatchHandler @ 0235f228 */
    if (*(int *)(*(long *)(param_3 + 0x10) + 0x14) == 3) {
      Dino_BusSand_App_Meta_RacingRobotAgent__AdvanceChase_225f21c(param_2,param_3);
    }
    else {
                    /* try { // try from 0235f1e0 to 0245f1e7 has its CatchHandler @ 0235f234 */
      Dino_BusSand_App_Meta_RacingRobotAgent__AdvanceTimeBased_225f4e4(param_3,param_5 & 1);
    }
  }
  return *(undefined4 *)(param_3 + 0x9c);
}

