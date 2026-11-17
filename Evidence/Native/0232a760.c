/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$IsForceOldPeriod
bool Dino_BusSand_App_Meta_ClimbTowerFeature__IsForceOldPeriod (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$IsForceOldPeriod
   bool Dino_BusSand_App_Meta_ClimbTowerFeature__IsForceOldPeriod
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

byte Dino_BusSand_App_Meta_ClimbTowerFeature__IsForceOldPeriod_222a760(long param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(char *)(param_1 + 0x18) != '\0') {
    bVar1 = Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaimIsClaimDone_22298d4();
    bVar1 = bVar1 ^ 1;
  }
  return bVar1 & 1;
}

