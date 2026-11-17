/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar.<Timer>d__19$$MoveNext
bool Dino_BusSand_App_UI_StreakRateHallBar__Timer_d__19__MoveNext (Dino_BusSand_App_UI_StreakRateHallBar__Timer_d__19_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar.<Timer>d__19$$MoveNext
   bool Dino_BusSand_App_UI_StreakRateHallBar__Timer_d__19__MoveNext
   (Dino_BusSand_App_UI_StreakRateHallBar__Timer_d__19_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_StreakRateHallBar__Timer_d__19__MoveNext_21e3110(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam0000000004f9bbba & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae9a8);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cb0c10);
    bRam0000000004f9bbba = 1;
  }
  puVar2 = PTR_DAT_04cae9a8;
  puVar1 = PTR_DAT_04caca88;
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar4 = *(long *)PTR_DAT_04cae9a8;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = Dino_BusSand_App_UI_StreakRateHallBar__get_Alive_21df1a0();
    if ((uVar5 & 1) != 0) {
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar2;
      }
      lVar7 = *(long *)(lVar4 + 0xb8);
      if (*(char *)(lVar7 + 0x28) == '\0') {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar4 = *(long *)puVar2;
          lVar7 = *(long *)(lVar4 + 0xb8);
        }
        if (0 < *(long *)(lVar7 + 0x30)) {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
          }
          if (*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar3 = UnityEngine_Transform__Find_43d4bec
                            (*(long *)(lVar7 + 0x18),*(undefined8 *)PTR_DAT_04cb0c10,0);
          uVar6 = Dino_BusSand_App_Meta_StreakTowerUtil__ActivityTimeString_2251b98
                            (*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30),0);
          Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar3,uVar6);
          lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
          lVar4 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
          if (lVar7 - lVar4 < 1) {
            lVar4 = *(long *)puVar2;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar4 = *(long *)puVar2;
            }
            *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x30) = 0;
            Dino_BusSand_App_UI_StreakRateHallBar__Refresh_21dfd10();
                    /* try { // try from 022e32e4 to 023e32e7 has its CatchHandler @ 022e3ab4 */
          }
        }
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f000000,uVar3,0);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),uVar3);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_UI_StreakRateHallBar__get_Alive_21df1a0();
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18));
                    /* try { // try from 022e3214 to 023e32af has its CatchHandler @ 022e3abc */
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

