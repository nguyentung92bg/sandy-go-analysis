/* IL2CPP: Dino.BusSand.Core.StageEngine$$TrySweep
bool Dino_BusSand_Core_StageEngine__TrySweep (Dino_BusSand_Core_StageEngine_o* __this, System_Collections_Generic_List_SimEvent__o* evts, bool immediate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02526154) */
/* IL2CPP: Dino.BusSand.Core.StageEngine$$TrySweep
   bool Dino_BusSand_Core_StageEngine__TrySweep (Dino_BusSand_Core_StageEngine_o* __this,
   System_Collections_Generic_List_SimEvent__o* evts, bool immediate, const MethodInfo* method); */

undefined4 Dino_BusSand_Core_StageEngine__TrySweep_2425d50(long param_1,long param_2,ulong param_3)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  double dVar16;
  long lStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  ulong auStack_e8 [2];
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  int iStack_b4;
  long lStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_90;
  long *plStack_88;
  ulong uStack_80;
  undefined8 uStack_68;
  
  if ((bRam0000000004f9cba7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbedf0);
    FUN_02132f7c(PTR_DAT_04cb44e8);
    FUN_02132f7c(PTR_DAT_04cb1d00);
    FUN_02132f7c(PTR_DAT_04cad8c8);
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cad890);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cad898);
    FUN_02132f7c(PTR_DAT_04cb18a8);
    FUN_02132f7c(PTR_DAT_04cb58d0);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad8a0);
    FUN_02132f7c(PTR_DAT_04cbe688);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cbe5b8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cbe5c0);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cba7 = 1;
  }
  puVar6 = PTR_DAT_04cb18a8;
  puVar5 = PTR_DAT_04cb1898;
  puVar4 = PTR_DAT_04caa200;
  lStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_68 = 0;
  iStack_b4 = 0;
  lStack_d0 = 0;
  plStack_c8 = (long *)0x0;
  uStack_c0 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uStack_68 = Dino_BusSand_Core_Road__get_Buses_2411e9c(*(long *)(param_1 + 0x20),0);
  Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
            (&lStack_90,&uStack_68,*(undefined8 *)puVar6);
  lStack_118 = 0;
  uStack_a0 = uStack_80;
  uStack_a8 = plStack_88;
  lStack_b0 = lStack_90;
  lStack_90 = 0;
  plStack_88 = &lStack_b0;
  do {
    while( true ) {
      do {
        uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                           (&lStack_b0,*(undefined8 *)puVar5);
        lVar13 = lStack_90;
        uVar8 = uStack_a0;
        if ((uVar12 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (plStack_88,*(undefined8 *)PTR_DAT_04cb1890);
          if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0213321c(lVar13);
          }
          if (lStack_118 != 0) {
            System_Collections_Generic_List_int___GetEnumerator_3a2ca40
                      (&lStack_90,lStack_118,*(undefined8 *)PTR_DAT_04cad8a0);
            puVar7 = PTR_DAT_04cbe5c0;
            puVar6 = PTR_DAT_04cbe5b8;
            puVar5 = PTR_DAT_04cb58d0;
            puVar4 = PTR_DAT_04cad890;
            plStack_d8 = &lStack_d0;
            plStack_c8 = plStack_88;
            lStack_d0 = lStack_90;
            bVar1 = false;
            uStack_c0 = uStack_80;
            auStack_e8[1] = 0;
            while (uVar12 = System_Collections_Generic_List_Enumerator_int___MoveNext_35ce6bc
                                      (&lStack_d0,*(undefined8 *)puVar4), uVar8 = uStack_c0,
                  (uVar12 & 1) != 0) {
              uVar2 = (undefined4)uStack_c0;
              lVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
              System_Collections_Generic_List_GrainPoint____ctor_3a2676c
                        (lVar13,*(undefined8 *)puVar6);
              if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar11 = Dino_BusSand_Core_Road__AbsorbColorInto_2416e64
                                 (*(long *)(param_1 + 0x20),uVar8 & 0xffffffff,
                                  *(undefined8 *)(param_1 + 0x18),1,lVar13,0);
              if (0 < (int)uVar11) {
                if (*(long *)(param_1 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                System_Collections_Generic_Dictionary_int__int___Remove_342e48c
                          (*(long *)(param_1 + 0x128),uVar8 & 0xffffffff,
                           *(undefined8 *)PTR_DAT_04cbedf0);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                auStack_e8[0] =
                     System_Collections_Generic_List_GrainPoint___ToArray_3a28aa4
                               (lVar13,*(undefined8 *)PTR_DAT_04cbe688);
                uStack_f8 = CONCAT44(uVar2,0x10);
                plStack_f0 = (long *)(ulong)uVar11;
                thunk_FUN_02134474(auStack_e8);
                if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar13 = *(long *)(param_2 + 0x10);
                lVar14 = *(long *)puVar5;
                *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uVar3 = *(uint *)(param_2 + 0x18);
                if (uVar3 < *(uint *)(lVar13 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)uVar3 * 0x18;
                  *(uint *)(param_2 + 0x18) = uVar3 + 1;
                  *(ulong *)(lVar13 + 0x30) = auStack_e8[0];
                  *(long **)(lVar13 + 0x28) = plStack_f0;
                  *(long *)(lVar13 + 0x20) = uStack_f8;
                  thunk_FUN_02134474((ulong *)(lVar13 + 0x30),0);
                }
                else {
                  plStack_88 = plStack_f0;
                  lStack_90 = uStack_f8;
                  uStack_80 = auStack_e8[0];
                  System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                            (param_2,&lStack_90,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
                uStack_100 = 0;
                uStack_110 = CONCAT44(uVar2,0x11);
                plStack_108 = (long *)(ulong)uVar11;
                thunk_FUN_02134474(&uStack_100,0);
                lVar13 = *(long *)(param_2 + 0x10);
                lVar14 = *(long *)puVar5;
                *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uVar11 = *(uint *)(param_2 + 0x18);
                if (uVar11 < *(uint *)(lVar13 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)uVar11 * 0x18;
                  *(uint *)(param_2 + 0x18) = uVar11 + 1;
                  *(ulong *)(lVar13 + 0x30) = uStack_100;
                  *(long **)(lVar13 + 0x28) = plStack_108;
                  *(long *)(lVar13 + 0x20) = uStack_110;
                  thunk_FUN_02134474((ulong *)(lVar13 + 0x30),0);
                }
                else {
                  plStack_88 = plStack_108;
                  lStack_90 = uStack_110;
                  uStack_80 = uStack_100;
                  System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                            (param_2,&lStack_90,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
                bVar1 = true;
              }
            }
            System_Collections_Generic_List_Enumerator_int___Dispose_35ce6b8
                      (&lStack_d0,*(undefined8 *)PTR_DAT_04cad8c8);
            if (bVar1) {
              Dino_BusSand_Core_StageEngine__CheckColorsCleared_2425418(param_1,param_2);
              Dino_BusSand_Core_StageEngine__CheckDunes_24255d0(param_1,param_2);
              return 1;
            }
          }
          return 0;
        }
        if (uStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      } while ((*(int *)(uStack_a0 + 0x28) != 1) ||
              (uVar12 = Dino_BusSand_Core_RoadBus__get_IsComplete_2411838(uStack_a0,0),
              (uVar12 & 1) != 0));
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar13 = *(long *)(*(long *)(param_1 + 0x18) + 0x50);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((int)(uint)*(byte *)(uVar8 + 0x14) < *(int *)(lVar13 + 0x18)) {
        iVar15 = *(int *)(lVar13 + (ulong)*(byte *)(uVar8 + 0x14) * 4 + 0x20);
      }
      else {
        iVar15 = 0;
      }
      iVar9 = *(int *)(uVar8 + 0x20);
      dVar16 = *(double *)(param_1 + 0x118);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      dVar16 = dVar16 * (double)iVar9;
      iVar9 = -0x80000000;
      if ((double)(long)dVar16 != INFINITY) {
        iVar9 = (int)dVar16;
      }
      iVar9 = System_Math__Max_4830fc8(1,iVar9,0);
      if ((param_3 & 1) == 0) {
        bVar1 = (long)*(int *)(param_1 + 0x110) <=
                *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x120);
      }
      else {
        bVar1 = true;
      }
      if ((((iVar15 != 0) &&
           (iVar10 = Dino_BusSand_Core_RoadBus__get_Remaining_24118a8(uVar8,0), iVar15 <= iVar10))
          && (iVar15 <= iVar9)) && (bVar1)) break;
LAB_02526044:
      if (*(long *)(param_1 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_Dictionary_int__int___Remove_342e48c
                (*(long *)(param_1 + 0x128),*(undefined4 *)(uVar8 + 0x10),
                 *(undefined8 *)PTR_DAT_04cbedf0);
    }
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar12 = Dino_BusSand_Core_Road__AnyColorInBottomBand_2416850
                       (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),
                        *(undefined1 *)(uVar8 + 0x14),0);
    if (((uVar12 & 1) != 0) ||
       (uVar12 = Dino_BusSand_Core_StageEngine__IsLastOfColor_2426df0(param_1,uVar8),
       (uVar12 & 1) == 0)) goto LAB_02526044;
    if (*(long *)(param_1 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar12 = System_Collections_Generic_Dictionary_int__int___TryGetValue_342ea24
                       (*(long *)(param_1 + 0x128),*(undefined4 *)(uVar8 + 0x10),&iStack_b4,
                        *(undefined8 *)PTR_DAT_04cb44e8);
    iVar15 = iStack_b4;
    if ((uVar12 & 1) == 0) {
      iVar15 = 0;
    }
    if ((param_3 & 1) == 0) {
      iVar9 = 10;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x10c);
    }
    if (*(long *)(param_1 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_Dictionary_int__int___set_Item_342d0a4
              (*(long *)(param_1 + 0x128),*(undefined4 *)(uVar8 + 0x10),iVar9 + iVar15,
               *(undefined8 *)PTR_DAT_04cb1d00);
    if (*(int *)(param_1 + 0x10c) <= iVar9 + iVar15) {
      if (lStack_118 == 0) {
        lStack_118 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
        System_Collections_Generic_List_int____ctor_3a2b7dc
                  (lStack_118,*(undefined8 *)PTR_DAT_04cad6e8);
        if (lStack_118 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
      lVar13 = *(long *)(lStack_118 + 0x10);
      uVar2 = *(undefined4 *)(uVar8 + 0x10);
      lVar14 = *(long *)PTR_DAT_04caa160;
      *(int *)(lStack_118 + 0x1c) = *(int *)(lStack_118 + 0x1c) + 1;
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar11 = *(uint *)(lStack_118 + 0x18);
      if (uVar11 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lStack_118 + 0x18) = uVar11 + 1;
        *(undefined4 *)(lVar13 + (long)(int)uVar11 * 4 + 0x20) = uVar2;
      }
      else {
        System_Collections_Generic_List_int___AddWithResize_3a2c06c
                  (lStack_118,uVar2,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
}

