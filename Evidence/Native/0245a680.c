/* IL2CPP: Dino.BusSand.Cheat.CheatConfig$$Load
Dino_BusSand_Cheat_CheatConfig_o* Dino_BusSand_Cheat_CheatConfig__Load (System_String_o** note, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatConfig$$Load
   Dino_BusSand_Cheat_CheatConfig_o* Dino_BusSand_Cheat_CheatConfig__Load (System_String_o** note,
   const MethodInfo* method); */

long Dino_BusSand_Cheat_CheatConfig__Load_235a680(long *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  byte bVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined4 *puVar20;
  long lVar21;
  long lVar22;
  bool bVar23;
  long *plVar24;
  undefined8 uVar25;
  long *plVar26;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  if ((bRam0000000004f9c725 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba380);
    FUN_02132f7c(PTR_DAT_04cba310);
    FUN_02132f7c(PTR_DAT_04cba388);
    FUN_02132f7c(PTR_DAT_04cba390);
    FUN_02132f7c(PTR_DAT_04cba398);
    FUN_02132f7c(PTR_DAT_04cba3a0);
    FUN_02132f7c(PTR_DAT_04cba3a8);
    FUN_02132f7c(PTR_DAT_04cba3b0);
    FUN_02132f7c(PTR_DAT_04cba3b8);
    FUN_02132f7c(PTR_DAT_04cba3c0);
    FUN_02132f7c(PTR_DAT_04cba3c8);
    FUN_02132f7c(PTR_DAT_04cba3d0);
    FUN_02132f7c(PTR_DAT_04cba3d8);
    FUN_02132f7c(PTR_DAT_04cba3e0);
    FUN_02132f7c(PTR_DAT_04cba3e8);
    FUN_02132f7c(PTR_DAT_04cba378);
    FUN_02132f7c(PTR_DAT_04cba3f0);
    FUN_02132f7c(PTR_DAT_04cba368);
    FUN_02132f7c(PTR_DAT_04cba360);
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cba3f8);
    FUN_02132f7c(PTR_DAT_04caca40);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cba400);
    FUN_02132f7c(PTR_DAT_04cb1ed0);
    bRam0000000004f9c725 = 1;
  }
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  *param_1 = *(long *)PTR_DAT_04ca9c30;
  thunk_FUN_02134474(param_1);
  uVar13 = Dino_BusSand_Cheat_CheatConfig__get_FilePath_2359a40();
  uVar14 = System_IO_File__Exists_47f230c(uVar13,0);
  if ((uVar14 & 1) == 0) {
LAB_0245a8ec:
    lVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cba388);
    Dino_BusSand_Cheat_CheatConfig___ctor_235af70();
    if (lVar15 == 0) goto LAB_0245ae04;
    bVar23 = true;
  }
  else {
    uVar13 = Dino_BusSand_Cheat_CheatConfig__get_FilePath_2359a40();
    uVar13 = System_IO_File__ReadAllText_47f8dcc(uVar13,0);
    lVar15 = UnityEngine_JsonUtility__FromJson_object__27dae58
                       (uVar13,*(undefined8 *)PTR_DAT_04cba3e8);
    if (lVar15 == 0) goto LAB_0245a8ec;
    bVar23 = false;
  }
  plVar26 = (long *)(lVar15 + 0x58);
  if (*plVar26 == 0) {
    lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cba360);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar16,*(undefined8 *)PTR_DAT_04cba368);
    *plVar26 = lVar16;
    thunk_FUN_02134474(plVar26,lVar16);
  }
  puVar6 = PTR_DAT_04cba3f8;
  puVar5 = PTR_DAT_04cba3e0;
  puVar4 = PTR_DAT_04cba3d8;
  plVar24 = (long *)(lVar15 + 0x28);
  if ((*plVar24 == 0) || (*(long *)(*plVar24 + 0x18) == 0)) {
    lVar16 = FUN_02133068(*(undefined8 *)PTR_DAT_04caadd0,3);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
              (lVar16,*(undefined8 *)puVar6,0);
    *plVar24 = lVar16;
    thunk_FUN_02134474(plVar24,lVar16);
  }
  lVar16 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_HashSet_Int32Enum____ctor_37de5d0(lVar16,*(undefined8 *)puVar4);
  puVar10 = PTR_DAT_04cba400;
  puVar9 = PTR_DAT_04cba3b8;
  puVar7 = PTR_DAT_04cba3a8;
  puVar6 = PTR_DAT_04cba390;
  puVar5 = PTR_DAT_04cb1ed0;
  puVar4 = PTR_DAT_04caca40;
  if (*plVar26 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_98,*plVar26,*(undefined8 *)PTR_DAT_04cba3f0);
    puVar3 = PTR_DAT_04ca9ac8;
    puStack_78 = puStack_90;
    uStack_80 = uStack_98;
    lStack_70 = lStack_88;
    uStack_98 = 0;
    puStack_90 = &uStack_80;
    while (uVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_80,*(undefined8 *)puVar9), lVar18 = lStack_70,
          puVar8 = PTR_DAT_04cba3b0, (uVar14 & 1) != 0) {
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar13 = *(undefined8 *)(lStack_70 + 0x10);
      if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      bVar11 = System_Enum__TryParse_Int32Enum__2729354
                         (uVar13,1,lVar18 + 0x24,*(undefined8 *)puVar6);
      bVar12 = System_Enum__TryParse_Int32Enum__2729354
                         (*(undefined8 *)(lVar18 + 0x18),1,lVar18 + 0x28,*(undefined8 *)puVar7);
      *(byte *)(lVar18 + 0x2c) = bVar11 & bVar12 & 1;
      if ((bVar11 & bVar12 & 1) == 0) {
        lVar17 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,6);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(long *)(lVar17 + 0x20) = *param_1;
        thunk_FUN_02134474();
        if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        puVar1 = (undefined8 *)puVar5;
        if (*(int *)(*param_1 + 0x10) < 1) {
          puVar1 = (undefined8 *)PTR_DAT_04ca9c30;
        }
        *(undefined8 *)(lVar17 + 0x28) = *puVar1;
        thunk_FUN_02134474();
        if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(undefined8 *)(lVar17 + 0x30) = *(undefined8 *)puVar10;
        thunk_FUN_02134474();
        if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(undefined8 *)(lVar17 + 0x38) = *(undefined8 *)(lVar18 + 0x10);
        thunk_FUN_02134474();
        if (*(uint *)(lVar17 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(undefined8 *)(lVar17 + 0x40) = *(undefined8 *)puVar4;
        thunk_FUN_02134474();
        if (*(uint *)(lVar17 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(undefined8 *)(lVar17 + 0x48) = *(undefined8 *)(lVar18 + 0x18);
        thunk_FUN_02134474();
        lVar18 = System_String__Concat_46d31f0(lVar17,0);
        *param_1 = lVar18;
        thunk_FUN_02134474(param_1);
      }
      else {
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_HashSet_Int32Enum___Add_37df810
                  (lVar16,*(undefined4 *)(lVar18 + 0x24),*(undefined8 *)PTR_DAT_04cba3c8);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_80,*(undefined8 *)PTR_DAT_04cba3b0);
    puVar4 = PTR_DAT_04cba380;
    lVar18 = Dino_BusSand_Cheat_CheatConfig__DefaultBindings_2359ae0();
    if (lVar18 != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_98,lVar18,*(undefined8 *)PTR_DAT_04cba3f0);
      lStack_70 = lStack_88;
      puStack_78 = puStack_90;
      uStack_80 = uStack_98;
      uStack_98 = 0;
      puStack_90 = &uStack_80;
      plVar24 = (long *)PTR_DAT_04cba310;
      while( true ) {
        do {
          uVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_80,*(undefined8 *)puVar9);
          lVar18 = lStack_70;
          if ((uVar14 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_80,*(undefined8 *)puVar8);
            if (bVar23) {
              Dino_BusSand_Cheat_CheatConfig__Save_235b0ac(lVar15);
            }
            return lVar15;
          }
          uVar13 = *(undefined8 *)puVar4;
          if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar13 = System_Type__GetTypeFromHandle_483f0b4(uVar13,0);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar25 = *(undefined8 *)(lVar18 + 0x10);
          if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          plVar19 = (long *)System_Enum__Parse_48608b0(uVar13,uVar25,0);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(long *)(*plVar19 + 0x40) != *(long *)(*plVar24 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_021335a4();
          }
          puVar20 = (undefined4 *)thunk_FUN_0216e9e4();
          uVar14 = System_Collections_Generic_HashSet_Int32Enum___Contains_37decd4
                             (lVar16,*puVar20,*(undefined8 *)PTR_DAT_04cba3d0);
        } while ((uVar14 & 1) != 0);
        uVar13 = *(undefined8 *)(lVar18 + 0x10);
        if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        bVar11 = System_Enum__TryParse_Int32Enum__2729298
                           (uVar13,lVar18 + 0x24,*(undefined8 *)PTR_DAT_04cba398);
        bVar12 = System_Enum__TryParse_Int32Enum__2729298
                           (*(undefined8 *)(lVar18 + 0x18),lVar18 + 0x28,
                            *(undefined8 *)PTR_DAT_04cba3a0);
        *(byte *)(lVar18 + 0x2c) = bVar11 & bVar12 & 1;
        lVar17 = *plVar26;
        if (lVar17 == 0) break;
        lVar21 = *(long *)(lVar17 + 0x10);
        lVar22 = *(long *)PTR_DAT_04cba378;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
        if (lVar21 == 0) break;
                    /* try { // try from 0245ad3c to 0255af2f has its CatchHandler @ 0245ad3c
                       catch() { ... } // from try @ 0245ad3c with catch @ 0245ad3c
                       catch() { ... } // from try @ 0245b028 with catch @ 0245ad3c
                       catch() { ... } // from try @ 0245b0d8 with catch @ 0245ad3c
                       catch() { ... } // from try @ 0245b144 with catch @ 0245ad3c */
        uVar2 = *(uint *)(lVar17 + 0x18);
        if (uVar2 < *(uint *)(lVar21 + 0x18)) {
          bVar23 = true;
          *(uint *)(lVar17 + 0x18) = uVar2 + 1;
          plVar24 = (long *)(lVar21 + (long)(int)uVar2 * 8 + 0x20);
          *plVar24 = lVar18;
          thunk_FUN_02134474(plVar24,lVar18);
          plVar24 = (long *)PTR_DAT_04cba310;
        }
        else {
          bVar23 = true;
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar17,lVar18,
                     *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
          plVar24 = (long *)PTR_DAT_04cba310;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
LAB_0245ae04:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

