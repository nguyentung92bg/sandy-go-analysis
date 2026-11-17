/* IL2CPP: Dino.BusSand.App.UI.EventListPanel.<>c__DisplayClass11_0$$<OnOpen>b__2
void Dino_BusSand_App_UI_EventListPanel___c__DisplayClass11_0___OnOpen_b__2 (Dino_BusSand_App_UI_EventListPanel___c__DisplayClass11_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EventListPanel.<>c__DisplayClass11_0$$<OnOpen>b__2
   void Dino_BusSand_App_UI_EventListPanel___c__DisplayClass11_0___OnOpen_b__2
   (Dino_BusSand_App_UI_EventListPanel___c__DisplayClass11_0_o* __this, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_EventListPanel___c__DisplayClass11_0___OnOpen_b__2_21b899c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(*(long *)(param_1 + 0x10),0);
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0x38), plVar1 != (long *)0x0)) {
      lVar2 = (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
      if (lVar2 == 0) {
        return;
      }
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0x38), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x022b89f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(*plVar1 + 0x1e0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

