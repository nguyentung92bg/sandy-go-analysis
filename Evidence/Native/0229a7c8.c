/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel$$WaitAndStart
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleStartPanel__WaitAndStart (Dino_BusSand_App_UI_BattleRoyaleStartPanel_o* __this, float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel$$WaitAndStart
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BattleRoyaleStartPanel__WaitAndStart
   (Dino_BusSand_App_UI_BattleRoyaleStartPanel_o* __this, float seconds, const MethodInfo* method);
    */

long Dino_BusSand_App_UI_BattleRoyaleStartPanel__WaitAndStart_219a7c8
               (undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cae478;
  if ((bRam0000000004f9b9e6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae478);
    bRam0000000004f9b9e6 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* catch() { ... } // from try @ 0229a87c with catch @ 0229a828 */
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
  *(undefined4 *)(lVar2 + 0x20) = param_1;
  return lVar2;
}

