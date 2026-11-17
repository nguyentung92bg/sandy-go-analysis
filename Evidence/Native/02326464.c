/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$OnBoot
void Dino_BusSand_App_Meta_BattleRoyaleFeature__OnBoot (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$OnBoot
   void Dino_BusSand_App_Meta_BattleRoyaleFeature__OnBoot
   (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleFeature__OnBoot_2226464(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 auStack_28 [2];
  int iStack_14;
  
  Dino_BusSand_App_Meta_BattleRoyaleFeature__HookSpend_2226488();
  lVar4 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_Core_22262b8(param_1);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar2 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(4,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(*(long *)(lVar4 + 0x10) + 0x10) != 0) {
    Dino_BusSand_App_Meta_BattleRoyaleCore__ExecuteCommand_2221c88(auStack_28,lVar4);
  }
  if ((bRam0000000004f9bdc3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2180);
    bRam0000000004f9bdc3 = 1;
  }
  iStack_14 = 0;
  uStack_30 = 0;
  auStack_28[0] = 0;
  uStack_38 = 0;
  Dino_BusSand_App_Meta_BattleRoyaleCore__RefreshTime_2221ee0(lVar4);
  uVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__IsActive_22211a8(lVar4);
  if (((uVar2 & 1) == 0) &&
     (uVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__IsCheatData_2221168(lVar4), (uVar2 & 1) == 0))
  {
    lVar6 = *(long *)(lVar4 + 0x20);
    if (lVar6 == 0) {
LAB_02321edc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28))
    ;
    uVar2 = Dino_BusSand_App_Meta_BattleYachtPeriods__Current_2220824
                      (*(undefined8 *)PTR_DAT_04cb2180,1,uVar3,&iStack_14,auStack_28,&uStack_30,
                       &uStack_38);
    if (((uVar2 & 1) != 0) && (0 < iStack_14)) {
      lVar6 = *(long *)(lVar4 + 0x10);
      if (lVar6 == 0) goto LAB_02321edc;
      if (*(int *)(lVar6 + 0x24) != iStack_14) {
        lVar7 = *(long *)(lVar4 + 0x28);
        *(int *)(lVar6 + 0x24) = iStack_14;
        if (lVar7 != 0) {
          (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
          lVar6 = *(long *)(lVar4 + 0x10);
          if (lVar6 == 0) goto LAB_02321edc;
        }
      }
      if (*(int *)(lVar6 + 0x48) == 1) {
        lVar7 = *(long *)(lVar4 + 0x20);
        if (lVar7 == 0) goto LAB_02321edc;
        lVar8 = *(long *)(lVar6 + 0x30);
        lVar6 = (**(code **)(lVar7 + 0x18))
                          (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
        if (lVar8 < lVar6) {
          if (*(long *)(lVar4 + 0x10) == 0) goto LAB_02321edc;
          iVar1 = *(int *)(*(long *)(lVar4 + 0x10) + 0x38);
          lVar6 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config_22206d8(lVar4);
          if (lVar6 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(lVar6 + 0x14);
          }
          if (iVar1 < iVar5) {
            if (*(long *)(lVar4 + 0x10) == 0) goto LAB_02321edc;
            lVar6 = *(long *)(lVar4 + 0x28);
            *(undefined4 *)(*(long *)(lVar4 + 0x10) + 0x48) = 0;
            if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02321ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
              return;
            }
          }
        }
      }
    }
  }
  return;
}

