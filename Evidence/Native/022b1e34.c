/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$OnPaySucClosed
void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnPaySucClosed (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinGiftPackPanel$$OnPaySucClosed
   void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnPaySucClosed
   (Dino_BusSand_App_UI_GoldenCoinGiftPackPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__OnPaySucClosed_21b1e34(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ba8d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caefe8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caf1a8);
    FUN_02132f7c(PTR_DAT_04caee60);
    bRam0000000004f9ba8d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if (((uVar3 & 1) != 0) || (*(char *)(param_1 + 0x5d) != '\0')) {
    return;
  }
  if (*(char *)(param_1 + 0x5e) == '\0') {
    lVar4 = Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__UnlockSequence_21b0780(param_1,0);
    uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (lVar4 == 0) {
      thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
      uVar7 = thunk_FUN_0216e89c();
      uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
      System_NullReferenceException___ctor_483267c(uVar7,uVar8,0);
    }
    else {
      uVar3 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
      if ((uVar3 & 1) != 0) {
        if ((bRam0000000004fa84ef & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7890);
          bRam0000000004fa84ef = 1;
        }
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar5 = *(long *)(param_1 + 0x10);
        if (lVar5 != 0) {
          if (pcRam0000000004fa8560 == (code *)0x0) {
            pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
          }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa8560)(lVar5,lVar4);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
      }
      thunk_FUN_021985a8(PTR_DAT_04caa3a8);
      uVar7 = thunk_FUN_0216e89c();
      uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
      System_ArgumentException___ctor_47b660c(uVar7,uVar8,0);
    }
    uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar7,uVar8);
  }
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar4 = Dino_BusSand_App_Meta_GiftPackFeature__get_Golden_223b7dc(*(long *)(param_1 + 0x40),0)
     , lVar4 != 0)) {
    lVar5 = *(long *)(param_1 + 0x40);
    *(undefined1 *)(lVar4 + 0x41) = 1;
    if (lVar5 != 0) {
      Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(lVar5,*(undefined8 *)PTR_DAT_04caefe8)
      ;
      if (*(long *)(param_1 + 0x38) != 0) {
        uVar3 = System_String__op_Equality_46d1108
                          (*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20),
                           *(undefined8 *)PTR_DAT_04caee60,0);
        if ((uVar3 & 1) != 0) {
          if (cRam0000000004f9b94d == '\0') {
            FUN_02132f7c(PTR_DAT_04cad1b0);
            cRam0000000004f9b94d = '\x01';
          }
          puVar2 = PTR_DAT_04cad1b0;
          uVar8 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
          if ((uVar3 & 1) != 0) {
            if (cRam0000000004f9b94d == '\0') {
              FUN_02132f7c(PTR_DAT_04cad1b0);
              cRam0000000004f9b94d = '\x01';
            }
            if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_022b200c;
            Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                      (**(long **)(*(long *)puVar2 + 0xb8),*(undefined8 *)PTR_DAT_04caf1a8);
          }
        }
        Dino_BusSand_App_UI_GoldenCoinGiftPackPanel__Finish_21afae4(param_1);
        puVar1 = PTR_DAT_04caba50;
        uVar8 = 0;
        if ((bRam0000000004f9bb84 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04caba50,0);
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          FUN_02132f7c(PTR_DAT_04cb0350);
          FUN_02132f7c(PTR_DAT_04cb0a18);
          bRam0000000004f9bb84 = 1;
          uVar8 = extraout_x1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          uVar8 = extraout_x1_00;
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50,uVar8);
          cRam0000000004f9b88f = '\x01';
        }
        puVar2 = PTR_DAT_04ca9ae8;
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar4 = *(long *)puVar1;
        }
        lVar4 = **(long **)(lVar4 + 0xb8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
        if ((uVar3 & 1) == 0) {
          if (lVar4 == 0) {
LAB_022db758:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(char *)(lVar4 + 0x38) != '\0') {
            uVar8 = *(undefined8 *)(lVar4 + 0x20);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
            if ((uVar3 & 1) == 0) {
              if (*(long *)(lVar4 + 0x20) == 0) goto LAB_022db758;
              if (*(int *)(*(long *)(lVar4 + 0x20) + 0x20) == 3) {
                plVar6 = (long *)(*(long *)(*(long *)PTR_DAT_04cb0350 + 0xb8) + 8);
                lVar5 = *plVar6;
                *plVar6 = 0;
                thunk_FUN_02134474(plVar6,0);
                if (cRam0000000004f9b94d == '\0') {
                  FUN_02132f7c(PTR_DAT_04cad1b0);
                  cRam0000000004f9b94d = '\x01';
                }
                puVar1 = PTR_DAT_04cad1b0;
                uVar8 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
                if ((uVar3 & 1) != 0) {
                  if (cRam0000000004f9b94d == '\0') {
                    FUN_02132f7c(PTR_DAT_04cad1b0);
                    cRam0000000004f9b94d = '\x01';
                  }
                  if (**(long **)(*(long *)puVar1 + 0xb8) == 0) goto LAB_022db758;
                  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                            (**(long **)(*(long *)puVar1 + 0xb8),*(undefined8 *)PTR_DAT_04cb0a18);
                }
                if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022db720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(lVar5 + 0x18))
                            (*(undefined8 *)(lVar5 + 0x40),5,*(undefined8 *)(lVar5 + 0x28));
                  return;
                }
                if ((bRam0000000004f9b871 & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cac5c0,5,0);
                  FUN_02132f7c(PTR_DAT_04cab1e8);
                  FUN_02132f7c(PTR_DAT_04cac440);
                  FUN_02132f7c(PTR_DAT_04ca9c20);
                  FUN_02132f7c(PTR_DAT_04cac678);
                  FUN_02132f7c(PTR_DAT_04cac768);
                  FUN_02132f7c(PTR_DAT_04cac770);
                  FUN_02132f7c(PTR_DAT_04cac778);
                  FUN_02132f7c(PTR_DAT_04cac780);
                  FUN_02132f7c(PTR_DAT_04cac798);
                  bRam0000000004f9b871 = 1;
                }
                if (*(long *)(lVar4 + 0x28) != 0) {
                  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                            (*(long *)(lVar4 + 0x28),*(undefined8 *)PTR_DAT_04cac678);
                  if (*(long *)(lVar4 + 0x20) != 0) {
                    uVar3 = Dino_BusSand_App_Gameplay_GameplayController__TryCompleteRevive_229f824
                                      (*(long *)(lVar4 + 0x20),5,0);
                    if ((uVar3 & 1) == 0) {
                      return;
                    }
                    if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    Dino_BusSand_App_Meta_Economy__OnReviveSuccess_2204db4(0);
                    uVar8 = *(undefined8 *)PTR_DAT_04ca9c20;
                    *(int *)(lVar4 + 0x58) = *(int *)(lVar4 + 0x58) + 1;
                    *(undefined4 *)(lVar4 + 0x5c) = 0;
                    plVar6 = (long *)FUN_02133068(uVar8,4);
                    puVar1 = PTR_DAT_04cac768;
                    if (plVar6 != (long *)0x0) {
                      if ((*(long *)PTR_DAT_04cac768 != 0) &&
                         (lVar4 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac768,
                                                     *(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
                      {
LAB_02268df8:
                        uVar8 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                        FUN_021330e8(uVar8,0);
                      }
                      if ((int)plVar6[3] != 0) {
                        plVar6[4] = *(long *)puVar1;
                        thunk_FUN_02134474();
                        puVar1 = PTR_DAT_04cac798;
                        if ((*(long *)PTR_DAT_04cac798 != 0) &&
                           (lVar4 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac798,
                                                       *(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)
                           ) goto LAB_02268df8;
                        if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
                          plVar6[5] = *(long *)puVar1;
                          thunk_FUN_02134474();
                          puVar1 = PTR_DAT_04cac780;
                          if ((*(long *)PTR_DAT_04cac780 != 0) &&
                             (lVar4 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac780,
                                                         *(undefined8 *)(*plVar6 + 0x40)),
                             lVar4 == 0)) goto LAB_02268df8;
                          if (2 < *(uint *)(plVar6 + 3)) {
                            plVar6[6] = *(long *)puVar1;
                            thunk_FUN_02134474();
                            lVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),
                                                 &stack0xffffffffffffffdc);
                            if ((lVar4 != 0) &&
                               (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar6 + 0x40)),
                               lVar5 == 0)) goto LAB_02268df8;
                            if ((*(uint *)(plVar6 + 3) & 0xfffffffc) != 0) {
                              plVar6[7] = lVar4;
                              thunk_FUN_02134474(plVar6 + 7,lVar4);
                              if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                              }
                              uVar8 = Dino_BusSand_App_Analytics__L_216fff0(plVar6,0);
                              Dino_BusSand_App_Analytics__Log_216d0c8
                                        (*(undefined8 *)PTR_DAT_04cac778,uVar8,0);
                              if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
                                thunk_FUN_0218fdac();
                              }
                              Dino_BusSand_App_Audio__PlayMusic_214db34
                                        (_UNK_00e20094,*(undefined8 *)PTR_DAT_04cac770);
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
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
            }
          }
        }
        return;
      }
    }
  }
LAB_022b200c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

