/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$IsOldPeriodClaimDone
bool Dino_BusSand_App_Meta_ClimbTowerFeature__IsOldPeriodClaimDone (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$IsOldPeriodClaimDone
   bool Dino_BusSand_App_Meta_ClimbTowerFeature__IsOldPeriodClaimDone
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_ClimbTowerFeature__IsOldPeriodClaimDone_222a780(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04caf910;
  if ((bRam0000000004f9be29 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be29 = 1;
  }
  lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar2)
  ;
  puVar2 = PTR_DAT_04caf910;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(char *)(lVar5 + 0x32) == '\0') {
    return false;
  }
  if ((bRam0000000004f9be1c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be1c = 1;
  }
  lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar2)
  ;
  if (lVar5 != 0) {
    if ((*(int *)(lVar5 + 0x1c) == 0) ||
       (uVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_HasConfig_2229308(param_1),
       (uVar3 & 1) == 0)) {
      return true;
    }
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      uVar6 = *(uint *)(lVar5 + 0x18);
      if ((int)uVar6 < 1) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        do {
          if (uVar6 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          iVar1 = *(int *)(lVar5 + 0x20 + lVar7 * 4);
          lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                            (param_1,*(undefined8 *)puVar2);
          if (lVar4 == 0) goto LAB_023299dc;
          if (*(int *)(lVar4 + 0x18) < iVar1) break;
          uVar6 = *(uint *)(lVar5 + 0x18);
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < (int)uVar6);
      }
      lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar2);
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0x38) != 0)) {
        return (int)lVar7 == *(int *)(*(long *)(lVar5 + 0x38) + 0x18);
      }
    }
  }
LAB_023299dc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

