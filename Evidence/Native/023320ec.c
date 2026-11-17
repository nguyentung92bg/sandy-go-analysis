/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$IsInCycleTimeWindow
bool Dino_BusSand_App_Meta_GiftPackCycle__IsInCycleTimeWindow (Dino_BusSand_App_Meta_GiftPackConfig_o* c, int64_t unix, bool firstAttempt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$IsInCycleTimeWindow
   bool Dino_BusSand_App_Meta_GiftPackCycle__IsInCycleTimeWindow
   (Dino_BusSand_App_Meta_GiftPackConfig_o* c, int64_t unix, bool firstAttempt, const MethodInfo*
   method); */

bool Dino_BusSand_App_Meta_GiftPackCycle__IsInCycleTimeWindow_22320ec
               (long param_1,long param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = 0;
  lStack_28 = 0;
  uVar2 = Dino_BusSand_App_Meta_GiftPackCycle__IsFixedCyclePack_223208c();
  if ((uVar2 & 1) != 0) {
    if ((param_3 & 1) == 0) {
      if (param_1 == 0) goto LAB_0233217c;
      iVar1 = *(int *)(param_1 + 0x4c);
    }
    else {
      if (param_1 == 0) {
LAB_0233217c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0233217c to 02432183 has its CatchHandler @ 023322a0 */
        FUN_02133224();
      }
      iVar1 = *(int *)(param_1 + 0x48);
    }
    if (iVar1 != 0) {
      uVar2 = Dino_BusSand_App_Meta_GiftPackCycle__TryGetCycleRange_2232180
                        (param_1,param_2,&lStack_28,&lStack_30);
      if ((uVar2 & 1) == 0) {
        return false;
      }
                    /* try { // try from 02332160 to 02432167 has its CatchHandler @ 023322b8 */
      if (param_2 < lStack_28) {
        return false;
      }
      return param_2 <= lStack_30;
    }
  }
  return true;
}

