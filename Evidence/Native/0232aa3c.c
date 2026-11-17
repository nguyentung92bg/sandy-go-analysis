/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$LoadNewPeriodData
bool Dino_BusSand_App_Meta_ClimbTowerFeature__LoadNewPeriodData (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$LoadNewPeriodData
   bool Dino_BusSand_App_Meta_ClimbTowerFeature__LoadNewPeriodData
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_ClimbTowerFeature__LoadNewPeriodData_222aa3c(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_34;
  
  puVar5 = PTR_DAT_04cb2170;
  if ((bRam0000000004f9be2d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04cb2e18);
    FUN_02132f7c(PTR_DAT_04caf910);
    FUN_02132f7c(PTR_DAT_04cb2170);
    bRam0000000004f9be2d = 1;
  }
  uStack_34 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uVar6 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
  uVar7 = Dino_BusSand_App_Meta_StreakTowerUtil__CurrentPeriod_224d438
                    (*(undefined8 *)puVar5,1,uVar6,&uStack_34,&uStack_48,&uStack_50,0);
  if (((uVar7 & 1) == 0) ||
     (uVar7 = Dino_BusSand_App_Meta_ClimbTowerFeature__NewDataValid_222a8e8
                        (param_1,uStack_48,uStack_50), (uVar7 & 1) == 0)) {
    return 0;
  }
  Dino_BusSand_App_Meta_ClimbTowerFeature__ClearPeriod_222acfc(param_1);
  puVar5 = PTR_DAT_04caf910;
  lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                    (param_1,*(undefined8 *)PTR_DAT_04caf910);
  if (lVar8 != 0) {
    uVar6 = *(undefined8 *)puVar5;
    *(undefined4 *)(lVar8 + 0x1c) = uStack_34;
    lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar6);
    if (lVar8 != 0) {
      uVar6 = *(undefined8 *)puVar5;
      *(undefined8 *)(lVar8 + 0x20) = uStack_48;
      lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar6);
      if (lVar8 != 0) {
        uVar6 = *(undefined8 *)puVar5;
        *(undefined8 *)(lVar8 + 0x28) = uStack_50;
        lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar6);
        if (lVar8 != 0) {
          uVar6 = *(undefined8 *)puVar5;
          *(undefined4 *)(lVar8 + 0x34) = 0;
          lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar6);
          if (lVar8 != 0) {
            uVar6 = *(undefined8 *)puVar5;
            *(int *)(lVar8 + 0x50) = *(int *)(lVar8 + 0x50) + 1;
            lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar6);
            if (lVar8 != 0) {
              *(undefined4 *)(lVar8 + 0x54) = 0;
              *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
              Dino_BusSand_App_Meta_ClimbTowerFeature__Config_2228e68(param_1);
              puVar4 = PTR_DAT_04cad860;
              puVar3 = PTR_DAT_04caa160;
              lVar8 = *(long *)(param_1 + 0x20);
              if (lVar8 != 0) {
                lVar12 = 8;
                do {
                  uVar7 = lVar12 - 8;
                  if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar7) {
LAB_0232acc8:
                    Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc
                              (param_1,*(undefined8 *)PTR_DAT_04cb2e18);
                    return 1;
                  }
                  lVar8 = *(long *)(param_1 + 0x30);
                  if (lVar8 == 0) break;
                  if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar7) goto LAB_0232acc8;
                  if (*(uint *)(lVar8 + 0x18) <= uVar7) {
LAB_0232acf8:
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                  if (*(int *)(lVar8 + lVar12 * 4) == -1) {
                    lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                      (param_1,*(undefined8 *)puVar5);
                    if ((lVar8 == 0) || (lVar10 = *(long *)(param_1 + 0x20), lVar10 == 0)) break;
                    if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_0232acf8;
                    if (*(long *)(lVar8 + 0x38) == 0) break;
                    uVar9 = System_Collections_Generic_List_int___Contains_3a2c3ec
                                      (*(long *)(lVar8 + 0x38),*(undefined4 *)(lVar10 + lVar12 * 4),
                                       *(undefined8 *)puVar4);
                    if ((uVar9 & 1) == 0) {
                      lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                        (param_1,*(undefined8 *)puVar5);
                      if ((lVar8 == 0) || (lVar10 = *(long *)(param_1 + 0x20), lVar10 == 0)) break;
                      if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_0232acf8;
                      lVar8 = *(long *)(lVar8 + 0x38);
                      if (lVar8 == 0) break;
                      lVar11 = *(long *)(lVar8 + 0x10);
                      uVar1 = *(undefined4 *)(lVar10 + lVar12 * 4);
                      lVar10 = *(long *)puVar3;
                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                      if (lVar11 == 0) break;
                      uVar2 = *(uint *)(lVar8 + 0x18);
                      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                        *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                        *(undefined4 *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
                      }
                      else {
                        System_Collections_Generic_List_int___AddWithResize_3a2c06c
                                  (lVar8,uVar1,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                  }
                  lVar8 = *(long *)(param_1 + 0x20);
                  lVar12 = lVar12 + 1;
                } while (lVar8 != 0);
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

