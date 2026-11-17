/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$OnBoot
void Dino_BusSand_App_Meta_YachtRacingFeature__OnBoot (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$OnBoot
   void Dino_BusSand_App_Meta_YachtRacingFeature__OnBoot
   (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingFeature__OnBoot_225b228(undefined8 param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  long lVar5;
  int iVar4;
  ulong uVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  Dino_BusSand_App_Meta_YachtRacingFeature__HookSpend_225b250();
  lVar7 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38(param_1);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar8 = 0;
  if ((*(long *)(lVar7 + 0x10) == 0) ||
     (lVar11 = *(long *)(*(long *)(lVar7 + 0x10) + 0xa0), lVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224(lVar7,0);
  }
  if (0 < *(long *)(lVar11 + 0x20)) {
    iVar3 = *(int *)(lVar11 + 0x4c);
    Dino_BusSand_App_Meta_YachtRacingCore__StartStage_225574c
              (lVar7,*(undefined4 *)(lVar11 + 0x10),*(long *)(lVar11 + 0x20),
               *(undefined8 *)(lVar11 + 0x28));
    uVar8 = extraout_x1;
    if ((0 < iVar3) && (lVar5 = *(long *)(lVar7 + 0x58), lVar5 != 0)) {
      *(int *)(lVar7 + 0x60) = iVar3;
      *(int *)(lVar11 + 0x4c) = iVar3;
      Dino_BusSand_App_Meta_RacingRobotSession__OnPlayerProgressChanged_2262b0c(lVar5,iVar3,0);
      uVar8 = extraout_x1_00;
    }
  }
  auVar12._8_8_ = uVar8;
  auVar12._0_8_ = lVar7;
  if ((bRam0000000004f9bfec & 1) == 0) {
    auVar12 = FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bfec = 1;
  }
  lVar11 = *(long *)(lVar7 + 0x10);
  if (lVar11 == 0) goto LAB_02355bdc;
  uVar6 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar11 + 0x58),0);
  if ((((uVar6 & 1) != 0) || (*(long *)(lVar11 + 0x68) == 0)) || (*(long *)(lVar11 + 0x70) == 0)) {
    uVar6 = Dino_BusSand_App_Meta_YachtRacingCore__InActivityTime_2255318(lVar7);
    iVar3 = Dino_BusSand_App_Meta_SystemOpen__UnlockLevel_2242f94(5);
    if ((uVar6 & 1) == 0) {
      iVar9 = 9;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar4 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
      iVar9 = 0;
      if (iVar3 <= iVar4) {
        iVar9 = 9;
      }
    }
    goto code_r0x0235550c;
  }
  auVar12 = Dino_BusSand_App_Meta_YachtRacingCore__RefreshBotsData_2255be0(lVar7);
  if (*(long *)(lVar7 + 0x10) == 0) goto LAB_02355bdc;
  iVar3 = *(int *)(*(long *)(lVar7 + 0x10) + 0x2c);
  auVar12 = Dino_BusSand_App_Meta_YachtRacingCore__get_DataValid_22553cc(lVar7);
  uVar6 = auVar12._0_8_;
  if (*(long *)(lVar7 + 0x10) == 0) goto LAB_02355bdc;
  uVar1 = auVar12._0_4_;
  auVar12 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468(*(long *)(lVar7 + 0x10));
  if (auVar12._0_8_ == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined4 *)(auVar12._0_8_ + 0x14);
  }
  *(undefined4 *)(lVar7 + 100) = uVar10;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = auVar12._8_8_;
  auVar12 = auVar2 << 0x40;
  if (*(long *)(lVar7 + 0x10) == 0) goto LAB_02355bdc;
  auVar12 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468();
  if (auVar12._0_8_ == 0) {
    uVar10 = 0xffffffff;
  }
  else {
    uVar10 = *(undefined4 *)(auVar12._0_8_ + 0x28);
  }
  *(undefined4 *)(lVar7 + 0x68) = uVar10;
  if (*(long *)(lVar7 + 0x10) == 0) goto LAB_02355bdc;
  if ((*(int *)(*(long *)(lVar7 + 0x10) + 0x2c) - 5U < 2) || (iVar3 == 7)) {
    if (iVar3 == 6) {
      Dino_BusSand_App_Meta_YachtRacingCore__ApplyState_225550c(lVar7,7);
    }
    else if ((uVar1 & iVar3 == 7) != 0) goto LAB_02355b70;
    if (*(int *)(lVar7 + 0x6c) == 0) {
      *(undefined4 *)(lVar7 + 0x6c) = 1;
    }
  }
LAB_02355b70:
  if ((uVar6 & 1) == 0) {
    auVar12 = Dino_BusSand_App_Meta_YachtRacingCore__EndStage_225605c(lVar7);
    if (*(long *)(lVar7 + 0x10) == 0) {
LAB_02355bdc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224(auVar12._0_8_,auVar12._8_8_);
    }
    if (*(int *)(*(long *)(lVar7 + 0x10) + 0x2c) - 7U < 0xfffffffe) {
      if (iVar3 == 3) {
        Dino_BusSand_App_Meta_YachtRacingCore__ApplyState_225550c(lVar7,5);
        if (*(int *)(lVar7 + 0x6c) == 0) {
          *(undefined4 *)(lVar7 + 0x6c) = 1;
        }
      }
      else if (iVar3 != 7) {
        iVar9 = 9;
code_r0x0235550c:
        lVar11 = *(long *)(lVar7 + 0x10);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(int *)(lVar11 + 0x2c) != iVar9) {
          lVar5 = *(long *)(lVar7 + 0x28);
          *(int *)(lVar11 + 0x2c) = iVar9;
          if (lVar5 != 0) {
            (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28))
            ;
          }
          lVar7 = *(long *)(lVar7 + 0x30);
          if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0235555c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28))
            ;
            return;
          }
        }
        return;
      }
    }
  }
  return;
}

