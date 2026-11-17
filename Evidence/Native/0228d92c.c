/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$Countdown
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyalePanel__Countdown (Dino_BusSand_App_UI_BattleRoyalePanel_o* __this, int64_t end, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$Countdown
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyalePanel__Countdown
   (Dino_BusSand_App_UI_BattleRoyalePanel_o* __this, int64_t end, const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyalePanel__Countdown_218d92c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cade48;
  if ((bRam0000000004f9b98e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cade48);
    bRam0000000004f9b98e = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 0228d974 to 0238d97f has its CatchHandler @ 0228da5c */
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  return lVar2;
}

