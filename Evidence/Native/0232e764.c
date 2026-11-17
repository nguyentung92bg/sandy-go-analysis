/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$DoneCount
int32_t Dino_BusSand_App_Meta_DailyChallengeModel__DoneCount (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$DoneCount
   int32_t Dino_BusSand_App_Meta_DailyChallengeModel__DoneCount
   (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, int64_t nowMs, const MethodInfo* method);
    */

undefined4
Dino_BusSand_App_Meta_DailyChallengeModel__DoneCount_222e764(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((bRam0000000004f9be56 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae228);
    bRam0000000004f9be56 = 1;
  }
  Dino_BusSand_App_Meta_DailyChallengeModel__EnsureMonth_222e490(param_1,param_2);
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar1 != 0)) {
    return *(undefined4 *)(lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

