/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$Countdown
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleHallButton__Countdown (Dino_BusSand_App_UI_BattleRoyaleHallButton_o* __this, int64_t end, System_Action_o* onFinished, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$Countdown
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleHallButton__Countdown
   (Dino_BusSand_App_UI_BattleRoyaleHallButton_o* __this, int64_t end, System_Action_o* onFinished,
   const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyaleHallButton__Countdown_218be8c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cadd18;
  if ((bRam0000000004f9b981 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadd18);
    bRam0000000004f9b981 = 1;
  }
                    /* try { // try from 0228bed0 to 0238bee3 has its CatchHandler @ 0228c02c */
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  *(undefined8 *)(lVar2 + 0x30) = param_3;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x30),param_3);
  return lVar2;
}

