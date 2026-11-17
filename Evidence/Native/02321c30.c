/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$Init
void Dino_BusSand_App_Meta_BattleRoyaleCore__Init (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$Init
   void Dino_BusSand_App_Meta_BattleRoyaleCore__Init (Dino_BusSand_App_Meta_BattleRoyaleCore_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleCore__Init_2221c30(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 auStack_28 [2];
  int iStack_14;
  
  uVar2 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(4,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x10) != 0) {
    Dino_BusSand_App_Meta_BattleRoyaleCore__ExecuteCommand_2221c88(auStack_28,param_1);
  }
  if ((bRam0000000004f9bdc3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2180);
    bRam0000000004f9bdc3 = 1;
  }
  iStack_14 = 0;
  uStack_30 = 0;
  auStack_28[0] = 0;
  uStack_38 = 0;
  Dino_BusSand_App_Meta_BattleRoyaleCore__RefreshTime_2221ee0(param_1);
  uVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__IsActive_22211a8(param_1);
  if (((uVar2 & 1) == 0) &&
     (uVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__IsCheatData_2221168(param_1), (uVar2 & 1) == 0
     )) {
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 == 0) {
LAB_02321edc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28))
    ;
    uVar2 = Dino_BusSand_App_Meta_BattleYachtPeriods__Current_2220824
                      (*(undefined8 *)PTR_DAT_04cb2180,1,uVar3,&iStack_14,auStack_28,&uStack_30,
                       &uStack_38);
    if (((uVar2 & 1) != 0) && (0 < iStack_14)) {
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) goto LAB_02321edc;
      if (*(int *)(lVar5 + 0x24) != iStack_14) {
        lVar6 = *(long *)(param_1 + 0x28);
        *(int *)(lVar5 + 0x24) = iStack_14;
        if (lVar6 != 0) {
          (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
          lVar5 = *(long *)(param_1 + 0x10);
          if (lVar5 == 0) goto LAB_02321edc;
        }
      }
      if (*(int *)(lVar5 + 0x48) == 1) {
        lVar6 = *(long *)(param_1 + 0x20);
        if (lVar6 == 0) goto LAB_02321edc;
        lVar7 = *(long *)(lVar5 + 0x30);
        lVar5 = (**(code **)(lVar6 + 0x18))
                          (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
        if (lVar7 < lVar5) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_02321edc;
          iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x38);
          lVar5 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config_22206d8(param_1);
          if (lVar5 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(lVar5 + 0x14);
          }
          if (iVar1 < iVar4) {
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_02321edc;
            lVar5 = *(long *)(param_1 + 0x28);
            *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x48) = 0;
            if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02321ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
              return;
            }
          }
        }
      }
    }
  }
  return;
}

