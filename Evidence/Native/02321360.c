/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_SpecialWinPersonNum
int32_t Dino_BusSand_App_Meta_BattleRoyaleCore__get_SpecialWinPersonNum (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_SpecialWinPersonNum
   int32_t Dino_BusSand_App_Meta_BattleRoyaleCore__get_SpecialWinPersonNum
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

int Dino_BusSand_App_Meta_BattleRoyaleCore__get_SpecialWinPersonNum_2221360(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if ((bRam0000000004f9bdc0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae228);
    bRam0000000004f9bdc0 = 1;
  }
  iVar1 = Dino_BusSand_App_Meta_BattleRoyaleRules__LiveBots_22212e4(*(undefined8 *)(param_1 + 0x10))
  ;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x80) == '\0') {
      iVar2 = 0;
    }
    else {
      if (*(long *)(lVar3 + 0xa0) == 0) goto LAB_023213cc;
      iVar2 = *(int *)(*(long *)(lVar3 + 0xa0) + 0x18);
    }
    return iVar1 + iVar2 + 1;
  }
LAB_023213cc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

