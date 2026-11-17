/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$AutoAddNewOne
void Dino_BusSand_App_Meta_StreakRateFeature__AutoAddNewOne (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$AutoAddNewOne
   void Dino_BusSand_App_Meta_StreakRateFeature__AutoAddNewOne
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_StreakRateFeature__AutoAddNewOne_224d2c4(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  puVar3 = PTR_DAT_04cb3b48;
  if ((bRam0000000004f9bfaf & 1) == 0) {
                    /* try { // try from 0234d2f4 to 0244d2f7 has its CatchHandler @ 0234d2fc */
    FUN_02132f7c(PTR_DAT_04cb3bd0);
                    /* try { // try from 0234d2f8 to 0244d32b has its CatchHandler @ 0234d0c4 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0234d2f4 with catch @ 0234d2fc
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0234d280 with catch @ 0234d300
                        */
    FUN_02132f7c(PTR_DAT_04cb3b48);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0234d21c with catch @ 0234d304
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0234d238 with catch @ 0234d308
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0234d220 with catch @ 0234d30c
                        */
    FUN_02132f7c(PTR_DAT_04cb2178);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0234d200 with catch @ 0234d310
                        */
    bRam0000000004f9bfaf = 1;
  }
  lVar11 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                     (param_1,*(undefined8 *)puVar3);
                    /* try { // try from 0234d32c to 0244d32f has its CatchHandler @ 0234d348 */
                    /* try { // try from 0234d330 to 0244d34b has its CatchHandler @ 0234d0c4 */
                    /* catch() { ... } // from try @ 0234d32c with catch @ 0234d348 */
  if (((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) &&
     (lVar11 = System_Collections_Generic_List_object___ToArray_3a83728
                         (*(long *)(lVar11 + 0x10),*(undefined8 *)PTR_DAT_04cb3bd0), lVar11 != 0)) {
                    /* try { // try from 0234d34c to 0244d353 has its CatchHandler @ 0234d35c */
    uVar14 = *(uint *)(lVar11 + 0x18);
                    /* try { // try from 0234d354 to 0244d35f has its CatchHandler @ 0234d0c4 */
    if (0 < (int)uVar14) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0234d34c with catch @ 0234d35c
                        */
      uVar19 = 0;
      do {
        if (uVar14 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar18 = *(long *)(lVar11 + (long)(int)uVar19 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_0234d430;
        if ((*(int *)(lVar18 + 0x28) == 2) &&
           (uVar12 = Dino_BusSand_App_Meta_StreakRateFeature__IsTimeFinished_224cee8(param_1,lVar18)
           , (uVar12 & 1) != 0)) {
          Dino_BusSand_App_Meta_StreakRateFeature__MarkFinished_224d208(param_1,lVar18);
        }
        uVar14 = *(uint *)(lVar11 + 0x18);
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < (int)uVar14);
    }
    lVar11 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                       (param_1,*(undefined8 *)puVar3);
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x18) < 1) {
        uVar13 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
        uVar12 = Dino_BusSand_App_Meta_StreakTowerUtil__CurrentPeriod_224d438
                           (*(undefined8 *)PTR_DAT_04cb2178,1,uVar13,&stack0xffffffffffffffcc,
                            &stack0xffffffffffffffc0,&stack0xffffffffffffffb8);
        puVar3 = PTR_DAT_04cb3b48;
        if ((uVar12 & 1) != 0) {
          if ((bRam0000000004f9bfb0 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cb3b50);
            FUN_02132f7c(PTR_DAT_04cb3b58);
            FUN_02132f7c(PTR_DAT_04cb3b60);
            FUN_02132f7c(PTR_DAT_04cac498);
            FUN_02132f7c(PTR_DAT_04cb3bd8);
            FUN_02132f7c(PTR_DAT_04cb3b68);
            FUN_02132f7c(PTR_DAT_04cb3ba8);
            FUN_02132f7c(PTR_DAT_04cb3b48);
            FUN_02132f7c(PTR_DAT_04cb3be0);
            bRam0000000004f9bfb0 = 1;
          }
          uStack_80 = 0;
          puStack_78 = (undefined8 *)0x0;
          lStack_70 = 0;
          auStack_90._0_8_ = 0;
          auStack_90._8_8_ = 0;
          lVar11 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                             (param_1,*(undefined8 *)puVar3);
          puVar8 = PTR_DAT_04cb3be0;
          puVar7 = PTR_DAT_04cb3bd8;
          puVar6 = PTR_DAT_04cb3ba8;
          puVar5 = PTR_DAT_04cb3b58;
          puVar4 = PTR_DAT_04cb3b50;
          puVar2 = PTR_DAT_04cac498;
          auVar1._8_8_ = auStack_90._8_8_;
          auVar1._0_8_ = auStack_90._0_8_;
          if ((lVar11 != 0) && (auStack_90 = auVar1, *(long *)(lVar11 + 0x10) != 0)) {
            System_Collections_Generic_List_object___GetEnumerator_3a825f0
                      (&uStack_a8,*(long *)(lVar11 + 0x10),*(undefined8 *)PTR_DAT_04cb3b68);
            lStack_70 = lStack_98;
            puStack_78 = puStack_a0;
            uStack_80 = uStack_a8;
            uStack_a8 = 0;
            puStack_a0 = &uStack_80;
            while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                      (&uStack_80,*(undefined8 *)puVar5), (uVar12 & 1) != 0) {
              if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if (((*(long *)(lStack_70 + 0x30) < 1) && (-1 < *(long *)(lStack_70 + 0x38))) ||
                 ((*(long *)(lStack_70 + 0x30) < 1 && (-1 < *(long *)(lStack_70 + 0x38))))) {
                System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                          (&uStack_80,*(undefined8 *)puVar4);
                return;
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_80,*(undefined8 *)puVar4);
            lVar11 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                               (param_1,*(undefined8 *)puVar3);
            uVar10 = Dino_BusSand_App_Meta_SystemOpen__NextNeedWinTimes_22435b8(3);
            if (lVar11 != 0) {
              uVar13 = *(undefined8 *)puVar8;
              *(undefined4 *)(lVar11 + 0x18) = uVar10;
              lVar11 = thunk_FUN_0216e89c(uVar13);
              Dino_BusSand_App_Meta_StreakRateSlot___ctor_224b5ac();
              if (lVar11 != 0) {
                *(undefined4 *)(lVar11 + 0x10) = 0;
                auStack_90 = System_Guid__NewGuid_48283c0(0);
                uVar13 = System_Guid__ToString_482a234(auStack_90,0);
                *(undefined8 *)(lVar11 + 0x20) = uVar13;
                thunk_FUN_02134474((undefined8 *)(lVar11 + 0x20),uVar13);
                *(undefined8 *)(lVar11 + 0x30) = 0;
                *(undefined8 *)(lVar11 + 0x38) = 0;
                *(undefined8 *)(lVar11 + 0x40) = 0;
                *(undefined8 *)(lVar11 + 0x48) = 0;
                *(undefined4 *)(lVar11 + 0x28) = 0;
                *(undefined4 *)(lVar11 + 0x50) = 0xffffffff;
                bVar9 = Dino_BusSand_App_Meta_SystemOpen__Guided_2243224(3);
                uVar13 = *(undefined8 *)puVar3;
                *(undefined1 *)(lVar11 + 0x5d) = 0;
                *(byte *)(lVar11 + 0x5c) = (bVar9 ^ 0xff) & 1;
                lVar18 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,uVar13)
                ;
                if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x10), lVar18 != 0)) {
                  lVar15 = *(long *)(lVar18 + 0x10);
                  lVar17 = *(long *)puVar7;
                  *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                  if (lVar15 != 0) {
                    uVar14 = *(uint *)(lVar18 + 0x18);
                    if (uVar14 < *(uint *)(lVar15 + 0x18)) {
                      *(uint *)(lVar18 + 0x18) = uVar14 + 1;
                      plVar16 = (long *)(lVar15 + (long)(int)uVar14 * 8 + 0x20);
                      *plVar16 = lVar11;
                      thunk_FUN_02134474(plVar16,lVar11);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                (lVar18,lVar11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
                      ;
                    }
                    lVar18 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                       (param_1,*(undefined8 *)puVar3);
                    if (lVar18 != 0) {
                      uVar13 = *(undefined8 *)puVar6;
                      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                      Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,uVar13);
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      Dino_BusSand_App_Meta_GameTracking__GoldenStreakJoined_221a7e8(lVar11,0);
                      return;
                    }
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
      return;
    }
  }
LAB_0234d430:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

