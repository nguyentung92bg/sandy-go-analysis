/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$TrackStageAdvance
void Dino_BusSand_App_Meta_ClimbTowerFeature__TrackStageAdvance (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, bool isWin, int32_t from, int32_t to, bool isSpecial, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$TrackStageAdvance
   void Dino_BusSand_App_Meta_ClimbTowerFeature__TrackStageAdvance
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, bool isWin, int32_t from, int32_t to, bool
   isSpecial, const MethodInfo* method); */

void Dino_BusSand_App_Meta_ClimbTowerFeature__TrackStageAdvance_222b9a4
               (undefined8 param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_58;
  uint uStack_54;
  
  puVar1 = PTR_DAT_04ca9c20;
  if ((bRam0000000004f9be3c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04caf910);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb2bb0);
    FUN_02132f7c(PTR_DAT_04cb2e30);
    FUN_02132f7c(PTR_DAT_04cb2b28);
    FUN_02132f7c(PTR_DAT_04cb2bc0);
    FUN_02132f7c(PTR_DAT_04cb2e38);
    FUN_02132f7c(PTR_DAT_04cb2b30);
    FUN_02132f7c(PTR_DAT_04cb2bd0);
    FUN_02132f7c(PTR_DAT_04cb2bd8);
    FUN_02132f7c(PTR_DAT_04cb2be0);
    FUN_02132f7c(PTR_DAT_04cb2be8);
    bRam0000000004f9be3c = 1;
  }
  plVar4 = (long *)FUN_02133068(*(undefined8 *)puVar1,0x10);
  puVar1 = PTR_DAT_04cb2b28;
  if (plVar4 == (long *)0x0) {
LAB_0232bf64:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(long *)PTR_DAT_04cb2b28 != 0) &&
     (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb2b28,*(undefined8 *)(*plVar4 + 0x40)),
     lVar5 == 0)) {
LAB_0232bf58:
    uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar7,0);
  }
  puVar3 = PTR_DAT_04cb2e30;
  if ((int)plVar4[3] != 0) {
    plVar4[4] = *(long *)puVar1;
    thunk_FUN_02134474();
    lVar5 = *(long *)puVar3;
    if ((lVar5 != 0) &&
       (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto LAB_0232bf58;
    puVar1 = PTR_DAT_04cb2b30;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
      plVar4[5] = *(long *)puVar3;
      thunk_FUN_02134474();
      lVar5 = *(long *)puVar1;
      if ((lVar5 != 0) &&
         (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_0232bf58;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = *(long *)puVar1;
        thunk_FUN_02134474();
        uStack_54 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_RoundNo_222c7a4(param_1);
        puVar1 = PTR_DAT_04ca9ac8;
        lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_54);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
        goto LAB_0232bf58;
        puVar3 = PTR_DAT_04cb2bb0;
        if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
          plVar4[7] = lVar5;
          thunk_FUN_02134474(plVar4 + 7,lVar5);
          lVar5 = *(long *)puVar3;
          if ((lVar5 != 0) &&
             (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
          goto LAB_0232bf58;
          puVar2 = PTR_DAT_04cb2e38;
          if (4 < *(uint *)(plVar4 + 3)) {
            plVar4[8] = *(long *)puVar3;
            thunk_FUN_02134474();
            uStack_54 = 1;
            if ((param_2 & 1) == 0) {
              uStack_54 = 2;
            }
            uVar7 = *(undefined8 *)puVar2;
            lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_54);
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
            goto LAB_0232bf58;
            puVar3 = PTR_DAT_04cb2be0;
            if (5 < *(uint *)(plVar4 + 3)) {
              plVar4[9] = lVar5;
              thunk_FUN_02134474(plVar4 + 9,lVar5);
              lVar5 = *(long *)puVar3;
              if ((lVar5 != 0) &&
                 (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
              goto LAB_0232bf58;
              if (6 < *(uint *)(plVar4 + 3)) {
                plVar4[10] = *(long *)puVar3;
                thunk_FUN_02134474();
                uStack_58 = param_3;
                lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_58);
                if ((lVar5 != 0) &&
                   (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                goto LAB_0232bf58;
                puVar3 = PTR_DAT_04cb2bc0;
                if ((*(uint *)(plVar4 + 3) & 0xfffffff8) != 0) {
                  plVar4[0xb] = lVar5;
                  thunk_FUN_02134474(plVar4 + 0xb,lVar5);
                  lVar5 = *(long *)puVar3;
                  if ((lVar5 != 0) &&
                     (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)
                     ) goto LAB_0232bf58;
                  if (8 < *(uint *)(plVar4 + 3)) {
                    plVar4[0xc] = *(long *)puVar3;
                    thunk_FUN_02134474();
                    uStack_64 = param_4;
                    lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_64);
                    if ((lVar5 != 0) &&
                       (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                       lVar6 == 0)) goto LAB_0232bf58;
                    puVar3 = PTR_DAT_04cb2be8;
                    if (9 < *(uint *)(plVar4 + 3)) {
                      plVar4[0xd] = lVar5;
                      thunk_FUN_02134474(plVar4 + 0xd,lVar5);
                      lVar5 = *(long *)puVar3;
                      if ((lVar5 != 0) &&
                         (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                         lVar5 == 0)) goto LAB_0232bf58;
                      puVar2 = PTR_DAT_04caf910;
                      if (10 < *(uint *)(plVar4 + 3)) {
                        plVar4[0xe] = *(long *)puVar3;
                        thunk_FUN_02134474();
                        lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                          (param_1,*(undefined8 *)puVar2);
                        if (lVar5 == 0) goto LAB_0232bf64;
                        uStack_68 = *(undefined4 *)(lVar5 + 0x54);
                        lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_68);
                        if ((lVar5 != 0) &&
                           (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                           lVar6 == 0)) goto LAB_0232bf58;
                        puVar3 = PTR_DAT_04cb2bd8;
                        if (0xb < *(uint *)(plVar4 + 3)) {
                          plVar4[0xf] = lVar5;
                          thunk_FUN_02134474(plVar4 + 0xf,lVar5);
                          lVar5 = *(long *)puVar3;
                          if ((lVar5 != 0) &&
                             (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                             lVar5 == 0)) goto LAB_0232bf58;
                          if (0xc < *(uint *)(plVar4 + 3)) {
                            plVar4[0x10] = *(long *)puVar3;
                            thunk_FUN_02134474();
                            uStack_6c = Dino_BusSand_App_Meta_ClimbTowerFeature__get_RemainSec_222c84c
                                                  (param_1);
                            lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_6c);
                            if ((lVar5 != 0) &&
                               (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                               lVar6 == 0)) goto LAB_0232bf58;
                            puVar3 = PTR_DAT_04cb2bd0;
                            if (0xd < *(uint *)(plVar4 + 3)) {
                              plVar4[0x11] = lVar5;
                              thunk_FUN_02134474(plVar4 + 0x11,lVar5);
                              lVar5 = *(long *)puVar3;
                              if ((lVar5 != 0) &&
                                 (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                                 lVar5 == 0)) goto LAB_0232bf58;
                              if (0xe < *(uint *)(plVar4 + 3)) {
                                plVar4[0x12] = *(long *)puVar3;
                                thunk_FUN_02134474();
                                uStack_54 = param_2 & param_5 & 1;
                                lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_54);
                                if ((lVar5 != 0) &&
                                   (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)
                                                              ), lVar6 == 0)) goto LAB_0232bf58;
                                puVar1 = PTR_DAT_04cac5c0;
                                if ((*(uint *)(plVar4 + 3) & 0xfffffff0) != 0) {
                                  plVar4[0x13] = lVar5;
                                  thunk_FUN_02134474(plVar4 + 0x13,lVar5);
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
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

