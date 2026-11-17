/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$StartPassport
void Dino_BusSand_App_Meta_PassportFeature__StartPassport (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$StartPassport
   void Dino_BusSand_App_Meta_PassportFeature__StartPassport
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__StartPassport_2249b48(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf84 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0558);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf84 = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar3 + 0x14) == 0) {
    *(undefined4 *)(lVar3 + 0x14) = 1;
    iVar2 = Dino_BusSand_App_Meta_PassportFeature__get_EffectiveConfigId_2244894(param_1);
    if (0 < iVar2) {
      *(int *)(lVar3 + 0x18) = iVar2;
    }
    Dino_BusSand_App_Meta_PassportFeature__AdvanceStages_2246bd8(param_1);
    puVar1 = PTR_DAT_04cb0558;
    *(undefined1 *)(lVar3 + 0x88) = 0;
    uVar4 = *(undefined8 *)puVar1;
    *(int *)(lVar3 + 0x74) = *(int *)(lVar3 + 0x74) + 1;
    Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,uVar4);
    Dino_BusSand_App_Meta_PassportFeature__TrackUnlockStage_2247500(param_1,0);
    puVar1 = PTR_DAT_04caef48;
    lVar3 = *(long *)PTR_DAT_04caef48;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02349c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
  return;
}

