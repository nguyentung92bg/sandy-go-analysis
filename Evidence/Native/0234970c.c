/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$OnGiftPackTriggered
void Dino_BusSand_App_Meta_PassportFeature__OnGiftPackTriggered (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$OnGiftPackTriggered
   void Dino_BusSand_App_Meta_PassportFeature__OnGiftPackTriggered
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t packId, const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__OnGiftPackTriggered_224970c
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam0000000004f9bf81 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf81 = 1;
  }
  uVar3 = Dino_BusSand_App_Meta_PassportFeature__HavePassports_2245f58(param_1);
  if ((uVar3 & 1) != 0) {
    lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)PTR_DAT_04cb01b0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (((*(int *)(lVar4 + 0x14) == 0) &&
        (iVar2 = Dino_BusSand_App_Meta_PassportFeature__get_GiftPackId_2244bac(param_1), 0 < iVar2))
       && (iVar2 = Dino_BusSand_App_Meta_PassportFeature__get_GiftPackId_2244bac(param_1),
          iVar2 == param_2)) {
      Dino_BusSand_App_Meta_PassportFeature__RefreshPassportCycleSnapshot_224945c(param_1);
      puVar1 = PTR_DAT_04caef48;
      lVar4 = *(long *)PTR_DAT_04caef48;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar1;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023497e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        return;
      }
    }
  }
  return;
}

