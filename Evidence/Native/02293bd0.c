/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$DeduplicateHeads
void Dino_BusSand_App_UI_BattleRoyaleScenePanel__DeduplicateHeads (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, System_Collections_Generic_List_BattleRoyalePerson__o* infos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$DeduplicateHeads
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel__DeduplicateHeads
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this,
   System_Collections_Generic_List_BattleRoyalePerson__o* infos, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel__DeduplicateHeads_2193bd0(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  ulong uStack_70;
  
  puVar4 = PTR_DAT_04cae208;
  puVar3 = PTR_DAT_04cae200;
                    /* try { // try from 02293be4 to 02393c07 has its CatchHandler @ 02293be4
                       catch() { ... } // from try @ 02293be4 with catch @ 02293be4
                       catch() { ... } // from try @ 02293c14 with catch @ 02293be4 */
                    /* try { // try from 02293c08 to 02393c13 has its CatchHandler @ 02293c28 */
  if ((bRam0000000004f9b9b8 & 1) == 0) {
                    /* try { // try from 02293c14 to 02393c3b has its CatchHandler @ 02293be4 */
    FUN_02132f7c(PTR_DAT_04cadef0);
    FUN_02132f7c(PTR_DAT_04cae210);
                    /* catch() { ... } // from try @ 02293c08 with catch @ 02293c28 */
    FUN_02132f7c(PTR_DAT_04cad8c8);
    FUN_02132f7c(PTR_DAT_04cad890);
    FUN_02132f7c(PTR_DAT_04cad898);
    FUN_02132f7c(PTR_DAT_04cae218);
    FUN_02132f7c(PTR_DAT_04cae220);
    FUN_02132f7c(PTR_DAT_04cae208);
    FUN_02132f7c(PTR_DAT_04cae200);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad8a0);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cadf80);
                    /* try { // try from 02293cac to 02393cd7 has its CatchHandler @ 02293cac
                       catch() { ... } // from try @ 02293cac with catch @ 02293cac
                       catch() { ... } // from try @ 02293ce4 with catch @ 02293cac */
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cadf88);
    FUN_02132f7c(PTR_DAT_04cae230);
                    /* try { // try from 02293cd8 to 02393ce3 has its CatchHandler @ 02293cf8 */
    FUN_02132f7c(PTR_DAT_04caa1c8);
    bRam0000000004f9b9b8 = 1;
  }
                    /* try { // try from 02293ce4 to 02393d0b has its CatchHandler @ 02293cac */
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 02293cd8 with catch @ 02293cf8 */
  System_Collections_Generic_HashSet_int____ctor_37daeb0(lVar8,*(undefined8 *)puVar4);
  uVar7 = Dino_BusSand_App_UI_BattleRoyaleUi__get_MyHeadId_219bd74(0);
  puVar4 = PTR_DAT_04cad6e8;
  puVar3 = PTR_DAT_04caa1c8;
  if (lVar8 != 0) {
    System_Collections_Generic_HashSet_int___Add_37dc0f0
              (lVar8,uVar7,*(undefined8 *)PTR_DAT_04cae218);
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Collections_Generic_List_int____ctor_3a2b7dc(lVar9,*(undefined8 *)puVar4);
    puVar6 = PTR_DAT_04cadf88;
    puVar5 = PTR_DAT_04cadef0;
    puVar2 = PTR_DAT_04caa160;
    if (param_2 != 0) {
      if (1 < *(int *)(param_2 + 0x18)) {
        uVar19 = 1;
        do {
          lVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                             (param_2,uVar19,*(undefined8 *)puVar6);
          if (lVar10 == 0) goto LAB_022940d4;
          lVar11 = *(long *)puVar5;
          iVar18 = *(int *)(lVar10 + 0x10);
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar11 = *(long *)puVar5;
          }
          if (iVar18 != **(int **)(lVar11 + 0xb8)) {
            lVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                               (param_2,uVar19,*(undefined8 *)puVar6);
            if (lVar10 == 0) goto LAB_022940d4;
            if (0 < *(int *)(lVar10 + 0x14)) {
              lVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                                 (param_2,uVar19,*(undefined8 *)puVar6);
              if (lVar10 == 0) goto LAB_022940d4;
              uVar12 = System_Collections_Generic_HashSet_int___Add_37dc0f0
                                 (lVar8,*(undefined4 *)(lVar10 + 0x14),
                                  *(undefined8 *)PTR_DAT_04cae218);
              if ((uVar12 & 1) == 0) {
                if (lVar9 == 0) goto LAB_022940d4;
                lVar10 = *(long *)(lVar9 + 0x10);
                lVar11 = *(long *)puVar2;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar10 == 0) goto LAB_022940d4;
                uVar1 = *(uint *)(lVar9 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                  *(uint *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = uVar19;
                }
                else {
                  System_Collections_Generic_List_int___AddWithResize_3a2c06c
                            (lVar9,uVar19,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          }
        } while ((uVar19 < 7) && (uVar19 = uVar19 + 1, (int)uVar19 < *(int *)(param_2 + 0x18)));
      }
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x18) == 0) {
          return;
        }
        if (*(long *)(param_1 + 0x40) != 0) {
          lVar10 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_HeadIds_22202e0
                             (*(long *)(param_1 + 0x40),0);
          lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    /* try { // try from 02293ea0 to 02393ed3 has its CatchHandler @ 02293ea0
                       catch() { ... } // from try @ 02293ea0 with catch @ 02293ea0
                       catch() { ... } // from try @ 02293edc with catch @ 02293ea0 */
          System_Collections_Generic_List_int____ctor_3a2b7dc(lVar11,*(undefined8 *)puVar4);
          puVar4 = PTR_DAT_04cae220;
          puVar3 = PTR_DAT_04cad890;
          if (lVar10 != 0) {
                    /* try { // try from 02293ed4 to 02393edb has its CatchHandler @ 02293ef0 */
            System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                      (&uStack_98,lVar10,*(undefined8 *)PTR_DAT_04cad8a0);
                    /* try { // try from 02293edc to 02393f03 has its CatchHandler @ 02293ea0 */
            uStack_70 = uStack_88;
            puStack_78 = puStack_90;
            uStack_80 = uStack_98;
            uStack_98 = 0;
            puStack_90 = &uStack_80;
            while( true ) {
              do {
                    /* catch() { ... } // from try @ 02293ed4 with catch @ 02293ef0 */
                uVar13 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                                   (&uStack_80,*(undefined8 *)puVar3);
                uVar12 = uStack_70;
                puVar5 = PTR_DAT_04cad8c8;
                if ((uVar13 & 1) == 0) {
                  System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
                            (&uStack_80,*(undefined8 *)PTR_DAT_04cad8c8);
                    /* try { // try from 02293f94 to 02393fbf has its CatchHandler @ 02293f94
                       catch() { ... } // from try @ 02293f94 with catch @ 02293f94
                       catch() { ... } // from try @ 02293fcc with catch @ 02293f94 */
                  Dino_BusSand_App_Meta_BattleRoyaleRules__Shuffle_int__26ec074
                            (lVar11,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)PTR_DAT_04cae210)
                  ;
                  System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                            (&uStack_98,lVar9,*(undefined8 *)PTR_DAT_04cad8a0);
                  puVar4 = PTR_DAT_04cae230;
                    /* try { // try from 02293fc0 to 02393fcb has its CatchHandler @ 02293fe0 */
                  iVar18 = 0;
                  uStack_70 = uStack_88;
                    /* try { // try from 02293fcc to 02393ff3 has its CatchHandler @ 02293f94 */
                  puStack_78 = puStack_90;
                  uStack_80 = uStack_98;
                  uStack_98 = 0;
                  puStack_90 = &uStack_80;
                  while( true ) {
                    do {
                      while( true ) {
                    /* catch() { ... } // from try @ 02293fc0 with catch @ 02293fe0 */
                        uVar12 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                                           (&uStack_80,*(undefined8 *)puVar3);
                        if ((uVar12 & 1) == 0) {
                          System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
                                    (&uStack_80,*(undefined8 *)puVar5);
                          return;
                        }
                        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02133224();
                        }
                        if (*(int *)(lVar11 + 0x18) <= iVar18) break;
                        lVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                                          (param_2,uStack_70 & 0xffffffff,*(undefined8 *)puVar6);
                    /* try { // try from 0229405c to 02394097 has its CatchHandler @ 0229405c
                       catch() { ... } // from try @ 0229405c with catch @ 0229405c
                       catch() { ... } // from try @ 0229410c with catch @ 0229405c */
                        uVar7 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                          (lVar11,iVar18,*(undefined8 *)puVar4);
                        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02133224();
                        }
                        uVar15 = *(undefined8 *)puVar4;
                        *(undefined4 *)(lVar9 + 0x14) = uVar7;
                        uVar7 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                          (lVar11,iVar18,uVar15);
                    /* try { // try from 02294098 to 0239410b has its CatchHandler @ 0229417c */
                        System_Collections_Generic_HashSet_int___Add_37dc0f0
                                  (lVar8,uVar7,*(undefined8 *)PTR_DAT_04cae218);
                        iVar18 = iVar18 + 1;
                      }
                    } while (*(int *)(lVar10 + 0x18) < 1);
                    lVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                                      (param_2,uStack_70 & 0xffffffff,*(undefined8 *)puVar6);
                    plVar14 = *(long **)(param_1 + 0xa0);
                    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    uVar7 = (**(code **)(*plVar14 + 0x1a8))
                                      (plVar14,*(undefined4 *)(lVar10 + 0x18),
                                       *(undefined8 *)(*plVar14 + 0x1b0));
                    uVar7 = System_Collections_Generic_List_int___get_Item_3a2bd74
                                      (lVar10,uVar7,*(undefined8 *)puVar4);
                    if (lVar9 == 0) break;
                    *(undefined4 *)(lVar9 + 0x14) = uVar7;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uVar7 = (undefined4)uStack_70;
                uVar13 = System_Collections_Generic_HashSet_int___Contains_37db5b4
                                   (lVar8,uStack_70 & 0xffffffff,*(undefined8 *)puVar4);
              } while ((uVar13 & 1) != 0);
              if (lVar11 == 0) break;
              lVar16 = *(long *)(lVar11 + 0x10);
              lVar17 = *(long *)puVar2;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar16 == 0) break;
              uVar19 = *(uint *)(lVar11 + 0x18);
              if (uVar19 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar19 + 1;
                *(undefined4 *)(lVar16 + (long)(int)uVar19 * 4 + 0x20) = uVar7;
              }
              else {
                System_Collections_Generic_List_int___AddWithResize_3a2c06c
                          (lVar11,uVar12 & 0xffffffff,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
      }
    }
  }
LAB_022940d4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

