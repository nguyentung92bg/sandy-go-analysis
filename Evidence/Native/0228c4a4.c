/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton.<Countdown>d__23$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleHallButton__Countdown_d__23__MoveNext (Dino_BusSand_App_UI_BattleRoyaleHallButton__Countdown_d__23_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton.<Countdown>d__23$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleHallButton__Countdown_d__23__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleHallButton__Countdown_d__23_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_BattleRoyaleHallButton__Countdown_d__23__MoveNext_218c4a4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000004f9b987 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9b987 = 1;
  }
  puVar1 = PTR_DAT_04caca88;
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar5 = *(long *)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar3 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
    uVar2 = Dino_BusSand_App_Meta_LiveClock__FormatRemain_2240758((lVar4 - lVar3) / 1000,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_UI_BattleRoyaleHallButton__SetStatus_218bd9c(lVar5,0,uVar2);
    lVar3 = *(long *)(param_1 + 0x28);
    lVar4 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
    if (lVar3 - lVar4 < 1) {
      *(undefined8 *)(lVar5 + 0x50) = 0;
      thunk_FUN_02134474((undefined8 *)(lVar5 + 0x50),0);
      lVar5 = *(long *)(param_1 + 0x30);
      if (lVar5 == 0) {
        return 0;
      }
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
                    /* try { // try from 0228c4e4 to 0238c4eb has its CatchHandler @ 0228c8c8 */
                    /* try { // try from 0228c4ec to 0238c647 has its CatchHandler @ 0228c1a0 */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f000000,uVar2,0);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x38),uVar2);
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

