/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$RateNumber
int32_t Dino_BusSand_App_Meta_StreakRateFeature__RateNumber (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$RateNumber
   int32_t Dino_BusSand_App_Meta_StreakRateFeature__RateNumber
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, int32_t index, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_StreakRateFeature__RateNumber_224c86c(long param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  if ((bRam0000000004f9bfa7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3b98);
    FUN_02132f7c(PTR_DAT_04cb3ba0);
    bRam0000000004f9bfa7 = 1;
  }
  lVar1 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(param_1);
  if (lVar1 == 0) {
    uVar2 = 3000;
  }
  else {
    lVar1 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(param_1);
    if (lVar1 == 0) goto LAB_0234c930;
    uVar2 = *(undefined4 *)(lVar1 + 0x10);
  }
  if (param_1 != 0) {
    Dino_BusSand_App_Meta_StreakRateFeature__Config_224b744(param_1,uVar2);
    if (param_2 < 0) {
      return 1;
    }
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x18) <= param_2) {
        return 1;
      }
      lVar1 = System_Collections_Generic_List_object___get_Item_3a81924
                        (lVar1,param_2,*(undefined8 *)PTR_DAT_04cb3ba0);
      if (lVar1 != 0) {
        if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        return *(undefined4 *)(lVar1 + 0x24);
      }
    }
  }
LAB_0234c930:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

