/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$ClaimStageReward
int32_t Dino_BusSand_App_Meta_YachtRacingCore__ClaimStageReward (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$ClaimStageReward
   int32_t Dino_BusSand_App_Meta_YachtRacingCore__ClaimStageReward
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_YachtRacingCore__ClaimStageReward_2258c28(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  
  if ((bRam0000000004f9bff4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cacef0);
    bRam0000000004f9bff4 = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_YachtRacingCore__get_Config_2254734(param_1);
  if (lVar2 == 0) {
    return 0xffffffff;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x78) < 1) {
      return 0xffffffff;
    }
    lVar2 = Dino_BusSand_App_Meta_YachtRacingCore__StageInfo_2254fe0(param_1);
    puVar1 = PTR_DAT_04cabaf8;
    if (lVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *(undefined4 *)(lVar2 + 0x14);
    }
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar2 = *(long *)puVar1;
    }
    if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x10) != 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_Profile__GrantReward_227342c(uVar3,*(undefined8 *)PTR_DAT_04cacef0,0);
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      Dino_BusSand_App_Meta_YachtRacingCore__TrackReward_225709c
                (param_1,1,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x78),uVar3);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

