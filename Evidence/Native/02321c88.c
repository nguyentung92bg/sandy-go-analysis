/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$ExecuteCommand
Dino_BusSand_App_Meta_BattleRoyaleCore_Executed_o Dino_BusSand_App_Meta_BattleRoyaleCore__ExecuteCommand (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$ExecuteCommand
   Dino_BusSand_App_Meta_BattleRoyaleCore_Executed_o
   Dino_BusSand_App_Meta_BattleRoyaleCore__ExecuteCommand (Dino_BusSand_App_Meta_BattleRoyaleCore_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleCore__ExecuteCommand_2221c88
               (undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = 0;
  uStack_24 = 0;
  lVar3 = *(long *)(param_2 + 0x10);
  uStack_2c = 0;
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x10);
    uStack_30 = *(undefined4 *)(lVar3 + 0x20);
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_38 = CONCAT44(uStack_30,iVar1);
    if (iVar1 != 0) {
      if (iVar1 == 2) {
        uVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__WinOnce_2222ffc(param_2,&uStack_2c);
        uStack_28 = (undefined4)uVar2;
        uStack_24 = (undefined4)((ulong)uVar2 >> 0x20);
        thunk_FUN_02134474(&uStack_28,uVar2);
      }
      else if (iVar1 == 1) {
        Dino_BusSand_App_Meta_BattleRoyaleCore__LoseOnce_2222e18(param_2);
      }
      lVar3 = *(long *)(param_2 + 0x10);
      if (lVar3 == 0) goto LAB_02321d54;
      uStack_30 = *(undefined4 *)(lVar3 + 0x20);
      *(undefined4 *)(lVar3 + 0x10) = 0;
      Dino_BusSand_App_Meta_BattleRoyaleCore__RefreshTime_2221ee0(param_2);
      lVar3 = *(long *)(param_2 + 0x28);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      }
    }
    param_1[1] = CONCAT44(uStack_2c,uStack_30);
    *param_1 = uStack_38;
    param_1[2] = CONCAT44(uStack_24,uStack_28);
    return;
  }
LAB_02321d54:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

