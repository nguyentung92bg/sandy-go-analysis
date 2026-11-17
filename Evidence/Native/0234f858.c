/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$TrackWin
void Dino_BusSand_App_Meta_StreakRateFeature__TrackWin (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s, int32_t from, int32_t to, int32_t changeNum, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$TrackWin
   void Dino_BusSand_App_Meta_StreakRateFeature__TrackWin
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_Meta_StreakRateSlot_o* s,
   int32_t from, int32_t to, int32_t changeNum, const MethodInfo* method); */

void Dino_BusSand_App_Meta_StreakRateFeature__TrackWin_224f858
               (undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  puVar1 = PTR_DAT_04ca9c20;
  if ((bRam0000000004f9bfbd & 1) == 0) {
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
    bRam0000000004f9bfbd = 1;
  }
  plVar3 = (long *)FUN_02133068(*(undefined8 *)puVar1,0x12);
  puVar1 = PTR_DAT_04cb2b28;
  if (plVar3 == (long *)0x0) {
LAB_0234fe70:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(long *)PTR_DAT_04cb2b28 != 0) &&
     (lVar4 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb2b28,*(undefined8 *)(*plVar3 + 0x40)),
     lVar4 == 0)) {
LAB_0234fe64:
    uVar6 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar6,0);
  }
  puVar2 = PTR_DAT_04cb3be8;
  if ((int)plVar3[3] != 0) {
    plVar3[4] = *(long *)puVar1;
    thunk_FUN_02134474();
    lVar4 = *(long *)puVar2;
    if ((lVar4 != 0) &&
       (lVar4 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    goto LAB_0234fe64;
    puVar1 = PTR_DAT_04cb2b30;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = *(long *)puVar2;
      thunk_FUN_02134474();
      lVar4 = *(long *)puVar1;
      if ((lVar4 != 0) &&
         (lVar4 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
      goto LAB_0234fe64;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = *(long *)puVar1;
        thunk_FUN_02134474();
        uStack_44 = Dino_BusSand_App_Meta_StreakRateFeature__get_RoundNo_22500bc(param_1);
        puVar1 = PTR_DAT_04ca9ac8;
        lVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_44);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_0234fe64;
        puVar2 = PTR_DAT_04cb2bb0;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
          plVar3[7] = lVar4;
          thunk_FUN_02134474(plVar3 + 7,lVar4);
          lVar4 = *(long *)puVar2;
          if ((lVar4 != 0) &&
             (lVar4 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          goto LAB_0234fe64;
          if (4 < *(uint *)(plVar3 + 3)) {
            plVar3[8] = *(long *)puVar2;
            thunk_FUN_02134474();
            uStack_48 = 1;
            lVar4 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_48);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_0234fe64;
            puVar2 = PTR_DAT_04cb2be0;
            if (5 < *(uint *)(plVar3 + 3)) {
              plVar3[9] = lVar4;
              thunk_FUN_02134474(plVar3 + 9,lVar4);
              lVar4 = *(long *)puVar2;
                    /* try { // try from 0234fafc to 0244fc97 has its CatchHandler @ 0234fafc
                       catch() { ... } // from try @ 0234fafc with catch @ 0234fafc
                       catch() { ... } // from try @ 0235010c with catch @ 0234fafc
                       catch() { ... } // from try @ 0235019c with catch @ 0234fafc
                       catch() { ... } // from try @ 023501d0 with catch @ 0234fafc
                       catch() { ... } // from try @ 02350208 with catch @ 0234fafc
                       catch() { ... } // from try @ 023502c4 with catch @ 0234fafc
                       catch() { ... } // from try @ 023502d0 with catch @ 0234fafc */
              if ((lVar4 != 0) &&
                 (lVar4 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
              goto LAB_0234fe64;
              if (6 < *(uint *)(plVar3 + 3)) {
                plVar3[10] = *(long *)puVar2;
                thunk_FUN_02134474();
                uStack_54 = param_3;
                lVar4 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_54);
                if ((lVar4 != 0) &&
                   (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                goto LAB_0234fe64;
                puVar2 = PTR_DAT_04cb2bc0;
                if ((*(uint *)(plVar3 + 3) & 0xfffffff8) != 0) {
                  plVar3[0xb] = lVar4;
                  thunk_FUN_02134474(plVar3 + 0xb,lVar4);
                  lVar4 = *(long *)puVar2;
                  if ((lVar4 != 0) &&
                     (lVar4 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)
                     ) goto LAB_0234fe64;
                  if (8 < *(uint *)(plVar3 + 3)) {
                    plVar3[0xc] = *(long *)puVar2;
                    thunk_FUN_02134474();
                    uStack_58 = param_4;
                    lVar4 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_58);
                    if ((lVar4 != 0) &&
                       (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                       lVar5 == 0)) goto LAB_0234fe64;
                    puVar2 = PTR_DAT_04cb3bf8;
                    if (9 < *(uint *)(plVar3 + 3)) {
                      plVar3[0xd] = lVar4;
                      thunk_FUN_02134474(plVar3 + 0xd,lVar4);
                      lVar4 = *(long *)puVar2;
                      if ((lVar4 != 0) &&
                         (lVar4 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                         lVar4 == 0)) goto LAB_0234fe64;
                      if (10 < *(uint *)(plVar3 + 3)) {
                        plVar3[0xe] = *(long *)puVar2;
                        thunk_FUN_02134474();
                        uStack_5c = param_5;
                        lVar4 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_5c);
                        if ((lVar4 != 0) &&
                           (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                           lVar5 == 0)) goto LAB_0234fe64;
                        puVar2 = PTR_DAT_04cb3c00;
                        if (0xb < *(uint *)(plVar3 + 3)) {
                          plVar3[0xf] = lVar4;
                          thunk_FUN_02134474(plVar3 + 0xf,lVar4);
                          lVar4 = *(long *)puVar2;
                          if ((lVar4 != 0) &&
                             (lVar4 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                             lVar4 == 0)) goto LAB_0234fe64;
                    /* try { // try from 0234fc98 to 0244fcb3 has its CatchHandler @ 02350124 */
                          if (0xc < *(uint *)(plVar3 + 3)) {
                            plVar3[0x10] = *(long *)puVar2;
                            thunk_FUN_02134474();
                            if (param_2 == 0) goto LAB_0234fe70;
                            uStack_60 = *(undefined4 *)(param_2 + 0x14);
                            lVar4 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_60);
                    /* try { // try from 0234fcdc to 0244fce3 has its CatchHandler @ 02350110 */
                            if ((lVar4 != 0) &&
                               (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                               lVar5 == 0)) goto LAB_0234fe64;
                            puVar2 = PTR_DAT_04cb2be8;
                            if (0xd < *(uint *)(plVar3 + 3)) {
                              plVar3[0x11] = lVar4;
                    /* try { // try from 0234fd00 to 0244fd07 has its CatchHandler @ 0235010c */
                              thunk_FUN_02134474(plVar3 + 0x11,lVar4);
                              lVar4 = *(long *)puVar2;
                              if ((lVar4 != 0) &&
                                 (lVar4 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                                 lVar4 == 0)) goto LAB_0234fe64;
                              if (0xe < *(uint *)(plVar3 + 3)) {
                    /* try { // try from 0234fd28 to 0244fd47 has its CatchHandler @ 0235015c */
                                plVar3[0x12] = *(long *)puVar2;
                                thunk_FUN_02134474();
                                uStack_64 = *(undefined4 *)(param_2 + 0x60);
                                lVar4 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_64);
                    /* try { // try from 0234fd64 to 0244fd83 has its CatchHandler @ 02350120 */
                                if ((lVar4 != 0) &&
                                   (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)
                                                              ), lVar5 == 0)) goto LAB_0234fe64;
                                puVar2 = PTR_DAT_04cb2bd8;
                                if ((*(uint *)(plVar3 + 3) & 0xfffffff0) != 0) {
                                  plVar3[0x13] = lVar4;
                                  thunk_FUN_02134474(plVar3 + 0x13,lVar4);
                                  lVar4 = *(long *)puVar2;
                                  if ((lVar4 != 0) &&
                                     (lVar4 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)
                                                                        (*plVar3 + 0x40)),
                                     lVar4 == 0)) goto LAB_0234fe64;
                                  if (0x10 < *(uint *)(plVar3 + 3)) {
                                    plVar3[0x14] = *(long *)puVar2;
                                    uVar6 = thunk_FUN_02134474();
                                    uStack_68 = Dino_BusSand_App_Meta_StreakRateFeature__RemainSec_2250138
                                                          (uVar6,param_2);
                    /* try { // try from 0234fdd0 to 0244fdf7 has its CatchHandler @ 02350128 */
                                    lVar4 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_68);
                                    if ((lVar4 != 0) &&
                                       (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)
                                                                          (*plVar3 + 0x40)),
                                       lVar5 == 0)) goto LAB_0234fe64;
                                    puVar2 = PTR_DAT_04cb3bf0;
                                    puVar1 = PTR_DAT_04cac5c0;
                                    if (0x11 < *(uint *)(plVar3 + 3)) {
                                      plVar3[0x15] = lVar4;
                                      thunk_FUN_02134474(plVar3 + 0x15,lVar4);
                                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                        thunk_FUN_0218fdac();
                                      }
                                      Dino_BusSand_App_Analytics__Log_216d0c8
                                                (*(undefined8 *)puVar2,plVar3,0);
                    /* try { // try from 0234fe50 to 0244fe77 has its CatchHandler @ 02350134 */
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

