/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$MoveBottomTip
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyalePanel__MoveBottomTip (Dino_BusSand_App_UI_BattleRoyalePanel_o* __this, bool show, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$MoveBottomTip
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyalePanel__MoveBottomTip
   (Dino_BusSand_App_UI_BattleRoyalePanel_o* __this, bool show, const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyalePanel__MoveBottomTip_218ddd4(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  long lVar2;
  
                    /* try { // try from 0228ddd4 to 0238dde7 has its CatchHandler @ 0228ddfc */
  puVar1 = PTR_DAT_04cade60;
                    /* try { // try from 0228dde8 to 0238de13 has its CatchHandler @ 0228dd5c */
  if ((bRam0000000004f9b992 & 1) == 0) {
                    /* catch() { ... } // from try @ 0228ddd4 with catch @ 0228ddfc */
    FUN_02132f7c(PTR_DAT_04cade60);
    bRam0000000004f9b992 = 1;
  }
                    /* catch() { ... } // from try @ 0228de5c with catch @ 0228de14 */
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  *(byte *)(lVar2 + 0x28) = param_2 & 1;
                    /* try { // try from 0228de50 to 0238de5b has its CatchHandler @ 0228de7c */
  return lVar2;
}

