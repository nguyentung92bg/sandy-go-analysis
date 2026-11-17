/* IL2CPP: Dino.BusSand.App.Ads$$ShowInterstitialIfAllowed
void Dino_BusSand_App_Ads__ShowInterstitialIfAllowed (System_String_o* slot, System_Action_o* then, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads$$ShowInterstitialIfAllowed
   void Dino_BusSand_App_Ads__ShowInterstitialIfAllowed (System_String_o* slot, System_Action_o*
   then, const MethodInfo* method); */

void Dino_BusSand_App_Ads__ShowInterstitialIfAllowed_216e370(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  puVar3 = PTR_DAT_04cacaa0;
  if ((bRam0000000004f9b8eb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cacaa8);
    FUN_02132f7c(PTR_DAT_04cacaa0);
    FUN_02132f7c(PTR_DAT_04cacab0);
    FUN_02132f7c(PTR_DAT_04cacab8);
    FUN_02132f7c(PTR_DAT_04cab270);
    FUN_02132f7c(PTR_DAT_04cacac0);
    FUN_02132f7c(PTR_DAT_04cacac8);
    FUN_02132f7c(PTR_DAT_04cacad0);
    FUN_02132f7c(PTR_DAT_04cacad8);
    FUN_02132f7c(PTR_DAT_04cabba0);
    FUN_02132f7c(PTR_DAT_04cabba8);
    FUN_02132f7c(PTR_DAT_04cacae0);
    FUN_02132f7c(PTR_DAT_04cacae8);
    FUN_02132f7c(PTR_DAT_04cacaf0);
    FUN_02132f7c(PTR_DAT_04cacaf8);
    FUN_02132f7c(PTR_DAT_04cac790);
    FUN_02132f7c(PTR_DAT_04caa858);
    FUN_02132f7c(PTR_DAT_04cacb00);
    bRam0000000004f9b8eb = 1;
  }
  uStack_58 = 0;
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar4,0);
  puVar3 = PTR_DAT_04cabaf8;
  if (lVar4 != 0) {
    puVar10 = (undefined8 *)(lVar4 + 0x10);
    *puVar10 = param_1;
    thunk_FUN_02134474(puVar10,param_1);
    plVar11 = (long *)(lVar4 + 0x18);
    *plVar11 = param_2;
    thunk_FUN_02134474(plVar11,param_2);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    puVar1 = PTR_DAT_04cabaa8;
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar3;
    }
    puVar7 = (undefined8 *)PTR_DAT_04cacac8;
    puVar2 = PTR_DAT_04cab270;
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
    thunk_FUN_02134474((undefined8 *)(lVar4 + 0x20));
    uVar12 = *(undefined8 *)(lVar4 + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = Dino_BusSand_App_Ads__CanShowInterstitial_21763a0(uVar12,&uStack_58);
    if ((uVar6 & 1) == 0) {
      puVar7 = &uStack_58;
    }
    uVar12 = System_String__Concat_46d2b84(*puVar10,*(undefined8 *)puVar2,*puVar7,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    if (cRam0000000004f9b94b == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaa8);
      cRam0000000004f9b94b = '\x01';
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar1;
    }
    puVar7 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x48);
    *puVar7 = uVar12;
    thunk_FUN_02134474(puVar7,uVar12);
    puVar2 = PTR_DAT_04cac5c0;
    if ((uVar6 & 1) == 0) {
      lVar4 = *(long *)PTR_DAT_04cac5c0;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar2;
      }
      if (*(char *)(*(long *)(lVar4 + 0xb8) + 8) != '\0') {
        uVar12 = System_String__Concat_46d30e8
                           (*(undefined8 *)PTR_DAT_04cacac0,*puVar10,*(undefined8 *)PTR_DAT_04cacb00
                            ,uStack_58,0);
        if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
        }
        UnityEngine_Debug__Log_4360fc8(uVar12,0);
      }
      uVar12 = uStack_58;
      uVar9 = *puVar10;
      if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_GameTracking__InterOpportunity_2218f90
                (uVar9,*(undefined8 *)PTR_DAT_04cabba8,uVar12,0);
      lVar4 = *plVar11;
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      }
      return;
    }
    plVar11 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,10);
    puVar2 = PTR_DAT_04caa858;
    if (plVar11 != (long *)0x0) {
      if ((*(long *)PTR_DAT_04caa858 != 0) &&
         (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04caa858,*(undefined8 *)(*plVar11 + 0x40)),
         lVar5 == 0)) {
LAB_0226eb08:
        uVar12 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar12,0);
      }
      if ((int)plVar11[3] != 0) {
        plVar11[4] = *(long *)puVar2;
        thunk_FUN_02134474();
        puVar2 = PTR_DAT_04cacae0;
        if ((*(long *)PTR_DAT_04cacae0 != 0) &&
           (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cacae0,*(undefined8 *)(*plVar11 + 0x40)),
           lVar5 == 0)) goto LAB_0226eb08;
        if ((*(uint *)(plVar11 + 3) & 0xfffffffe) != 0) {
          plVar11[5] = *(long *)puVar2;
          thunk_FUN_02134474();
          puVar2 = PTR_DAT_04cacaf8;
          if ((*(long *)PTR_DAT_04cacaf8 != 0) &&
             (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cacaf8,*(undefined8 *)(*plVar11 + 0x40))
             , lVar5 == 0)) goto LAB_0226eb08;
          if (2 < *(uint *)(plVar11 + 3)) {
            plVar11[6] = *(long *)puVar2;
            thunk_FUN_02134474();
            uVar12 = *puVar10;
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar5 = Dino_BusSand_App_Ads__InterScene_2176940(uVar12);
            if ((lVar5 != 0) &&
               (lVar8 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0))
            goto LAB_0226eb08;
            if ((*(uint *)(plVar11 + 3) & 0xfffffffc) != 0) {
              plVar11[7] = lVar5;
              thunk_FUN_02134474(plVar11 + 7,lVar5);
              puVar1 = PTR_DAT_04cacae8;
              if ((*(long *)PTR_DAT_04cacae8 != 0) &&
                 (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cacae8,
                                             *(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0))
              goto LAB_0226eb08;
              if (4 < *(uint *)(plVar11 + 3)) {
                plVar11[8] = *(long *)puVar1;
                thunk_FUN_02134474();
                puVar1 = PTR_DAT_04cabba0;
                if ((*(long *)PTR_DAT_04cabba0 != 0) &&
                   (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cabba0,
                                               *(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0))
                goto LAB_0226eb08;
                if (5 < *(uint *)(plVar11 + 3)) {
                  plVar11[9] = *(long *)puVar1;
                  thunk_FUN_02134474();
                  puVar1 = PTR_DAT_04cacaf0;
                  if ((*(long *)PTR_DAT_04cacaf0 != 0) &&
                     (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cacaf0,
                                                 *(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0))
                  goto LAB_0226eb08;
                  if (6 < *(uint *)(plVar11 + 3)) {
                    plVar11[10] = *(long *)puVar1;
                    thunk_FUN_02134474();
                    puVar1 = PTR_DAT_04ca9ac8;
                    uStack_5c = 1;
                    lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_5c);
                    if ((lVar5 != 0) &&
                       (lVar8 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar11 + 0x40)),
                       lVar8 == 0)) goto LAB_0226eb08;
                    if ((*(uint *)(plVar11 + 3) & 0xfffffff8) != 0) {
                      plVar11[0xb] = lVar5;
                      thunk_FUN_02134474(plVar11 + 0xb,lVar5);
                      puVar2 = PTR_DAT_04cacab0;
                      if ((*(long *)PTR_DAT_04cacab0 != 0) &&
                         (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cacab0,
                                                     *(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0))
                      goto LAB_0226eb08;
                      if (8 < *(uint *)(plVar11 + 3)) {
                        plVar11[0xc] = *(long *)puVar2;
                        thunk_FUN_02134474();
                        uStack_60 = Dino_BusSand_App_Ads__get_SessionSeconds_2176048();
                        lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_60);
                        if ((lVar5 != 0) &&
                           (lVar8 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar11 + 0x40)),
                           lVar8 == 0)) goto LAB_0226eb08;
                        if (9 < *(uint *)(plVar11 + 3)) {
                          plVar11[0xd] = lVar5;
                          thunk_FUN_02134474(plVar11 + 0xd,lVar5);
                          if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          Dino_BusSand_App_Analytics__Log_216d0c8
                                    (*(undefined8 *)PTR_DAT_04cacad0,plVar11);
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          uVar12 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
                          puVar3 = PTR_DAT_04cac498;
                          *(undefined8 *)(lVar4 + 0x28) = uVar12;
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_0218fdac(*(long *)puVar3);
                          }
                          Dino_BusSand_App_Meta_GameTracking__ExternalUi_221486c(1,0);
                          puVar3 = PTR_DAT_04cacad8;
                          uVar12 = System_String__Concat_46d2b84
                                             (*(undefined8 *)PTR_DAT_04cacad8,*puVar10,
                                              *(undefined8 *)PTR_DAT_04cacab8,0);
                          if (*(int *)(*(long *)PTR_DAT_04cac450 + 0xe4) == 0) {
                            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac450);
                          }
                          Dino_BusSand_App_CrashContext__Step_216db44
                                    (*(undefined8 *)PTR_DAT_04cac790,uVar12);
                          uVar12 = System_String__Concat_46c82e0
                                             (*(undefined8 *)puVar3,*(undefined8 *)(lVar4 + 0x10),0)
                          ;
                          uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                          System_Action___ctor_47b5ed0
                                    (uVar9,lVar4,*(undefined8 *)PTR_DAT_04cacaa8,0);
                          Dino_BusSand_App_Ads__OpenFullscreenAd_217782c(uVar12,uVar9);
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
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

