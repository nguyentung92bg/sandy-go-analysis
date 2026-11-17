/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$UpdateLockedToInProgress
void Dino_BusSand_App_Meta_StreakRateFeature__UpdateLockedToInProgress (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, bool isWin, bool forceOpen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$UpdateLockedToInProgress
   void Dino_BusSand_App_Meta_StreakRateFeature__UpdateLockedToInProgress
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, bool isWin, bool forceOpen, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_StreakRateFeature__UpdateLockedToInProgress_224e058
               (undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  
  if ((bRam0000000004f9bfb2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3b50);
    FUN_02132f7c(PTR_DAT_04cb3b58);
    FUN_02132f7c(PTR_DAT_04cb3b60);
    FUN_02132f7c(PTR_DAT_04cb3b68);
    FUN_02132f7c(PTR_DAT_04cb3bd0);
    FUN_02132f7c(PTR_DAT_04cb3ba8);
    FUN_02132f7c(PTR_DAT_04cb3b48);
    bRam0000000004f9bfb2 = 1;
  }
  uStack_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  lStack_40 = 0;
  lVar3 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(param_1);
  if ((lVar3 != 0) &&
     (uVar4 = Dino_BusSand_App_Meta_StreakRateFeature__IsTimeFinished_224cee8(param_1,lVar3),
     (uVar4 & 1) == 0)) {
    return;
  }
  puVar1 = PTR_DAT_04cb3b48;
  lVar3 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
  lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  puVar2 = PTR_DAT_04cb3b58;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_68,*(long *)(lVar5 + 0x10),*(undefined8 *)PTR_DAT_04cb3b68);
    lStack_40 = lStack_58;
    puStack_48 = puStack_60;
    uStack_50 = uStack_68;
    uStack_68 = 0;
    puStack_60 = &uStack_50;
    while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_50,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((*(long *)(lStack_40 + 0x30) <= lVar3) && (lVar3 <= *(long *)(lStack_40 + 0x38))) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_50,*(undefined8 *)PTR_DAT_04cb3b50);
        return;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_50,*(undefined8 *)PTR_DAT_04cb3b50);
    lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      if (0 < *(int *)(lVar3 + 0x18)) {
        lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                          (param_1,*(undefined8 *)puVar1);
        if (lVar3 == 0) goto LAB_0234e2fc;
        uVar6 = *(undefined8 *)PTR_DAT_04cb3ba8;
        *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + -1;
        Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,uVar6);
      }
      if ((param_3 & 1) != 0) {
        lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                          (param_1,*(undefined8 *)puVar1);
        puVar2 = PTR_DAT_04cb3ba8;
        if (lVar3 == 0) goto LAB_0234e2fc;
        *(undefined4 *)(lVar3 + 0x18) = 0;
        Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,*(undefined8 *)puVar2);
      }
      lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        if (0 < *(int *)(lVar3 + 0x18)) {
          return;
        }
        lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                          (param_1,*(undefined8 *)puVar1);
        if (((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) &&
           (lVar3 = System_Collections_Generic_List_object___ToArray_3a83728
                              (*(long *)(lVar3 + 0x10),*(undefined8 *)PTR_DAT_04cb3bd0), lVar3 != 0)
           ) {
          uVar7 = *(uint *)(lVar3 + 0x18);
          if (0 < (int)uVar7) {
            uVar8 = 0;
            do {
              if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              lVar5 = *(long *)(lVar3 + (long)(int)uVar8 * 8 + 0x20);
              if (lVar5 == 0) goto LAB_0234e2fc;
              if ((*(int *)(lVar5 + 0x28) == 0) ||
                 ((*(int *)(lVar5 + 0x28) == 2 &&
                  (uVar4 = Dino_BusSand_App_Meta_StreakRateFeature__IsTimeFinished_224cee8
                                     (param_1,lVar5), (uVar4 & 1) != 0)))) {
                Dino_BusSand_App_Meta_StreakRateFeature__MarkFinished_224d208(param_1,lVar5);
              }
              uVar7 = *(uint *)(lVar3 + 0x18);
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < (int)uVar7);
          }
          Dino_BusSand_App_Meta_StreakRateFeature__AutoAddNewOne_224d2c4(param_1);
          return;
        }
      }
    }
  }
LAB_0234e2fc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

