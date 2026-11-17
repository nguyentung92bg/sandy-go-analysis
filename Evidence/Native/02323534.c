/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$ApplyFinalStageRule
int32_t Dino_BusSand_App_Meta_BattleRoyaleRules__ApplyFinalStageRule (int32_t eliminations, int32_t currentPlayerCount, Dino_BusSand_App_Meta_BattleRoyaleFinalStage_o* fsp, System_Random_o* rng, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$ApplyFinalStageRule
   int32_t Dino_BusSand_App_Meta_BattleRoyaleRules__ApplyFinalStageRule (int32_t eliminations,
   int32_t currentPlayerCount, Dino_BusSand_App_Meta_BattleRoyaleFinalStage_o* fsp, System_Random_o*
   rng, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_BattleRoyaleRules__ApplyFinalStageRule_2223534
               (uint param_1,int param_2,long param_3,long *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((bRam0000000004f9bdea & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bdea = 1;
  }
  if (param_3 != 0) {
    iVar3 = *(int *)(param_3 + 0x20);
    if (iVar3 < param_2) {
      iVar1 = *(int *)(param_3 + 0x1c);
      if ((int)(param_2 - param_1) < iVar1) {
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = System_Math__Max_4830fc8(iVar1 + 1,iVar3,0);
        if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        iVar3 = (**(code **)(*param_4 + 0x198))
                          (param_4,iVar1,uVar2,*(undefined8 *)(*param_4 + 0x1a0));
        param_1 = param_2 - iVar3 & (param_2 - iVar3 >> 0x1f ^ 0xffffffffU);
      }
    }
    else {
      param_1 = 1;
    }
  }
  return param_1;
}

