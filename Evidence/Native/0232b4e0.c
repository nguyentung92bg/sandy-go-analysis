/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$OnBoot
void Dino_BusSand_App_Meta_ClimbTowerFeature__OnBoot (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$OnBoot
   void Dino_BusSand_App_Meta_ClimbTowerFeature__OnBoot (Dino_BusSand_App_Meta_ClimbTowerFeature_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_ClimbTowerFeature__OnBoot_222b4e0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if ((bRam0000000004f9be35 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be35 = 1;
  }
  puVar1 = PTR_DAT_04caf910;
  uVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_HasData_2229490(param_1);
  if ((uVar3 & 1) != 0) {
    lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)puVar1);
    if (lVar4 == 0) goto LAB_0232b610;
    iVar2 = *(int *)(lVar4 + 0x10);
    lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)puVar1);
    if (lVar4 == 0) goto LAB_0232b610;
    if (iVar2 < *(int *)(lVar4 + 0x14)) {
      uVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__DeclinePlayed_2229c58(param_1);
      if ((uVar3 & 1) == 0) {
        Dino_BusSand_App_Meta_ClimbTowerFeature__RecordDecline_222b200(param_1);
      }
      Dino_BusSand_App_Meta_ClimbTowerFeature__RecordLast_222b058(param_1);
    }
  }
  uVar3 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_HasData_2229490(param_1);
  if (((uVar3 & 1) != 0) &&
     (iVar2 = Dino_BusSand_App_Meta_ClimbTowerFeature__State_222a414(param_1), iVar2 == 2)) {
    Dino_BusSand_App_Meta_ClimbTowerFeature__Config_2228e68(param_1);
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) {
LAB_0232b610:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar3 = 0;
      uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        iVar2 = *(int *)(lVar4 + 0x20 + uVar3 * 4);
        lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                          (param_1,*(undefined8 *)puVar1);
        if (lVar5 == 0) goto LAB_0232b610;
        if (iVar2 <= *(int *)(lVar5 + 0x18)) {
          Dino_BusSand_App_Meta_ClimbTowerFeature__RecordRise_222b0cc(param_1,iVar2);
        }
        uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
  }
  return;
}

