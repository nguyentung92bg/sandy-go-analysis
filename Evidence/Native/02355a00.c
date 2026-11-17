/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$InitActivityState
void Dino_BusSand_App_Meta_YachtRacingCore__InitActivityState (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$InitActivityState
   void Dino_BusSand_App_Meta_YachtRacingCore__InitActivityState
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingCore__InitActivityState_2255a00(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  
  if ((bRam0000000004f9bfec & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bfec = 1;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) goto LAB_02355bdc;
                    /* try { // try from 02355a38 to 02455a5f has its CatchHandler @ 02355fa8 */
  uVar4 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar8 + 0x58),0);
  if ((((uVar4 & 1) != 0) || (*(long *)(lVar8 + 0x68) == 0)) || (*(long *)(lVar8 + 0x70) == 0)) {
    uVar4 = Dino_BusSand_App_Meta_YachtRacingCore__InActivityTime_2255318(param_1);
                    /* try { // try from 02355a9c to 02455ac3 has its CatchHandler @ 02355fa4 */
    iVar2 = Dino_BusSand_App_Meta_SystemOpen__UnlockLevel_2242f94(5);
    if ((uVar4 & 1) == 0) {
      iVar5 = 9;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar3 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
                    /* try { // try from 02355ad0 to 02455adf has its CatchHandler @ 02355f4c */
      iVar5 = 0;
      if (iVar2 <= iVar3) {
        iVar5 = 9;
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
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(lVar8 + 0x14);
  }
  *(undefined4 *)(param_1 + 100) = uVar6;
                    /* try { // try from 02355afc to 02455b07 has its CatchHandler @ 02355f94 */
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_02355bdc;
  lVar8 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468();
  if (lVar8 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
                    /* try { // try from 02355b08 to 02455c5b has its CatchHandler @ 02355760 */
    uVar6 = *(undefined4 *)(lVar8 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x68) = uVar6;
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
        iVar5 = 9;
code_r0x0235550c:
        lVar8 = *(long *)(param_1 + 0x10);
                    /* try { // try from 02355aec to 02455afb has its CatchHandler @ 02355f9c */
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(int *)(lVar8 + 0x2c) != iVar5) {
          lVar7 = *(long *)(param_1 + 0x28);
          *(int *)(lVar8 + 0x2c) = iVar5;
          if (lVar7 != 0) {
            (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28))
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

