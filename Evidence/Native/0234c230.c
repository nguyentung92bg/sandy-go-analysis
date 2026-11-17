/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$CurRewardId
int32_t Dino_BusSand_App_Meta_StreakRateFeature__CurRewardId (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$CurRewardId
   int32_t Dino_BusSand_App_Meta_StreakRateFeature__CurRewardId
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s,
   const MethodInfo* method); */

undefined4
Dino_BusSand_App_Meta_StreakRateFeature__CurRewardId_224c230(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000004f9bfa5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bfa5 = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_StreakRateFeature__RewardIds_224bf94(param_1,param_2);
  if (param_2 != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = *(long *)(lVar3 + 0x18);
    if (lVar4 != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x48);
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)(lVar3 + 0x18);
      }
      uVar2 = System_Math__Min_4831118(uVar1,(int)lVar4 + -1,0);
      if (uVar2 < *(uint *)(lVar3 + 0x18)) {
        return *(undefined4 *)(lVar3 + (long)(int)uVar2 * 4 + 0x20);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
  return 0;
}

