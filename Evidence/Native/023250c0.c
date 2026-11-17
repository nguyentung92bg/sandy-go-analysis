/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleTrack$$StageAdvance
void Dino_BusSand_App_Meta_BattleRoyaleTrack__StageAdvance (int32_t roundNo, int32_t changeType, int32_t fromStage, int32_t toStage, int32_t before, int32_t after, int32_t roundTimes, int32_t remain, bool isFinal, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleTrack$$StageAdvance
   void Dino_BusSand_App_Meta_BattleRoyaleTrack__StageAdvance (int32_t roundNo, int32_t changeType,
   int32_t fromStage, int32_t toStage, int32_t before, int32_t after, int32_t roundTimes, int32_t
   remain, bool isFinal, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleTrack__StageAdvance_22250c0
               (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               byte param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  
  puVar1 = PTR_DAT_04ca9c20;
  if ((bRam0000000004f9bdce & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb2ba8);
    FUN_02132f7c(PTR_DAT_04cb2bb0);
    FUN_02132f7c(PTR_DAT_04cb2b10);
    FUN_02132f7c(PTR_DAT_04cb2bb8);
    FUN_02132f7c(PTR_DAT_04cb2b28);
    FUN_02132f7c(PTR_DAT_04cb2bc0);
    FUN_02132f7c(PTR_DAT_04cb2bc8);
    FUN_02132f7c(PTR_DAT_04cb2b30);
    FUN_02132f7c(PTR_DAT_04cb2bd0);
    FUN_02132f7c(PTR_DAT_04cb2bd8);
    FUN_02132f7c(PTR_DAT_04cb2be0);
    FUN_02132f7c(PTR_DAT_04cb2be8);
    bRam0000000004f9bdce = 1;
  }
  plVar4 = (long *)FUN_02133068(*(undefined8 *)puVar1,0x14);
  puVar1 = PTR_DAT_04cb2b28;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(long *)PTR_DAT_04cb2b28 != 0) &&
     (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb2b28,*(undefined8 *)(*plVar4 + 0x40)),
     lVar5 == 0)) {
LAB_02325754:
    uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar7,0);
  }
  puVar2 = PTR_DAT_04cb2b10;
  if ((int)plVar4[3] != 0) {
    plVar4[4] = *(long *)puVar1;
    thunk_FUN_02134474();
    lVar5 = *(long *)puVar2;
    if ((lVar5 != 0) &&
       (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto LAB_02325754;
    puVar1 = PTR_DAT_04cb2b30;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
      plVar4[5] = *(long *)puVar2;
      thunk_FUN_02134474();
      lVar5 = *(long *)puVar1;
      if ((lVar5 != 0) &&
         (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_02325754;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = *(long *)puVar1;
        thunk_FUN_02134474();
        puVar1 = PTR_DAT_04ca9ac8;
        uStack_64 = param_1;
        lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_64);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
        goto LAB_02325754;
        puVar2 = PTR_DAT_04cb2bb0;
        if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
          plVar4[7] = lVar5;
          thunk_FUN_02134474(plVar4 + 7,lVar5);
          lVar5 = *(long *)puVar2;
          if ((lVar5 != 0) &&
             (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
          goto LAB_02325754;
          if (4 < *(uint *)(plVar4 + 3)) {
            plVar4[8] = *(long *)puVar2;
            thunk_FUN_02134474();
            uStack_68 = param_2;
            lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_68);
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
            goto LAB_02325754;
            puVar2 = PTR_DAT_04cb2be0;
            if (5 < *(uint *)(plVar4 + 3)) {
              plVar4[9] = lVar5;
              thunk_FUN_02134474(plVar4 + 9,lVar5);
              lVar5 = *(long *)puVar2;
              if ((lVar5 != 0) &&
                 (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
              goto LAB_02325754;
              if (6 < *(uint *)(plVar4 + 3)) {
                plVar4[10] = *(long *)puVar2;
                thunk_FUN_02134474();
                uStack_6c = param_3;
                lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_6c);
                if ((lVar5 != 0) &&
                   (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                goto LAB_02325754;
                puVar2 = PTR_DAT_04cb2bc0;
                if ((*(uint *)(plVar4 + 3) & 0xfffffff8) != 0) {
                  plVar4[0xb] = lVar5;
                  thunk_FUN_02134474(plVar4 + 0xb,lVar5);
                  lVar5 = *(long *)puVar2;
                  if ((lVar5 != 0) &&
                     (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)
                     ) goto LAB_02325754;
                  if (8 < *(uint *)(plVar4 + 3)) {
                    plVar4[0xc] = *(long *)puVar2;
                    thunk_FUN_02134474();
                    uStack_70 = param_4;
                    lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_70);
                    if ((lVar5 != 0) &&
                       (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                       lVar6 == 0)) goto LAB_02325754;
                    puVar2 = PTR_DAT_04cb2ba8;
                    if (9 < *(uint *)(plVar4 + 3)) {
                      plVar4[0xd] = lVar5;
                      thunk_FUN_02134474(plVar4 + 0xd,lVar5);
                      lVar5 = *(long *)puVar2;
                      if ((lVar5 != 0) &&
                         (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                         lVar5 == 0)) goto LAB_02325754;
                      if (10 < *(uint *)(plVar4 + 3)) {
                        plVar4[0xe] = *(long *)puVar2;
                        thunk_FUN_02134474();
                        uStack_74 = param_5;
                        lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_74);
                        if ((lVar5 != 0) &&
                           (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                           lVar6 == 0)) goto LAB_02325754;
                        puVar2 = PTR_DAT_04cb2bb8;
                        if (0xb < *(uint *)(plVar4 + 3)) {
                          plVar4[0xf] = lVar5;
                          thunk_FUN_02134474(plVar4 + 0xf,lVar5);
                          lVar5 = *(long *)puVar2;
                          if ((lVar5 != 0) &&
                             (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                             lVar5 == 0)) goto LAB_02325754;
                          if (0xc < *(uint *)(plVar4 + 3)) {
                            plVar4[0x10] = *(long *)puVar2;
                            thunk_FUN_02134474();
                            uStack_78 = param_6;
                            lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_78);
                            if ((lVar5 != 0) &&
                               (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                               lVar6 == 0)) goto LAB_02325754;
                            puVar2 = PTR_DAT_04cb2be8;
                            if (0xd < *(uint *)(plVar4 + 3)) {
                              plVar4[0x11] = lVar5;
                              thunk_FUN_02134474(plVar4 + 0x11,lVar5);
                              lVar5 = *(long *)puVar2;
                              if ((lVar5 != 0) &&
                                 (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                                 lVar5 == 0)) goto LAB_02325754;
                              if (0xe < *(uint *)(plVar4 + 3)) {
                                plVar4[0x12] = *(long *)puVar2;
                                thunk_FUN_02134474();
                                uStack_7c = param_7;
                                lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_7c);
                                if ((lVar5 != 0) &&
                                   (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)
                                                              ), lVar6 == 0)) goto LAB_02325754;
                                puVar2 = PTR_DAT_04cb2bd8;
                                if ((*(uint *)(plVar4 + 3) & 0xfffffff0) != 0) {
                                  plVar4[0x13] = lVar5;
                                  thunk_FUN_02134474(plVar4 + 0x13,lVar5);
                                  lVar5 = *(long *)puVar2;
                                  if ((lVar5 != 0) &&
                                     (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)
                                                                        (*plVar4 + 0x40)),
                                     lVar5 == 0)) goto LAB_02325754;
                                  if (0x10 < *(uint *)(plVar4 + 3)) {
                                    plVar4[0x14] = *(long *)puVar2;
                                    thunk_FUN_02134474();
                                    uStack_80 = param_8;
                                    lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_80);
                                    if ((lVar5 != 0) &&
                                       (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)
                                                                          (*plVar4 + 0x40)),
                                       lVar6 == 0)) goto LAB_02325754;
                                    puVar2 = PTR_DAT_04cb2bd0;
                                    if (0x11 < *(uint *)(plVar4 + 3)) {
                                      plVar4[0x15] = lVar5;
                                      thunk_FUN_02134474(plVar4 + 0x15,lVar5);
                                      lVar5 = *(long *)puVar2;
                                      if ((lVar5 != 0) &&
                                         (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)
                                                                            (*plVar4 + 0x40)),
                                         lVar5 == 0)) goto LAB_02325754;
                                      puVar3 = PTR_DAT_04cb2bc8;
                                      if (0x12 < *(uint *)(plVar4 + 3)) {
                                        plVar4[0x16] = *(long *)puVar2;
                                        thunk_FUN_02134474();
                                        uVar7 = *(undefined8 *)puVar3;
                                        uStack_64 = param_9 & 1;
                                        lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),
                                                             &uStack_64);
                                        if ((lVar5 != 0) &&
                                           (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)
                                                                              (*plVar4 + 0x40)),
                                           lVar6 == 0)) goto LAB_02325754;
                                        puVar1 = PTR_DAT_04cac5c0;
                                        if (0x13 < *(uint *)(plVar4 + 3)) {
                    /* try { // try from 02325708 to 02425773 has its CatchHandler @ 02325708
                       catch() { ... } // from try @ 02325708 with catch @ 02325708
                       catch() { ... } // from try @ 02325788 with catch @ 02325708
                       catch() { ... } // from try @ 02325818 with catch @ 02325708
                       catch() { ... } // from try @ 0232585c with catch @ 02325708 */
                                          plVar4[0x17] = lVar5;
                                          thunk_FUN_02134474(plVar4 + 0x17,lVar5);
                                          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                            thunk_FUN_0218fdac();
                                          }
                                          Dino_BusSand_App_Analytics__Log_216d0c8(uVar7,plVar4,0);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

