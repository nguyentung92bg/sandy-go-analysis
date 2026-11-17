/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$HaveBonusBankUnClaimedReward
bool Dino_BusSand_App_Meta_PassportFeature__HaveBonusBankUnClaimedReward (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$HaveBonusBankUnClaimedReward
   bool Dino_BusSand_App_Meta_PassportFeature__HaveBonusBankUnClaimedReward
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

undefined1
Dino_BusSand_App_Meta_PassportFeature__HaveBonusBankUnClaimedReward_224734c(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = Dino_BusSand_App_Meta_PassportFeature__get_BankStageCount_2246e78();
  puVar1 = PTR_DAT_04cb01b0;
  if (iVar2 < 1) {
    return 0;
  }
  if ((bRam0000000004f9bf5a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    bRam0000000004f9bf5a = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar3 != 0) {
    return *(undefined1 *)(lVar3 + 0x61);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

