/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$Claim
bool Dino_BusSand_App_Meta_ClimbTowerFeature__Claim (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, int32_t winPoint, int32_t* rewardId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$Claim
   bool Dino_BusSand_App_Meta_ClimbTowerFeature__Claim (Dino_BusSand_App_Meta_ClimbTowerFeature_o*
   __this, int32_t winPoint, int32_t* rewardId, const MethodInfo* method); */

undefined4
Dino_BusSand_App_Meta_ClimbTowerFeature__Claim_222c5f4(long param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000004f9be39 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d10);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cb2e18);
    FUN_02132f7c(PTR_DAT_04caf910);
    FUN_02132f7c(PTR_DAT_04cb2578);
    bRam0000000004f9be39 = 1;
  }
  *param_3 = 0;
  uVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaim_2229afc(param_1,param_2);
  if (((uVar3 & 1) != 0) &&
     (uVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsClaimed_2229a78(param_1,param_2),
     (uVar3 & 1) == 0)) {
    Dino_BusSand_App_Meta_ClimbTowerFeature__Config_2228e68(param_1);
    iVar2 = System_Array__IndexOf_int__2906224
                      (*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)PTR_DAT_04cb1d10);
    if (iVar2 < 0) {
      *param_3 = 0;
      return 0;
    }
    uVar4 = Dino_BusSand_App_Meta_ClimbTowerFeature__RewardIdAt_2229444(param_1,iVar2);
    *param_3 = (int)uVar4;
    if (0 < (int)uVar4) {
      Dino_BusSand_App_Meta_StreakTowerUtil__Grant_224ef30(uVar4,*(undefined8 *)PTR_DAT_04cb2578,0);
      lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)PTR_DAT_04caf910);
      if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x38), lVar5 != 0)) {
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar7 = *(long *)PTR_DAT_04caa160;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = param_2;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                      (lVar5,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc
                    (param_1,*(undefined8 *)PTR_DAT_04cb2e18);
          Dino_BusSand_App_Meta_ClimbTowerFeature__TrackRewardUnlock_222bf68
                    (param_1,1,param_2,*param_3);
          return 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return 0;
}

