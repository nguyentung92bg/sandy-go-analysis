/* IL2CPP: Dino.BusSand.App.UI.EventQuitWarnPanel$$<OnOpen>b__4_0
void Dino_BusSand_App_UI_EventQuitWarnPanel___OnOpen_b__4_0 (Dino_BusSand_App_UI_EventQuitWarnPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EventQuitWarnPanel$$<OnOpen>b__4_0
   void Dino_BusSand_App_UI_EventQuitWarnPanel___OnOpen_b__4_0
   (Dino_BusSand_App_UI_EventQuitWarnPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_EventQuitWarnPanel___OnOpen_b__4_0_21c9720(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
                    /* catch() { ... } // from try @ 022c96dc with catch @ 022c9734 */
    *(undefined1 *)(param_1 + 0x48) = 1;
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
                    /* try { // try from 022c9748 to 023c97fb has its CatchHandler @ 022c9748
                       catch(type#1 @ 00000000) { ... } // from try @ 022c9748 with catch @ 022c9748
                       catch(type#1 @ 00000000) { ... } // from try @ 022c983c with catch @ 022c9748
                       catch(type#1 @ 00000000) { ... } // from try @ 022c990c with catch @ 022c9748
                        */
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022c9760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
  return;
}

