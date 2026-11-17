/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$SnapshotValid
bool Dino_BusSand_App_Meta_PassportFeature__SnapshotValid (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$SnapshotValid
   bool Dino_BusSand_App_Meta_PassportFeature__SnapshotValid
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_PassportFeature__SnapshotValid_22460ec(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  if ((bRam0000000004f9bf55 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    bRam0000000004f9bf55 = 1;
  }
  uVar4 = Dino_BusSand_App_Meta_PassportFeature__HavePassports_2245f58(param_1);
  if ((((uVar4 & 1) == 0) ||
      (uVar4 = Dino_BusSand_App_Meta_PassportFeature__get_HasSnapshot_2246084(param_1),
      (uVar4 & 1) == 0)) ||
     (iVar2 = Dino_BusSand_App_Meta_PassportFeature__get_GiftPackId_2244bac(param_1), iVar2 < 1)) {
    bVar1 = false;
  }
  else {
    lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)PTR_DAT_04cb01b0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar2 = *(int *)(lVar5 + 0x44);
    iVar3 = Dino_BusSand_App_Meta_PassportFeature__get_GiftPackId_2244bac(param_1);
    bVar1 = iVar2 == iVar3;
  }
  return bVar1;
}

