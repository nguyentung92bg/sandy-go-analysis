/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel$$Countdown
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleStartPanel__Countdown (Dino_BusSand_App_UI_BattleRoyaleStartPanel_o* __this, int64_t end, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel$$Countdown
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleStartPanel__Countdown
   (Dino_BusSand_App_UI_BattleRoyaleStartPanel_o* __this, int64_t end, const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyaleStartPanel__Countdown_219a504
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
                    /* try { // try from 0229a504 to 0239a50f has its CatchHandler @ 0229a530 */
  puVar1 = PTR_DAT_04cae470;
                    /* try { // try from 0229a510 to 0239a55b has its CatchHandler @ 0229a4c8 */
  if ((bRam0000000004f9b9e4 & 1) == 0) {
                    /* catch() { ... } // from try @ 0229a504 with catch @ 0229a530 */
    FUN_02132f7c(PTR_DAT_04cae470);
    bRam0000000004f9b9e4 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  return lVar2;
}

