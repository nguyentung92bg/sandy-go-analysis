/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_BankStageCount
int32_t Dino_BusSand_App_Meta_PassportFeature__get_BankStageCount (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_BankStageCount
   int32_t Dino_BusSand_App_Meta_PassportFeature__get_BankStageCount
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_PassportFeature__get_BankStageCount_2246e78(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf6b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bf6b = 1;
  }
  lVar7 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar3)
  ;
  puVar3 = PTR_DAT_04caa200;
  if (lVar7 != 0) {
    iVar2 = *(int *)(lVar7 + 0x2c);
    iVar4 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0(param_1);
    uVar5 = Dino_BusSand_App_Meta_PassportFeature__get_BonusBankMaxTimes_2244b50(param_1);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    uVar6 = System_Math__Min_4831118(iVar2 - iVar4,uVar5,0);
    uVar1 = 0;
    if (uVar6 < 0x80000000) {
      uVar1 = uVar6;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

