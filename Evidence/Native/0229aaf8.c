/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel.<Countdown>d__11$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleStartPanel__Countdown_d__11__MoveNext (Dino_BusSand_App_UI_BattleRoyaleStartPanel__Countdown_d__11_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel.<Countdown>d__11$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleStartPanel__Countdown_d__11__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleStartPanel__Countdown_d__11_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_BattleRoyaleStartPanel__Countdown_d__11__MoveNext_219aaf8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000004f9b9e9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cae3e0);
    FUN_02132f7c(PTR_DAT_04cae3f8);
    FUN_02132f7c(PTR_DAT_04cade40);
    FUN_02132f7c(PTR_DAT_04cae408);
    FUN_02132f7c(PTR_DAT_04cae418);
    bRam0000000004f9b9e9 = 1;
  }
  puVar1 = PTR_DAT_04caca88;
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar5 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar5,*(undefined8 *)PTR_DAT_04cade40,0);
    lVar6 = *(long *)(param_1 + 0x28);
    lVar3 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
    uVar4 = Dino_BusSand_App_Meta_LiveClock__FormatRemain_2240758((lVar6 - lVar3) / 1000,0);
    Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar2,uVar4);
    lVar6 = *(long *)(param_1 + 0x28);
    lVar3 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
                    /* catch() { ... } // from try @ 0229ac6c with catch @ 0229ac28 */
    if (lVar6 - lVar3 < 1) {
                    /* try { // try from 0229ac60 to 0239ac6b has its CatchHandler @ 0229ad10 */
      Dino_BusSand_App_UI_UIPanel__Show_21f4018(lVar5,*(undefined8 *)PTR_DAT_04cae418,0,0);
                    /* try { // try from 0229ac6c to 0239ad2f has its CatchHandler @ 0229ac28 */
      Dino_BusSand_App_UI_UIPanel__Show_21f4018(lVar5,*(undefined8 *)PTR_DAT_04cae3f8,1,0);
      Dino_BusSand_App_UI_UIPanel__Show_21f4018(lVar5,*(undefined8 *)PTR_DAT_04cae408,0,0);
      Dino_BusSand_App_UI_UIPanel__Show_21f4018(lVar5,*(undefined8 *)PTR_DAT_04cae3e0,1,0);
      *(undefined8 *)(lVar5 + 0x58) = 0;
      thunk_FUN_02134474((undefined8 *)(lVar5 + 0x58),0);
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
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

