/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager$$Report
void Dino_BusSand_App_UI_ContinueBottomPager__Report (Dino_BusSand_App_UI_ContinueBottomPager_o* __this, int32_t page, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager$$Report
   void Dino_BusSand_App_UI_ContinueBottomPager__Report (Dino_BusSand_App_UI_ContinueBottomPager_o*
   __this, int32_t page, const MethodInfo* method); */

void Dino_BusSand_App_UI_ContinueBottomPager__Report_22bec40(long param_1,int param_2)

{
  long lVar1;
  
  *(int *)(param_1 + 0x68) = param_2;
  if (*(int *)(param_1 + 0x58) != param_2) {
    lVar1 = *(long *)(param_1 + 0x28);
    *(int *)(param_1 + 0x58) = param_2;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023bec68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),param_2,*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
  return;
}

