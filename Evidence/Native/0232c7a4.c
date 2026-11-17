/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$get_RoundNo
int32_t Dino_BusSand_App_Meta_ClimbTowerFeature__get_RoundNo (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$get_RoundNo
   int32_t Dino_BusSand_App_Meta_ClimbTowerFeature__get_RoundNo
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_ClimbTowerFeature__get_RoundNo_222c7a4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04caf910;
  if ((bRam0000000004f9be3a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2e18);
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be3a = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x50) == 0) {
      lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar1);
      puVar2 = PTR_DAT_04cb2e18;
      if (lVar3 == 0) goto LAB_0232c848;
      *(undefined4 *)(lVar3 + 0x50) = 1;
      Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,*(undefined8 *)puVar2);
    }
    lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      return *(undefined4 *)(lVar3 + 0x50);
    }
  }
LAB_0232c848:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

