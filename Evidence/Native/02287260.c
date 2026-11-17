/* IL2CPP: Dino.BusSand.App.UI.ActivityContinuePanel$$CloseThen
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_ActivityContinuePanel__CloseThen (Dino_BusSand_App_UI_ActivityContinuePanel_o* __this, System_Action_o* then, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ActivityContinuePanel$$CloseThen
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_ActivityContinuePanel__CloseThen
   (Dino_BusSand_App_UI_ActivityContinuePanel_o* __this, System_Action_o* then, const MethodInfo*
   method); */

long Dino_BusSand_App_UI_ActivityContinuePanel__CloseThen_2187260
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cada20;
                    /* catch() { ... } // from try @ 02287240 with catch @ 02287270 */
                    /* catch() { ... } // from try @ 02287220 with catch @ 02287278 */
  if ((bRam0000000004f9b95a & 1) == 0) {
                    /* catch() { ... } // from try @ 022871d8 with catch @ 0228728c */
    FUN_02132f7c(PTR_DAT_04cada20);
    bRam0000000004f9b95a = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
  return lVar2;
}

