/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$BigWin
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyalePanel__BigWin (Dino_BusSand_App_UI_BattleRoyalePanel_o* __this, float d, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$BigWin
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyalePanel__BigWin
   (Dino_BusSand_App_UI_BattleRoyalePanel_o* __this, float d, const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyalePanel__BigWin_218dd30(undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cade58;
                    /* catch() { ... } // from try @ 0228dd04 with catch @ 0228dd40 */
  if ((bRam0000000004f9b991 & 1) == 0) {
                    /* try { // try from 0228dd5c to 0238ddd3 has its CatchHandler @ 0228dd5c
                       catch() { ... } // from try @ 0228dd5c with catch @ 0228dd5c
                       catch() { ... } // from try @ 0228dde8 with catch @ 0228dd5c */
    FUN_02132f7c(PTR_DAT_04cade58);
    bRam0000000004f9b991 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_2);
  *(undefined4 *)(lVar2 + 0x28) = param_1;
  return lVar2;
}

