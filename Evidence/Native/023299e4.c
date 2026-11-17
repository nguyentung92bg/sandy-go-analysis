/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$IsClaimAllReward
bool Dino_BusSand_App_Meta_ClimbTowerFeature__IsClaimAllReward (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$IsClaimAllReward
   bool Dino_BusSand_App_Meta_ClimbTowerFeature__IsClaimAllReward
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_ClimbTowerFeature__IsClaimAllReward_22299e4(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam0000000004f9be1d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be1d = 1;
  }
  uVar2 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_HasConfig_2229308(param_1);
  if ((uVar2 & 1) == 0) {
    bVar1 = true;
  }
  else {
    lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)PTR_DAT_04caf910);
    if (((lVar3 == 0) || (*(long *)(lVar3 + 0x38) == 0)) || (*(long *)(param_1 + 0x20) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar1 = *(int *)(*(long *)(lVar3 + 0x38) + 0x18) == *(int *)(*(long *)(param_1 + 0x20) + 0x18);
  }
  return bVar1;
}

