/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel.<CountDown>d__55$$MoveNext
bool Dino_BusSand_App_UI_ClimbTowerPanel__CountDown_d__55__MoveNext (Dino_BusSand_App_UI_ClimbTowerPanel__CountDown_d__55_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel.<CountDown>d__55$$MoveNext
   bool Dino_BusSand_App_UI_ClimbTowerPanel__CountDown_d__55__MoveNext
   (Dino_BusSand_App_UI_ClimbTowerPanel__CountDown_d__55_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_ClimbTowerPanel__CountDown_d__55__MoveNext_21a6a88(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if ((bRam0000000004f9ba47 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cade40);
    FUN_02132f7c(PTR_DAT_04cadcc8);
    FUN_02132f7c(PTR_DAT_04cae920);
    bRam0000000004f9ba47 = 1;
  }
  puVar1 = PTR_DAT_04caca88;
  lVar7 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f800000,uVar2,0);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),uVar2);
  }
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x2c) != '\0') {
      return 0;
    }
    if (*(long *)(lVar7 + 0x38) != 0) {
      lVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_EndMs_22297d0(*(long *)(lVar7 + 0x38),0);
      lVar4 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
      lVar5 = *(long *)(lVar7 + 0x38);
      if (lVar3 - lVar4 < 1) {
        if (lVar5 != 0) {
          Dino_BusSand_App_Meta_ClimbTowerFeature__SetActivityPeriodEnd_222a59c(lVar5,0);
          lVar4 = *(long *)PTR_DAT_04ca9d18;
          lVar3 = *(long *)(lVar4 + 0x38);
          if (lVar3 == 0) {
            FUN_0216b4cc(lVar4);
            lVar3 = *(long *)(lVar4 + 0x38);
          }
          lVar3 = *(long *)(lVar3 + 0x10);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0216b470();
          }
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0216b470();
          }
          Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
                    (lVar7,*(undefined8 *)PTR_DAT_04cade40,*(undefined8 *)PTR_DAT_04cadcc8,
                     **(undefined8 **)(lVar3 + 0xb8),0);
          if (*(long *)(lVar7 + 0x38) != 0) {
            uVar6 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsOldPeriodClaimDone_222a780
                              (*(long *)(lVar7 + 0x38),0);
            if ((uVar6 & 1) == 0) {
              return 0;
            }
            Dino_BusSand_App_UI_UIPanel__Show_21f4018(lVar7,*(undefined8 *)PTR_DAT_04cae920,1,0);
            return 0;
          }
        }
      }
      else if (lVar5 != 0) {
        uVar2 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_EndMs_22297d0(lVar5,0);
        uVar2 = Dino_BusSand_App_Meta_StreakTowerUtil__ActivityTimeString_2251b98(uVar2,0);
        Dino_BusSand_App_UI_UIPanel__Txt_2200924(lVar7,*(undefined8 *)PTR_DAT_04cade40,uVar2,0);
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18));
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

