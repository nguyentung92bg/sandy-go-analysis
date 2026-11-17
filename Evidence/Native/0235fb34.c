/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSave$$RecordStageSpend
void Dino_BusSand_App_Meta_RacingRobotSave__RecordStageSpend (Dino_BusSand_App_Meta_RacingRobotSave_o* __this, int32_t stage, float spend, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSave$$RecordStageSpend
   void Dino_BusSand_App_Meta_RacingRobotSave__RecordStageSpend
   (Dino_BusSand_App_Meta_RacingRobotSave_o* __this, int32_t stage, float spend, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_RacingRobotSave__RecordStageSpend_225fb34
               (float param_1,long param_2,int param_3)

{
  if (param_3 == 3) {
                    /* catch() { ... } // from try @ 0235fb24 with catch @ 0235fb74
                       catch() { ... } // from try @ 0235fb64 with catch @ 0235fb74 */
    *(float *)(param_2 + 0x1c) = *(float *)(param_2 + 0x1c) + param_1;
  }
  else {
    if (param_3 == 2) {
                    /* try { // try from 0235fb64 to 0245fb73 has its CatchHandler @ 0235fb74 */
      *(float *)(param_2 + 0x18) = *(float *)(param_2 + 0x18) + param_1;
      return;
    }
    if (param_3 == 1) {
      *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) + param_1;
      return;
    }
  }
                    /* try { // try from 0235fb78 to 0245fb7b has its CatchHandler @ 0235fb84 */
  return;
}

