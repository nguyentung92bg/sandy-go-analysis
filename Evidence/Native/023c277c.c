/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$Paizi
Dino_BusSand_App_UI_EndOfLevelRules_PaiziInfo_o Dino_BusSand_App_UI_EndOfLevelRules__Paizi (int32_t type, bool streakOpen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$Paizi
   Dino_BusSand_App_UI_EndOfLevelRules_PaiziInfo_o Dino_BusSand_App_UI_EndOfLevelRules__Paizi
   (int32_t type, bool streakOpen, const MethodInfo* method); */

void Dino_BusSand_App_UI_EndOfLevelRules__Paizi_22c277c
               (undefined4 *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  Dino_BusSand_App_UI_EndOfLevelRules__LevelRate_22c2824(param_2,(long)&uStack_28 + 4,&uStack_28);
  iVar4 = (int)param_2;
  if ((param_3 & 1) == 0) {
    iVar1 = -1;
    if (iVar4 == 0) goto LAB_023c27f4;
LAB_023c27b4:
    if ((1 < iVar1) || (uStack_28._4_4_ != 0)) {
      uVar2 = 1;
      if (iVar1 < 2) {
        uVar2 = 2;
      }
      if (uStack_28._4_4_ == 0) {
        uStack_28._0_4_ = 0;
      }
      uVar3 = 0;
      if (uStack_28._4_4_ < 1) {
        uVar2 = 3;
      }
      else {
        uVar3 = (uint)(1 < iVar1);
      }
      goto LAB_023c2808;
    }
  }
  else {
    iVar1 = Dino_BusSand_App_UI_EndOfLevelRules__LevelStreakNum_22c2920(param_2 & 0xffffffff);
    if (iVar4 != 0) goto LAB_023c27b4;
LAB_023c27f4:
    uStack_28._4_4_ = 0;
  }
  uStack_28._0_4_ = 0;
  uVar2 = 0;
  uVar3 = 0;
  iVar1 = -1;
LAB_023c2808:
  *param_1 = uVar2;
  param_1[1] = iVar4;
  param_1[2] = uStack_28._4_4_;
  param_1[3] = (undefined4)uStack_28;
  param_1[4] = iVar1;
  param_1[5] = uVar3;
  return;
}

