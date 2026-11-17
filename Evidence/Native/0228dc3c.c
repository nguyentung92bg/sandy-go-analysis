/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$WinChangeStage
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyalePanel__WinChangeStage (Dino_BusSand_App_UI_BattleRoyalePanel_o* __this, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$WinChangeStage
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyalePanel__WinChangeStage
   (Dino_BusSand_App_UI_BattleRoyalePanel_o* __this, float delay, const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyalePanel__WinChangeStage_218dc3c
               (undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cade50;
  if ((bRam0000000004f9b990 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cade50);
    bRam0000000004f9b990 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
                    /* try { // try from 0228dc90 to 0238dd03 has its CatchHandler @ 0228dc90
                       catch() { ... } // from try @ 0228dc90 with catch @ 0228dc90
                       catch() { ... } // from try @ 0228dd10 with catch @ 0228dc90 */
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
  *(undefined4 *)(lVar2 + 0x20) = param_1;
  return lVar2;
}

