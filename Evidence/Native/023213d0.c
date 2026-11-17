/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_CurStageDeadPersonNum
int32_t Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurStageDeadPersonNum (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_CurStageDeadPersonNum
   int32_t Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurStageDeadPersonNum
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurStageDeadPersonNum_22213d0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((bRam0000000004f9bdc1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae228);
    bRam0000000004f9bdc1 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x80) == '\0') {
      uVar1 = 0;
    }
    else {
      if (*(long *)(lVar2 + 0xa0) == 0) goto LAB_0232142c;
      uVar1 = *(undefined4 *)(*(long *)(lVar2 + 0xa0) + 0x18);
    }
    return uVar1;
  }
LAB_0232142c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

