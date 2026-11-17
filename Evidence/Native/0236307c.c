/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$EndStage
void Dino_BusSand_App_Meta_RacingRobotSession__EndStage (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, bool playerWin, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$EndStage
   void Dino_BusSand_App_Meta_RacingRobotSession__EndStage
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, bool playerWin, const MethodInfo* method);
    */

void Dino_BusSand_App_Meta_RacingRobotSession__EndStage_226307c(long param_1,uint param_2)

{
  long lVar1;
  
                    /* try { // try from 02363084 to 02463093 has its CatchHandler @ 023630cc */
  if (*(char *)(param_1 + 0x6d) == '\0') {
    *(undefined1 *)(param_1 + 0x6d) = 1;
    if (*(long *)(param_1 + 0x30) != 0) {
      Dino_BusSand_App_Meta_RacingRobotSave__ClearAgentSnapshot_225fbb0();
    }
    lVar1 = *(long *)(param_1 + 0x88);
    if (lVar1 != 0) {
                    /* try { // try from 023630c4 to 024630c7 has its CatchHandler @ 023630d0 */
                    /* try { // try from 023630c8 to 024630f7 has its CatchHandler @ 02362f30 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02363084 with catch @ 023630cc
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023630c4 with catch @ 023630d0
                        */
                    /* WARNING: Could not recover jumptable at 0x023630d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02363070 with catch @ 023630d4
                        */
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),param_2 & 1,*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
                    /* try { // try from 02363094 to 024630c3 has its CatchHandler @ 02362f30 */
  return;
}

