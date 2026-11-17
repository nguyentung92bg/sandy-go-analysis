/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$MilestoneState
int32_t Dino_BusSand_App_Meta_DailyChallengeModel__MilestoneState (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, int32_t index, int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$MilestoneState
   int32_t Dino_BusSand_App_Meta_DailyChallengeModel__MilestoneState
   (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, int32_t index, int64_t nowMs, const
   MethodInfo* method); */

bool Dino_BusSand_App_Meta_DailyChallengeModel__MilestoneState_222e7c4
               (long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if ((bRam0000000004f9be57 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf808);
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04cae228);
    bRam0000000004f9be57 = 1;
  }
  puVar2 = PTR_DAT_04caf808;
  if ((int)param_2 < 0) {
    return false;
  }
  lVar3 = *(long *)PTR_DAT_04caf808;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    if (*(int *)(**(long **)(lVar3 + 0xb8) + 0x18) <= (int)param_2) {
      return false;
    }
    Dino_BusSand_App_Meta_DailyChallengeModel__EnsureMonth_222e490(param_1,param_3);
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x28), lVar3 != 0)) {
      uVar4 = System_Collections_Generic_List_int___Contains_3a2c3ec
                        (lVar3,param_2,*(undefined8 *)PTR_DAT_04cad860);
      if ((uVar4 & 1) != 0) {
        return (bool)2;
      }
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar3 != 0)) {
        lVar5 = *(long *)puVar2;
        iVar1 = *(int *)(lVar3 + 0x18);
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar2;
        }
        lVar3 = **(long **)(lVar5 + 0xb8);
        if (lVar3 != 0) {
          if (*(uint *)(lVar3 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          return *(int *)(lVar3 + (ulong)param_2 * 4 + 0x20) <= iVar1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

