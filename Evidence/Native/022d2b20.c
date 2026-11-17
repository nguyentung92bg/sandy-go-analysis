/* IL2CPP: Dino.BusSand.App.UI.PassportOpenPanel$$Done
void Dino_BusSand_App_UI_PassportOpenPanel__Done (Dino_BusSand_App_UI_PassportOpenPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportOpenPanel$$Done
   void Dino_BusSand_App_UI_PassportOpenPanel__Done (Dino_BusSand_App_UI_PassportOpenPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportOpenPanel__Done_21d2b20(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
                    /* try { // try from 022d2b40 to 023d2b9b has its CatchHandler @ 022d2544 */
    *(undefined1 *)(param_1 + 0x40) = 1;
    plVar1 = (long *)(param_1 + 0x38);
    lVar2 = *plVar1;
    *plVar1 = 0;
                    /* catch() { ... } // from try @ 022d25d0 with catch @ 022d2b54 */
    thunk_FUN_02134474(plVar1,0);
                    /* catch() { ... } // from try @ 022d2954 with catch @ 022d2b58 */
                    /* catch() { ... } // from try @ 022d26ec with catch @ 022d2b5c */
                    /* catch() { ... } // from try @ 022d2640 with catch @ 022d2b60
                       catch() { ... } // from try @ 022d2788 with catch @ 022d2b60 */
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022d2b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
  return;
}

