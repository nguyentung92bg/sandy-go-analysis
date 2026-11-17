/* IL2CPP: Dino.BusSand.App.UI.SimpleStreakRatePanel.<CountDown>d__5$$MoveNext
bool Dino_BusSand_App_UI_SimpleStreakRatePanel__CountDown_d__5__MoveNext (Dino_BusSand_App_UI_SimpleStreakRatePanel__CountDown_d__5_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SimpleStreakRatePanel.<CountDown>d__5$$MoveNext
   bool Dino_BusSand_App_UI_SimpleStreakRatePanel__CountDown_d__5__MoveNext
   (Dino_BusSand_App_UI_SimpleStreakRatePanel__CountDown_d__5_o* __this, const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_UI_SimpleStreakRatePanel__CountDown_d__5__MoveNext_21ddeb8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000004f9bb97 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caca88);
                    /* try { // try from 022ddeec to 023ddf4f has its CatchHandler @ 022ddeec
                       catch() { ... } // from try @ 022ddeec with catch @ 022ddeec
                       catch() { ... } // from try @ 022ddf68 with catch @ 022ddeec
                       catch() { ... } // from try @ 022de030 with catch @ 022ddeec */
    FUN_02132f7c(PTR_DAT_04cadcc8);
    FUN_02132f7c(PTR_DAT_04caec30);
    bRam0000000004f9bb97 = 1;
  }
  puVar1 = PTR_DAT_04caca88;
  lVar4 = *(long *)(param_1 + 0x20);
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
                    /* try { // try from 022ddf50 to 023ddf67 has its CatchHandler @ 022de030 */
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),uVar2);
  }
  if (lVar4 != 0) {
                    /* try { // try from 022ddf68 to 023de02b has its CatchHandler @ 022ddeec */
    if (*(char *)(lVar4 + 0x2c) == '\0') {
      lVar5 = *(long *)(lVar4 + 0x40);
      if ((0 < lVar5) &&
         (lVar3 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0), 0 < lVar5 - lVar3)) {
        uVar2 = Dino_BusSand_App_Meta_StreakTowerUtil__ActivityTimeString_2251b98
                          (*(undefined8 *)(lVar4 + 0x40),0);
        Dino_BusSand_App_UI_UIPanel__Txt_2200924(lVar4,*(undefined8 *)PTR_DAT_04caec30,uVar2,0);
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18));
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      lVar3 = *(long *)PTR_DAT_04ca9d18;
      lVar5 = *(long *)(lVar3 + 0x38);
      if (lVar5 == 0) {
        FUN_0216b4cc(lVar3);
        lVar5 = *(long *)(lVar3 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0216b470();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar5 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0216b470();
      }
                    /* try { // try from 022de02c to 023de02f has its CatchHandler @ 022de030 */
                    /* catch() { ... } // from try @ 022ddf50 with catch @ 022de030
                       catch() { ... } // from try @ 022de02c with catch @ 022de030
                       try { // try from 022de030 to 023de043 has its CatchHandler @ 022ddeec */
      Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
                (lVar4,*(undefined8 *)PTR_DAT_04caec30,*(undefined8 *)PTR_DAT_04cadcc8,
                 **(undefined8 **)(lVar5 + 0xb8),0);
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

