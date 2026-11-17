/* IL2CPP: Dino.BusSand.App.UI.QuitPanel$$OnQuitClick
void Dino_BusSand_App_UI_QuitPanel__OnQuitClick (Dino_BusSand_App_UI_QuitPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022697c8) */
/* IL2CPP: Dino.BusSand.App.UI.QuitPanel$$OnQuitClick
   void Dino_BusSand_App_UI_QuitPanel__OnQuitClick (Dino_BusSand_App_UI_QuitPanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_QuitPanel__OnQuitClick_231be3c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int aiStack_44 [3];
  
  if ((bRam0000000004f9c58c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac7e8);
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04cb8720);
    FUN_02132f7c(PTR_DAT_04cb86b0);
    bRam0000000004f9c58c = 1;
  }
  puVar1 = PTR_DAT_04cac7e8;
  puVar2 = PTR_DAT_04cac668;
  if (*(char *)(param_1 + 0x2c) != '\0') {
    return;
  }
  if ((*(char *)(param_1 + 0x38) == '\0') &&
     (*(long *)(*(long *)(*(long *)PTR_DAT_04cac7e8 + 0xb8) + 8) != 0)) {
    lVar7 = *(long *)PTR_DAT_04cac668;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_04caa458;
    if (*(char *)(*(long *)(lVar7 + 0xb8) + 8) != '\0') {
      lVar7 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar11,param_1,*(undefined8 *)PTR_DAT_04cb8720,0);
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Action___ctor_47b5ed0(uVar5,param_1,*(undefined8 *)PTR_DAT_04cb86b0,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar6 = (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),uVar11,uVar5,*(undefined8 *)(lVar7 + 0x28));
      if ((uVar6 & 1) != 0) {
        return;
      }
    }
  }
  if ((bRam0000000004f9c58d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04cb8728);
    FUN_02132f7c(PTR_DAT_04cb8730);
    bRam0000000004f9c58d = 1;
  }
  if (*(char *)(param_1 + 0x2c) == '\0') {
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    puVar1 = PTR_DAT_04cb8730;
    puVar2 = PTR_DAT_04caba50;
    if (*(char *)(param_1 + 0x38) == '\0') {
      if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar2;
      }
      lVar7 = **(long **)(lVar7 + 0xb8);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((bRam0000000004f9b873 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caa458,1,0,0);
        FUN_02132f7c(PTR_DAT_04cac5c0);
        FUN_02132f7c(PTR_DAT_04cac820);
        FUN_02132f7c(PTR_DAT_04cac498);
        FUN_02132f7c(PTR_DAT_04cac668);
        FUN_02132f7c(PTR_DAT_04ca9c20);
        FUN_02132f7c(PTR_DAT_04cabb00);
        FUN_02132f7c(PTR_DAT_04cac828);
        FUN_02132f7c(PTR_DAT_04cac5f8);
        FUN_02132f7c(PTR_DAT_04cac600);
        FUN_02132f7c(PTR_DAT_04cac610);
        FUN_02132f7c(PTR_DAT_04cabb50);
        FUN_02132f7c(PTR_DAT_04cac690);
        FUN_02132f7c(PTR_DAT_04cac698);
        FUN_02132f7c(PTR_DAT_04cac618);
        FUN_02132f7c(PTR_DAT_04cac620);
        FUN_02132f7c(PTR_DAT_04cac830);
        FUN_02132f7c(PTR_DAT_04cac838);
        FUN_02132f7c(PTR_DAT_04cac6a8);
        FUN_02132f7c(PTR_DAT_04cabc80);
        FUN_02132f7c(PTR_DAT_04cac648);
        FUN_02132f7c(PTR_DAT_04cac650);
        FUN_02132f7c(PTR_DAT_04ca9ce8);
        bRam0000000004f9b873 = 1;
      }
      if (*(long *)(lVar7 + 0x20) != 0) {
        Dino_BusSand_App_Gameplay_GameplayController__LockInput_229dd28(*(long *)(lVar7 + 0x20),0,0)
        ;
        plVar8 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,0x16);
        puVar2 = PTR_DAT_04ca9ce8;
        if (plVar8 != (long *)0x0) {
          if ((*(long *)PTR_DAT_04ca9ce8 != 0) &&
             (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04ca9ce8,*(undefined8 *)(*plVar8 + 0x40))
             , lVar10 == 0)) {
LAB_02269850:
            uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar11,0);
          }
          if ((int)plVar8[3] != 0) {
            plVar8[4] = *(long *)puVar2;
            thunk_FUN_02134474();
            puVar2 = PTR_DAT_04cac6a8;
            if ((*(long *)PTR_DAT_04cac6a8 != 0) &&
               (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac6a8,
                                            *(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
            goto LAB_02269850;
            if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
              plVar8[5] = *(long *)puVar2;
              thunk_FUN_02134474();
              puVar2 = PTR_DAT_04cac690;
              if ((*(long *)PTR_DAT_04cac690 != 0) &&
                 (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac690,
                                              *(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
              goto LAB_02269850;
              if (2 < *(uint *)(plVar8 + 3)) {
                plVar8[6] = *(long *)puVar2;
                thunk_FUN_02134474();
                puVar2 = PTR_DAT_04cac838;
                lVar10 = *(long *)PTR_DAT_04cac838;
                uVar11 = *(undefined8 *)PTR_DAT_04cac698;
                if ((lVar10 != 0) &&
                   (lVar4 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar4 == 0))
                goto LAB_02269850;
                if ((*(uint *)(plVar8 + 3) & 0xfffffffc) != 0) {
                  plVar8[7] = lVar10;
                  thunk_FUN_02134474(plVar8 + 7,lVar10);
                  puVar1 = PTR_DAT_04cac618;
                  if ((*(long *)PTR_DAT_04cac618 != 0) &&
                     (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac618,
                                                  *(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
                  goto LAB_02269850;
                  if (4 < *(uint *)(plVar8 + 3)) {
                    plVar8[8] = *(long *)puVar1;
                    thunk_FUN_02134474();
                    puVar1 = PTR_DAT_04cac828;
                    if ((*(long *)PTR_DAT_04cac828 != 0) &&
                       (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac828,
                                                    *(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
                    goto LAB_02269850;
                    if (5 < *(uint *)(plVar8 + 3)) {
                      plVar8[9] = *(long *)puVar1;
                      thunk_FUN_02134474();
                      puVar1 = PTR_DAT_04cac648;
                      if ((*(long *)PTR_DAT_04cac648 != 0) &&
                         (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac648,
                                                      *(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)
                         ) goto LAB_02269850;
                      if (6 < *(uint *)(plVar8 + 3)) {
                        plVar8[10] = *(long *)puVar1;
                        thunk_FUN_02134474();
                        fVar12 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
                        puVar1 = PTR_DAT_04ca9ac8;
                        if (*(long *)(lVar7 + 0x20) == 0) goto LAB_0226985c;
                        fVar12 = fVar12 - *(float *)(*(long *)(lVar7 + 0x20) + 0x5c);
                        aiStack_44[0] = -0x80000000;
                        if (fVar12 != INFINITY) {
                          aiStack_44[0] = (int)fVar12;
                        }
                        lVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),aiStack_44);
                        if ((lVar10 != 0) &&
                           (lVar4 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar4 == 0)) goto LAB_02269850;
                        if ((*(uint *)(plVar8 + 3) & 0xfffffff8) != 0) {
                          plVar8[0xb] = lVar10;
                          thunk_FUN_02134474(plVar8 + 0xb,lVar10);
                          puVar3 = PTR_DAT_04cac650;
                          if ((*(long *)PTR_DAT_04cac650 != 0) &&
                             (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac650,
                                                          *(undefined8 *)(*plVar8 + 0x40)),
                             lVar10 == 0)) goto LAB_02269850;
                          if (8 < *(uint *)(plVar8 + 3)) {
                            plVar8[0xc] = *(long *)puVar3;
                            thunk_FUN_02134474();
                            uStack_48 = *(undefined4 *)(lVar7 + 0x58);
                            lVar10 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_48);
                            if ((lVar10 != 0) &&
                               (lVar4 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                               lVar4 == 0)) goto LAB_02269850;
                            if (9 < *(uint *)(plVar8 + 3)) {
                              plVar8[0xd] = lVar10;
                              thunk_FUN_02134474(plVar8 + 0xd,lVar10);
                              puVar3 = PTR_DAT_04cabb50;
                              if ((*(long *)PTR_DAT_04cabb50 != 0) &&
                                 (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cabb50,
                                                              *(undefined8 *)(*plVar8 + 0x40)),
                                 lVar10 == 0)) goto LAB_02269850;
                              if (10 < *(uint *)(plVar8 + 3)) {
                                plVar8[0xe] = *(long *)puVar3;
                                thunk_FUN_02134474();
                                uStack_4c = *(undefined4 *)(lVar7 + 0x54);
                                lVar10 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_4c);
                                if ((lVar10 != 0) &&
                                   (lVar4 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)
                                                                       (*plVar8 + 0x40)), lVar4 == 0
                                   )) goto LAB_02269850;
                                if (0xb < *(uint *)(plVar8 + 3)) {
                                  plVar8[0xf] = lVar10;
                                  thunk_FUN_02134474(plVar8 + 0xf,lVar10);
                                  puVar3 = PTR_DAT_04cac610;
                                  if ((*(long *)PTR_DAT_04cac610 != 0) &&
                                     (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac610,
                                                                  *(undefined8 *)(*plVar8 + 0x40)),
                                     lVar10 == 0)) goto LAB_02269850;
                                  if (0xc < *(uint *)(plVar8 + 3)) {
                                    plVar8[0x10] = *(long *)puVar3;
                                    thunk_FUN_02134474();
                                    if (*(long *)(lVar7 + 0x20) == 0) goto LAB_0226985c;
                                    uStack_50 = *(undefined4 *)(*(long *)(lVar7 + 0x20) + 0x24);
                                    lVar10 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_50)
                                    ;
                                    if ((lVar10 != 0) &&
                                       (lVar4 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)
                                                                           (*plVar8 + 0x40)),
                                       lVar4 == 0)) goto LAB_02269850;
                                    if (0xd < *(uint *)(plVar8 + 3)) {
                                      plVar8[0x11] = lVar10;
                                      thunk_FUN_02134474(plVar8 + 0x11,lVar10);
                                      puVar3 = PTR_DAT_04cac620;
                                      if ((*(long *)PTR_DAT_04cac620 != 0) &&
                                         (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac620,
                                                                      *(undefined8 *)
                                                                       (*plVar8 + 0x40)),
                                         lVar10 == 0)) goto LAB_02269850;
                                      if (0xe < *(uint *)(plVar8 + 3)) {
                                        plVar8[0x12] = *(long *)puVar3;
                                        thunk_FUN_02134474();
                                        if (*(long *)(lVar7 + 0x20) == 0) goto LAB_0226985c;
                                        uStack_54 = *(undefined4 *)(*(long *)(lVar7 + 0x20) + 0x40);
                                        lVar10 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),
                                                              &uStack_54);
                                        if ((lVar10 != 0) &&
                                           (lVar4 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)
                                                                               (*plVar8 + 0x40)),
                                           lVar4 == 0)) goto LAB_02269850;
                                        if ((*(uint *)(plVar8 + 3) & 0xfffffff0) != 0) {
                                          plVar8[0x13] = lVar10;
                                          thunk_FUN_02134474(plVar8 + 0x13,lVar10);
                                          puVar3 = PTR_DAT_04cabc80;
                                          if ((*(long *)PTR_DAT_04cabc80 != 0) &&
                                             (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cabc80,
                                                                          *(undefined8 *)
                                                                           (*plVar8 + 0x40)),
                                             lVar10 == 0)) goto LAB_02269850;
                                          if (0x10 < *(uint *)(plVar8 + 3)) {
                                            plVar8[0x14] = *(long *)puVar3;
                                            thunk_FUN_02134474();
                                            uStack_60 = Dino_BusSand_App_GameApp__Progress3_2165f30
                                                                  (lVar7);
                                            lVar10 = FUN_02133100(*(undefined8 *)(puVar1 + 0x80),
                                                                  &uStack_60);
                                            if ((lVar10 != 0) &&
                                               (lVar4 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)
                                                                                   (*plVar8 + 0x40))
                                               , lVar4 == 0)) goto LAB_02269850;
                                            if (0x11 < *(uint *)(plVar8 + 3)) {
                                              plVar8[0x15] = lVar10;
                                              thunk_FUN_02134474(plVar8 + 0x15,lVar10);
                                              puVar3 = PTR_DAT_04cac5f8;
                                              if ((*(long *)PTR_DAT_04cac5f8 != 0) &&
                                                 (lVar10 = thunk_FUN_0216e7a0(*(long *)
                                                  PTR_DAT_04cac5f8,*(undefined8 *)(*plVar8 + 0x40)),
                                                 lVar10 == 0)) goto LAB_02269850;
                                              if (0x12 < *(uint *)(plVar8 + 3)) {
                                                plVar8[0x16] = *(long *)puVar3;
                                                thunk_FUN_02134474();
                                                if (*(long *)(lVar7 + 0x20) == 0) goto LAB_0226985c;
                                                uStack_64 = *(undefined4 *)
                                                             (*(long *)(lVar7 + 0x20) + 0x44);
                                                lVar10 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48)
                                                                      ,&uStack_64);
                                                if ((lVar10 != 0) &&
                                                   (lVar4 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *
                                                                                       )(*plVar8 +
                                                                                        0x40)),
                                                   lVar4 == 0)) goto LAB_02269850;
                                                if (0x13 < *(uint *)(plVar8 + 3)) {
                                                  plVar8[0x17] = lVar10;
                                                  thunk_FUN_02134474(plVar8 + 0x17,lVar10);
                                                  puVar3 = PTR_DAT_04cac600;
                                                  if ((*(long *)PTR_DAT_04cac600 != 0) &&
                                                     (lVar10 = thunk_FUN_0216e7a0(*(long *)
                                                  PTR_DAT_04cac600,*(undefined8 *)(*plVar8 + 0x40)),
                                                  lVar10 == 0)) goto LAB_02269850;
                                                  if (0x14 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0x18] = *(long *)puVar3;
                                                    thunk_FUN_02134474();
                                                    if (*(long *)(lVar7 + 0x20) != 0) {
                                                      uStack_68 = *(undefined4 *)
                                                                   (*(long *)(lVar7 + 0x20) + 0x48);
                                                      lVar10 = FUN_02133100(*(undefined8 *)
                                                                             (puVar1 + 0x48),
                                                                            &uStack_68);
                                                      if ((lVar10 != 0) &&
                                                         (lVar4 = thunk_FUN_0216e7a0(lVar10,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar4 == 0))
                                                  goto LAB_02269850;
                                                  if (*(uint *)(plVar8 + 3) < 0x16)
                                                  goto LAB_0226984c;
                                                  plVar8[0x19] = lVar10;
                                                  thunk_FUN_02134474(plVar8 + 0x19,lVar10);
                                                  if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) ==
                                                      0) {
                                                    thunk_FUN_0218fdac();
                                                  }
                                                  uVar5 = Dino_BusSand_App_Analytics__L_216fff0
                                                                    (plVar8,0);
                                                  Dino_BusSand_App_Analytics__Log_216d0c8
                                                            (uVar11,uVar5,0);
                                                  if (*(int *)(lVar7 + 0x60) < 1) {
                                                    if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4)
                                                        == 0) {
                                                      thunk_FUN_0218fdac();
                                                    }
                                                                                                        
                                                  Dino_BusSand_App_Meta_GameTracking__LevelEnd_2212938
                                                            (*(undefined8 *)puVar2,0,0xffffffff,
                                                             0xffffffff,0);
                                                  if (*(int *)(*(long *)PTR_DAT_04cac668 + 0xe4) ==
                                                      0) {
                                                    thunk_FUN_0218fdac();
                                                  }
                                                  Dino_BusSand_App_Meta_LiveOps__Quit_2241d08(0);
                                                  Dino_BusSand_App_Meta_WinStreak__OnLose_2293e0c(0)
                                                  ;
                                                  }
                                                  *(undefined1 *)(lVar7 + 0x79) = 1;
                                                  if (*(long *)(lVar7 + 0x20) != 0) {
                                                                                                        
                                                  Dino_BusSand_App_Gameplay_GameplayController__GiveUpLevel_229f9dc
                                                            (*(long *)(lVar7 + 0x20),0);
                                                  *(undefined1 *)(lVar7 + 0x79) = 0;
                                                  if (*(int *)(lVar7 + 0x60) < 1) {
                                                    if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4)
                                                        == 0) {
                                                      thunk_FUN_0218fdac();
                                                    }
                                                                                                        
                                                  Dino_BusSand_App_Meta_GameTracking__PushProperties_2211e88
                                                            (1,0);
                                                  }
                                                  *(undefined4 *)(lVar7 + 0x3c) = 2;
                                                  uVar11 = thunk_FUN_0216e89c(*(undefined8 *)
                                                                               PTR_DAT_04caa458);
                                                  System_Action___ctor_47b5ed0
                                                            (uVar11,lVar7,
                                                             *(undefined8 *)PTR_DAT_04cac820,0);
                                                  if (*(int *)(*(long *)PTR_DAT_04cabb00 + 0xe4) ==
                                                      0) {
                                                    thunk_FUN_0218fdac();
                                                  }
                                                  uStack_80 = 0;
                                                  uStack_78 = 0;
                                                  uStack_70 = 0;
                                                  Dino_BusSand_App_UI_ScreenFade__Run_2289914
                                                            (uVar11,&uStack_80,0);
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_0226985c;
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
          }
LAB_0226984c:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
      }
LAB_0226985c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar7 = *(long *)PTR_DAT_04cb8730;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar1;
    }
    puVar9 = *(undefined8 **)(lVar7 + 0xb8);
    lVar10 = puVar9[1];
    if (lVar10 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar9 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar11 = *puVar9;
      lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(lVar10,uVar11,*(undefined8 *)PTR_DAT_04cb8728,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar8 = lVar10;
      thunk_FUN_02134474(plVar8,lVar10);
    }
    if (*(int *)(*(long *)PTR_DAT_04cabb00 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_ScreenFade__Run_2289914(lVar10,&stack0xffffffffffffffc8,0);
  }
  return;
}

