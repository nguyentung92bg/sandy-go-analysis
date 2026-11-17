/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$CurMaxScore
int32_t Dino_BusSand_App_Meta_StreakRateFeature__CurMaxScore (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$CurMaxScore
   int32_t Dino_BusSand_App_Meta_StreakRateFeature__CurMaxScore
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s,
   const MethodInfo* method); */

undefined4
Dino_BusSand_App_Meta_StreakRateFeature__CurMaxScore_224c1d0(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = Dino_BusSand_App_Meta_StreakRateFeature__NeedScores_224bf28();
  if (param_2 != 0) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(long *)(lVar2 + 0x18) != 0) {
      uVar1 = *(uint *)(param_2 + 0x48);
      uVar3 = (uint)*(long *)(lVar2 + 0x18);
      if ((int)uVar1 < (int)uVar3) {
        if (uVar3 <= uVar1) {
LAB_0234c22c:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
      }
      else {
        if (uVar3 == 0) goto LAB_0234c22c;
        uVar1 = uVar3 - 1;
      }
      return *(undefined4 *)(lVar2 + (long)(int)uVar1 * 4 + 0x20);
    }
  }
  return 0;
}

