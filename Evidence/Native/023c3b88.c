/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$Clamp
int32_t Dino_BusSand_App_UI_EndOfLevelRules__Clamp (int32_t v, int32_t lo, int32_t hi, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$Clamp
   int32_t Dino_BusSand_App_UI_EndOfLevelRules__Clamp (int32_t v, int32_t lo, int32_t hi, const
   MethodInfo* method); */

int Dino_BusSand_App_UI_EndOfLevelRules__Clamp_22c3b88(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_3 <= param_1) {
    iVar1 = param_3;
  }
  if (param_2 <= param_1) {
    param_2 = iVar1;
  }
  return param_2;
}

