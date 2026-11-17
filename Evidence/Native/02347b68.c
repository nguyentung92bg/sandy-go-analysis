/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$TrackReward
void Dino_BusSand_App_Meta_PassportFeature__TrackReward (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t passType, int32_t changeType, int32_t stage, System_Collections_Generic_List_PassportFeature_Reward__o* rewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$TrackReward
   void Dino_BusSand_App_Meta_PassportFeature__TrackReward (Dino_BusSand_App_Meta_PassportFeature_o*
   __this, int32_t passType, int32_t changeType, int32_t stage,
   System_Collections_Generic_List_PassportFeature_Reward__o* rewards, const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__TrackReward_2247b68
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4,long param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  puVar3 = PTR_DAT_04ca9b98;
  puVar2 = PTR_DAT_04ca9b90;
  if ((bRam0000000004f9bf95 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04caf638);
    FUN_02132f7c(PTR_DAT_04caf640);
    FUN_02132f7c(PTR_DAT_04caf648);
    FUN_02132f7c(PTR_DAT_04cacbf0);
    FUN_02132f7c(PTR_DAT_04ca9ba0);
    FUN_02132f7c(PTR_DAT_04caf650);
    FUN_02132f7c(PTR_DAT_04cacbf8);
    FUN_02132f7c(PTR_DAT_04ca9b98);
    FUN_02132f7c(PTR_DAT_04ca9b90);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb3a10);
    FUN_02132f7c(PTR_DAT_04cb2bb0);
    FUN_02132f7c(PTR_DAT_04cb2b18);
    FUN_02132f7c(PTR_DAT_04cb2e48);
    FUN_02132f7c(PTR_DAT_04cb2b30);
    FUN_02132f7c(PTR_DAT_04cb3a18);
    FUN_02132f7c(PTR_DAT_04cb2bd8);
    bRam0000000004f9bf95 = 1;
  }
  uStack_70 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar8,*(undefined8 *)puVar3);
  puVar7 = PTR_DAT_04cb2b30;
  puVar6 = PTR_DAT_04caf640;
  puVar5 = PTR_DAT_04caf638;
  puVar4 = PTR_DAT_04ca9ba0;
  if (param_5 != 0) {
    System_Collections_Generic_List_PassportFeature_Reward___GetEnumerator_3b58f1c
              (&uStack_b8,param_5,*(undefined8 *)PTR_DAT_04caf650);
    uStack_70 = uStack_98;
    puStack_88 = puStack_b0;
    uStack_90 = uStack_b8;
    lStack_78 = lStack_a0;
    uStack_80 = uStack_a8;
    uStack_b8 = 0;
    puStack_b0 = &uStack_90;
LAB_02347d18:
    uVar9 = System_Collections_Generic_List_Enumerator_PassportFeature_Reward___MoveNext_3613ea8
                      (&uStack_90,*(undefined8 *)puVar6);
    if ((uVar9 & 1) != 0) {
      if ((0 < (int)uStack_80) && (0 < lStack_78)) {
        uVar10 = Dino_BusSand_App_Meta_GiftPackTrack__Item_223e8ec
                           (uStack_80 & 0xffffffff,lStack_78,0);
        if (lVar8 != 0) {
          lVar12 = *(long *)(lVar8 + 0x10);
          lVar13 = *(long *)puVar4;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar12 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar8,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_02347d18;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_02347d18;
    }
    System_Collections_Generic_List_Enumerator_PassportFeature_Reward___Dispose_3613ea4
              (&uStack_90,*(undefined8 *)puVar5);
    lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar12,*(undefined8 *)puVar3);
    if (lVar12 != 0) {
      lVar13 = *(long *)(lVar12 + 0x10);
      uVar10 = *(undefined8 *)puVar7;
      lVar14 = *(long *)puVar4;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar13 != 0) {
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
          thunk_FUN_02134474();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar12,uVar10,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        lVar13 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                           (param_1,*(undefined8 *)PTR_DAT_04cb01b0);
        puVar2 = PTR_DAT_04ca9ac8;
        if (lVar13 != 0) {
          uStack_b8 = CONCAT44(uStack_b8._4_4_,*(undefined4 *)(lVar13 + 0x74));
          uVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_b8);
          lVar13 = *(long *)(lVar12 + 0x10);
          lVar14 = *(long *)puVar4;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar13 != 0) {
            uVar1 = *(uint *)(lVar12 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar12,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            lVar13 = *(long *)(lVar12 + 0x10);
            uVar10 = *(undefined8 *)PTR_DAT_04cb3a18;
            lVar14 = *(long *)puVar4;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar13 != 0) {
              uVar1 = *(uint *)(lVar12 + 0x18);
              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                thunk_FUN_02134474();
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar12,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              uStack_bc = param_2;
              uVar10 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_bc);
              lVar13 = *(long *)(lVar12 + 0x10);
              lVar14 = *(long *)puVar4;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar13 != 0) {
                uVar1 = *(uint *)(lVar12 + 0x18);
                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                  *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                  thunk_FUN_02134474();
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (lVar12,uVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
                lVar13 = *(long *)(lVar12 + 0x10);
                uVar10 = *(undefined8 *)PTR_DAT_04cb2bb0;
                lVar14 = *(long *)puVar4;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                if (lVar13 != 0) {
                  uVar1 = *(uint *)(lVar12 + 0x18);
                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                    thunk_FUN_02134474();
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                              (lVar12,uVar10,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                  }
                  uStack_c0 = param_3;
                  uVar10 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_c0);
                  lVar13 = *(long *)(lVar12 + 0x10);
                  lVar14 = *(long *)puVar4;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar13 != 0) {
                    uVar1 = *(uint *)(lVar12 + 0x18);
                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                      thunk_FUN_02134474();
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                (lVar12,uVar10,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                      ;
                    }
                    if (-1 < param_4) {
                      lVar13 = *(long *)(lVar12 + 0x10);
                      uVar10 = *(undefined8 *)PTR_DAT_04cb2e48;
                      lVar14 = *(long *)puVar4;
                      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                      if (lVar13 == 0) goto LAB_023482b4;
                      uVar1 = *(uint *)(lVar12 + 0x18);
                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                        thunk_FUN_02134474();
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                  (lVar12,uVar10,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                      }
                      uStack_b8 = CONCAT44(uStack_b8._4_4_,param_4);
                      uVar10 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_b8);
                      lVar13 = *(long *)(lVar12 + 0x10);
                      lVar14 = *(long *)puVar4;
                      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                      if (lVar13 == 0) goto LAB_023482b4;
                      uVar1 = *(uint *)(lVar12 + 0x18);
                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                        thunk_FUN_02134474();
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                  (lVar12,uVar10,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                    plVar11 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,4);
                    puVar3 = PTR_DAT_04cb2bd8;
                    if (plVar11 != (long *)0x0) {
                      if ((*(long *)PTR_DAT_04cb2bd8 != 0) &&
                         (lVar13 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb2bd8,
                                                      *(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0
                         )) {
LAB_023482bc:
                        uVar10 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                        FUN_021330e8(uVar10,0);
                      }
                      if ((int)plVar11[3] != 0) {
                        plVar11[4] = *(long *)puVar3;
                        thunk_FUN_02134474();
                        uStack_b8 = Dino_BusSand_App_Meta_PassportFeature__RemainingSeconds_2246184
                                              (param_1);
                        lVar13 = FUN_02133100(*(undefined8 *)(puVar2 + 0x68),&uStack_b8);
                        if ((lVar13 != 0) &&
                           (lVar14 = thunk_FUN_0216e7a0(lVar13,*(undefined8 *)(*plVar11 + 0x40)),
                           lVar14 == 0)) goto LAB_023482bc;
                        if ((*(uint *)(plVar11 + 3) & 0xfffffffe) != 0) {
                          plVar11[5] = lVar13;
                          thunk_FUN_02134474(plVar11 + 5,lVar13);
                          puVar2 = PTR_DAT_04cb2b18;
                          if ((*(long *)PTR_DAT_04cb2b18 != 0) &&
                             (lVar13 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb2b18,
                                                          *(undefined8 *)(*plVar11 + 0x40)),
                             lVar13 == 0)) goto LAB_023482bc;
                          if (2 < *(uint *)(plVar11 + 3)) {
                            plVar11[6] = *(long *)puVar2;
                            thunk_FUN_02134474();
                            if ((lVar8 != 0) &&
                               (lVar13 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar11 + 0x40)),
                               lVar13 == 0)) goto LAB_023482bc;
                            if ((*(uint *)(plVar11 + 3) & 0xfffffffc) != 0) {
                              plVar11[7] = lVar8;
                              thunk_FUN_02134474(plVar11 + 7,lVar8);
                              System_Collections_Generic_List_object___AddRange_3a81e04
                                        (lVar12,plVar11,*(undefined8 *)PTR_DAT_04cacbf0);
                              uVar10 = System_Collections_Generic_List_object___ToArray_3a83728
                                                 (lVar12,*(undefined8 *)PTR_DAT_04cacbf8);
                              if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                                thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac5c0);
                              }
                              Dino_BusSand_App_Analytics__Log_216d0c8
                                        (*(undefined8 *)PTR_DAT_04cb3a10,uVar10,0);
                              return;
                            }
                          }
                        }
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_0213322c();
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
LAB_023482b4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

