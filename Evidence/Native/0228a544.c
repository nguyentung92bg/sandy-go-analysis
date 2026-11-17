/* IL2CPP: Dino.BusSand.App.UI.SimpleActivityContinuePanel$$CloseThen
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_SimpleActivityContinuePanel__CloseThen (Dino_BusSand_App_UI_SimpleActivityContinuePanel_o* __this, System_Action_o* then, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SimpleActivityContinuePanel$$CloseThen
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_SimpleActivityContinuePanel__CloseThen
   (Dino_BusSand_App_UI_SimpleActivityContinuePanel_o* __this, System_Action_o* then, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_SimpleActivityContinuePanel__CloseThen_218a544
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cadc38;
                    /* try { // try from 0228a560 to 0238a567 has its CatchHandler @ 0228a5b8 */
  if ((bRam0000000004f9b976 & 1) == 0) {
                    /* try { // try from 0228a570 to 0238a57f has its CatchHandler @ 0228a5c8 */
    FUN_02132f7c(PTR_DAT_04cadc38);
    bRam0000000004f9b976 = 1;
  }
                    /* try { // try from 0228a580 to 0238a5fb has its CatchHandler @ 0228a4d4 */
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
                    /* catch() { ... } // from try @ 0228a560 with catch @ 0228a5b8 */
                    /* catch() { ... } // from try @ 0228a528 with catch @ 0228a5c0 */
                    /* catch() { ... } // from try @ 0228a570 with catch @ 0228a5c8 */
  return lVar2;
}

