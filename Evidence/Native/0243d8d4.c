/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$WaitClosed
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_LevelEnterFlow__WaitClosed (Dino_BusSand_App_UI_UIPanel_o* p, Dino_BusSand_App_Gameplay_GameplayController_o* gc, int32_t run, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$WaitClosed
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_LevelEnterFlow__WaitClosed
   (Dino_BusSand_App_UI_UIPanel_o* p, Dino_BusSand_App_Gameplay_GameplayController_o* gc, int32_t
   run, const MethodInfo* method); */

long Dino_BusSand_App_UI_LevelEnterFlow__WaitClosed_233d8d4
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb94d0;
  if ((bRam0000000004f9c668 & 1) == 0) {
                    /* try { // try from 0243d904 to 0253d90b has its CatchHandler @ 0243da50 */
    FUN_02132f7c(PTR_DAT_04cb94d0);
    bRam0000000004f9c668 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_UI_LevelEnterFlow__WaitClosed_d__12___ctor_2185664(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x30) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x30),param_1);
    *(undefined8 *)(lVar2 + 0x20) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_2);
    *(undefined4 *)(lVar2 + 0x28) = param_3;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

