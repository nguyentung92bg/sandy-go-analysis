/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$NextPage
int32_t Dino_BusSand_App_UI_EndOfLevelRules__NextPage (int32_t current, int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$NextPage
   int32_t Dino_BusSand_App_UI_EndOfLevelRules__NextPage (int32_t current, int32_t count, const
   MethodInfo* method); */

int Dino_BusSand_App_UI_EndOfLevelRules__NextPage_22c2298(int param_1,int param_2)

{
  int iVar1;
  
  if (1 < param_2) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = (param_1 + 1) / param_2;
    }
    return (param_1 + 1) - iVar1 * param_2;
  }
  return -1;
}

