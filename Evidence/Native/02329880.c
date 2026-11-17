/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$InActivityTime
bool Dino_BusSand_App_Meta_ClimbTowerFeature__InActivityTime (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$InActivityTime
   bool Dino_BusSand_App_Meta_ClimbTowerFeature__InActivityTime
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_ClimbTowerFeature__InActivityTime_2229880(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uStack_18;
  
  puVar1 = PTR_DAT_04cb2170;
  if ((bRam0000000004f9be1b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2170);
    bRam0000000004f9be1b = 1;
  }
  uVar3 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
  uStack_18 = 0;
  uVar2 = Dino_BusSand_App_Meta_StreakTowerUtil__CurrentPeriod_224d438
                    (*(undefined8 *)puVar1,1,uVar3,&stack0xfffffffffffffffc,&uStack_18,
                     &stack0xffffffffffffffe0);
  return uVar2 & 1;
}

