/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$HandleAntiStack
void Dino_BusSand_App_Meta_RacingRobotSession__HandleAntiStack (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, int32_t playerProgress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$HandleAntiStack
   void Dino_BusSand_App_Meta_RacingRobotSession__HandleAntiStack
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, int32_t playerProgress, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_RacingRobotSession__HandleAntiStack_2261d48(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  byte bVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  int iVar15;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  if ((bRam0000000004f9c046 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb44e8);
    FUN_02132f7c(PTR_DAT_04cb1cf8);
    FUN_02132f7c(PTR_DAT_04cb44f0);
    FUN_02132f7c(PTR_DAT_04cb1d00);
    FUN_02132f7c(PTR_DAT_04cb1cf0);
    FUN_02132f7c(PTR_DAT_04cb4460);
    FUN_02132f7c(PTR_DAT_04cb4468);
    FUN_02132f7c(PTR_DAT_04cb4470);
                    /* try { // try from 02361ddc to 02461de3 has its CatchHandler @ 02361f1c */
    FUN_02132f7c(PTR_DAT_04cb4478);
                    /* try { // try from 02361de4 to 02461e5b has its CatchHandler @ 02361d04 */
    bRam0000000004f9c046 = 1;
  }
  puVar5 = PTR_DAT_04cb1cf8;
  lVar14 = *(long *)(param_1 + 0x18);
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  if (lVar14 != 0) {
    iVar1 = *(int *)(lVar14 + 0x20);
    iVar2 = *(int *)(lVar14 + 0x24);
    lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb1cf0);
    System_Collections_Generic_Dictionary_int__int____ctor_342c330(lVar14,*(undefined8 *)puVar5);
    puVar8 = PTR_DAT_04cb44e8;
    puVar6 = PTR_DAT_04cb4478;
    puVar7 = PTR_DAT_04cb4468;
    puVar5 = PTR_DAT_04cb4460;
    if (*(long *)(param_1 + 0x28) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_a8,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cb4478);
                    /* try { // try from 02361e5c to 02461e63 has its CatchHandler @ 02361ed0 */
                    /* try { // try from 02361e64 to 02461ebf has its CatchHandler @ 02361d04 */
      iVar15 = 0;
      lStack_70 = lStack_98;
      puStack_78 = puStack_a0;
      uStack_80 = uStack_a8;
      uStack_a8 = 0;
      puStack_a0 = &uStack_80;
      while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&uStack_80,*(undefined8 *)puVar7), lVar9 = lStack_70,
            (uVar12 & 1) != 0) {
        if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(int *)(lStack_70 + 0xa0) == 0) {
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          System_Collections_Generic_Dictionary_int__int___TryGetValue_342ea24
                    (lVar14,*(undefined4 *)(lStack_70 + 0x9c),(long)&uStack_88 + 4,
                     *(undefined8 *)puVar8);
                    /* try { // try from 02361ec0 to 02461ec3 has its CatchHandler @ 02361f18 */
                    /* try { // try from 02361ec4 to 02461ec7 has its CatchHandler @ 02361ecc */
                    /* try { // try from 02361ec8 to 02461eeb has its CatchHandler @ 02361d04 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02361ec4 with catch @ 02361ecc
                        */
          System_Collections_Generic_Dictionary_int__int___set_Item_342d0a4
                    (lVar14,*(undefined4 *)(lVar9 + 0x9c),uStack_88._4_4_ + 1,
                     *(undefined8 *)PTR_DAT_04cb1d00);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02361e5c with catch @ 02361ed0
                        */
          if (*(int *)(lVar9 + 0x9c) == param_2) {
            iVar15 = iVar15 + 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_80,*(undefined8 *)puVar5);
                    /* try { // try from 02361eec to 02461eef has its CatchHandler @ 02361f08 */
                    /* try { // try from 02361ef0 to 02461f0b has its CatchHandler @ 02361d04 */
      if (*(long *)(param_1 + 0x28) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_a8,*(long *)(param_1 + 0x28),*(undefined8 *)puVar6);
                    /* catch() { ... } // from try @ 02361eec with catch @ 02361f08 */
                    /* try { // try from 02361f0c to 02461f13 has its CatchHandler @ 02361f68 */
        lStack_70 = lStack_98;
                    /* try { // try from 02361f14 to 02461f37 has its CatchHandler @ 02361d04 */
        puStack_78 = puStack_a0;
        uStack_80 = uStack_a8;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02361ec0 with catch @ 02361f18
                        */
        uStack_a8 = 0;
        puStack_a0 = &uStack_80;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02361ddc with catch @ 02361f1c
                        */
        while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                  (&uStack_80,*(undefined8 *)puVar7), lVar9 = lStack_70,
              (uVar12 & 1) != 0) {
          if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
                    /* try { // try from 02361f38 to 02461f3b has its CatchHandler @ 02361f54 */
          if (*(int *)(lStack_70 + 0xa0) == 0) {
                    /* try { // try from 02361f3c to 02461f57 has its CatchHandler @ 02361d04 */
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            iVar11 = *(int *)(lStack_70 + 0x9c);
                    /* catch() { ... } // from try @ 02361f38 with catch @ 02361f54 */
            bVar10 = System_Collections_Generic_Dictionary_int__int___TryGetValue_342ea24
                               (lVar14,iVar11,&uStack_88,*(undefined8 *)puVar8);
                    /* try { // try from 02361f58 to 02461f5f has its CatchHandler @ 02361f68 */
                    /* try { // try from 02361f60 to 02461f6b has its CatchHandler @ 02361d04 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02361f0c with catch @ 02361f68
                       catch(type#2 @ 00000000) { ... } // from try @ 02361f58 with catch @ 02361f68
                        */
            if (((((iVar11 == param_2 && iVar15 != iVar2) && (iVar11 != param_2 || iVar2 <= iVar15))
                 & bVar10) == 1) && (iVar1 < (int)uStack_88)) {
              uVar13 = *(undefined8 *)PTR_DAT_04cb44f0;
              *(undefined4 *)(lVar9 + 0xa0) = 2;
              iVar11 = System_Collections_Generic_Dictionary_int__int___get_Item_342d01c
                                 (lVar14,param_2,uVar13);
              System_Collections_Generic_Dictionary_int__int___set_Item_342d0a4
                        (lVar14,param_2,iVar11 + -1,*(undefined8 *)PTR_DAT_04cb1d00);
              iVar15 = iVar15 + -1;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)PTR_DAT_04cb4460);
        if (*(long *)(param_1 + 0x28) != 0) {
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&uStack_a8,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cb4478);
          lStack_70 = lStack_98;
          puStack_78 = puStack_a0;
          uStack_80 = uStack_a8;
          uStack_a8 = 0;
          puStack_a0 = &uStack_80;
          while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                    (&uStack_80,*(undefined8 *)puVar7), lVar9 = lStack_70,
                puVar5 = PTR_DAT_04cb4460, (uVar12 & 1) != 0) {
            if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if (*(int *)(lStack_70 + 0xa0) == 0) {
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              bVar10 = System_Collections_Generic_Dictionary_int__int___TryGetValue_342ea24
                                 (lVar14,*(undefined4 *)(lStack_70 + 0x9c),(long)&uStack_90 + 4,
                                  *(undefined8 *)puVar8);
              puVar5 = PTR_DAT_04cb44f0;
              if ((bVar10 & iVar1 < uStack_90._4_4_) != 0) {
                uVar3 = *(undefined4 *)(lVar9 + 0x9c);
                *(undefined4 *)(lVar9 + 0xa0) = 2;
                iVar11 = System_Collections_Generic_Dictionary_int__int___get_Item_342d01c
                                   (lVar14,uVar3,*(undefined8 *)puVar5);
                System_Collections_Generic_Dictionary_int__int___set_Item_342d0a4
                          (lVar14,uVar3,iVar11 + -1,*(undefined8 *)PTR_DAT_04cb1d00);
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_80,*(undefined8 *)PTR_DAT_04cb4460);
          puVar6 = PTR_DAT_04cb4478;
          if (*(long *)(param_1 + 0x28) != 0) {
            System_Collections_Generic_List_object___GetEnumerator_3a825f0
                      (&uStack_a8,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cb4478);
            lStack_70 = lStack_98;
            puStack_78 = puStack_a0;
            uStack_80 = uStack_a8;
            uStack_a8 = 0;
            puStack_a0 = &uStack_80;
            while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                      (&uStack_80,*(undefined8 *)puVar7), (uVar12 & 1) != 0) {
              if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if (((*(int *)(lStack_70 + 0xa0) == 0) && (*(int *)(lStack_70 + 0x9c) == param_2)) &&
                 (iVar2 < iVar15)) {
                iVar15 = iVar15 + -1;
                *(undefined4 *)(lStack_70 + 0xa0) = 2;
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_80,*(undefined8 *)puVar5);
            if (*(long *)(param_1 + 0x28) != 0) {
              System_Collections_Generic_List_object___GetEnumerator_3a825f0
                        (&uStack_a8,*(long *)(param_1 + 0x28),*(undefined8 *)puVar6);
              lStack_70 = lStack_98;
              puStack_78 = puStack_a0;
              uStack_80 = uStack_a8;
              uStack_a8 = 0;
              puStack_a0 = &uStack_80;
              while( true ) {
                uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                   (&uStack_80,*(undefined8 *)puVar7);
                lVar9 = lStack_70;
                if ((uVar12 & 1) == 0) {
                  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                            (&uStack_80,*(undefined8 *)puVar5);
                  return;
                }
                if (lStack_70 == 0) break;
                if (*(int *)(lStack_70 + 0xa0) == 2) {
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  iVar4 = *(int *)(lStack_70 + 0x9c);
                  System_Collections_Generic_Dictionary_int__int___TryGetValue_342ea24
                            (lVar14,iVar4,&uStack_90,*(undefined8 *)puVar8);
                  puVar6 = PTR_DAT_04cb1d00;
                  iVar11 = iVar15;
                  if (iVar4 != param_2) {
                    iVar11 = 0;
                  }
                  if (((int)uStack_90 < iVar1) && (iVar11 < iVar2)) {
                    *(undefined4 *)(lVar9 + 0xa0) = 0;
                    System_Collections_Generic_Dictionary_int__int___set_Item_342d0a4
                              (lVar14,iVar4,(int)uStack_90 + 1,*(undefined8 *)puVar6);
                    if (iVar4 == param_2) {
                      iVar15 = iVar15 + 1;
                    }
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

