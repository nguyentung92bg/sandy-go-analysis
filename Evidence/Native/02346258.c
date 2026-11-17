/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$SnapshotExpired
bool Dino_BusSand_App_Meta_PassportFeature__SnapshotExpired (Dino_BusSand_App_Meta_PassportFeature_o* __this, int64_t now, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$SnapshotExpired
   bool Dino_BusSand_App_Meta_PassportFeature__SnapshotExpired
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, int64_t now, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_PassportFeature__SnapshotExpired_2246258(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf57 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    bRam0000000004f9bf57 = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x58) < 1) {
      bVar2 = false;
    }
    else {
      lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar1);
      if (lVar3 == 0) goto LAB_023462e4;
      bVar2 = *(long *)(lVar3 + 0x58) < param_2;
    }
    return bVar2;
  }
LAB_023462e4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

