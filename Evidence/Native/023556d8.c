/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$Init
void Dino_BusSand_App_Meta_YachtRacingCore__Init (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$Init
   void Dino_BusSand_App_Meta_YachtRacingCore__Init (Dino_BusSand_App_Meta_YachtRacingCore_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingCore__Init_22556d8(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0xa0), lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (0 < *(long *)(lVar8 + 0x20)) {
    iVar2 = *(int *)(lVar8 + 0x4c);
    Dino_BusSand_App_Meta_YachtRacingCore__StartStage_225574c
              (param_1,*(undefined4 *)(lVar8 + 0x10),*(long *)(lVar8 + 0x20),
               *(undefined8 *)(lVar8 + 0x28));
    if ((0 < iVar2) && (lVar4 = *(long *)(param_1 + 0x58), lVar4 != 0)) {
      *(int *)(param_1 + 0x60) = iVar2;
      *(int *)(lVar8 + 0x4c) = iVar2;
      Dino_BusSand_App_Meta_RacingRobotSession__OnPlayerProgressChanged_2262b0c(lVar4,iVar2,0);
    }
  }
  if ((bRam0000000004f9bfec & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bfec = 1;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) goto LAB_02355bdc;
  uVar5 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar8 + 0x58),0);
  if ((((uVar5 & 1) != 0) || (*(long *)(lVar8 + 0x68) == 0)) || (*(long *)(lVar8 + 0x70) == 0)) {
    uVar5 = Dino_BusSand_App_Meta_YachtRacingCore__InActivityTime_2255318(param_1);
    iVar2 = Dino_BusSand_App_Meta_SystemOpen__UnlockLevel_2242f94(5);
    if ((uVar5 & 1) == 0) {
      iVar6 = 9;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar3 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
      iVar6 = 0;
      if (iVar2 <= iVar3) {
        iVar6 = 9;
      }
    }
    goto code_r0x0235550c;
  }
  Dino_BusSand_App_Meta_YachtRacingCore__RefreshBotsData_2255be0(param_1);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_02355bdc;
  iVar2 = *(int *)(*(long *)(param_1 + 0x10) + 0x2c);
  bVar1 = Dino_BusSand_App_Meta_YachtRacingCore__get_DataValid_22553cc(param_1);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_02355bdc;
  lVar8 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468(*(long *)(param_1 + 0x10));
  if (lVar8 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(lVar8 + 0x14);
  }
  *(undefined4 *)(param_1 + 100) = uVar7;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_02355bdc;
  lVar8 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468();
  if (lVar8 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = *(undefined4 *)(lVar8 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x68) = uVar7;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_02355bdc;
  if ((*(int *)(*(long *)(param_1 + 0x10) + 0x2c) - 5U < 2) || (iVar2 == 7)) {
    if (iVar2 == 6) {
      Dino_BusSand_App_Meta_YachtRacingCore__ApplyState_225550c(param_1,7);
    }
    else if ((bVar1 & iVar2 == 7) != 0) goto LAB_02355b70;
    if (*(int *)(param_1 + 0x6c) == 0) {
      *(undefined4 *)(param_1 + 0x6c) = 1;
    }
  }
LAB_02355b70:
  if ((bVar1 & 1) == 0) {
    Dino_BusSand_App_Meta_YachtRacingCore__EndStage_225605c(param_1);
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_02355bdc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x2c) - 7U < 0xfffffffe) {
      if (iVar2 == 3) {
        Dino_BusSand_App_Meta_YachtRacingCore__ApplyState_225550c(param_1,5);
        if (*(int *)(param_1 + 0x6c) == 0) {
          *(undefined4 *)(param_1 + 0x6c) = 1;
        }
      }
      else if (iVar2 != 7) {
        iVar6 = 9;
code_r0x0235550c:
        lVar8 = *(long *)(param_1 + 0x10);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(int *)(lVar8 + 0x2c) != iVar6) {
          lVar4 = *(long *)(param_1 + 0x28);
          *(int *)(lVar8 + 0x2c) = iVar6;
          if (lVar4 != 0) {
            (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28))
            ;
          }
          lVar8 = *(long *)(param_1 + 0x30);
          if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0235555c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28))
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

