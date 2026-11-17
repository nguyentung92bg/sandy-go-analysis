/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$Paizi
Dino_BusSand_App_UI_EndOfLevelRules_PaiziInfo_o Dino_BusSand_App_UI_EndOfLevelRules__Paizi (int32_t type, int32_t itemId, int32_t itemRate, int32_t streakNum, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$Paizi
   Dino_BusSand_App_UI_EndOfLevelRules_PaiziInfo_o Dino_BusSand_App_UI_EndOfLevelRules__Paizi
   (int32_t type, int32_t itemId, int32_t itemRate, int32_t streakNum, const MethodInfo* method); */

void Dino_BusSand_App_UI_EndOfLevelRules__Paizi_22c270c
               (undefined8 *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if ((param_3 != 0) || (1 < param_5)) {
      *(int *)(param_1 + 2) = param_5;
      uVar1 = 0;
      if (1 < param_5) {
        uVar1 = (uint)(0 < param_3);
      }
      uVar2 = 1;
      if (param_5 < 2) {
        uVar2 = 2;
      }
      if (param_3 < 1) {
        uVar2 = 3;
      }
      *(undefined4 *)param_1 = uVar2;
      *(int *)((long)param_1 + 4) = param_2;
      if (param_3 == 0) {
        param_4 = 0;
      }
      *(int *)(param_1 + 1) = param_3;
      *(undefined4 *)((long)param_1 + 0xc) = param_4;
      goto LAB_023c2774;
    }
    *(undefined4 *)param_1 = 0;
    *(int *)((long)param_1 + 4) = param_2;
    param_1[1] = 0;
  }
  uVar1 = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
LAB_023c2774:
  *(uint *)((long)param_1 + 0x14) = uVar1;
  return;
}

