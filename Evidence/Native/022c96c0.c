/* IL2CPP: Dino.BusSand.App.UI.EventQuitWarnPanel$$OnStay
void Dino_BusSand_App_UI_EventQuitWarnPanel__OnStay (Dino_BusSand_App_UI_EventQuitWarnPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EventQuitWarnPanel$$OnStay
   void Dino_BusSand_App_UI_EventQuitWarnPanel__OnStay (Dino_BusSand_App_UI_EventQuitWarnPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_EventQuitWarnPanel__OnStay_21c96c0(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
                    /* try { // try from 022c96dc to 023c96fb has its CatchHandler @ 022c9734 */
    *(undefined1 *)(param_1 + 0x48) = 1;
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 != 0) {
                    /* try { // try from 022c96fc to 023c9747 has its CatchHandler @ 022c96a4 */
                    /* WARNING: Could not recover jumptable at 0x022c9700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
  return;
}

