/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$AdvanceStages
void Dino_BusSand_App_Meta_PassportFeature__AdvanceStages (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$AdvanceStages
   void Dino_BusSand_App_Meta_PassportFeature__AdvanceStages
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__AdvanceStages_2246bd8(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf67 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    bRam0000000004f9bf67 = 1;
  }
  lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  iVar2 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0(param_1);
  iVar3 = Dino_BusSand_App_Meta_PassportFeature__get_BonusBankMaxTimes_2244b50(param_1);
  if (lVar5 != 0) {
    iVar4 = *(int *)(lVar5 + 0x2c);
    while( true ) {
      if (iVar3 + iVar2 <= iVar4) {
        return;
      }
      iVar4 = Dino_BusSand_App_Meta_PassportFeature__StageKeyCost_2246a60(param_1);
      if (iVar4 < 0) break;
      if (iVar4 != 0) {
        if (*(int *)(lVar5 + 0x20) < iVar4) {
          return;
        }
        *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) - iVar4;
      }
      iVar4 = *(int *)(lVar5 + 0x2c) + 1;
      *(int *)(lVar5 + 0x2c) = iVar4;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

