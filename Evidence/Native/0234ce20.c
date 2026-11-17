/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$MaxRateNumber
int32_t Dino_BusSand_App_Meta_StreakRateFeature__MaxRateNumber (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$MaxRateNumber
   int32_t Dino_BusSand_App_Meta_StreakRateFeature__MaxRateNumber
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_StreakRateFeature__MaxRateNumber_224ce20(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((bRam0000000004f9bfab & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bfab = 1;
  }
  puVar1 = PTR_DAT_04caa200;
  iVar4 = 0;
  uVar3 = 1;
  do {
    uVar2 = Dino_BusSand_App_Meta_StreakRateFeature__RateNumber_224c86c(param_1,iVar4);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar3 = System_Math__Max_4830fc8(uVar3,uVar2,0);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  return uVar3;
}

