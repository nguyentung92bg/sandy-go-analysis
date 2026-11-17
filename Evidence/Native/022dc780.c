/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$Fill
float Dino_BusSand_App_UI_PassportUi__Fill (Dino_BusSand_App_Meta_PassportFeature_o* f, int32_t keys, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$Fill
   float Dino_BusSand_App_UI_PassportUi__Fill (Dino_BusSand_App_Meta_PassportFeature_o* f, int32_t
   keys, const MethodInfo* method); */

float Dino_BusSand_App_UI_PassportUi__Fill_21dc780(long param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_1 != 0) {
    uVar1 = Dino_BusSand_App_Meta_PassportFeature__SimulateStageIndexWithKeys_2246acc
                      (param_1,param_2,0);
    uVar4 = Dino_BusSand_App_Meta_PassportFeature__IsStageMaxed_2246db0(param_1,uVar1,0);
    fVar5 = 1.0;
    if ((uVar4 & 1) == 0) {
      uVar1 = Dino_BusSand_App_Meta_PassportFeature__SimulateStageIndexWithKeys_2246acc
                        (0x3f800000,param_1,param_2 & 0xffffffff,0);
      iVar2 = Dino_BusSand_App_Meta_PassportFeature__StageKeyCost_2246a60(param_1,uVar1,0);
      if (iVar2 < 1) {
        fVar5 = 1.0;
      }
      else {
        iVar3 = Dino_BusSand_App_Meta_PassportFeature__SimulateRemainingKeys_2246bbc
                          (param_1,param_2 & 0xffffffff,0);
                    /* try { // try from 022dc7f4 to 023dc807 has its CatchHandler @ 022dc868 */
        fVar6 = (float)iVar3 / (float)iVar2;
                    /* try { // try from 022dc808 to 023dc88f has its CatchHandler @ 022dc49c */
        fVar7 = 1.0;
        if (fVar6 <= 1.0) {
          fVar7 = fVar6;
        }
        fVar5 = 0.0;
        if (0.0 <= fVar6) {
          fVar5 = fVar7;
        }
      }
      fVar7 = 0.0;
      if (0.0 <= fVar5) {
        fVar7 = fVar5;
      }
      fVar5 = fVar7 * _UNK_00e1fea8 + _UNK_00e20754;
    }
    return fVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

