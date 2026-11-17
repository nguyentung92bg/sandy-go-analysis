/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$AddFinishedGameNum
void Dino_BusSand_App_Meta_BattleRoyaleCore__AddFinishedGameNum (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$AddFinishedGameNum
   void Dino_BusSand_App_Meta_BattleRoyaleCore__AddFinishedGameNum
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleCore__AddFinishedGameNum_22239f4(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar2 = *(int *)(lVar4 + 0x60);
  if (iVar2 < 2000000000) {
    iVar1 = iVar2 + 1;
    *(int *)(lVar4 + 0x60) = iVar1;
    uVar3 = 0;
    if ((long)iVar1 != 0) {
      uVar3 = (undefined4)
              (((long)*(int *)(lVar4 + 0x54) + (long)*(int *)(lVar4 + 0x58) * (long)iVar2) /
              (long)iVar1);
    }
    *(undefined4 *)(lVar4 + 0x58) = uVar3;
    return;
  }
  *(undefined4 *)(lVar4 + 0x54) = 0;
  return;
}

