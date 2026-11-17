/* IL2CPP: Dino.BusSand.App.GameApp$$BootStep
void Dino_BusSand_App_GameApp__BootStep (System_String_o* what, System_Action_o* step, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$BootStep
   void Dino_BusSand_App_GameApp__BootStep (System_String_o* what, System_Action_o* step, const
   MethodInfo* method); */

void Dino_BusSand_App_GameApp__BootStep_21657e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04cab240;
  if ((bRam0000000004f9b85b & 1) == 0) {
                    /* catch() { ... } // from try @ 022657d4 with catch @ 02265818 */
    FUN_02132f7c(PTR_DAT_04cab240);
    bRam0000000004f9b85b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 022657a0 with catch @ 02265830 */
    thunk_FUN_0218fdac();
  }
                    /* catch() { ... } // from try @ 02265768 with catch @ 02265834 */
                    /* catch() { ... } // from try @ 022656e8 with catch @ 02265838 */
  Dino_BusSand_App_BootTrace__Run_214e420(param_1,param_2);
  return;
}

