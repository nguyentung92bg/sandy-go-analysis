/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel$$GetReward
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleResultPanel__GetReward (Dino_BusSand_App_UI_BattleRoyaleResultPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel$$GetReward
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleResultPanel__GetReward
   (Dino_BusSand_App_UI_BattleRoyaleResultPanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyaleResultPanel__GetReward_21904c8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cadfe0;
                    /* try { // try from 022904d0 to 023904f7 has its CatchHandler @ 022904d0
                       catch() { ... } // from try @ 022904d0 with catch @ 022904d0
                       catch() { ... } // from try @ 0229052c with catch @ 022904d0 */
  if ((bRam0000000004f9b9a4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadfe0);
                    /* try { // try from 022904f8 to 02390513 has its CatchHandler @ 02290578 */
    bRam0000000004f9b9a4 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
                    /* try { // try from 02290528 to 0239052b has its CatchHandler @ 02290560 */
                    /* try { // try from 0229052c to 02390593 has its CatchHandler @ 022904d0 */
  return lVar2;
}

