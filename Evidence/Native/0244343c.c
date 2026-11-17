/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$WriteReport
void Dino_BusSand_Cheat_AutoQa__WriteReport (float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$WriteReport
   void Dino_BusSand_Cheat_AutoQa__WriteReport (float seconds, const MethodInfo* method); */

void Dino_BusSand_Cheat_AutoQa__WriteReport_234343c(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  puVar4 = PTR_DAT_04caa038;
  puVar2 = PTR_DAT_04ca9b78;
  uStack_64 = param_1;
  if ((bRam0000000004f9c6a8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04caa468);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cb9578);
    FUN_02132f7c(PTR_DAT_04cb9580);
    FUN_02132f7c(PTR_DAT_04cb9588);
    FUN_02132f7c(PTR_DAT_04cb9590);
    FUN_02132f7c(PTR_DAT_04cb96f8);
    FUN_02132f7c(PTR_DAT_04ca9b78);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cb9700);
    FUN_02132f7c(PTR_DAT_04cb9708);
    FUN_02132f7c(PTR_DAT_04cb9710);
    FUN_02132f7c(PTR_DAT_04cb9718);
    FUN_02132f7c(PTR_DAT_04cb96e0);
    FUN_02132f7c(PTR_DAT_04cb9720);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04cb9728);
    FUN_02132f7c(PTR_DAT_04cb9730);
    FUN_02132f7c(PTR_DAT_04cab2b8);
    FUN_02132f7c(PTR_DAT_04cb2308);
    FUN_02132f7c(PTR_DAT_04cb9738);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb9740);
    FUN_02132f7c(PTR_DAT_04cab288);
    bRam0000000004f9c6a8 = 1;
  }
  uStack_70 = 0;
  uStack_74 = 0;
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  lStack_80 = 0;
  uStack_98 = 0;
  plVar10 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Text_StringBuilder___ctor_46db61c(plVar10,0);
  lVar11 = FUN_02133068(*(undefined8 *)puVar4,0xb);
  puVar3 = PTR_DAT_04cb9720;
  puVar2 = PTR_DAT_04caa468;
  if (lVar11 == 0) goto LAB_02443c84;
  if (*(int *)(lVar11 + 0x18) != 0) {
    *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_04cb9718;
    thunk_FUN_02134474();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_70 = System_DateTime__get_Now_48114b8(0);
    uVar12 = System_DateTime__ToString_4812530(&uStack_70,*(undefined8 *)puVar3,0);
    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar11 + 0x28) = uVar12;
      thunk_FUN_02134474((undefined8 *)(lVar11 + 0x28),uVar12);
      puVar2 = PTR_DAT_04caa210;
      if (2 < *(uint *)(lVar11 + 0x18)) {
        *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_04cb9708;
        thunk_FUN_02134474();
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar12 = UnityEngine_Application__get_version_435257c(0);
        if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar11 + 0x38) = uVar12;
          thunk_FUN_02134474((undefined8 *)(lVar11 + 0x38),uVar12);
          puVar2 = PTR_DAT_04cb9568;
          if (4 < *(uint *)(lVar11 + 0x18)) {
            *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)PTR_DAT_04cb9728;
            thunk_FUN_02134474();
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uStack_74 = Dino_BusSand_Cheat_AutoQa__get_Passed_2340d70();
            uVar12 = System_Int32__ToString_482d750(&uStack_74,0);
            if (5 < *(uint *)(lVar11 + 0x18)) {
              *(undefined8 *)(lVar11 + 0x48) = uVar12;
              thunk_FUN_02134474((undefined8 *)(lVar11 + 0x48),uVar12);
              if (6 < *(uint *)(lVar11 + 0x18)) {
                *(undefined8 *)(lVar11 + 0x50) = *(undefined8 *)PTR_DAT_04cabd10;
                thunk_FUN_02134474();
                lVar15 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                if (lVar15 == 0) goto LAB_02443c84;
                uStack_74 = *(undefined4 *)(lVar15 + 0x18);
                uVar12 = System_Int32__ToString_482d750(&uStack_74,0);
                if ((*(uint *)(lVar11 + 0x18) & 0xfffffff8) != 0) {
                  *(undefined8 *)(lVar11 + 0x58) = uVar12;
                  thunk_FUN_02134474((undefined8 *)(lVar11 + 0x58),uVar12);
                  puVar3 = PTR_DAT_04cab288;
                  if (8 < *(uint *)(lVar11 + 0x18)) {
                    *(undefined8 *)(lVar11 + 0x60) = *(undefined8 *)PTR_DAT_04cb9700;
                    thunk_FUN_02134474((undefined8 *)(lVar11 + 0x60));
                    uVar12 = System_Single__ToString_48426d8(&uStack_64,*(undefined8 *)puVar3,0);
                    if (9 < *(uint *)(lVar11 + 0x18)) {
                      *(undefined8 *)(lVar11 + 0x68) = uVar12;
                      thunk_FUN_02134474((undefined8 *)(lVar11 + 0x68),uVar12);
                      if (10 < *(uint *)(lVar11 + 0x18)) {
                        *(undefined8 *)(lVar11 + 0x70) = *(undefined8 *)PTR_DAT_04cb9710;
                        thunk_FUN_02134474();
                        uVar12 = System_String__Concat_46d31f0(lVar11,0);
                        if (plVar10 != (long *)0x0) {
                          System_Text_StringBuilder__AppendLine_46dd2c8(plVar10,uVar12,0);
                          puVar9 = PTR_DAT_04cb9740;
                          puVar8 = PTR_DAT_04cb9738;
                          puVar7 = PTR_DAT_04cb9580;
                          puVar6 = PTR_DAT_04cb9578;
                          puVar5 = PTR_DAT_04cb2308;
                          puVar3 = PTR_DAT_04ca9c30;
                          lVar11 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                          if (lVar11 != 0) {
                            System_Collections_Generic_List_object___GetEnumerator_3a825f0
                                      (&uStack_b8,lVar11,*(undefined8 *)PTR_DAT_04cb9590);
                            lStack_80 = lStack_a8;
                            puStack_88 = puStack_b0;
                            uStack_90 = uStack_b8;
                            uStack_b8 = 0;
                            puStack_b0 = &uStack_90;
                            while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                                      (&uStack_90,*(undefined8 *)puVar7),
                                  lVar11 = lStack_80, (uVar13 & 1) != 0) {
                              lVar15 = FUN_02133068(*(undefined8 *)puVar4,5);
                              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_02133224();
                              }
                              puVar1 = (undefined8 *)puVar9;
                              if (*(char *)(lVar11 + 0x28) != '\0') {
                                puVar1 = (undefined8 *)puVar8;
                              }
                              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_02133224();
                              }
                              if (*(int *)(lVar15 + 0x18) == 0) {
LAB_02443bb0:
                    /* WARNING: Subroutine does not return */
                                FUN_0213322c();
                              }
                              *(undefined8 *)(lVar15 + 0x20) = *puVar1;
                              thunk_FUN_02134474();
                              if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_0213322c();
                              }
                              *(undefined8 *)(lVar15 + 0x28) = *(undefined8 *)(lVar11 + 0x10);
                              thunk_FUN_02134474();
                              if (*(uint *)(lVar15 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                                FUN_0213322c();
                              }
                              *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)puVar5;
                              thunk_FUN_02134474();
                              if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_0213322c();
                              }
                              *(undefined8 *)(lVar15 + 0x38) = *(undefined8 *)(lVar11 + 0x18);
                              thunk_FUN_02134474();
                              uVar13 = System_String__IsNullOrEmpty_46d2084
                                                 (*(undefined8 *)(lVar11 + 0x20),0);
                              if ((uVar13 & 1) == 0) {
                                uVar12 = System_String__Concat_46c82e0
                                                   (*(undefined8 *)puVar5,
                                                    *(undefined8 *)(lVar11 + 0x20),0);
                              }
                              else {
                                uVar12 = *(undefined8 *)puVar3;
                              }
                              if (*(uint *)(lVar15 + 0x18) < 5) goto LAB_02443bb0;
                              *(undefined8 *)(lVar15 + 0x40) = uVar12;
                              thunk_FUN_02134474();
                              uVar12 = System_String__Concat_46d31f0(lVar15,0);
                              System_Text_StringBuilder__AppendLine_46dd2c8(plVar10,uVar12,0);
                            }
                            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                                      (&uStack_90,*(undefined8 *)puVar6);
                            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            uVar12 = Dino_BusSand_Cheat_AutoQa__get_ReportPath_2340cd0();
                            uVar14 = (**(code **)(*plVar10 + 0x168))
                                               (plVar10,*(undefined8 *)(*plVar10 + 0x170));
                            System_IO_File__WriteAllText_47f90d8(uVar12,uVar14,0);
                            lVar11 = FUN_02133068(*(undefined8 *)puVar4,7);
                            if (lVar11 != 0) {
                              if (*(int *)(lVar11 + 0x18) != 0) {
                                *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_04cb96e0;
                                thunk_FUN_02134474();
                                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                  thunk_FUN_0218fdac();
                                }
                                uStack_74 = Dino_BusSand_Cheat_AutoQa__get_Passed_2340d70();
                                uVar12 = System_Int32__ToString_482d750(&uStack_74,0);
                                if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                                  *(undefined8 *)(lVar11 + 0x28) = uVar12;
                                  thunk_FUN_02134474((undefined8 *)(lVar11 + 0x28),uVar12);
                                  if (2 < *(uint *)(lVar11 + 0x18)) {
                                    *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_04cabd10
                                    ;
                                    thunk_FUN_02134474();
                                    lVar15 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                                    if (lVar15 == 0) goto LAB_02443c84;
                                    uStack_74 = *(undefined4 *)(lVar15 + 0x18);
                                    uVar12 = System_Int32__ToString_482d750(&uStack_74,0);
                                    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
                                      *(undefined8 *)(lVar11 + 0x38) = uVar12;
                                      thunk_FUN_02134474((undefined8 *)(lVar11 + 0x38),uVar12);
                                      if (4 < *(uint *)(lVar11 + 0x18)) {
                                        *(undefined8 *)(lVar11 + 0x40) =
                                             *(undefined8 *)PTR_DAT_04cb9730;
                                        thunk_FUN_02134474((undefined8 *)(lVar11 + 0x40));
                                        uVar12 = Dino_BusSand_Cheat_AutoQa__get_ReportPath_2340cd0()
                                        ;
                                        if (5 < *(uint *)(lVar11 + 0x18)) {
                                          *(undefined8 *)(lVar11 + 0x48) = uVar12;
                                          thunk_FUN_02134474((undefined8 *)(lVar11 + 0x48),uVar12);
                                          if (6 < *(uint *)(lVar11 + 0x18)) {
                                            *(undefined8 *)(lVar11 + 0x50) =
                                                 *(undefined8 *)PTR_DAT_04cab2b8;
                                            thunk_FUN_02134474();
                                            uVar12 = System_String__Concat_46d31f0(lVar11,0);
                                            if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
                                              thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
                                            }
                                            UnityEngine_Debug__Log_4360fc8(uVar12,0);
                                            return;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto LAB_02443bc8;
                            }
                          }
                        }
LAB_02443c84:
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02443bc8:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

