/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$ClearPeriod
void Dino_BusSand_App_Meta_ClimbTowerFeature__ClearPeriod (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$ClearPeriod
   void Dino_BusSand_App_Meta_ClimbTowerFeature__ClearPeriod
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_ClimbTowerFeature__ClearPeriod_222acfc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04caf910;
  if ((bRam0000000004f9be2e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad858);
    FUN_02132f7c(PTR_DAT_04caf910);
    bRam0000000004f9be2e = 1;
  }
  lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  if (((lVar4 != 0) && (*(undefined4 *)(lVar4 + 0x18) = 0, lVar3 != 0)) &&
     (*(undefined4 *)(lVar3 + 0x14) = 0, lVar2 != 0)) {
    uVar5 = *(undefined8 *)puVar1;
    *(undefined4 *)(lVar2 + 0x10) = 0;
    lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar5);
    if (lVar2 != 0) {
      uVar5 = *(undefined8 *)puVar1;
      *(undefined4 *)(lVar2 + 0x1c) = 0;
      lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar5);
      lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar1);
      if ((lVar3 != 0) && (*(undefined8 *)(lVar3 + 0x28) = 0, lVar2 != 0)) {
        uVar5 = *(undefined8 *)puVar1;
        *(undefined8 *)(lVar2 + 0x20) = 0;
        lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar5);
        lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                          (param_1,*(undefined8 *)puVar1);
        lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                          (param_1,*(undefined8 *)puVar1);
        if ((lVar4 != 0) &&
           ((*(undefined1 *)(lVar4 + 0x32) = 0, lVar3 != 0 &&
            (*(undefined1 *)(lVar3 + 0x31) = 0, lVar2 != 0)))) {
          uVar5 = *(undefined8 *)puVar1;
          *(undefined1 *)(lVar2 + 0x30) = 0;
          lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar5);
          if (lVar2 != 0) {
            uVar5 = *(undefined8 *)puVar1;
            *(undefined4 *)(lVar2 + 0x34) = 0;
            lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar5);
            if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x38), lVar2 != 0)) {
              uVar5 = *(undefined8 *)puVar1;
              *(undefined4 *)(lVar2 + 0x18) = 0;
              *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
              lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar5);
              if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x40), lVar2 != 0)) {
                uVar5 = *(undefined8 *)puVar1;
                *(undefined4 *)(lVar2 + 0x18) = 0;
                *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                lVar2 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar5);
                if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x48), lVar2 != 0)) {
                  *(undefined4 *)(lVar2 + 0x18) = 0;
                  *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

