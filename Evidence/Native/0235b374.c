/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$OnLevelWin
void Dino_BusSand_App_Meta_YachtRacingFeature__OnLevelWin (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, int32_t type, int32_t clearedLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0235838c) */
/* WARNING: Removing unreachable block (ram,0x02358454) */
/* WARNING: Removing unreachable block (ram,0x02358460) */
/* WARNING: Removing unreachable block (ram,0x023584d4) */
/* WARNING: Removing unreachable block (ram,0x023584dc) */
/* WARNING: Removing unreachable block (ram,0x023584e8) */
/* WARNING: Removing unreachable block (ram,0x023584f8) */
/* WARNING: Removing unreachable block (ram,0x02358504) */
/* WARNING: Removing unreachable block (ram,0x0235853c) */
/* WARNING: Removing unreachable block (ram,0x02358544) */
/* WARNING: Removing unreachable block (ram,0x0235854c) */
/* WARNING: Removing unreachable block (ram,0x02358558) */
/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$OnLevelWin
   void Dino_BusSand_App_Meta_YachtRacingFeature__OnLevelWin
   (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, int32_t type, int32_t clearedLevel, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingFeature__OnLevelWin_225b374(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar7 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_App_Meta_YachtRacingCore__OnPlayerWin_225624c(lVar7,0);
  uVar5 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(5,1,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar10 = *(long *)(lVar7 + 0x10);
  if (lVar10 == 0) {
LAB_023583ec:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar5 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar10 + 0x58),0);
  if ((((uVar5 & 1) != 0) || (*(long *)(lVar10 + 0x68) == 0)) || (*(long *)(lVar10 + 0x70) == 0)) {
    uVar5 = Dino_BusSand_App_Meta_YachtRacingCore__InActivityTime_2255318(lVar7);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if ((bRam0000000004f9bff3 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cb2168);
      bRam0000000004f9bff3 = 1;
    }
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    Dino_BusSand_App_Meta_SystemOpen__NextNeedWinTimes_22435b8(5);
    if ((*(long *)(lVar7 + 0x10) != 0) && (lVar7 = *(long *)(lVar7 + 0x20), lVar7 != 0)) {
      uVar6 = (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      Dino_BusSand_App_Meta_BattleYachtPeriods__Current_2220824
                (*(undefined8 *)PTR_DAT_04cb2168,1,uVar6,&stack0xffffffffffffffdc,&uStack_30,
                 &uStack_38,&uStack_40,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(long *)(lVar7 + 0x10) == 0) goto LAB_023583ec;
  lVar10 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468();
  if (lVar10 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined4 *)(lVar10 + 0x14);
  }
  *(undefined4 *)(lVar7 + 100) = uVar9;
  if (*(long *)(lVar7 + 0x10) == 0) goto LAB_023583ec;
  lVar10 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468();
  if (lVar10 == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = *(undefined4 *)(lVar10 + 0x28);
  }
  lVar10 = *(long *)(lVar7 + 0x10);
  *(undefined4 *)(lVar7 + 0x68) = uVar9;
  if (lVar10 == 0) goto LAB_023583ec;
  iVar1 = *(int *)(lVar10 + 0x2c);
  *(int *)(lVar10 + 0x28) = *(int *)(lVar10 + 0x28) + 1;
  Dino_BusSand_App_Meta_YachtRacingCore__RefreshBotsData_2255be0(lVar7);
  uVar4 = Dino_BusSand_App_Meta_YachtRacingCore__get_DataValid_22553cc(lVar7);
  lVar10 = *(long *)(lVar7 + 0x10);
  if (lVar10 == 0) goto LAB_023583ec;
  iVar2 = *(int *)(lVar10 + 0x2c);
  if (iVar1 == 3 && ((uVar4 ^ 0xffffffff) & 1) == 0) {
    *(int *)(lVar10 + 0x88) = *(int *)(lVar10 + 0x88) + 1;
  }
  if ((uVar4 & 1) == 0 && 2 < iVar2 - 5U) {
    if (iVar1 == 3) {
      Dino_BusSand_App_Meta_YachtRacingCore__ApplyState_225550c(lVar7,5);
      if (*(int *)(lVar7 + 0x6c) == 0) {
        *(undefined4 *)(lVar7 + 0x6c) = 1;
      }
LAB_023582ac:
      Dino_BusSand_App_Meta_YachtRacingCore__EndStage_225605c(lVar7);
LAB_023582b4:
      if (*(int *)(lVar7 + 0x6c) == 0) {
        *(undefined4 *)(lVar7 + 0x6c) = 1;
      }
      goto LAB_023582dc;
    }
    Dino_BusSand_App_Meta_YachtRacingCore__ApplyState_225550c(lVar7,9);
  }
  else if (iVar2 < 5) {
    if (iVar2 != 1) {
      if (iVar2 == 3) {
        *(undefined1 *)(lVar7 + 0x70) = 1;
        uVar9 = *(undefined4 *)(lVar7 + 100);
        lVar10 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468(lVar10);
        if (lVar10 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(lVar10 + 0x14);
        }
        if (*(long *)(lVar7 + 0x10) == 0) goto LAB_023583ec;
        uVar3 = *(undefined4 *)(lVar7 + 0x68);
        lVar10 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468();
        if (lVar10 == 0) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = *(undefined4 *)(lVar10 + 0x28);
        }
        Dino_BusSand_App_Meta_YachtRacingCore__Track_225659c(lVar7,1,uVar9,uVar11,uVar3,uVar8,0);
      }
      else if ((iVar2 == 4) &&
              (uVar5 = Dino_BusSand_App_Meta_YachtRacingCore__CheckRecoverFromCoolTime_225857c
                                 (lVar7), (uVar5 & 1) != 0)) {
        lVar10 = *(long *)(lVar7 + 0x10);
        if (lVar10 == 0) goto LAB_023583ec;
        *(undefined8 *)(lVar10 + 0x40) = 0;
        *(undefined8 *)(lVar10 + 0x48) = 0;
        Dino_BusSand_App_Meta_YachtRacingCore__ApplyState_225550c(lVar7,2);
        if (*(int *)(lVar7 + 0x6c) == 0) {
          *(undefined4 *)(lVar7 + 0x6c) = 2;
        }
      }
      goto LAB_023582dc;
    }
  }
  else {
    if (iVar2 < 7) {
      if (iVar2 != 5) {
        if (iVar2 != 6) goto LAB_023582dc;
        *(undefined1 *)(lVar7 + 0x70) = 1;
      }
      goto LAB_023582ac;
    }
    if (iVar2 == 7) {
      if ((uVar4 & 1) != 0) goto LAB_023582dc;
      goto LAB_023582b4;
    }
    if (iVar2 != 9) goto LAB_023582dc;
  }
  Dino_BusSand_App_Meta_YachtRacingCore__StartNewPeriod_22583f0(lVar7,0);
LAB_023582dc:
  lVar7 = *(long *)(lVar7 + 0x28);
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023582fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
  return;
}

