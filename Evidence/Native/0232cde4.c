/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$AtStake
bool Dino_BusSand_App_Meta_ClimbTowerFeature__AtStake (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$AtStake
   bool Dino_BusSand_App_Meta_ClimbTowerFeature__AtStake (Dino_BusSand_App_Meta_ClimbTowerFeature_o*
   __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_ClimbTowerFeature__AtStake_222cde4(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  char acStack_14 [4];
  
  if ((bRam0000000004f9be42 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf910);
    FUN_02132f7c(PTR_DAT_04cb2170);
    FUN_02132f7c(PTR_DAT_04cb2ea0);
    bRam0000000004f9be42 = 1;
  }
  acStack_14[0] = '\0';
  uVar4 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(2,0);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_IsValid_2229654(param_1),
     puVar2 = PTR_DAT_04caf910, (uVar4 & 1) == 0)) {
    return false;
  }
  lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                    (param_1,*(undefined8 *)PTR_DAT_04caf910);
  if (lVar5 != 0) {
    uVar4 = Dino_BusSand_App_Meta_StreakTowerUtil__SettleRange_2250978
                      (*(undefined8 *)PTR_DAT_04cb2ea0,*(undefined8 *)PTR_DAT_04cb2170,
                       *(undefined4 *)(lVar5 + 0x10),acStack_14,0);
    if ((uVar4 & 1) != 0) {
      return acStack_14[0] != '\0';
    }
    lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)puVar2);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x10) < 1) {
        return false;
      }
                    /* try { // try from 0232cec8 to 0242cecb has its CatchHandler @ 0232d188 */
      lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar2);
                    /* try { // try from 0232cecc to 0242ced3 has its CatchHandler @ 0232d1d0 */
      if (lVar5 != 0) {
        iVar1 = *(int *)(lVar5 + 0x10);
        iVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_FinalPoint_2229364(param_1);
        return iVar1 < iVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

