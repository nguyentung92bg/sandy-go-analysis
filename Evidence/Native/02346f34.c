/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$SimulateBankStageCountWithKeys
int32_t Dino_BusSand_App_Meta_PassportFeature__SimulateBankStageCountWithKeys (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t keys, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$SimulateBankStageCountWithKeys
   int32_t Dino_BusSand_App_Meta_PassportFeature__SimulateBankStageCountWithKeys
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t keys, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_PassportFeature__SimulateBankStageCountWithKeys_2246f34
               (undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_04caa200;
  if ((bRam0000000004f9bf6c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bf6c = 1;
  }
  uStack_28 = 0;
  Dino_BusSand_App_Meta_PassportFeature__Simulate_2246ae8
            (param_1,param_2,(long)&uStack_28 + 4,&uStack_28);
  iVar3 = uStack_28._4_4_;
  iVar4 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0(param_1);
  uVar5 = Dino_BusSand_App_Meta_PassportFeature__get_BonusBankMaxTimes_2244b50(param_1);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar6 = System_Math__Min_4831118(iVar3 - iVar4,uVar5,0);
  uVar1 = 0;
  if (uVar6 < 0x80000000) {
    uVar1 = uVar6;
  }
  return uVar1;
}

