/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyReplay$$Run
Dino_BusSand_App_Meta_Journey_JourneyReplay_Result_o* Dino_BusSand_App_Meta_Journey_JourneyReplay__Run (Dino_BusSand_Core_LevelData_o* level, Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelStream_o* j, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02398a80) */
/* WARNING: Removing unreachable block (ram,0x02399314) */
/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyReplay$$Run
   Dino_BusSand_App_Meta_Journey_JourneyReplay_Result_o*
   Dino_BusSand_App_Meta_Journey_JourneyReplay__Run (Dino_BusSand_Core_LevelData_o* level,
   Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelStream_o* j, const MethodInfo* method); */

long Dino_BusSand_App_Meta_Journey_JourneyReplay__Run_2298270(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  double dVar21;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  double *pdStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  int iStack_94;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  double dStack_78;
  
  puVar4 = PTR_DAT_04cb5668;
                    /* catch() { ... } // from try @ 02398254 with catch @ 02398278 */
                    /* try { // try from 0239827c to 02498283 has its CatchHandler @ 0239828c */
                    /* try { // try from 02398284 to 0249828f has its CatchHandler @ 02397d6c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0239827c with catch @ 0239828c
                        */
  if ((bRam0000000004f9c20f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5648);
    FUN_02132f7c(PTR_DAT_04cb5670);
    FUN_02132f7c(PTR_DAT_04cb5650);
    FUN_02132f7c(PTR_DAT_04cb5678);
    FUN_02132f7c(PTR_DAT_04cb5680);
    FUN_02132f7c(PTR_DAT_04cb5658);
    FUN_02132f7c(PTR_DAT_04cb5688);
    FUN_02132f7c(PTR_DAT_04cb28a0);
    FUN_02132f7c(PTR_DAT_04cb5660);
    FUN_02132f7c(PTR_DAT_04cb5690);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb5668);
    FUN_02132f7c(PTR_DAT_04cac568);
    FUN_02132f7c(PTR_DAT_04cb5698);
    FUN_02132f7c(PTR_DAT_04cb56a0);
    FUN_02132f7c(PTR_DAT_04cb56a8);
    FUN_02132f7c(PTR_DAT_04cb56b0);
    FUN_02132f7c(PTR_DAT_04cb56b8);
    FUN_02132f7c(PTR_DAT_04cb56c0);
    FUN_02132f7c(PTR_DAT_04cb56c8);
    FUN_02132f7c(PTR_DAT_04cb56d0);
    FUN_02132f7c(PTR_DAT_04cb56d8);
    FUN_02132f7c(PTR_DAT_04cb56e0);
    FUN_02132f7c(PTR_DAT_04cb56e8);
    FUN_02132f7c(PTR_DAT_04cb56f0);
    FUN_02132f7c(PTR_DAT_04cb56f8);
    FUN_02132f7c(PTR_DAT_04cb5700);
    FUN_02132f7c(PTR_DAT_04cb5708);
    FUN_02132f7c(PTR_DAT_04cb5710);
    FUN_02132f7c(PTR_DAT_04cb5718);
    FUN_02132f7c(PTR_DAT_04cb5720);
    FUN_02132f7c(PTR_DAT_04cb5728);
    FUN_02132f7c(PTR_DAT_04cb5730);
    bRam0000000004f9c20f = 1;
  }
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  lStack_80 = 0;
  dStack_78 = 0.0;
  iStack_94 = 0;
  uStack_a0 = 0;
  plStack_b8 = (long *)0x0;
  lStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Object___ctor_4870e5c(lVar7,0);
  if (param_2 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(param_2 + 0x58);
    if (lVar14 == 0) {
      puVar19 = (undefined8 *)PTR_DAT_04cb56d8;
      if ((param_1 != 0) &&
         (puVar19 = (undefined8 *)PTR_DAT_04cb5708, (*(byte *)(param_2 + 0x14) >> 5 & 1) == 0)) {
        lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb56a0);
        Dino_BusSand_Core_StageOptions___ctor_241e3f4(lVar14,0);
        if (lVar14 != 0) {
          *(undefined8 *)(lVar14 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
          *(undefined4 *)(lVar14 + 0x18) = *(undefined4 *)(param_2 + 0x24);
          *(byte *)(lVar14 + 0x25) = *(byte *)(param_2 + 0x14) >> 2 & 1;
          *(undefined4 *)(lVar14 + 0x28) = *(undefined4 *)(param_2 + 0x28);
          puVar4 = PTR_DAT_04cac568;
          lVar8 = *(long *)PTR_DAT_04cac568;
          *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)(param_2 + 0x48);
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar8 = *(long *)puVar4;
          }
          puVar4 = PTR_DAT_04cb56b0;
          dStack_78 = **(double **)(lVar8 + 0xb8);
          **(double **)(lVar8 + 0xb8) = (double)*(float *)(param_2 + 0x2c);
          pdStack_c8 = &dStack_78;
          lStack_d0 = 0;
          lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
          System_Object___ctor_4870e5c(lVar8,0);
          lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb5698);
          Dino_BusSand_Core_StageEngine___ctor_241e4cc(lVar9,param_1,lVar14,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          puVar19 = (undefined8 *)(lVar8 + 0x10);
          *puVar19 = 0;
          thunk_FUN_02134474(puVar19,0);
          puVar4 = PTR_DAT_04cb28a0;
          *(undefined4 *)(lVar8 + 0x18) = 0;
          uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
          System_Func_int__int____ctor_37a23e0(uVar10,lVar8,*(undefined8 *)PTR_DAT_04cb56a8,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          *(undefined8 *)(lVar9 + 0x130) = uVar10;
          thunk_FUN_02134474(lVar9 + 0x130,uVar10);
          Dino_BusSand_Core_StageEngine__Settle_241d654(lVar9,0);
          if (*(long *)(param_2 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&lStack_108,*(long *)(param_2 + 0x50),*(undefined8 *)PTR_DAT_04cb5690);
          puVar5 = PTR_DAT_04cb5678;
          puVar4 = PTR_DAT_04cb5650;
          lStack_80 = CONCAT44(uStack_f4,uStack_f8);
          plStack_d8 = &lStack_90;
          plStack_88 = plStack_100;
          lStack_90 = lStack_108;
          lStack_e0 = 0;
          do {
            uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&lStack_90,*(undefined8 *)puVar5);
            lVar14 = lStack_80;
            if ((uVar11 & 1) == 0) {
              lVar14 = 0;
              iVar6 = 0x36;
LAB_02398fac:
              System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                        (plStack_d8,*(undefined8 *)PTR_DAT_04cb5670);
              if (lStack_e0 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0213321c();
              }
              if ((iVar6 == 0x36) || (iVar6 == 0)) {
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                *(undefined1 *)(lVar7 + 0x10) = 1;
                Dino_BusSand_App_Meta_Journey_JourneyReplay__Snap_22995b8(lVar7,lVar9);
                lVar14 = lVar7;
              }
              puVar4 = PTR_DAT_04cac568;
              lVar7 = *(long *)PTR_DAT_04cac568;
              dVar21 = *pdStack_c8;
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar7 = *(long *)puVar4;
              }
              **(double **)(lVar7 + 0xb8) = dVar21;
              if (lStack_d0 == 0) {
                return lVar14;
              }
                    /* WARNING: Subroutine does not return */
              FUN_0213321c();
            }
            if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            iVar6 = *(int *)(lStack_80 + 0x14);
            if (iVar6 < 4) {
              uVar17 = 1;
            }
            else if (iVar6 == 6) {
              if (7 < *(uint *)(lStack_80 + 0x18)) goto LAB_02398664;
              uVar17 = 0xd0U >> (ulong)(*(uint *)(lStack_80 + 0x18) & 0x1f) & 1;
            }
            else if (iVar6 == 5) {
              uVar17 = (uint)((*(byte *)(lStack_80 + 0x18) & 7) == 0);
            }
            else {
LAB_02398664:
              uVar17 = 0;
            }
            while( true ) {
              puVar3 = PTR_DAT_04ca9ac8;
              lVar15 = *(long *)(lVar9 + 0x78);
              if ((*(long *)(lVar14 + 0x20) <= lVar15) || (*(char *)(lVar9 + 0x80) != '\0')) break;
              Dino_BusSand_Core_StageEngine__Tick_241dbd8(lVar9,0);
            }
            uVar17 = uVar17 ^ 1;
            if (lVar15 == *(long *)(lVar14 + 0x20)) {
              uVar17 = 1;
            }
            if (uVar17 == 0) {
              lStack_108 = lVar15;
              uVar12 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&lStack_108);
              cVar1 = *(char *)(lVar9 + 0x80);
              lStack_108 = *(long *)(lVar14 + 0x20);
              uVar18 = *(undefined8 *)PTR_DAT_04cb56d0;
              uVar10 = *(undefined8 *)PTR_DAT_04cb56c0;
              uVar20 = *(undefined8 *)PTR_DAT_04cb5730;
              uVar13 = FUN_02133100(*(undefined8 *)(puVar3 + 0x68),&lStack_108);
              if (cVar1 != '\0') {
                uVar10 = uVar20;
              }
              uVar10 = System_String__Format_46d352c(uVar18,uVar12,uVar10,uVar13,0);
              Dino_BusSand_App_Meta_Journey_JourneyReplay__Fail_229937c(lVar7,lVar9,lVar14,uVar10);
              goto LAB_02398fa4;
            }
            iVar6 = *(int *)(lVar14 + 0x14);
            if (iVar6 < 5) {
              if (iVar6 - 1U < 3) {
                uVar10 = 0;
              }
              else {
                if (iVar6 != 0) goto LAB_023989b0;
                uVar10 = *(undefined8 *)(lVar14 + 0x38);
              }
              *puVar19 = uVar10;
              thunk_FUN_02134474(puVar19);
              *(undefined4 *)(lVar8 + 0x18) = 0;
              uVar10 = Dino_BusSand_Core_StageEngine__TapTruck_241d6d8
                                 (lVar9,*(undefined4 *)(lVar14 + 0x18),0);
              iVar6 = Dino_BusSand_App_Meta_Journey_JourneyReplay__Outcome_2297ff0
                                (uVar10,&iStack_94);
              *puVar19 = 0;
              thunk_FUN_02134474(puVar19,0);
              if (iVar6 != *(int *)(lVar14 + 0x14)) {
LAB_02398bc8:
                lStack_108 = CONCAT44(lStack_108._4_4_,*(undefined4 *)(lVar14 + 0x18));
                uVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&lStack_108);
                uVar12 = Dino_BusSand_App_Meta_Journey_JourneyReplay__OpName_229952c
                                   (*(undefined4 *)(lVar14 + 0x14));
                uVar13 = Dino_BusSand_App_Meta_Journey_JourneyReplay__OpName_229952c(iVar6);
                uVar10 = System_String__Format_46d352c
                                   (*(undefined8 *)PTR_DAT_04cb5700,uVar10,uVar12,uVar13,0);
                Dino_BusSand_App_Meta_Journey_JourneyReplay__Fail_229937c(lVar7,lVar9,lVar14,uVar10)
                ;
LAB_02398fa4:
                iVar6 = 0x15;
                lVar14 = lVar7;
                goto LAB_02398fac;
              }
              if (iVar6 == 2) {
                lVar15 = *(long *)(lVar14 + 0x38);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                if (*(long *)(lVar15 + 0x18) != 0) {
                  if ((int)*(long *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                  if (*(long *)(lVar15 + 0x20) != (long)iStack_94) goto LAB_02398bc8;
                }
              }
            }
            else if (iVar6 == 5) {
              if ((*(uint *)(lVar14 + 0x18) & 7) == 0) {
                iVar6 = (int)*(uint *)(lVar14 + 0x18) >> 3;
                if (iVar6 < 3) {
                  if (iVar6 == 0) {
                    lVar14 = *(long *)(lVar14 + 0x38);
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0213322c();
                    }
                    Dino_BusSand_Core_StageEngine__ShuffleTruckColors_2429a40
                              (lVar9,*(undefined4 *)(lVar14 + 0x20),0);
                  }
                  else if (iVar6 == 1) {
                    lVar15 = *(long *)(lVar14 + 0x38);
                    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0213322c();
                    }
                    lVar15 = Dino_BusSand_Core_StageEngine__PickupTruck_2428dfc
                                       (lVar9,*(undefined4 *)(lVar15 + 0x20),0);
                    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    System_Collections_Generic_List_SimEvent___GetEnumerator_3ac0844
                              (&lStack_108,lVar15,*(undefined8 *)PTR_DAT_04cb5660);
                    bVar2 = false;
                    uStack_b0 = CONCAT44(uStack_f4,uStack_f8);
                    uStack_a0 = uStack_e8;
                    plStack_b8 = plStack_100;
                    lStack_c0 = lStack_108;
                    uStack_a8 = uStack_f0;
                    lStack_108 = 0;
                    plStack_100 = &lStack_c0;
                    while (uVar11 = System_Collections_Generic_List_Enumerator_SimEvent___MoveNext_35e048c
                                              (&lStack_c0,*(undefined8 *)puVar4), (uVar11 & 1) != 0)
                    {
                      if (((int)uStack_b0 == 0x1f) || ((int)uStack_b0 == 2)) {
                        bVar2 = true;
                      }
                    }
                    FUN_01e79738(&lStack_108);
                    if (!bVar2) {
                      lVar8 = *(long *)(lVar14 + 0x38);
                      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                      if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_0213322c();
                      }
                      uVar10 = System_Int64__ToString_482e7e4(lVar8 + 0x20,0);
                      uVar10 = System_String__Concat_46d2b84
                                         (*(undefined8 *)PTR_DAT_04cb5710,uVar10,
                                          *(undefined8 *)PTR_DAT_04cb56f0,0);
                      Dino_BusSand_App_Meta_Journey_JourneyReplay__Fail_229937c
                                (lVar7,lVar9,lVar14,uVar10);
                      goto LAB_02398fa4;
                    }
                  }
                  else if (iVar6 == 2) {
                    lVar14 = *(long *)(lVar14 + 0x38);
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0213322c();
                    }
                    Dino_BusSand_Core_StageEngine__AbsorbColorIntoRoadBus_242951c
                              (lVar9,*(undefined4 *)(lVar14 + 0x20),6,0);
                  }
                }
                else if (iVar6 - 3U < 2) {
                  Dino_BusSand_Core_StageEngine__ExpandRoadCapacity_2429170(lVar9,0);
                }
              }
            }
            else if (iVar6 == 6) {
              iVar6 = *(int *)(lVar14 + 0x18);
              if (iVar6 == 6) {
                lVar15 = *(long *)(lVar14 + 0x38);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                if (*(long *)(lVar15 + 0x20) == 0) {
                  Dino_BusSand_Core_StageEngine__ResumeJamClock_2426d38(lVar9,0);
                }
                else {
                  Dino_BusSand_Core_StageEngine__PauseJamClock_2426d28(lVar9,0);
                }
LAB_0239893c:
                iVar6 = *(int *)(lVar14 + 0x18);
              }
              else if (iVar6 == 3) {
                if ((*(char *)(lVar9 + 0x80) != '\0') && (*(char *)(lVar9 + 0x81) == '\0')) {
                  if (*(uint *)(lVar9 + 0x84) < 4) {
                    lVar15 = *(long *)(&UNK_00e6c050 + (ulong)*(uint *)(lVar9 + 0x84) * 8);
                  }
                  else {
                    lVar15 = 0;
                  }
                  lVar16 = *(long *)(lVar14 + 0x38);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                  if (*(long *)(lVar16 + 0x20) == lVar15) goto LAB_0239893c;
                }
                lVar8 = *(long *)(lVar14 + 0x38);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                lStack_108 = *(long *)(lVar8 + 0x20);
                uVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&lStack_108);
                uVar12 = *(undefined8 *)PTR_DAT_04cb56e8;
                if (*(char *)(lVar9 + 0x80) == '\0') {
                  uVar13 = *(undefined8 *)PTR_DAT_04cb56c0;
                }
                else {
                  uStack_f8 = *(undefined4 *)(lVar9 + 0x84);
                  lStack_108 = *(long *)PTR_DAT_04cb5688;
                  plStack_100 = (long *)0xffffffffffffffff;
                  uVar13 = System_Enum__ToString_4863070(&lStack_108,0);
                  uVar13 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb56e0,uVar13,0);
                }
                uVar10 = System_String__Format_46d34e8(uVar12,uVar10,uVar13,0);
                Dino_BusSand_App_Meta_Journey_JourneyReplay__Fail_229937c(lVar7,lVar9,lVar14,uVar10)
                ;
                goto LAB_02398fa4;
              }
              if (iVar6 == 7) {
                Dino_BusSand_Core_StageEngine__ResetJamClock_2426d5c(lVar9,0);
                iVar6 = *(int *)(lVar14 + 0x18);
              }
              if (iVar6 == 4) {
                if (*(int *)(lVar9 + 0x84) == 3) {
                  Dino_BusSand_Core_StageEngine__AddRescueTime_24293a0
                            (*(undefined4 *)(lVar14 + 0x40),lVar9,0);
                }
                else {
                  lVar15 = *(long *)(lVar14 + 0x38);
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                  Dino_BusSand_Core_StageEngine__ResumeByFillingRoadBus_2429894
                            (lVar9,*(undefined4 *)(lVar15 + 0x28),6,0);
                }
                if (*(char *)(lVar9 + 0x80) != '\0') {
                    /* try { // try from 02398ecc to 024994fb has its CatchHandler @ 02398ecc
                       catch() { ... } // from try @ 02398ecc with catch @ 02398ecc
                       catch() { ... } // from try @ 0239956c with catch @ 02398ecc
                       catch() { ... } // from try @ 02399620 with catch @ 02398ecc
                       catch() { ... } // from try @ 0239965c with catch @ 02398ecc
                       catch() { ... } // from try @ 02399688 with catch @ 02398ecc */
                  Dino_BusSand_App_Meta_Journey_JourneyReplay__Fail_229937c
                            (lVar7,lVar9,lVar14,*(undefined8 *)PTR_DAT_04cb5718);
                  goto LAB_02398fa4;
                }
              }
            }
            else if (iVar6 == 7) {
              if (*(int *)(lVar14 + 0x18) == 1) {
                if ((*(char *)(lVar9 + 0x80) == '\0') || (*(char *)(lVar9 + 0x81) != '\0')) {
                  Dino_BusSand_App_Meta_Journey_JourneyReplay__Fail_229937c
                            (lVar7,lVar9,lVar14,*(undefined8 *)PTR_DAT_04cb56c8);
                }
                else {
                  if (*(uint *)(lVar9 + 0x84) < 4) {
                    lVar15 = *(long *)(&UNK_00e6c050 + (ulong)*(uint *)(lVar9 + 0x84) * 8);
                  }
                  else {
                    lVar15 = 0;
                  }
                  lVar16 = *(long *)(lVar14 + 0x38);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                  if (*(long *)(lVar16 + 0x20) == lVar15) goto LAB_023988a0;
                  lStack_108 = *(long *)(lVar16 + 0x20);
                  uVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&lStack_108);
                  uStack_110 = CONCAT44(uStack_110._4_4_,*(undefined4 *)(lVar9 + 0x84));
                  uVar12 = FUN_02133100(*(undefined8 *)PTR_DAT_04cb5688,&uStack_110);
                  uVar10 = System_String__Format_46d34e8
                                     (*(undefined8 *)PTR_DAT_04cb5720,uVar10,uVar12,0);
                  Dino_BusSand_App_Meta_Journey_JourneyReplay__Fail_229937c
                            (lVar7,lVar9,lVar14,uVar10);
                }
              }
              else if ((*(int *)(lVar14 + 0x18) == 0) && (*(char *)(lVar9 + 0x81) == '\0')) {
                Dino_BusSand_App_Meta_Journey_JourneyReplay__Fail_229937c
                          (lVar7,lVar9,lVar14,*(undefined8 *)PTR_DAT_04cb5728);
              }
              else {
LAB_023988a0:
                if (*(long *)(lVar9 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                iVar6 = Dino_BusSand_Core_TruckGrid__get_Count_24236a8(*(long *)(lVar9 + 0x28),0);
                lVar15 = *(long *)(lVar14 + 0x38);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uVar17 = *(uint *)(lVar15 + 0x18);
                if (uVar17 < 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                if (*(long *)(lVar15 + 0x28) == (long)iVar6) {
                  if (*(long *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  if (uVar17 == 2) {
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                  if (*(long *)(lVar15 + 0x30) == (long)*(int *)(*(long *)(lVar9 + 0x18) + 0x70)) {
                    if (*(long *)(lVar9 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    if (uVar17 < 4) {
                    /* WARNING: Subroutine does not return */
                      FUN_0213322c();
                    }
                    if (*(long *)(lVar15 + 0x38) == (long)*(int *)(*(long *)(lVar9 + 0x20) + 0x38))
                    goto LAB_023989b0;
                  }
                }
                lVar8 = FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,6);
                puVar4 = PTR_DAT_04ca9ac8;
                lVar15 = *(long *)(lVar14 + 0x38);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                lStack_108 = *(long *)(lVar15 + 0x28);
                uVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&lStack_108);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                FUN_01e7704c(lVar8,uVar10);
                FUN_01e76ff0(lVar8,0,uVar10);
                lVar15 = *(long *)(lVar14 + 0x38);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                if (*(uint *)(lVar15 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                uStack_110 = *(undefined8 *)(lVar15 + 0x30);
                uVar10 = FUN_02133100(*(undefined8 *)(puVar4 + 0x68),&uStack_110);
                FUN_01e7704c(lVar8,uVar10);
                FUN_01e76ff0(lVar8,1,uVar10);
                lVar15 = *(long *)(lVar14 + 0x38);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                uStack_118 = *(undefined8 *)(lVar15 + 0x38);
                uVar10 = FUN_02133100(*(undefined8 *)(puVar4 + 0x68),&uStack_118);
                FUN_01e7704c(lVar8,uVar10);
                FUN_01e76ff0(lVar8,2,uVar10);
                if (*(long *)(lVar9 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uStack_11c = Dino_BusSand_Core_TruckGrid__get_Count_24236a8
                                       (*(long *)(lVar9 + 0x28),0);
                uVar10 = FUN_02133100(*(undefined8 *)(puVar4 + 0x48),&uStack_11c);
                FUN_01e7704c(lVar8,uVar10);
                FUN_01e76ff0(lVar8,3,uVar10);
                if (*(long *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uStack_120 = *(undefined4 *)(*(long *)(lVar9 + 0x18) + 0x70);
                uVar10 = FUN_02133100(*(undefined8 *)(puVar4 + 0x48),&uStack_120);
                FUN_01e7704c(lVar8,uVar10);
                FUN_01e76ff0(lVar8,4,uVar10);
                if (*(long *)(lVar9 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uStack_124 = *(undefined4 *)(*(long *)(lVar9 + 0x20) + 0x38);
                uVar10 = FUN_02133100(*(undefined8 *)(puVar4 + 0x48),&uStack_124);
                FUN_01e7704c(lVar8,uVar10);
                FUN_01e76ff0(lVar8,5,uVar10);
                uVar10 = System_String__Format_46d3570(*(undefined8 *)PTR_DAT_04cb56b8,lVar8,0);
                Dino_BusSand_App_Meta_Journey_JourneyReplay__Fail_229937c(lVar7,lVar9,lVar14,uVar10)
                ;
              }
              goto LAB_02398fa4;
            }
LAB_023989b0:
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + 1;
          } while( true );
        }
        goto LAB_02399084;
      }
      if (lVar7 == 0) goto LAB_02399084;
      uVar10 = *puVar19;
      goto LAB_02398ad8;
    }
  }
  uVar10 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb56f8,lVar14,0);
  if (lVar7 == 0) {
LAB_02399084:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_02398ad8:
  *(undefined8 *)(lVar7 + 0x18) = uVar10;
  thunk_FUN_02134474();
  return lVar7;
}

