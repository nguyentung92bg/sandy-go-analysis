/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$LiveBots
int32_t Dino_BusSand_App_Meta_BattleRoyaleRules__LiveBots (Dino_BusSand_App_Meta_BattleRoyaleData_o* d, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$LiveBots
   int32_t Dino_BusSand_App_Meta_BattleRoyaleRules__LiveBots
   (Dino_BusSand_App_Meta_BattleRoyaleData_o* d, const MethodInfo* method); */

int Dino_BusSand_App_Meta_BattleRoyaleRules__LiveBots_22212e4(long param_1)

{
  int iVar1;
  
  if ((bRam0000000004f9bdf2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae228);
    bRam0000000004f9bdf2 = 1;
  }
  if ((param_1 == 0) || (*(char *)(param_1 + 0x80) == '\0')) {
    iVar1 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar1 = *(int *)(param_1 + 0x84) - *(int *)(*(long *)(param_1 + 0x90) + 0x18);
  }
  return iVar1;
}

