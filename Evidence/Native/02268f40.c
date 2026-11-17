/* IL2CPP: Dino.BusSand.App.GameApp$$QuitClosed
void Dino_BusSand_App_GameApp__QuitClosed (Dino_BusSand_App_GameApp_o* __this, bool quit, bool reset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$QuitClosed
   void Dino_BusSand_App_GameApp__QuitClosed (Dino_BusSand_App_GameApp_o* __this, bool quit, bool
   reset, const MethodInfo* method); */

void Dino_BusSand_App_GameApp__QuitClosed_2168f40(long param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
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
  int iStack_44;
  
  if ((bRam0000000004f9b873 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
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
  if (*(long *)(param_1 + 0x20) != 0) {
    Dino_BusSand_App_Gameplay_GameplayController__LockInput_229dd28(*(long *)(param_1 + 0x20),0,0);
    if ((param_2 & 1) == 0) {
      return;
    }
    plVar5 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,0x16);
    puVar3 = PTR_DAT_04ca9ce8;
    if (plVar5 != (long *)0x0) {
      if ((*(long *)PTR_DAT_04ca9ce8 != 0) &&
         (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04ca9ce8,*(undefined8 *)(*plVar5 + 0x40)),
         lVar6 == 0)) {
LAB_02269850:
        uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar9,0);
      }
      if ((int)plVar5[3] != 0) {
        plVar5[4] = *(long *)puVar3;
        thunk_FUN_02134474();
        puVar3 = PTR_DAT_04cac6a8;
        if ((*(long *)PTR_DAT_04cac6a8 != 0) &&
           (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac6a8,*(undefined8 *)(*plVar5 + 0x40)),
           lVar6 == 0)) goto LAB_02269850;
        if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
          plVar5[5] = *(long *)puVar3;
          thunk_FUN_02134474();
          puVar3 = PTR_DAT_04cac690;
          if ((*(long *)PTR_DAT_04cac690 != 0) &&
             (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac690,*(undefined8 *)(*plVar5 + 0x40)),
             lVar6 == 0)) goto LAB_02269850;
          if (2 < *(uint *)(plVar5 + 3)) {
            plVar5[6] = *(long *)puVar3;
            thunk_FUN_02134474();
            puVar3 = PTR_DAT_04cac838;
            plVar1 = (long *)PTR_DAT_04cac830;
            if ((param_3 & 1) == 0) {
              plVar1 = (long *)PTR_DAT_04cac838;
            }
            lVar6 = *plVar1;
            uVar9 = *(undefined8 *)PTR_DAT_04cac698;
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
            goto LAB_02269850;
            if ((*(uint *)(plVar5 + 3) & 0xfffffffc) != 0) {
              plVar5[7] = lVar6;
              thunk_FUN_02134474(plVar5 + 7,lVar6);
              puVar2 = PTR_DAT_04cac618;
              if ((*(long *)PTR_DAT_04cac618 != 0) &&
                 (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac618,
                                             *(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
              goto LAB_02269850;
              if (4 < *(uint *)(plVar5 + 3)) {
                plVar5[8] = *(long *)puVar2;
                thunk_FUN_02134474();
                puVar2 = PTR_DAT_04cac828;
                if ((*(long *)PTR_DAT_04cac828 != 0) &&
                   (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac828,
                                               *(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
                goto LAB_02269850;
                if (5 < *(uint *)(plVar5 + 3)) {
                  plVar5[9] = *(long *)puVar2;
                  thunk_FUN_02134474();
                  puVar2 = PTR_DAT_04cac648;
                  if ((*(long *)PTR_DAT_04cac648 != 0) &&
                     (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac648,
                                                 *(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
                  goto LAB_02269850;
                  if (6 < *(uint *)(plVar5 + 3)) {
                    plVar5[10] = *(long *)puVar2;
                    thunk_FUN_02134474();
                    fVar10 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
                    puVar2 = PTR_DAT_04ca9ac8;
                    if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226985c;
                    fVar10 = fVar10 - *(float *)(*(long *)(param_1 + 0x20) + 0x5c);
                    iStack_44 = -0x80000000;
                    if (fVar10 != INFINITY) {
                      iStack_44 = (int)fVar10;
                    }
                    lVar6 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_44);
                    if ((lVar6 != 0) &&
                       (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar5 + 0x40)),
                       lVar7 == 0)) goto LAB_02269850;
                    if ((*(uint *)(plVar5 + 3) & 0xfffffff8) != 0) {
                      plVar5[0xb] = lVar6;
                      thunk_FUN_02134474(plVar5 + 0xb,lVar6);
                      puVar4 = PTR_DAT_04cac650;
                      if ((*(long *)PTR_DAT_04cac650 != 0) &&
                         (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac650,
                                                     *(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
                      goto LAB_02269850;
                      if (8 < *(uint *)(plVar5 + 3)) {
                        plVar5[0xc] = *(long *)puVar4;
                        thunk_FUN_02134474();
                        uStack_48 = *(undefined4 *)(param_1 + 0x58);
                        lVar6 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_48);
                        if ((lVar6 != 0) &&
                           (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar5 + 0x40)),
                           lVar7 == 0)) goto LAB_02269850;
                        if (9 < *(uint *)(plVar5 + 3)) {
                          plVar5[0xd] = lVar6;
                          thunk_FUN_02134474(plVar5 + 0xd,lVar6);
                          puVar4 = PTR_DAT_04cabb50;
                          if ((*(long *)PTR_DAT_04cabb50 != 0) &&
                             (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cabb50,
                                                         *(undefined8 *)(*plVar5 + 0x40)),
                             lVar6 == 0)) goto LAB_02269850;
                          if (10 < *(uint *)(plVar5 + 3)) {
                            plVar5[0xe] = *(long *)puVar4;
                            thunk_FUN_02134474();
                            uStack_4c = *(undefined4 *)(param_1 + 0x54);
                            lVar6 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_4c);
                            if ((lVar6 != 0) &&
                               (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar5 + 0x40)),
                               lVar7 == 0)) goto LAB_02269850;
                            if (0xb < *(uint *)(plVar5 + 3)) {
                              plVar5[0xf] = lVar6;
                              thunk_FUN_02134474(plVar5 + 0xf,lVar6);
                              puVar4 = PTR_DAT_04cac610;
                              if ((*(long *)PTR_DAT_04cac610 != 0) &&
                                 (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac610,
                                                             *(undefined8 *)(*plVar5 + 0x40)),
                                 lVar6 == 0)) goto LAB_02269850;
                              if (0xc < *(uint *)(plVar5 + 3)) {
                                plVar5[0x10] = *(long *)puVar4;
                                thunk_FUN_02134474();
                                if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226985c;
                                uStack_50 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24);
                                lVar6 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_50);
                                if ((lVar6 != 0) &&
                                   (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar5 + 0x40)
                                                              ), lVar7 == 0)) goto LAB_02269850;
                    /* catch() { ... } // from try @ 02269a4c with catch @ 02269484 */
                                if (0xd < *(uint *)(plVar5 + 3)) {
                                  plVar5[0x11] = lVar6;
                                  thunk_FUN_02134474(plVar5 + 0x11,lVar6);
                                  puVar4 = PTR_DAT_04cac620;
                    /* try { // try from 022694b4 to 023694bb has its CatchHandler @ 02269b00 */
                                  if ((*(long *)PTR_DAT_04cac620 != 0) &&
                                     (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac620,
                                                                 *(undefined8 *)(*plVar5 + 0x40)),
                                     lVar6 == 0)) goto LAB_02269850;
                                  if (0xe < *(uint *)(plVar5 + 3)) {
                                    plVar5[0x12] = *(long *)puVar4;
                                    thunk_FUN_02134474();
                                    if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226985c;
                                    uStack_54 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x40);
                    /* try { // try from 022694ec to 023694fb has its CatchHandler @ 02269af8 */
                                    lVar6 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_54);
                                    if ((lVar6 != 0) &&
                                       (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)
                                                                          (*plVar5 + 0x40)),
                                       lVar7 == 0)) goto LAB_02269850;
                                    if ((*(uint *)(plVar5 + 3) & 0xfffffff0) != 0) {
                                      plVar5[0x13] = lVar6;
                                      thunk_FUN_02134474(plVar5 + 0x13,lVar6);
                                      puVar4 = PTR_DAT_04cabc80;
                                      if ((*(long *)PTR_DAT_04cabc80 != 0) &&
                                         (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cabc80,
                                                                     *(undefined8 *)(*plVar5 + 0x40)
                                                                    ), lVar6 == 0))
                                      goto LAB_02269850;
                    /* try { // try from 02269550 to 02369557 has its CatchHandler @ 02269af4 */
                                      if (0x10 < *(uint *)(plVar5 + 3)) {
                    /* try { // try from 02269558 to 02369573 has its CatchHandler @ 02269adc */
                                        plVar5[0x14] = *(long *)puVar4;
                                        thunk_FUN_02134474();
                                        uStack_60 = Dino_BusSand_App_GameApp__Progress3_2165f30
                                                              (param_1);
                                        lVar6 = FUN_02133100(*(undefined8 *)(puVar2 + 0x80),
                                                             &uStack_60);
                                        if ((lVar6 != 0) &&
                                           (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)
                                                                              (*plVar5 + 0x40)),
                                           lVar7 == 0)) goto LAB_02269850;
                                        if (0x11 < *(uint *)(plVar5 + 3)) {
                                          plVar5[0x15] = lVar6;
                    /* try { // try from 022695b4 to 023695bb has its CatchHandler @ 02269ad8 */
                                          thunk_FUN_02134474(plVar5 + 0x15,lVar6);
                                          puVar4 = PTR_DAT_04cac5f8;
                    /* try { // try from 022695bc to 023695cb has its CatchHandler @ 02269ac8 */
                    /* try { // try from 022695cc to 023695db has its CatchHandler @ 02269ab0 */
                                          if ((*(long *)PTR_DAT_04cac5f8 != 0) &&
                                             (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac5f8,
                                                                         *(undefined8 *)
                                                                          (*plVar5 + 0x40)),
                                             lVar6 == 0)) goto LAB_02269850;
                                          if (0x12 < *(uint *)(plVar5 + 3)) {
                                            plVar5[0x16] = *(long *)puVar4;
                                            thunk_FUN_02134474();
                                            if (*(long *)(param_1 + 0x20) == 0) goto LAB_0226985c;
                                            uStack_64 = *(undefined4 *)
                                                         (*(long *)(param_1 + 0x20) + 0x44);
                                            lVar6 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),
                                                                 &uStack_64);
                                            if ((lVar6 != 0) &&
                                               (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)
                                                                                  (*plVar5 + 0x40)),
                                               lVar7 == 0)) goto LAB_02269850;
                    /* try { // try from 0226962c to 0236963b has its CatchHandler @ 02269a78 */
                                            if (0x13 < *(uint *)(plVar5 + 3)) {
                                              plVar5[0x17] = lVar6;
                                              thunk_FUN_02134474(plVar5 + 0x17,lVar6);
                                              puVar4 = PTR_DAT_04cac600;
                                              if ((*(long *)PTR_DAT_04cac600 != 0) &&
                                                 (lVar6 = thunk_FUN_0216e7a0(*(long *)
                                                  PTR_DAT_04cac600,*(undefined8 *)(*plVar5 + 0x40)),
                                                 lVar6 == 0)) goto LAB_02269850;
                                              if (0x14 < *(uint *)(plVar5 + 3)) {
                                                plVar5[0x18] = *(long *)puVar4;
                                                thunk_FUN_02134474();
                    /* try { // try from 02269688 to 0236968f has its CatchHandler @ 02269a74 */
                                                if (*(long *)(param_1 + 0x20) != 0) {
                                                  uStack_68 = *(undefined4 *)
                                                               (*(long *)(param_1 + 0x20) + 0x48);
                    /* try { // try from 02269690 to 023696ab has its CatchHandler @ 02269a5c */
                                                  lVar6 = FUN_02133100(*(undefined8 *)
                                                                        (puVar2 + 0x48),&uStack_68);
                                                  if ((lVar6 != 0) &&
                                                     (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40)), lVar7 == 0)) goto LAB_02269850;
                                                  if (*(uint *)(plVar5 + 3) < 0x16)
                                                  goto LAB_0226984c;
                                                  plVar5[0x19] = lVar6;
                                                  thunk_FUN_02134474(plVar5 + 0x19,lVar6);
                                                  if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) ==
                                                      0) {
                                                    thunk_FUN_0218fdac();
                                                  }
                    /* try { // try from 022696f4 to 023696ff has its CatchHandler @ 02269aac */
                                                  uVar8 = Dino_BusSand_App_Analytics__L_216fff0
                                                                    (plVar5,0);
                                                  Dino_BusSand_App_Analytics__Log_216d0c8
                                                            (uVar9,uVar8,0);
                                                  if (*(int *)(param_1 + 0x60) < 1) {
                    /* try { // try from 02269720 to 0236972f has its CatchHandler @ 02269a98 */
                                                    if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4)
                                                        == 0) {
                                                      thunk_FUN_0218fdac();
                                                    }
                                                                                                        
                                                  Dino_BusSand_App_Meta_GameTracking__LevelEnd_2212938
                                                            (*(undefined8 *)puVar3,0,0xffffffff,
                                                             0xffffffff,0);
                                                  if (*(int *)(*(long *)PTR_DAT_04cac668 + 0xe4) ==
                                                      0) {
                                                    thunk_FUN_0218fdac();
                                                  }
                                                  Dino_BusSand_App_Meta_LiveOps__Quit_2241d08(0);
                                                  Dino_BusSand_App_Meta_WinStreak__OnLose_2293e0c(0)
                                                  ;
                                                  }
                                                  *(undefined1 *)(param_1 + 0x79) = 1;
                    /* try { // try from 0226977c to 02369783 has its CatchHandler @ 02269a94 */
                                                  if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 02269784 to 0236979f has its CatchHandler @ 02269a90 */
                                                                                                        
                                                  Dino_BusSand_App_Gameplay_GameplayController__GiveUpLevel_229f9dc
                                                            (*(long *)(param_1 + 0x20),0);
                                                  *(undefined1 *)(param_1 + 0x79) = 0;
                                                  if (*(int *)(param_1 + 0x60) < 1) {
                                                    if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4)
                                                        == 0) {
                                                      thunk_FUN_0218fdac();
                                                    }
                                                                                                        
                                                  Dino_BusSand_App_Meta_GameTracking__PushProperties_2211e88
                                                            (1,0);
                                                  }
                                                  *(undefined4 *)(param_1 + 0x3c) = 2;
                    /* try { // try from 022697c4 to 023697cb has its CatchHandler @ 02269afc */
                                                  if ((param_3 & 1) != 0) {
                                                    Dino_BusSand_App_GameApp__EnterLevel_21644c8
                                                              (param_1,2);
                                                    return;
                    /* try { // try from 022697d4 to 023697ff has its CatchHandler @ 02269b08 */
                                                  }
                                                  uVar9 = thunk_FUN_0216e89c(*(undefined8 *)
                                                                              PTR_DAT_04caa458);
                                                  System_Action___ctor_47b5ed0
                                                            (uVar9,param_1,
                                                             *(undefined8 *)PTR_DAT_04cac820,0);
                                                  if (*(int *)(*(long *)PTR_DAT_04cabb00 + 0xe4) ==
                                                      0) {
                                                    thunk_FUN_0218fdac();
                                                  }
                                                  uStack_80 = 0;
                                                  uStack_78 = 0;
                                                  uStack_70 = 0;
                                                  Dino_BusSand_App_UI_ScreenFade__Run_2289914
                                                            (uVar9,&uStack_80,0);
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

