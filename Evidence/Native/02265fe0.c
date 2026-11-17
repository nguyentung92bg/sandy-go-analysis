/* IL2CPP: Dino.BusSand.App.GameApp$$OnPlayState
void Dino_BusSand_App_GameApp__OnPlayState (Dino_BusSand_App_GameApp_o* __this, int32_t s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$OnPlayState
   void Dino_BusSand_App_GameApp__OnPlayState (Dino_BusSand_App_GameApp_o* __this, int32_t s, const
   MethodInfo* method); */

void Dino_BusSand_App_GameApp__OnPlayState_2165fe0(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined4 uStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_28;
  int iStack_24;
  
  if ((bRam0000000004f9b864 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04cac5c8);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cac5d0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cac5d8);
    FUN_02132f7c(PTR_DAT_04cac5e0);
    FUN_02132f7c(PTR_DAT_04cac5e8);
    FUN_02132f7c(PTR_DAT_04cac5f0);
    FUN_02132f7c(PTR_DAT_04cac5f8);
    FUN_02132f7c(PTR_DAT_04cac600);
    FUN_02132f7c(PTR_DAT_04cac608);
    FUN_02132f7c(PTR_DAT_04cac610);
    FUN_02132f7c(PTR_DAT_04cabb50);
    FUN_02132f7c(PTR_DAT_04cac618);
    FUN_02132f7c(PTR_DAT_04cac620);
    FUN_02132f7c(PTR_DAT_04cac628);
    FUN_02132f7c(PTR_DAT_04cac630);
    FUN_02132f7c(PTR_DAT_04cac638);
    FUN_02132f7c(PTR_DAT_04cac640);
    FUN_02132f7c(PTR_DAT_04cabc80);
    FUN_02132f7c(PTR_DAT_04cac648);
    FUN_02132f7c(PTR_DAT_04cac650);
    bRam0000000004f9b864 = 1;
  }
  puVar1 = PTR_DAT_04cac5e0;
  if (param_2 < 4) {
    if (param_2 == 2) {
      lVar8 = *(long *)PTR_DAT_04cac5e0;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar1;
      }
      puVar12 = *(undefined8 **)(lVar8 + 0xb8);
      lVar9 = puVar12[4];
      if (lVar9 == 0) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar12 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar10 = *puVar12;
        lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac5c8);
        System_Func_object__object____ctor_37a3a24(lVar9,uVar10,*(undefined8 *)PTR_DAT_04cac5d8,0);
        plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
        *plVar7 = lVar9;
        thunk_FUN_02134474(plVar7,lVar9);
      }
      puVar1 = PTR_DAT_04cac5d0;
      lVar8 = *(long *)PTR_DAT_04cac5d0;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar1;
      }
      plVar7 = (long *)(*(long *)(lVar8 + 0xb8) + 0x18);
      *plVar7 = lVar9;
      if (iRam00000000051c1b10 != 0) {
        FUN_02220bf0(1L << ((ulong)plVar7 >> 0xc & 0x3f),
                     ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
      }
      return;
    }
    if (param_2 != 3) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Economy__OnReviveWait_2204d18(0);
    uVar6 = Dino_BusSand_App_Meta_Economy__get_CanRevive_2204a44(0);
    if ((uVar6 & 1) != 0) {
      plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,0x12);
      puVar1 = PTR_DAT_04cabb50;
      if (plVar7 == (long *)0x0) goto LAB_02266980;
      if ((*(long *)PTR_DAT_04cabb50 != 0) &&
         (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cabb50,*(undefined8 *)(*plVar7 + 0x40)),
         lVar8 == 0)) {
LAB_02266974:
        uVar10 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar10,0);
      }
      if ((int)plVar7[3] != 0) {
        plVar7[4] = *(long *)puVar1;
        thunk_FUN_02134474();
        puVar1 = PTR_DAT_04ca9ac8;
        iStack_24 = *(int *)(param_1 + 0x54);
        lVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_24);
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
        goto LAB_02266974;
        if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
          plVar7[5] = lVar8;
          thunk_FUN_02134474(plVar7 + 5,lVar8);
          puVar2 = PTR_DAT_04cac610;
          if ((*(long *)PTR_DAT_04cac610 != 0) &&
             (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac610,*(undefined8 *)(*plVar7 + 0x40)),
             lVar8 == 0)) goto LAB_02266974;
          if (2 < *(uint *)(plVar7 + 3)) {
            plVar7[6] = *(long *)puVar2;
            thunk_FUN_02134474();
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_02266980;
            uStack_28 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24);
            lVar8 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_28);
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
            goto LAB_02266974;
            if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
              plVar7[7] = lVar8;
              thunk_FUN_02134474(plVar7 + 7,lVar8);
              puVar2 = PTR_DAT_04cac650;
              if ((*(long *)PTR_DAT_04cac650 != 0) &&
                 (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac650,
                                             *(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
              goto LAB_02266974;
              if (4 < *(uint *)(plVar7 + 3)) {
                plVar7[8] = *(long *)puVar2;
                thunk_FUN_02134474();
                uStack_34 = *(undefined4 *)(param_1 + 0x58);
                lVar8 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_34);
                if ((lVar8 != 0) &&
                   (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
                goto LAB_02266974;
                if (5 < *(uint *)(plVar7 + 3)) {
                  plVar7[9] = lVar8;
                  thunk_FUN_02134474(plVar7 + 9,lVar8);
                  puVar2 = PTR_DAT_04cac618;
                  if ((*(long *)PTR_DAT_04cac618 != 0) &&
                     (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac618,
                                                 *(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
                  goto LAB_02266974;
                  if (6 < *(uint *)(plVar7 + 3)) {
                    plVar7[10] = *(long *)puVar2;
                    thunk_FUN_02134474();
                    if (*(long *)(param_1 + 0x20) == 0) goto LAB_02266980;
                    lVar8 = Dino_BusSand_App_Gameplay_GameplayController__get_FailType_229bf88
                                      (*(long *)(param_1 + 0x20),0);
                    if ((lVar8 != 0) &&
                       (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)),
                       lVar9 == 0)) goto LAB_02266974;
                    if ((*(uint *)(plVar7 + 3) & 0xfffffff8) != 0) {
                      plVar7[0xb] = lVar8;
                      thunk_FUN_02134474(plVar7 + 0xb,lVar8);
                      puVar2 = PTR_DAT_04cabc80;
                      if ((*(long *)PTR_DAT_04cabc80 != 0) &&
                         (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cabc80,
                                                     *(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
                      goto LAB_02266974;
                      if (8 < *(uint *)(plVar7 + 3)) {
                        plVar7[0xc] = *(long *)puVar2;
                        thunk_FUN_02134474();
                        uStack_40 = Dino_BusSand_App_GameApp__Progress3_2165f30(param_1);
                        lVar8 = FUN_02133100(*(undefined8 *)(puVar1 + 0x80),&uStack_40);
                        if ((lVar8 != 0) &&
                           (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)),
                           lVar9 == 0)) goto LAB_02266974;
                        if (9 < *(uint *)(plVar7 + 3)) {
                          plVar7[0xd] = lVar8;
                          thunk_FUN_02134474(plVar7 + 0xd,lVar8);
                          puVar2 = PTR_DAT_04cac5f8;
                          if ((*(long *)PTR_DAT_04cac5f8 != 0) &&
                             (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac5f8,
                                                         *(undefined8 *)(*plVar7 + 0x40)),
                             lVar8 == 0)) goto LAB_02266974;
                          if (10 < *(uint *)(plVar7 + 3)) {
                            plVar7[0xe] = *(long *)puVar2;
                            thunk_FUN_02134474();
                            if (*(long *)(param_1 + 0x20) == 0) goto LAB_02266980;
                            uStack_48 = CONCAT44(*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x44),
                                                 (undefined4)uStack_48);
                            lVar8 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),(long)&uStack_48 + 4
                                                );
                            if ((lVar8 != 0) &&
                               (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)),
                               lVar9 == 0)) goto LAB_02266974;
                            if (0xb < *(uint *)(plVar7 + 3)) {
                              plVar7[0xf] = lVar8;
                              thunk_FUN_02134474(plVar7 + 0xf,lVar8);
                              puVar2 = PTR_DAT_04cac600;
                              if ((*(long *)PTR_DAT_04cac600 != 0) &&
                                 (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac600,
                                                             *(undefined8 *)(*plVar7 + 0x40)),
                                 lVar8 == 0)) goto LAB_02266974;
                              if (0xc < *(uint *)(plVar7 + 3)) {
                                plVar7[0x10] = *(long *)puVar2;
                                thunk_FUN_02134474();
                                if (*(long *)(param_1 + 0x20) == 0) goto LAB_02266980;
                                uStack_48 = CONCAT44(uStack_48._4_4_,
                                                     *(undefined4 *)
                                                      (*(long *)(param_1 + 0x20) + 0x48));
                                lVar8 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_48);
                                if ((lVar8 != 0) &&
                                   (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)
                                                              ), lVar9 == 0)) goto LAB_02266974;
                                if (0xd < *(uint *)(plVar7 + 3)) {
                                  plVar7[0x11] = lVar8;
                                  thunk_FUN_02134474(plVar7 + 0x11,lVar8);
                                  puVar2 = PTR_DAT_04cac648;
                                  if ((*(long *)PTR_DAT_04cac648 != 0) &&
                                     (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac648,
                                                                 *(undefined8 *)(*plVar7 + 0x40)),
                                     lVar8 == 0)) goto LAB_02266974;
                                  if (0xe < *(uint *)(plVar7 + 3)) {
                                    plVar7[0x12] = *(long *)puVar2;
                                    thunk_FUN_02134474();
                                    fVar13 = (float)
                                                  UnityEngine_Time__get_realtimeSinceStartup_43ca5c8
                                                            (0);
                                    if (*(long *)(param_1 + 0x20) == 0) goto LAB_02266980;
                                    fVar13 = fVar13 - *(float *)(*(long *)(param_1 + 0x20) + 0x5c);
                                    iStack_4c = -0x80000000;
                                    if (fVar13 != INFINITY) {
                                      iStack_4c = (int)fVar13;
                                    }
                                    lVar8 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&iStack_4c);
                                    if ((lVar8 != 0) &&
                                       (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)
                                                                          (*plVar7 + 0x40)),
                                       lVar9 == 0)) goto LAB_02266974;
                                    if ((*(uint *)(plVar7 + 3) & 0xfffffff0) != 0) {
                                      plVar7[0x13] = lVar8;
                                      thunk_FUN_02134474(plVar7 + 0x13,lVar8);
                                      puVar2 = PTR_DAT_04cac620;
                                      if ((*(long *)PTR_DAT_04cac620 != 0) &&
                                         (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac620,
                                                                     *(undefined8 *)(*plVar7 + 0x40)
                                                                    ), lVar8 == 0))
                                      goto LAB_02266974;
                                      if (0x10 < *(uint *)(plVar7 + 3)) {
                                        plVar7[0x14] = *(long *)puVar2;
                                        thunk_FUN_02134474();
                                        if (*(long *)(param_1 + 0x20) != 0) {
                                          uStack_50 = *(undefined4 *)
                                                       (*(long *)(param_1 + 0x20) + 0x40);
                                          lVar8 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),
                                                               &uStack_50);
                                          if ((lVar8 != 0) &&
                                             (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)
                                                                                (*plVar7 + 0x40)),
                                             lVar9 == 0)) goto LAB_02266974;
                                          if (*(uint *)(plVar7 + 3) < 0x12) goto LAB_02266970;
                                          plVar7[0x15] = lVar8;
                                          thunk_FUN_02134474(plVar7 + 0x15,lVar8);
                                          if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                                            thunk_FUN_0218fdac();
                                          }
                                          uVar10 = Dino_BusSand_App_Analytics__L_216fff0(plVar7,0);
                                          Dino_BusSand_App_Analytics__Log_216d0c8
                                                    (*(undefined8 *)PTR_DAT_04cac630,uVar10,0);
                                          if (*(long *)(param_1 + 0x28) != 0) {
                                            Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                                                      (*(long *)(param_1 + 0x28),
                                                       *(undefined8 *)PTR_DAT_04cac5e8);
                                            if (*(long *)(param_1 + 0x28) != 0) {
                                              Dino_BusSand_App_UI_UIManager__Open_object__2945314
                                                        (*(long *)(param_1 + 0x28),
                                                         *(undefined8 *)PTR_DAT_04cac608,2,0,
                                                         *(undefined8 *)PTR_DAT_04cac5f0);
                                              return;
                                            }
                                          }
                                        }
LAB_02266980:
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
                }
              }
            }
          }
        }
      }
LAB_02266970:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    uVar4 = *(undefined4 *)(param_1 + 0x58);
    if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_GameTracking__ContinueOffer_22193d0
              (uVar4,*(undefined8 *)PTR_DAT_04cac638,0,0,0);
    lVar8 = Dino_BusSand_App_GameApp__DeclineNextFrame_21669f8(param_1);
  }
  else {
    if (param_2 != 4) {
      if (param_2 != 5) {
        return;
      }
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_02266980;
      uVar10 = Dino_BusSand_App_Gameplay_GameplayController__get_FailType_229bf88
                         (*(long *)(param_1 + 0x20),0);
      uVar6 = System_String__op_Equality_46d1108(uVar10,*(undefined8 *)PTR_DAT_04cac640,0);
      if ((uVar6 & 1) != 0) {
        lVar9 = *(long *)PTR_DAT_04ca9d18;
        lVar8 = *(long *)(lVar9 + 0x38);
        if (lVar8 == 0) {
          FUN_0216b4cc(lVar9);
          lVar8 = *(long *)(lVar9 + 0x38);
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0216b470();
        }
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0216b470();
        }
        uVar10 = **(undefined8 **)(lVar8 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
        }
        uVar10 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cac628,uVar10);
        Dino_BusSand_App_GameApp__Toast_2166a6c(param_1,uVar10);
      }
      puVar1 = PTR_DAT_04cac440;
      if ((bRam0000000004f9b86a & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cabaa8);
        FUN_02132f7c(PTR_DAT_04cac5c0);
        FUN_02132f7c(PTR_DAT_04cac440);
        FUN_02132f7c(PTR_DAT_04cac498);
        FUN_02132f7c(PTR_DAT_04cac668);
        FUN_02132f7c(PTR_DAT_04cac670);
        FUN_02132f7c(PTR_DAT_04ca9c20);
        FUN_02132f7c(PTR_DAT_04cabaf8);
        FUN_02132f7c(PTR_DAT_04cac678);
        FUN_02132f7c(PTR_DAT_04cac680);
        FUN_02132f7c(PTR_DAT_04cac5f8);
        FUN_02132f7c(PTR_DAT_04cac600);
        FUN_02132f7c(PTR_DAT_04cac610);
        FUN_02132f7c(PTR_DAT_04cac688);
        FUN_02132f7c(PTR_DAT_04cabb50);
        FUN_02132f7c(PTR_DAT_04cac690);
        FUN_02132f7c(PTR_DAT_04cac698);
        FUN_02132f7c(PTR_DAT_04cac618);
        FUN_02132f7c(PTR_DAT_04cac620);
        FUN_02132f7c(PTR_DAT_04cac6a0);
        FUN_02132f7c(PTR_DAT_04cabaa0);
        FUN_02132f7c(PTR_DAT_04cac6a8);
        FUN_02132f7c(PTR_DAT_04cabc80);
        FUN_02132f7c(PTR_DAT_04cac648);
        FUN_02132f7c(PTR_DAT_04cac650);
        FUN_02132f7c(PTR_DAT_04ca9ce8);
        bRam0000000004f9b86a = 1;
      }
      puVar2 = PTR_DAT_04cabaa8;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar1 = PTR_DAT_04cabaf8;
      Dino_BusSand_App_Meta_Economy__OnTryAgainReached_2204e58(0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Ads__OnLevelResult_216e2bc(0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar1;
      }
      cVar3 = cRam0000000004f9b894;
      lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
      if (lVar9 != 0) {
        *(int *)(lVar9 + 0xc4) = *(int *)(lVar9 + 0xc4) + 1;
        if (cVar3 == '\0') {
          FUN_02132f7c(puVar1);
          lVar8 = *(long *)puVar1;
          cRam0000000004f9b894 = '\x01';
        }
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar1;
        }
        cVar3 = cRam0000000004f9b894;
        lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
        if (lVar9 != 0) {
          *(int *)(lVar9 + 0x78) = *(int *)(lVar9 + 0x78) + 1;
          if (cVar3 == '\0') {
            FUN_02132f7c(puVar1);
            lVar8 = *(long *)puVar1;
            cRam0000000004f9b894 = '\x01';
          }
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar8 = *(long *)puVar1;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
          if (lVar8 != 0) {
            *(undefined4 *)(lVar8 + 0x74) = 0;
            Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
            if (*(char *)(param_1 + 0x79) != '\0') {
              *(undefined1 *)(param_1 + 0x79) = 0;
              return;
            }
            if (*(int *)(param_1 + 0x60) < 1) {
              if (*(int *)(*(long *)PTR_DAT_04cac668 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_Meta_LiveOps__FinalFail_2241c0c(0);
              Dino_BusSand_App_Meta_WinStreak__OnLose_2293e0c(0);
            }
            plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,0x16);
            puVar1 = PTR_DAT_04ca9ce8;
            if (plVar7 != (long *)0x0) {
              if ((*(long *)PTR_DAT_04ca9ce8 != 0) &&
                 (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04ca9ce8,
                                             *(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
LAB_02267520:
                uVar10 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                FUN_021330e8(uVar10,0);
              }
              if ((int)plVar7[3] == 0) {
LAB_02267518:
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              plVar7[4] = *(long *)puVar1;
              thunk_FUN_02134474();
              puVar1 = PTR_DAT_04cac6a8;
              if ((*(long *)PTR_DAT_04cac6a8 != 0) &&
                 (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac6a8,
                                             *(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
              goto LAB_02267520;
              if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_02267518;
              plVar7[5] = *(long *)puVar1;
              thunk_FUN_02134474();
              puVar1 = PTR_DAT_04cac690;
              if ((*(long *)PTR_DAT_04cac690 != 0) &&
                 (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac690,
                                             *(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
              goto LAB_02267520;
              if (*(uint *)(plVar7 + 3) < 3) goto LAB_02267518;
              plVar7[6] = *(long *)puVar1;
              thunk_FUN_02134474();
              puVar1 = PTR_DAT_04cabaa0;
              if ((*(long *)PTR_DAT_04cabaa0 != 0) &&
                 (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cabaa0,
                                             *(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
              goto LAB_02267520;
              if ((*(uint *)(plVar7 + 3) & 0xfffffffc) == 0) goto LAB_02267518;
              plVar7[7] = *(long *)puVar1;
              thunk_FUN_02134474();
              puVar1 = PTR_DAT_04cac618;
              if ((*(long *)PTR_DAT_04cac618 != 0) &&
                 (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac618,
                                             *(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
              goto LAB_02267520;
              if (*(uint *)(plVar7 + 3) < 5) goto LAB_02267518;
              plVar7[8] = *(long *)puVar1;
              thunk_FUN_02134474();
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226751c;
              lVar8 = Dino_BusSand_App_Gameplay_GameplayController__get_FailType_229bf88
                                (*(long *)(param_1 + 0x20),0);
              if ((lVar8 != 0) &&
                 (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
              goto LAB_02267520;
              if (*(uint *)(plVar7 + 3) < 6) goto LAB_02267518;
              plVar7[9] = lVar8;
              thunk_FUN_02134474(plVar7 + 9,lVar8);
              puVar1 = PTR_DAT_04cac648;
              if ((*(long *)PTR_DAT_04cac648 != 0) &&
                 (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac648,
                                             *(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
              goto LAB_02267520;
              if (*(uint *)(plVar7 + 3) < 7) goto LAB_02267518;
              plVar7[10] = *(long *)puVar1;
              thunk_FUN_02134474();
              fVar13 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
              puVar1 = PTR_DAT_04ca9ac8;
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226751c;
              fVar13 = fVar13 - *(float *)(*(long *)(param_1 + 0x20) + 0x5c);
              iStack_24 = -0x80000000;
              if (fVar13 != INFINITY) {
                iStack_24 = (int)fVar13;
              }
              lVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_24);
              if ((lVar8 != 0) &&
                 (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
              goto LAB_02267520;
              if ((*(uint *)(plVar7 + 3) & 0xfffffff8) == 0) goto LAB_02267518;
              plVar7[0xb] = lVar8;
              thunk_FUN_02134474(plVar7 + 0xb,lVar8);
              puVar2 = PTR_DAT_04cac650;
              if ((*(long *)PTR_DAT_04cac650 != 0) &&
                 (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac650,
                                             *(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
              goto LAB_02267520;
              if (*(uint *)(plVar7 + 3) < 9) goto LAB_02267518;
              plVar7[0xc] = *(long *)puVar2;
              thunk_FUN_02134474();
              uStack_28 = *(undefined4 *)(param_1 + 0x58);
              lVar8 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_28);
              if ((lVar8 != 0) &&
                 (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
              goto LAB_02267520;
              if (*(uint *)(plVar7 + 3) < 10) goto LAB_02267518;
              plVar7[0xd] = lVar8;
              thunk_FUN_02134474(plVar7 + 0xd,lVar8);
              puVar2 = PTR_DAT_04cabb50;
              if ((*(long *)PTR_DAT_04cabb50 != 0) &&
                 (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cabb50,
                                             *(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
              goto LAB_02267520;
              if (*(uint *)(plVar7 + 3) < 0xb) goto LAB_02267518;
              plVar7[0xe] = *(long *)puVar2;
              thunk_FUN_02134474();
              uStack_34 = *(undefined4 *)(param_1 + 0x54);
              lVar8 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_34);
              if ((lVar8 != 0) &&
                 (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
              goto LAB_02267520;
              if (*(uint *)(plVar7 + 3) < 0xc) goto LAB_02267518;
              plVar7[0xf] = lVar8;
              thunk_FUN_02134474(plVar7 + 0xf,lVar8);
              puVar2 = PTR_DAT_04cac610;
              if ((*(long *)PTR_DAT_04cac610 != 0) &&
                 (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac610,
                                             *(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
              goto LAB_02267520;
              if (*(uint *)(plVar7 + 3) < 0xd) goto LAB_02267518;
              plVar7[0x10] = *(long *)puVar2;
              thunk_FUN_02134474();
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226751c;
              uStack_38 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24);
              lVar8 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_38);
              if ((lVar8 != 0) &&
                 (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
              goto LAB_02267520;
              if (*(uint *)(plVar7 + 3) < 0xe) goto LAB_02267518;
              plVar7[0x11] = lVar8;
              thunk_FUN_02134474(plVar7 + 0x11,lVar8);
              puVar2 = PTR_DAT_04cac620;
              if ((*(long *)PTR_DAT_04cac620 != 0) &&
                 (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac620,
                                             *(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
              goto LAB_02267520;
              if (*(uint *)(plVar7 + 3) < 0xf) goto LAB_02267518;
              plVar7[0x12] = *(long *)puVar2;
              thunk_FUN_02134474();
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226751c;
              uStack_40 = CONCAT44(*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x40),
                                   (undefined4)uStack_40);
              lVar8 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),(long)&uStack_40 + 4);
              if ((lVar8 != 0) &&
                 (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
              goto LAB_02267520;
              if ((*(uint *)(plVar7 + 3) & 0xfffffff0) == 0) goto LAB_02267518;
              plVar7[0x13] = lVar8;
              thunk_FUN_02134474(plVar7 + 0x13,lVar8);
              puVar2 = PTR_DAT_04cabc80;
              if ((*(long *)PTR_DAT_04cabc80 != 0) &&
                 (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cabc80,
                                             *(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
              goto LAB_02267520;
              if (*(uint *)(plVar7 + 3) < 0x11) goto LAB_02267518;
              plVar7[0x14] = *(long *)puVar2;
              thunk_FUN_02134474();
              uStack_48 = Dino_BusSand_App_GameApp__Progress3_2165f30(param_1);
              lVar8 = FUN_02133100(*(undefined8 *)(puVar1 + 0x80),&uStack_48);
              if ((lVar8 != 0) &&
                 (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
              goto LAB_02267520;
              if (*(uint *)(plVar7 + 3) < 0x12) goto LAB_02267518;
              plVar7[0x15] = lVar8;
              thunk_FUN_02134474(plVar7 + 0x15,lVar8);
              puVar2 = PTR_DAT_04cac5f8;
              if ((*(long *)PTR_DAT_04cac5f8 != 0) &&
                 (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac5f8,
                                             *(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
              goto LAB_02267520;
              if (*(uint *)(plVar7 + 3) < 0x13) goto LAB_02267518;
              plVar7[0x16] = *(long *)puVar2;
              thunk_FUN_02134474();
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226751c;
              iStack_4c = *(int *)(*(long *)(param_1 + 0x20) + 0x44);
              lVar8 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&iStack_4c);
              if ((lVar8 != 0) &&
                 (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
              goto LAB_02267520;
              if (*(uint *)(plVar7 + 3) < 0x14) goto LAB_02267518;
              plVar7[0x17] = lVar8;
              thunk_FUN_02134474(plVar7 + 0x17,lVar8);
              puVar2 = PTR_DAT_04cac600;
              if ((*(long *)PTR_DAT_04cac600 != 0) &&
                 (lVar8 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac600,
                                             *(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
              goto LAB_02267520;
              if (*(uint *)(plVar7 + 3) < 0x15) goto LAB_02267518;
              plVar7[0x18] = *(long *)puVar2;
              thunk_FUN_02134474();
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226751c;
              uStack_50 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x48);
              lVar8 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_50);
              if ((lVar8 != 0) &&
                 (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
              goto LAB_02267520;
              if (*(uint *)(plVar7 + 3) < 0x16) goto LAB_02267518;
              plVar7[0x19] = lVar8;
              thunk_FUN_02134474(plVar7 + 0x19,lVar8);
              if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar10 = Dino_BusSand_App_Analytics__L_216fff0(plVar7,0);
              Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cac698,uVar10,0);
              if (*(int *)(param_1 + 0x60) < 1) {
                if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226751c;
                uVar10 = Dino_BusSand_App_Gameplay_GameplayController__get_FailType_229bf88
                                   (*(long *)(param_1 + 0x20),0);
                if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226751c;
                uVar4 = Dino_BusSand_App_Gameplay_GameplayController__get_CarsLeft_229b210
                                  (*(long *)(param_1 + 0x20),0);
                if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226751c;
                uVar5 = Dino_BusSand_App_Gameplay_GameplayController__get_CarsRoad_229b2c8
                                  (*(long *)(param_1 + 0x20),0);
                if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac498);
                }
                Dino_BusSand_App_Meta_GameTracking__LevelEnd_2212938
                          (*(undefined8 *)PTR_DAT_04cac6a0,uVar10,uVar4,uVar5,0);
              }
              if (*(long *)(param_1 + 0x28) != 0) {
                Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                          (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac678);
                lVar8 = *(long *)(param_1 + 0x28);
                uStack_48 = CONCAT44(uStack_48._4_4_,1);
                uVar10 = FUN_02133100(*(undefined8 *)PTR_DAT_04cac670,&uStack_48);
                if (lVar8 != 0) {
                  Dino_BusSand_App_UI_UIManager__Open_object__2945314
                            (lVar8,*(undefined8 *)PTR_DAT_04cac688,2,uVar10,
                             *(undefined8 *)PTR_DAT_04cac680);
                  return;
                }
              }
            }
          }
        }
      }
LAB_0226751c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar8 = Dino_BusSand_App_GameApp__OnWin_2166984(param_1);
  }
  if (lVar8 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
    uVar11 = thunk_FUN_0216e89c();
    uVar10 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
    System_NullReferenceException___ctor_483267c(uVar11,uVar10,0);
  }
  else {
    uVar6 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
    if ((uVar6 & 1) != 0) {
      if ((bRam0000000004fa84ef & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7890);
        bRam0000000004fa84ef = 1;
      }
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar9 = *(long *)(param_1 + 0x10);
      if (lVar9 != 0) {
        if (pcRam0000000004fa8560 == (code *)0x0) {
          pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
        }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8560)(lVar9,lVar8);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
    }
    thunk_FUN_021985a8(PTR_DAT_04caa3a8);
    uVar11 = thunk_FUN_0216e89c();
    uVar10 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
    System_ArgumentException___ctor_47b660c(uVar11,uVar10,0);
  }
  uVar10 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar11,uVar10);
}

