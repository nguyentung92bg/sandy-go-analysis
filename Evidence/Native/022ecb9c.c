/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$CountDownLoop
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingPanel__CountDownLoop (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$CountDownLoop
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingPanel__CountDownLoop
   (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_YachtRacingPanel__CountDownLoop_21ecb9c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb11a0;
  if ((bRam0000000004f9bbfa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb11a0);
                    /* catch() { ... } // from try @ 022ecb64 with catch @ 022ecbc8 */
    bRam0000000004f9bbfa = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
                    /* catch() { ... } // from try @ 022ecc58 with catch @ 022ecbf8 */
  return lVar2;
}

