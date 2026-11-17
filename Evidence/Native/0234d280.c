/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$HaveNewActivity
bool Dino_BusSand_App_Meta_StreakRateFeature__HaveNewActivity (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$HaveNewActivity
   bool Dino_BusSand_App_Meta_StreakRateFeature__HaveNewActivity
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_StreakRateFeature__HaveNewActivity_224d280(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
                    /* try { // try from 0234d280 to 0244d2a3 has its CatchHandler @ 0234d300 */
  uVar2 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(3);
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    Dino_BusSand_App_Meta_StreakRateFeature__Init_224d028(param_1);
    Dino_BusSand_App_Meta_StreakRateFeature__AutoAddNewOne_224d2c4(param_1);
                    /* try { // try from 0234d2a4 to 0244d2f3 has its CatchHandler @ 0234d0c4 */
    lVar3 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(param_1);
    bVar1 = lVar3 != 0;
  }
  return bVar1;
}

