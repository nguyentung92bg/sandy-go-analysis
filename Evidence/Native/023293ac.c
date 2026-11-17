/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$TreasureBoxIndex
int32_t Dino_BusSand_App_Meta_ClimbTowerFeature__TreasureBoxIndex (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$TreasureBoxIndex
   int32_t Dino_BusSand_App_Meta_ClimbTowerFeature__TreasureBoxIndex
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t index, const MethodInfo* method); */

undefined4
Dino_BusSand_App_Meta_ClimbTowerFeature__TreasureBoxIndex_22293ac(long param_1,uint param_2)

{
  long lVar1;
  
  Dino_BusSand_App_Meta_ClimbTowerFeature__Config_2228e68();
  if (-1 < (int)param_2) {
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((int)param_2 < *(int *)(lVar1 + 0x18)) {
      return *(undefined4 *)(lVar1 + (ulong)param_2 * 4 + 0x20);
    }
  }
  return 0xffffffff;
}

