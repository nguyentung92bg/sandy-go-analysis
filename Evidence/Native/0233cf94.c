/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$GoldRewardGet
void Dino_BusSand_App_Meta_GiftPackTrack__GoldRewardGet (Dino_BusSand_App_Meta_GiftPackFeature_o* f, int32_t packId, int32_t stage, int32_t changeType, int32_t coins, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$GoldRewardGet
   void Dino_BusSand_App_Meta_GiftPackTrack__GoldRewardGet (Dino_BusSand_App_Meta_GiftPackFeature_o*
   f, int32_t packId, int32_t stage, int32_t changeType, int32_t coins, const MethodInfo* method);
    */

void Dino_BusSand_App_Meta_GiftPackTrack__GoldRewardGet_223cf94
               (long param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if ((bRam0000000004f9bef5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cacbf0);
    FUN_02132f7c(PTR_DAT_04ca9ba0);
    FUN_02132f7c(PTR_DAT_04cacbf8);
    FUN_02132f7c(PTR_DAT_04ca9b98);
    FUN_02132f7c(PTR_DAT_04ca9b90);
    FUN_02132f7c(PTR_DAT_04cb3390);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb2bb0);
    FUN_02132f7c(PTR_DAT_04cb3670);
    FUN_02132f7c(PTR_DAT_04cb2b18);
    FUN_02132f7c(PTR_DAT_04cb3650);
    FUN_02132f7c(PTR_DAT_04cb2b30);
    FUN_02132f7c(PTR_DAT_04cb2bd8);
    FUN_02132f7c(PTR_DAT_04cb2be8);
    bRam0000000004f9bef5 = 1;
  }
  if (param_5 < 1) {
    return;
  }
  if ((param_1 != 0) &&
     (lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)PTR_DAT_04cb3390), puVar3 = PTR_DAT_04ca9b98,
     lVar6 != 0)) {
    lVar11 = *(long *)(lVar6 + 0x70);
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b90);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar6,*(undefined8 *)puVar3);
    puVar4 = PTR_DAT_04ca9ba0;
    if (lVar6 != 0) {
      lVar9 = *(long *)(lVar6 + 0x10);
      uVar8 = *(undefined8 *)PTR_DAT_04cb2b30;
      lVar10 = *(long *)PTR_DAT_04ca9ba0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          thunk_FUN_02134474();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar6,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
          ;
        }
        lVar9 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(param_1,param_2);
        puVar2 = PTR_DAT_04ca9ac8;
        if (lVar9 != 0) {
          uStack_70 = CONCAT44(uStack_70._4_4_,*(undefined4 *)(lVar9 + 0x14));
          uVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_70);
          lVar9 = *(long *)(lVar6 + 0x10);
          lVar10 = *(long *)puVar4;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar6,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            if (0 < param_3) {
              lVar9 = *(long *)(lVar6 + 0x10);
              uVar8 = *(undefined8 *)PTR_DAT_04cb3650;
              lVar10 = *(long *)puVar4;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_0233d5c8;
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                thunk_FUN_02134474();
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar6,uVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              uStack_70 = CONCAT44(uStack_70._4_4_,param_3);
              uVar8 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_70);
              lVar9 = *(long *)(lVar6 + 0x10);
              lVar10 = *(long *)puVar4;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_0233d5c8;
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                thunk_FUN_02134474();
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar6,uVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
            }
            plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,8);
            puVar5 = PTR_DAT_04cb2bb0;
            if (plVar7 != (long *)0x0) {
              if ((*(long *)PTR_DAT_04cb2bb0 != 0) &&
                 (lVar9 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb2bb0,
                                             *(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
LAB_0233d5d0:
                uVar8 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                FUN_021330e8(uVar8,0);
              }
              if ((int)plVar7[3] != 0) {
                plVar7[4] = *(long *)puVar5;
                thunk_FUN_02134474();
                uStack_64 = param_4;
                lVar9 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_64);
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)
                   ) goto LAB_0233d5d0;
                puVar5 = PTR_DAT_04cb2be8;
                if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
                  plVar7[5] = lVar9;
                  thunk_FUN_02134474(plVar7 + 5,lVar9);
                  lVar9 = *(long *)puVar5;
                  if ((lVar9 != 0) &&
                     (lVar9 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)
                     ) goto LAB_0233d5d0;
                  if (2 < *(uint *)(plVar7 + 3)) {
                    plVar7[6] = *(long *)puVar5;
                    thunk_FUN_02134474();
                    if (lVar11 == 0) goto LAB_0233d5c8;
                    uStack_68 = *(undefined4 *)(lVar11 + 0x10);
                    lVar11 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_68);
                    if ((lVar11 != 0) &&
                       (lVar9 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar7 + 0x40)),
                       lVar9 == 0)) goto LAB_0233d5d0;
                    puVar5 = PTR_DAT_04cb2bd8;
                    if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
                      plVar7[7] = lVar11;
                      thunk_FUN_02134474(plVar7 + 7,lVar11);
                      lVar11 = *(long *)puVar5;
                      if ((lVar11 != 0) &&
                         (lVar11 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar7 + 0x40)),
                         lVar11 == 0)) goto LAB_0233d5d0;
                      if (4 < *(uint *)(plVar7 + 3)) {
                        plVar7[8] = *(long *)puVar5;
                        thunk_FUN_02134474();
                        uStack_70 = Dino_BusSand_App_Meta_GiftPackFeature__RemainingSeconds_223a6bc
                                              (param_1,param_2);
                        lVar11 = FUN_02133100(*(undefined8 *)(puVar2 + 0x68),&uStack_70);
                        if ((lVar11 != 0) &&
                           (lVar9 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar7 + 0x40)),
                           lVar9 == 0)) goto LAB_0233d5d0;
                        puVar2 = PTR_DAT_04cb2b18;
                        if (5 < *(uint *)(plVar7 + 3)) {
                          plVar7[9] = lVar11;
                          thunk_FUN_02134474(plVar7 + 9,lVar11);
                          lVar11 = *(long *)puVar2;
                          if ((lVar11 != 0) &&
                             (lVar11 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar7 + 0x40)),
                             lVar11 == 0)) goto LAB_0233d5d0;
                          if (6 < *(uint *)(plVar7 + 3)) {
                            plVar7[10] = *(long *)puVar2;
                            thunk_FUN_02134474();
                            lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b90);
                            System_Collections_Generic_List_object____ctor_3a8138c
                                      (lVar11,*(undefined8 *)puVar3);
                            uVar8 = Dino_BusSand_App_Meta_GiftPackTrack__Item_223e8ec(0x3e9,param_5)
                            ;
                            if (lVar11 != 0) {
                              lVar9 = *(long *)(lVar11 + 0x10);
                              lVar10 = *(long *)puVar4;
                              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                              if (lVar9 != 0) {
                                uVar1 = *(uint *)(lVar11 + 0x18);
                                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                  *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                  *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                                  thunk_FUN_02134474();
                                }
                                else {
                                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                            (lVar11,uVar8,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                                }
                                lVar9 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar7 + 0x40));
                                puVar5 = PTR_DAT_04cb3670;
                                puVar2 = PTR_DAT_04cacbf8;
                                puVar4 = PTR_DAT_04cacbf0;
                                puVar3 = PTR_DAT_04cac5c0;
                                if (lVar9 == 0) goto LAB_0233d5d0;
                                if ((*(uint *)(plVar7 + 3) & 0xfffffff8) != 0) {
                                  plVar7[0xb] = lVar11;
                                  thunk_FUN_02134474(plVar7 + 0xb,lVar11);
                                  System_Collections_Generic_List_object___AddRange_3a81e04
                                            (lVar6,plVar7,*(undefined8 *)puVar4);
                                  uVar8 = System_Collections_Generic_List_object___ToArray_3a83728
                                                    (lVar6,*(undefined8 *)puVar2);
                                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                    thunk_FUN_0218fdac(*(long *)puVar3);
                                  }
                                  Dino_BusSand_App_Analytics__Log_216d0c8
                                            (*(undefined8 *)puVar5,uVar8,0);
                                  return;
                                }
                                goto LAB_0233d5cc;
                              }
                            }
                            goto LAB_0233d5c8;
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_0233d5cc:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
          }
        }
      }
    }
  }
LAB_0233d5c8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

