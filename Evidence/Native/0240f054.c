/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$OnItemConsumed
void Dino_BusSand_App_UI_HudPanel__OnItemConsumed (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$OnItemConsumed
   void Dino_BusSand_App_UI_HudPanel__OnItemConsumed (Dino_BusSand_App_UI_HudPanel_o* __this,
   int32_t id, const MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel__OnItemConsumed_230f054(long param_1,int param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x48) == param_2) {
    Dino_BusSand_App_UI_HudPanel__Consume_230e91c();
    Dino_BusSand_App_UI_HudPanel__ShowItemMask_230a1b4(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 0;
    Dino_BusSand_App_UI_HudPanel__RefreshItems_230991c(param_1);
    lVar1 = *(long *)(param_1 + 0x128);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0240f0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),param_2,*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
  return;
}

