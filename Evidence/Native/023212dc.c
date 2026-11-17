/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_LivePersonNum
int32_t Dino_BusSand_App_Meta_BattleRoyaleCore__get_LivePersonNum (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_LivePersonNum
   int32_t Dino_BusSand_App_Meta_BattleRoyaleCore__get_LivePersonNum
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

int Dino_BusSand_App_Meta_BattleRoyaleCore__get_LivePersonNum_22212dc(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if ((bRam0000000004f9bdf2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae228);
    bRam0000000004f9bdf2 = 1;
  }
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x80) == '\0')) {
    iVar1 = 0;
  }
  else {
    if (*(long *)(lVar2 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar1 = *(int *)(lVar2 + 0x84) - *(int *)(*(long *)(lVar2 + 0x90) + 0x18);
  }
  return iVar1;
}

