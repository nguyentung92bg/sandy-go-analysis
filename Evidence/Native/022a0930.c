/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerHallButton.<CountDown>d__14$$MoveNext
bool Dino_BusSand_App_UI_ClimbTowerHallButton__CountDown_d__14__MoveNext (Dino_BusSand_App_UI_ClimbTowerHallButton__CountDown_d__14_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerHallButton.<CountDown>d__14$$MoveNext
   bool Dino_BusSand_App_UI_ClimbTowerHallButton__CountDown_d__14__MoveNext
   (Dino_BusSand_App_UI_ClimbTowerHallButton__CountDown_d__14_o* __this, const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_UI_ClimbTowerHallButton__CountDown_d__14__MoveNext_21a0930(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  if ((bRam0000000004f9ba1d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae6e8);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cae718);
    bRam0000000004f9ba1d = 1;
  }
  puVar2 = PTR_DAT_04cae6e8;
  puVar1 = PTR_DAT_04caca88;
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar4 = *(long *)PTR_DAT_04cae6e8;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = Dino_BusSand_App_UI_ClimbTowerHallButton__get_Alive_219f1e4();
    if ((uVar7 & 1) != 0) {
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar2;
      }
      lVar8 = *(long *)(lVar4 + 0xb8);
      if (*(int *)(lVar8 + 0x20) == 1) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)(*(long *)puVar2 + 0xb8);
        }
        if (*(long *)(lVar8 + 0x18) != 0) {
          lVar4 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_EndMs_22297d0
                            (*(long *)(lVar8 + 0x18),0);
          lVar8 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
          lVar5 = *(long *)puVar2;
          if (lVar4 - lVar8 < 1) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_UI_ClimbTowerHallButton__UpdateState_219f894();
            goto LAB_022a0ac4;
          }
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar5 = *(long *)puVar2;
          }
          lVar4 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
          if (lVar4 != 0) {
            uVar3 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cae718,0);
            lVar4 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
            if (lVar4 != 0) {
              uVar6 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_EndMs_22297d0(lVar4,0);
              uVar6 = Dino_BusSand_App_Meta_StreakTowerUtil__ActivityTimeString_2251b98(uVar6,0);
              Dino_BusSand_App_UI_ClimbTowerHallButton__SetTexts_219f7a4(uVar3,uVar6);
              goto LAB_022a0ac4;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f800000,uVar3,0);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),uVar3);
  }
LAB_022a0ac4:
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = Dino_BusSand_App_UI_ClimbTowerHallButton__get_Alive_219f1e4();
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

