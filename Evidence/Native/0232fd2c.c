/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeFeature$$get_AnyClaimable
bool Dino_BusSand_App_Meta_DailyChallengeFeature__get_AnyClaimable (Dino_BusSand_App_Meta_DailyChallengeFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeFeature$$get_AnyClaimable
   bool Dino_BusSand_App_Meta_DailyChallengeFeature__get_AnyClaimable
   (Dino_BusSand_App_Meta_DailyChallengeFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_DailyChallengeFeature__get_AnyClaimable_222fd2c(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  if ((bRam0000000004f9be67 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf808);
    bRam0000000004f9be67 = 1;
  }
  puVar2 = PTR_DAT_04caf808;
  iVar3 = 0;
  do {
    iVar6 = iVar3;
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar1 = *(int *)(**(long **)(lVar5 + 0xb8) + 0x18);
    if (iVar1 <= iVar6) break;
    iVar4 = Dino_BusSand_App_Meta_DailyChallengeFeature__MilestoneState_222fc18(param_1,iVar6);
    iVar3 = iVar6 + 1;
  } while (iVar4 != 1);
  return iVar6 < iVar1;
}

