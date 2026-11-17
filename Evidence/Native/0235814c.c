/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$HandleGameResult
void Dino_BusSand_App_Meta_YachtRacingCore__HandleGameResult (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, bool win, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


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
/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$HandleGameResult
   void Dino_BusSand_App_Meta_YachtRacingCore__HandleGameResult
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, bool win, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingCore__HandleGameResult_225814c(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar5 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(5);
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
LAB_023583ec:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar5 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar9 + 0x58),0);
                    /* try { // try from 02358188 to 024581db has its CatchHandler @ 02358188
                       catch() { ... } // from try @ 02358188 with catch @ 02358188
                       catch() { ... } // from try @ 02358204 with catch @ 02358188
                       catch() { ... } // from try @ 023582d4 with catch @ 02358188
                       catch() { ... } // from try @ 0235833c with catch @ 02358188
                       catch() { ... } // from try @ 0235837c with catch @ 02358188
                       catch() { ... } // from try @ 02358420 with catch @ 02358188
                       catch() { ... } // from try @ 02358484 with catch @ 02358188
                       catch() { ... } // from try @ 023584c8 with catch @ 02358188
                       catch() { ... } // from try @ 0235850c with catch @ 02358188 */
  if ((((uVar5 & 1) != 0) || (*(long *)(lVar9 + 0x68) == 0)) || (*(long *)(lVar9 + 0x70) == 0)) {
    uVar5 = Dino_BusSand_App_Meta_YachtRacingCore__InActivityTime_2255318(param_1);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if ((bRam0000000004f9bff3 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cb2168);
      bRam0000000004f9bff3 = 1;
    }
    uStack_38 = 0;
    uStack_40 = 0;
    Dino_BusSand_App_Meta_SystemOpen__NextNeedWinTimes_22435b8(5);
    if ((*(long *)(param_1 + 0x10) != 0) && (lVar9 = *(long *)(param_1 + 0x20), lVar9 != 0)) {
      uVar8 = (**(code **)(lVar9 + 0x18))
                        (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
      Dino_BusSand_App_Meta_BattleYachtPeriods__Current_2220824
                (*(undefined8 *)PTR_DAT_04cb2168,1,uVar8,&stack0xffffffffffffffdc,
                 &stack0xffffffffffffffd0,&uStack_38,&uStack_40,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_023583ec;
  lVar9 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468();
  if (lVar9 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(lVar9 + 0x14);
  }
  *(undefined4 *)(param_1 + 100) = uVar7;
                    /* try { // try from 023581dc to 024581df has its CatchHandler @ 023584dc */
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_023583ec;
                    /* try { // try from 023581e0 to 024581e7 has its CatchHandler @ 023584d8 */
  lVar9 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468();
  if (lVar9 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = *(undefined4 *)(lVar9 + 0x28);
                    /* try { // try from 023581ec to 024581ef has its CatchHandler @ 023584d4 */
  }
  lVar9 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x68) = uVar7;
                    /* try { // try from 023581fc to 02458203 has its CatchHandler @ 023584d0 */
  if (lVar9 == 0) goto LAB_023583ec;
  iVar1 = *(int *)(lVar9 + 0x2c);
                    /* try { // try from 02358204 to 024582b7 has its CatchHandler @ 02358188 */
  *(int *)(lVar9 + 0x28) = *(int *)(lVar9 + 0x28) + 1;
  Dino_BusSand_App_Meta_YachtRacingCore__RefreshBotsData_2255be0(param_1);
  uVar4 = Dino_BusSand_App_Meta_YachtRacingCore__get_DataValid_22553cc(param_1);
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) goto LAB_023583ec;
  iVar2 = *(int *)(lVar9 + 0x2c);
  if (iVar1 == 3 && ((uVar4 ^ 0xffffffff) & 1) == 0) {
    *(int *)(lVar9 + 0x88) = *(int *)(lVar9 + 0x88) + 1;
  }
  if ((uVar4 & 1) == 0 && 2 < iVar2 - 5U) {
    if (iVar1 == 3) {
      Dino_BusSand_App_Meta_YachtRacingCore__ApplyState_225550c(param_1,5);
      if (*(int *)(param_1 + 0x6c) == 0) {
        *(undefined4 *)(param_1 + 0x6c) = 1;
      }
LAB_023582ac:
      Dino_BusSand_App_Meta_YachtRacingCore__EndStage_225605c(param_1);
LAB_023582b4:
                    /* try { // try from 023582b8 to 024582c3 has its CatchHandler @ 023583f8 */
      if (*(int *)(param_1 + 0x6c) == 0) {
        *(undefined4 *)(param_1 + 0x6c) = 1;
                    /* try { // try from 023582c4 to 024582d3 has its CatchHandler @ 023583f4 */
      }
      goto LAB_023582dc;
    }
    Dino_BusSand_App_Meta_YachtRacingCore__ApplyState_225550c(param_1,9);
  }
  else if (iVar2 < 5) {
    if (iVar2 != 1) {
      if (iVar2 == 3) {
                    /* try { // try from 0235837c to 0245841b has its CatchHandler @ 02358188 */
        if ((param_2 & 1) == 0) {
          uVar8 = 2;
        }
        else {
          uVar8 = 1;
          *(undefined1 *)(param_1 + 0x70) = 1;
        }
        uVar7 = *(undefined4 *)(param_1 + 100);
        lVar9 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468(lVar9);
        if (lVar9 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)(lVar9 + 0x14);
        }
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_023583ec;
        uVar3 = *(undefined4 *)(param_1 + 0x68);
        lVar9 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468();
        if (lVar9 == 0) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = *(undefined4 *)(lVar9 + 0x28);
        }
        Dino_BusSand_App_Meta_YachtRacingCore__Track_225659c
                  (param_1,uVar8,uVar7,uVar10,uVar3,uVar6,0);
      }
      else {
                    /* try { // try from 02358330 to 0245833b has its CatchHandler @ 02358350 */
        if ((iVar2 == 4) &&
           (uVar5 = Dino_BusSand_App_Meta_YachtRacingCore__CheckRecoverFromCoolTime_225857c(param_1)
           , (uVar5 & 1) != 0)) {
          lVar9 = *(long *)(param_1 + 0x10);
          if (lVar9 == 0) goto LAB_023583ec;
                    /* try { // try from 0235833c to 02458367 has its CatchHandler @ 02358188 */
          *(undefined8 *)(lVar9 + 0x40) = 0;
          *(undefined8 *)(lVar9 + 0x48) = 0;
          Dino_BusSand_App_Meta_YachtRacingCore__ApplyState_225550c(param_1,2);
                    /* catch() { ... } // from try @ 02358330 with catch @ 02358350 */
          if (*(int *)(param_1 + 0x6c) == 0) {
            *(undefined4 *)(param_1 + 0x6c) = 2;
          }
        }
      }
      goto LAB_023582dc;
    }
  }
  else {
    if (iVar2 < 7) {
      if (iVar2 != 5) {
        if (iVar2 != 6) goto LAB_023582dc;
        if ((param_2 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x70) = 1;
        }
      }
      goto LAB_023582ac;
    }
    if (iVar2 == 7) {
      if ((uVar4 & 1) != 0) goto LAB_023582dc;
      goto LAB_023582b4;
    }
                    /* try { // try from 02358368 to 0245837b has its CatchHandler @ 023584c0 */
    if (iVar2 != 9) goto LAB_023582dc;
  }
                    /* try { // try from 023582d4 to 0245832f has its CatchHandler @ 02358188 */
  Dino_BusSand_App_Meta_YachtRacingCore__StartNewPeriod_22583f0(param_1,0);
LAB_023582dc:
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023582fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
  return;
}

