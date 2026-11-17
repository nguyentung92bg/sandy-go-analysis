/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeFeature$$MilestoneState
int32_t Dino_BusSand_App_Meta_DailyChallengeFeature__MilestoneState (Dino_BusSand_App_Meta_DailyChallengeFeature_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeFeature$$MilestoneState
   int32_t Dino_BusSand_App_Meta_DailyChallengeFeature__MilestoneState
   (Dino_BusSand_App_Meta_DailyChallengeFeature_o* __this, int32_t i, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_DailyChallengeFeature__MilestoneState_222fc18
               (undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = Dino_BusSand_App_Meta_DailyChallengeFeature__get_Model_222f838();
  uVar6 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9be57 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf808);
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04cae228);
    bRam0000000004f9be57 = 1;
  }
  puVar2 = PTR_DAT_04caf808;
  if (-1 < (int)param_2) {
    lVar3 = *(long *)PTR_DAT_04caf808;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
      if (*(int *)(**(long **)(lVar3 + 0xb8) + 0x18) <= (int)param_2) {
        return false;
      }
      Dino_BusSand_App_Meta_DailyChallengeModel__EnsureMonth_222e490(lVar5,uVar6);
      if ((*(long *)(lVar5 + 0x10) != 0) &&
         (lVar3 = *(long *)(*(long *)(lVar5 + 0x10) + 0x28), lVar3 != 0)) {
        uVar4 = System_Collections_Generic_List_int___Contains_3a2c3ec
                          (lVar3,(ulong)param_2,*(undefined8 *)PTR_DAT_04cad860);
        if ((uVar4 & 1) != 0) {
          return (bool)2;
        }
        if ((*(long *)(lVar5 + 0x10) != 0) &&
           (lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + 0x20), lVar5 != 0)) {
          lVar3 = *(long *)puVar2;
          iVar1 = *(int *)(lVar5 + 0x18);
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar3 = *(long *)puVar2;
          }
          lVar5 = **(long **)(lVar3 + 0xb8);
          if (lVar5 != 0) {
            if (*(uint *)(lVar5 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            return *(int *)(lVar5 + (ulong)param_2 * 4 + 0x20) <= iVar1;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return false;
}

