/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$TrackLose
void Dino_BusSand_App_Meta_StreakRateFeature__TrackLose (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$TrackLose
   void Dino_BusSand_App_Meta_StreakRateFeature__TrackLose
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s,
   const MethodInfo* method); */

void Dino_BusSand_App_Meta_StreakRateFeature__TrackLose_224e5d8(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000004f9bfbe & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb2bb0);
    FUN_02132f7c(PTR_DAT_04cb3be8);
    FUN_02132f7c(PTR_DAT_04cb3bf0);
    FUN_02132f7c(PTR_DAT_04cb3bf8);
    FUN_02132f7c(PTR_DAT_04cb2b28);
    FUN_02132f7c(PTR_DAT_04cb2bc0);
    FUN_02132f7c(PTR_DAT_04cb2b30);
    FUN_02132f7c(PTR_DAT_04cb2bd8);
    FUN_02132f7c(PTR_DAT_04cb2be0);
    FUN_02132f7c(PTR_DAT_04cb2be8);
    FUN_02132f7c(PTR_DAT_04cb3c00);
    bRam0000000004f9bfbe = 1;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x48);
    plVar4 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,0x12);
    puVar2 = PTR_DAT_04cb2b28;
    if (plVar4 != (long *)0x0) {
      if ((*(long *)PTR_DAT_04cb2b28 != 0) &&
         (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb2b28,*(undefined8 *)(*plVar4 + 0x40)),
         lVar5 == 0)) {
LAB_0234ebd4:
        uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar7,0);
      }
      puVar3 = PTR_DAT_04cb3be8;
      if ((int)plVar4[3] != 0) {
        plVar4[4] = *(long *)puVar2;
        thunk_FUN_02134474();
        lVar5 = *(long *)puVar3;
        if ((lVar5 != 0) &&
           (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
        goto LAB_0234ebd4;
        puVar2 = PTR_DAT_04cb2b30;
        if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
          plVar4[5] = *(long *)puVar3;
          thunk_FUN_02134474();
          lVar5 = *(long *)puVar2;
          if ((lVar5 != 0) &&
             (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
          goto LAB_0234ebd4;
          if (2 < *(uint *)(plVar4 + 3)) {
            plVar4[6] = *(long *)puVar2;
            thunk_FUN_02134474();
            uStack_34 = Dino_BusSand_App_Meta_StreakRateFeature__get_RoundNo_22500bc(param_1);
            puVar2 = PTR_DAT_04ca9ac8;
            lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
            goto LAB_0234ebd4;
            puVar3 = PTR_DAT_04cb2bb0;
            if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
              plVar4[7] = lVar5;
              thunk_FUN_02134474(plVar4 + 7,lVar5);
              lVar5 = *(long *)puVar3;
              if ((lVar5 != 0) &&
                 (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
              goto LAB_0234ebd4;
              if (4 < *(uint *)(plVar4 + 3)) {
                plVar4[8] = *(long *)puVar3;
                thunk_FUN_02134474();
                uStack_38 = 2;
                lVar5 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_38);
                if ((lVar5 != 0) &&
                   (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                goto LAB_0234ebd4;
                puVar3 = PTR_DAT_04cb2be0;
                if (5 < *(uint *)(plVar4 + 3)) {
                  plVar4[9] = lVar5;
                  thunk_FUN_02134474(plVar4 + 9,lVar5);
                  lVar5 = *(long *)puVar3;
                  if ((lVar5 != 0) &&
                     (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)
                     ) goto LAB_0234ebd4;
                  if (6 < *(uint *)(plVar4 + 3)) {
                    iVar1 = iVar1 + 1;
                    plVar4[10] = *(long *)puVar3;
                    thunk_FUN_02134474();
                    iStack_44 = iVar1;
                    lVar5 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&iStack_44);
                    if ((lVar5 != 0) &&
                       (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                       lVar6 == 0)) goto LAB_0234ebd4;
                    puVar3 = PTR_DAT_04cb2bc0;
                    if ((*(uint *)(plVar4 + 3) & 0xfffffff8) != 0) {
                      plVar4[0xb] = lVar5;
                      thunk_FUN_02134474(plVar4 + 0xb,lVar5);
                      lVar5 = *(long *)puVar3;
                      if ((lVar5 != 0) &&
                         (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                         lVar5 == 0)) goto LAB_0234ebd4;
                      if (8 < *(uint *)(plVar4 + 3)) {
                        plVar4[0xc] = *(long *)puVar3;
                        thunk_FUN_02134474();
                        iStack_48 = iVar1;
                        lVar5 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&iStack_48);
                        if ((lVar5 != 0) &&
                           (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                           lVar6 == 0)) goto LAB_0234ebd4;
                        puVar3 = PTR_DAT_04cb3bf8;
                        if (9 < *(uint *)(plVar4 + 3)) {
                          plVar4[0xd] = lVar5;
                          thunk_FUN_02134474(plVar4 + 0xd,lVar5);
                          lVar5 = *(long *)puVar3;
                          if ((lVar5 != 0) &&
                             (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                             lVar5 == 0)) goto LAB_0234ebd4;
                          if (10 < *(uint *)(plVar4 + 3)) {
                            plVar4[0xe] = *(long *)puVar3;
                            thunk_FUN_02134474();
                            uStack_4c = 0;
                            lVar5 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_4c);
                            if ((lVar5 != 0) &&
                               (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                               lVar6 == 0)) goto LAB_0234ebd4;
                            puVar3 = PTR_DAT_04cb3c00;
                            if (0xb < *(uint *)(plVar4 + 3)) {
                              plVar4[0xf] = lVar5;
                              thunk_FUN_02134474(plVar4 + 0xf,lVar5);
                              lVar5 = *(long *)puVar3;
                              if ((lVar5 != 0) &&
                                 (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                                 lVar5 == 0)) goto LAB_0234ebd4;
                              if (0xc < *(uint *)(plVar4 + 3)) {
                                plVar4[0x10] = *(long *)puVar3;
                                thunk_FUN_02134474();
                                uStack_50 = 0;
                                lVar5 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_50);
                                if ((lVar5 != 0) &&
                                   (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)
                                                              ), lVar6 == 0)) goto LAB_0234ebd4;
                                puVar3 = PTR_DAT_04cb2be8;
                                if (0xd < *(uint *)(plVar4 + 3)) {
                                  plVar4[0x11] = lVar5;
                                  thunk_FUN_02134474(plVar4 + 0x11,lVar5);
                                  lVar5 = *(long *)puVar3;
                                  if ((lVar5 != 0) &&
                                     (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)
                                                                        (*plVar4 + 0x40)),
                                     lVar5 == 0)) goto LAB_0234ebd4;
                                  if (0xe < *(uint *)(plVar4 + 3)) {
                                    plVar4[0x12] = *(long *)puVar3;
                                    thunk_FUN_02134474();
                                    uStack_54 = *(undefined4 *)(param_2 + 0x60);
                                    lVar5 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_54);
                                    if ((lVar5 != 0) &&
                                       (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)
                                                                          (*plVar4 + 0x40)),
                                       lVar6 == 0)) goto LAB_0234ebd4;
                                    puVar3 = PTR_DAT_04cb2bd8;
                                    if ((*(uint *)(plVar4 + 3) & 0xfffffff0) != 0) {
                                      plVar4[0x13] = lVar5;
                                      thunk_FUN_02134474(plVar4 + 0x13,lVar5);
                                      lVar5 = *(long *)puVar3;
                                      if ((lVar5 != 0) &&
                                         (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)
                                                                            (*plVar4 + 0x40)),
                                         lVar5 == 0)) goto LAB_0234ebd4;
                                      if (0x10 < *(uint *)(plVar4 + 3)) {
                                        plVar4[0x14] = *(long *)puVar3;
                                        uVar7 = thunk_FUN_02134474();
                                        uStack_58 = 
                                                  Dino_BusSand_App_Meta_StreakRateFeature__RemainSec_2250138
                                                            (uVar7,param_2);
                                        lVar5 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),
                                                             &uStack_58);
                                        if ((lVar5 != 0) &&
                                           (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)
                                                                              (*plVar4 + 0x40)),
                                           lVar6 == 0)) goto LAB_0234ebd4;
                                        puVar3 = PTR_DAT_04cb3bf0;
                                        puVar2 = PTR_DAT_04cac5c0;
                    /* try { // try from 0234eb70 to 0244ee23 has its CatchHandler @ 0234eb70
                       catch() { ... } // from try @ 0234eb70 with catch @ 0234eb70
                       catch() { ... } // from try @ 0234eea8 with catch @ 0234eb70
                       catch() { ... } // from try @ 0234efd8 with catch @ 0234eb70
                       catch() { ... } // from try @ 0234f100 with catch @ 0234eb70
                       catch() { ... } // from try @ 0234f2d0 with catch @ 0234eb70
                       catch() { ... } // from try @ 0234f2f0 with catch @ 0234eb70
                       catch() { ... } // from try @ 0234f390 with catch @ 0234eb70
                       catch() { ... } // from try @ 0234f3b8 with catch @ 0234eb70
                       catch() { ... } // from try @ 0234f3dc with catch @ 0234eb70
                       catch() { ... } // from try @ 0234f404 with catch @ 0234eb70
                       catch() { ... } // from try @ 0234f428 with catch @ 0234eb70
                       catch() { ... } // from try @ 0234f454 with catch @ 0234eb70 */
                                        if (0x11 < *(uint *)(plVar4 + 3)) {
                                          plVar4[0x15] = lVar5;
                                          thunk_FUN_02134474(plVar4 + 0x15,lVar5);
                                          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                            thunk_FUN_0218fdac();
                                          }
                                          Dino_BusSand_App_Analytics__Log_216d0c8
                                                    (*(undefined8 *)puVar3,plVar4,0);
                                          return;
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
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

