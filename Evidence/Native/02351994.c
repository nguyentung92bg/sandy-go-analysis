/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$InActivityTime
bool Dino_BusSand_App_Meta_StreakTowerUtil__InActivityTime (System_String_o* activityType, int32_t groupId, int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$InActivityTime
   bool Dino_BusSand_App_Meta_StreakTowerUtil__InActivityTime (System_String_o* activityType,
   int32_t groupId, int64_t nowMs, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_StreakTowerUtil__InActivityTime_2251994(void)

{
  uint uVar1;
  
  uVar1 = Dino_BusSand_App_Meta_StreakTowerUtil__CurrentPeriod_224d438();
  return uVar1 & 1;
}

