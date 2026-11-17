/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$OnPassportCycleSnapshotExpired
void Dino_BusSand_App_Meta_PassportFeature__OnPassportCycleSnapshotExpired (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$OnPassportCycleSnapshotExpired
   void Dino_BusSand_App_Meta_PassportFeature__OnPassportCycleSnapshotExpired
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__OnPassportCycleSnapshotExpired_22495f0
               (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf82 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0558);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf82 = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x14) == 2) {
      Dino_BusSand_App_Meta_PassportFeature__ResetForNewCycle_22497ec(param_1);
      Dino_BusSand_App_Meta_PassportFeature__RefreshPassportCycleSnapshot_224945c(param_1);
      lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar1);
      if (lVar2 == 0) goto LAB_02349708;
      *(undefined4 *)(lVar2 + 0x14) = 0;
      lVar2 = Dino_BusSand_App_Meta_PassportFeature__PackState_22493c0(param_1);
      if (((lVar2 != 0) && (*(char *)(lVar2 + 0x30) != '\0')) && (*(char *)(lVar2 + 0x6c) != '\0'))
      {
        Dino_BusSand_App_Meta_PassportFeature__OnGivePurchaseReward_2249918(param_1,0,0);
      }
      Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc
                (param_1,*(undefined8 *)PTR_DAT_04cb0558);
      puVar1 = PTR_DAT_04caef48;
      lVar2 = *(long *)PTR_DAT_04caef48;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023496f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        return;
      }
    }
    return;
  }
LAB_02349708:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

