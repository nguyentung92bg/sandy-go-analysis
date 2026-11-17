/* IL2CPP: Dino.BusSand.App.UI.EventContinuePanel$$OnGiveUp
void Dino_BusSand_App_UI_EventContinuePanel__OnGiveUp (Dino_BusSand_App_UI_EventContinuePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EventContinuePanel$$OnGiveUp
   void Dino_BusSand_App_UI_EventContinuePanel__OnGiveUp (Dino_BusSand_App_UI_EventContinuePanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_EventContinuePanel__OnGiveUp_21c8cdc(long param_1)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 0x40) == '\0') && (*(char *)(param_1 + 0x41) == '\0')) {
                    /* try { // try from 022c8cfc to 023c8d07 has its CatchHandler @ 022c8d7c */
                    /* try { // try from 022c8d08 to 023c8d3f has its CatchHandler @ 022c8d84 */
    *(undefined1 *)(param_1 + 0x41) = 1;
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022c8d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
  return;
}

