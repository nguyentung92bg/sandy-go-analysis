/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$CanClaimIsClaimDone
bool Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaimIsClaimDone (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$CanClaimIsClaimDone
   bool Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaimIsClaimDone
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_ClimbTowerFeature__CanClaimIsClaimDone_22298d4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04caf910;
  if ((bRam0000000004f9be1c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be1c = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar2)
  ;
  if (lVar3 != 0) {
    if ((*(int *)(lVar3 + 0x1c) == 0) ||
       (uVar4 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_HasConfig_2229308(param_1),
       (uVar4 & 1) == 0)) {
      return true;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      uVar6 = *(uint *)(lVar3 + 0x18);
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
          iVar1 = *(int *)(lVar3 + 0x20 + lVar7 * 4);
          lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                            (param_1,*(undefined8 *)puVar2);
          if (lVar5 == 0) goto LAB_023299dc;
          if (*(int *)(lVar5 + 0x18) < iVar1) break;
          uVar6 = *(uint *)(lVar3 + 0x18);
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < (int)uVar6);
      }
      lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar2);
      if ((lVar3 != 0) && (*(long *)(lVar3 + 0x38) != 0)) {
        return (int)lVar7 == *(int *)(*(long *)(lVar3 + 0x38) + 0x18);
      }
    }
  }
LAB_023299dc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

