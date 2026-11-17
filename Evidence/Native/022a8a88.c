/* IL2CPP: Dino.BusSand.App.UI.SimpleClimbTowerPanel.<CountDown>d__4$$MoveNext
bool Dino_BusSand_App_UI_SimpleClimbTowerPanel__CountDown_d__4__MoveNext (Dino_BusSand_App_UI_SimpleClimbTowerPanel__CountDown_d__4_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SimpleClimbTowerPanel.<CountDown>d__4$$MoveNext
   bool Dino_BusSand_App_UI_SimpleClimbTowerPanel__CountDown_d__4__MoveNext
   (Dino_BusSand_App_UI_SimpleClimbTowerPanel__CountDown_d__4_o* __this, const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_UI_SimpleClimbTowerPanel__CountDown_d__4__MoveNext_21a8a88(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000004f9ba52 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cadcc8);
    FUN_02132f7c(PTR_DAT_04caec30);
    bRam0000000004f9ba52 = 1;
  }
  puVar1 = PTR_DAT_04caca88;
  lVar5 = *(long *)(param_1 + 0x20);
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
  if (lVar5 != 0) {
    if (*(char *)(lVar5 + 0x2c) != '\0') {
      return 0;
    }
    if (*(long *)(lVar5 + 0x40) != 0) {
      lVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_EndMs_22297d0(*(long *)(lVar5 + 0x40),0);
      lVar4 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
      if (lVar3 - lVar4 < 1) {
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
                  (lVar5,*(undefined8 *)PTR_DAT_04caec30,*(undefined8 *)PTR_DAT_04cadcc8,
                   **(undefined8 **)(lVar3 + 0xb8),0);
        return 0;
      }
      if (*(long *)(lVar5 + 0x40) != 0) {
        uVar2 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_EndMs_22297d0
                          (*(long *)(lVar5 + 0x40),0);
        uVar2 = Dino_BusSand_App_Meta_StreakTowerUtil__ActivityTimeString_2251b98(uVar2,0);
        Dino_BusSand_App_UI_UIPanel__Txt_2200924(lVar5,*(undefined8 *)PTR_DAT_04caec30,uVar2,0);
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

