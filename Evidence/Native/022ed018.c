/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$ShowTrophyTipsNextFrame
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingPanel__ShowTrophyTipsNextFrame (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$ShowTrophyTipsNextFrame
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingPanel__ShowTrophyTipsNextFrame
   (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_YachtRacingPanel__ShowTrophyTipsNextFrame_21ed018(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb1200;
  if ((bRam0000000004f9bbf8 & 1) == 0) {
                    /* catch() { ... } // from try @ 022ecfd8 with catch @ 022ed03c */
    FUN_02132f7c(PTR_DAT_04cb1200);
    bRam0000000004f9bbf8 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
                    /* try { // try from 022ed06c to 023ed103 has its CatchHandler @ 022ed06c
                       catch() { ... } // from try @ 022ed06c with catch @ 022ed06c
                       catch() { ... } // from try @ 022ed10c with catch @ 022ed06c */
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  return lVar2;
}

