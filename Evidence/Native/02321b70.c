/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$NeedShowHallButton
bool Dino_BusSand_App_Meta_BattleRoyaleCore__NeedShowHallButton (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, bool isFromGame, bool lockedBtnShown, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$NeedShowHallButton
   bool Dino_BusSand_App_Meta_BattleRoyaleCore__NeedShowHallButton
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, bool isFromGame, bool lockedBtnShown, const
   MethodInfo* method); */

bool Dino_BusSand_App_Meta_BattleRoyaleCore__NeedShowHallButton_2221b70
               (long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar6 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(4,0);
  if (((((uVar6 & 1) == 0) ||
       (uVar6 = Dino_BusSand_App_Meta_SystemOpen__Guided_2243224(4,0), param_3 = param_2,
       (uVar6 & 1) == 0)) && ((param_3 & 1) == 0)) ||
     (uVar6 = Dino_BusSand_App_Meta_BattleRoyaleCore__IsCheatData_2221168(param_1), (uVar6 & 1) != 0
     )) {
    bVar3 = false;
  }
  else if (*(int *)(param_1 + 0x34) == -1) {
    uVar6 = Dino_BusSand_App_Meta_BattleRoyaleCore__IsActive_22211a8(param_1);
    if ((uVar6 & 1) == 0) {
      if ((bRam0000000004f9bdbe & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb2180);
        bRam0000000004f9bdbe = 1;
      }
      puVar2 = PTR_DAT_04cb2180;
      lVar7 = *(long *)(param_1 + 0x20);
      uStack_30 = 0;
      uStack_28 = 0;
      uStack_38 = 0;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar5 = (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      bVar4 = Dino_BusSand_App_Meta_BattleYachtPeriods__Current_2220824
                        (*(undefined8 *)puVar2,1,uVar5,&stack0xffffffffffffffec,&uStack_28,
                         &uStack_30,&uStack_38);
      return (bool)(bVar4 & 1);
    }
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 0x48);
    bVar3 = false;
    if ((uVar1 != 3) && (uVar1 != 5)) {
      bVar3 = (uVar1 & 0xfffffffb) != 2;
    }
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

