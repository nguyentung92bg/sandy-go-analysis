/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotAgent$$AdvanceTimeBased
void Dino_BusSand_App_Meta_RacingRobotAgent__AdvanceTimeBased (Dino_BusSand_App_Meta_RacingRobotAgent_o* __this, float delta, bool playerJustFailed, float sessionElapsed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotAgent$$AdvanceTimeBased
   void Dino_BusSand_App_Meta_RacingRobotAgent__AdvanceTimeBased
   (Dino_BusSand_App_Meta_RacingRobotAgent_o* __this, float delta, bool playerJustFailed, float
   sessionElapsed, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotAgent__AdvanceTimeBased_225f4e4
               (float param_1,float param_2,long param_3,uint param_4)

{
  ulong uVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar2 = *(float *)(param_3 + 0x94);
  param_1 = *(float *)(param_3 + 0x90) + param_1;
  *(float *)(param_3 + 0x90) = param_1;
  if (fVar2 <= param_1) {
    do {
      if (*(int *)(param_3 + 0x18) <= *(int *)(param_3 + 0x9c)) {
        return;
      }
      if ((0 < *(int *)(param_3 + 0x80)) &&
         (*(int *)(param_3 + 0x18) - *(int *)(param_3 + 0x80) <= *(int *)(param_3 + 0x9c))) {
        return;
      }
      *(float *)(param_3 + 0x90) = param_1 - fVar2;
      uVar1 = Dino_BusSand_App_Meta_RacingRobotAgent__RollFail_225f668(param_3,param_4 & 1);
      if ((uVar1 & 1) != 0) {
        *(undefined4 *)(param_3 + 0x9c) = 0;
        *(undefined4 *)(param_3 + 0x90) = 0;
        uVar3 = Dino_BusSand_App_Meta_RacingRobotAgent__CalcRequiredSeconds_225eff8(param_3,0);
        *(undefined4 *)(param_3 + 0x94) = uVar3;
        *(float *)(param_3 + 0xac) = param_2 - *(float *)(param_3 + 0x90);
        return;
      }
      *(int *)(param_3 + 0x9c) = *(int *)(param_3 + 0x9c) + 1;
      *(float *)(param_3 + 0xac) = param_2 - *(float *)(param_3 + 0x90);
      fVar2 = (float)Dino_BusSand_App_Meta_RacingRobotAgent__CalcRequiredSeconds_225eff8(param_3);
      param_1 = *(float *)(param_3 + 0x90);
      *(float *)(param_3 + 0x94) = fVar2;
    } while (fVar2 <= param_1);
  }
  return;
}

