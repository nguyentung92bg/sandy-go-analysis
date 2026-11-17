/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel.<Countdown>d__16$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyalePanel__Countdown_d__16__MoveNext (Dino_BusSand_App_UI_BattleRoyalePanel__Countdown_d__16_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel.<Countdown>d__16$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyalePanel__Countdown_d__16__MoveNext
   (Dino_BusSand_App_UI_BattleRoyalePanel__Countdown_d__16_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_BattleRoyalePanel__Countdown_d__16__MoveNext_218ea60(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
                    /* try { // try from 0228ea70 to 0238ea77 has its CatchHandler @ 0228ea9c */
  if ((bRam0000000004f9b997 & 1) == 0) {
                    /* try { // try from 0228ea78 to 0238eab7 has its CatchHandler @ 0228ea4c */
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9b997 = 1;
  }
  puVar1 = PTR_DAT_04caca88;
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_UI_BattleRoyalePanel__SetTime_218d890(lVar4,*(undefined8 *)(param_1 + 0x28));
    lVar5 = *(long *)(param_1 + 0x28);
    lVar3 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
    if (lVar5 - lVar3 < 1) {
      Dino_BusSand_App_UI_BattleRoyalePanel__ShowFinished_218d9a8(lVar4);
      *(undefined8 *)(lVar4 + 0x50) = 0;
      thunk_FUN_02134474((undefined8 *)(lVar4 + 0x50),0);
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
                    /* catch() { ... } // from try @ 0228ea70 with catch @ 0228ea9c */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f000000,uVar2,0);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar2);
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x30);
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

