/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$ContinuePriority
int32_t Dino_BusSand_App_UI_EndOfLevelRules__ContinuePriority (int32_t giftPackId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$ContinuePriority
   int32_t Dino_BusSand_App_UI_EndOfLevelRules__ContinuePriority (int32_t giftPackId, const
   MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_EndOfLevelRules__ContinuePriority_22c3890(int param_1)

{
  long lVar1;
  
  if ((bRam0000000004f9c345 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    bRam0000000004f9c345 = 1;
  }
  if (0 < param_1) {
    if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar1 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
    if ((lVar1 != 0) &&
       (lVar1 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(lVar1,param_1,0), lVar1 != 0))
    {
      return *(undefined4 *)(lVar1 + 0x38);
    }
  }
  return 0x7fffffff;
}

