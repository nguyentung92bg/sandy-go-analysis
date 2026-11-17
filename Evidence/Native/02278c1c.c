/* IL2CPP: Dino.BusSand.App.Ads.<>c__DisplayClass43_0$$<ShowInterstitialIfAllowed>g__Closed|1
void Dino_BusSand_App_Ads___c__DisplayClass43_0___ShowInterstitialIfAllowed_g__Closed_1 (Dino_BusSand_App_Ads___c__DisplayClass43_0_o* __this, bool shown, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads.<>c__DisplayClass43_0$$<ShowInterstitialIfAllowed>g__Closed|1
   void Dino_BusSand_App_Ads___c__DisplayClass43_0___ShowInterstitialIfAllowed_g__Closed_1
   (Dino_BusSand_App_Ads___c__DisplayClass43_0_o* __this, bool shown, const MethodInfo* method); */

void Dino_BusSand_App_Ads___c__DisplayClass43_0___ShowInterstitialIfAllowed_g__Closed_1_2178c1c
               (long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = PTR_DAT_04cac498;
  if ((bRam0000000004f9b8f3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cad0e8);
    FUN_02132f7c(PTR_DAT_04cad0f8);
    FUN_02132f7c(PTR_DAT_04cad188);
    FUN_02132f7c(PTR_DAT_04cacc00);
    FUN_02132f7c(PTR_DAT_04cad100);
    FUN_02132f7c(PTR_DAT_04cacad8);
    FUN_02132f7c(PTR_DAT_04cad108);
    FUN_02132f7c(PTR_DAT_04cad110);
    FUN_02132f7c(PTR_DAT_04cacae0);
    FUN_02132f7c(PTR_DAT_04cad120);
    FUN_02132f7c(PTR_DAT_04cad130);
    FUN_02132f7c(PTR_DAT_04cad148);
    FUN_02132f7c(PTR_DAT_04cabaa0);
    FUN_02132f7c(PTR_DAT_04cad150);
    FUN_02132f7c(PTR_DAT_04cac790);
    FUN_02132f7c(PTR_DAT_04caa858);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cad190);
    FUN_02132f7c(PTR_DAT_04cad160);
    FUN_02132f7c(PTR_DAT_04ca9ce8);
    bRam0000000004f9b8f3 = 1;
  }
  puVar7 = PTR_DAT_04cad148;
  puVar1 = (undefined8 *)PTR_DAT_04cad100;
  puVar5 = PTR_DAT_04cacad8;
  puVar4 = PTR_DAT_04cac790;
  puVar3 = PTR_DAT_04cac450;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar6 = PTR_DAT_04cad130;
  Dino_BusSand_App_Meta_GameTracking__ExternalUi_221486c(0,0);
  if ((param_2 & 1) == 0) {
    puVar1 = (undefined8 *)puVar7;
  }
  uVar12 = *(undefined8 *)puVar4;
  uVar8 = System_String__Concat_46d2b84
                    (*(undefined8 *)puVar5,*(undefined8 *)(param_1 + 0x10),*puVar1,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  puVar3 = PTR_DAT_04ca9c20;
  Dino_BusSand_App_CrashContext__Step_216db44(uVar12,uVar8);
  uVar8 = System_String__Concat_46d2b84
                    (*(undefined8 *)puVar5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar6,0);
  Dino_BusSand_App_DeviceMemory__Read_214fafc(&lStack_70,0);
  uStack_88 = uStack_68;
  lStack_90 = lStack_70;
  uStack_78 = uStack_58;
  uStack_80 = uStack_60;
  Dino_BusSand_App_CrashContext__Memory_2172060(uVar8,&lStack_90);
  if ((param_2 & 1) == 0) {
                    /* catch() { ... } // from try @ 02279420 with catch @ 0227931c */
    plVar10 = (long *)FUN_02133068(*(undefined8 *)puVar3,8);
    puVar3 = PTR_DAT_04caa858;
    if (plVar10 != (long *)0x0) {
      if ((*(long *)PTR_DAT_04caa858 != 0) &&
         (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04caa858,*(undefined8 *)(*plVar10 + 0x40)),
         lVar11 == 0)) {
LAB_022795c4:
        uVar8 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar8,0);
      }
      if ((int)plVar10[3] != 0) {
        plVar10[4] = *(long *)puVar3;
        thunk_FUN_02134474();
        puVar3 = PTR_DAT_04cacae0;
        if ((*(long *)PTR_DAT_04cacae0 != 0) &&
           (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cacae0,*(undefined8 *)(*plVar10 + 0x40)),
           lVar11 == 0)) goto LAB_022795c4;
        if ((*(uint *)(plVar10 + 3) & 0xfffffffe) != 0) {
          plVar10[5] = *(long *)puVar3;
          thunk_FUN_02134474();
          puVar3 = PTR_DAT_04cad120;
                    /* try { // try from 022793ac to 023793b7 has its CatchHandler @ 02279460 */
          if ((*(long *)PTR_DAT_04cad120 != 0) &&
             (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad120,*(undefined8 *)(*plVar10 + 0x40)
                                         ), lVar11 == 0)) goto LAB_022795c4;
          if (2 < *(uint *)(plVar10 + 3)) {
            plVar10[6] = *(long *)puVar3;
            thunk_FUN_02134474();
            uVar8 = *(undefined8 *)(param_1 + 0x10);
            if (*(int *)(*(long *)PTR_DAT_04cabaa8 + 0xe4) == 0) {
                    /* try { // try from 022793f4 to 023793ff has its CatchHandler @ 0227944c */
              thunk_FUN_0218fdac();
            }
            lVar11 = Dino_BusSand_App_Ads__InterScene_2176940(uVar8);
                    /* try { // try from 02279414 to 0237941f has its CatchHandler @ 02279444 */
            if ((lVar11 != 0) &&
               (lVar9 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
            goto LAB_022795c4;
                    /* try { // try from 02279420 to 0237946f has its CatchHandler @ 0227931c */
            if ((*(uint *)(plVar10 + 3) & 0xfffffffc) != 0) {
              plVar10[7] = lVar11;
              thunk_FUN_02134474(plVar10 + 7,lVar11);
              puVar3 = PTR_DAT_04ca9ce8;
                    /* catch() { ... } // from try @ 02279414 with catch @ 02279444 */
                    /* catch() { ... } // from try @ 022793f4 with catch @ 0227944c */
              if ((*(long *)PTR_DAT_04ca9ce8 != 0) &&
                 (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04ca9ce8,
                                              *(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
              goto LAB_022795c4;
                    /* catch() { ... } // from try @ 022793ac with catch @ 02279460 */
              if (4 < *(uint *)(plVar10 + 3)) {
                plVar10[8] = *(long *)puVar3;
                thunk_FUN_02134474();
                puVar3 = PTR_DAT_04cabaa0;
                if ((*(long *)PTR_DAT_04cabaa0 != 0) &&
                   (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cabaa0,
                                                *(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
                goto LAB_022795c4;
                if (5 < *(uint *)(plVar10 + 3)) {
                  plVar10[9] = *(long *)puVar3;
                  thunk_FUN_02134474();
                  puVar3 = PTR_DAT_04cacc00;
                  if ((*(long *)PTR_DAT_04cacc00 != 0) &&
                     (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cacc00,
                                                  *(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
                  goto LAB_022795c4;
                  if (6 < *(uint *)(plVar10 + 3)) {
                    /* catch() { ... } // from try @ 02279530 with catch @ 022794dc */
                    plVar10[10] = *(long *)puVar3;
                    thunk_FUN_02134474();
                    puVar3 = PTR_DAT_04cad160;
                    if ((*(long *)PTR_DAT_04cad160 != 0) &&
                       (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad160,
                                                    *(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
                    goto LAB_022795c4;
                    if ((*(uint *)(plVar10 + 3) & 0xfffffff8) != 0) {
                      plVar10[0xb] = *(long *)puVar3;
                      thunk_FUN_02134474();
                    /* try { // try from 02279528 to 0237952f has its CatchHandler @ 0227957c */
                    /* try { // try from 02279530 to 0237958f has its CatchHandler @ 022794dc */
                      if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      Dino_BusSand_App_Analytics__Log_216d0c8
                                (*(undefined8 *)PTR_DAT_04cad0e8,plVar10);
                      uVar8 = *(undefined8 *)(param_1 + 0x10);
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                    /* catch() { ... } // from try @ 02279528 with catch @ 0227957c */
                      Dino_BusSand_App_Meta_GameTracking__InterOpportunity_2218f90
                                (uVar8,*(undefined8 *)PTR_DAT_04cad190,
                                 *(undefined8 *)PTR_DAT_04ca9c30,0);
LAB_0227958c:
                      lVar11 = *(long *)(param_1 + 0x18);
                      if (lVar11 != 0) {
                    /* try { // try from 0227959c to 0237959f has its CatchHandler @ 022795a8 */
                        (**(code **)(lVar11 + 0x18))
                                  (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
                      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227959c with catch @ 022795a8
                        */
                    /* try { // try from 022795ac to 023795db has its CatchHandler @ 022795ac
                       catch() { ... } // from try @ 022795ac with catch @ 022795ac
                       catch() { ... } // from try @ 022795e8 with catch @ 022795ac */
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_022795c0:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
  else {
    lVar11 = *(long *)(param_1 + 0x20);
    if (lVar11 != 0) {
      lVar9 = *(long *)PTR_DAT_04cabaf8;
      *(int *)(lVar11 + 200) = *(int *)(lVar11 + 200) + 1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
      *(undefined8 *)(lVar11 + 0xd0) = uVar8;
      puVar4 = PTR_DAT_04cabaa8;
      lVar11 = *(long *)(param_1 + 0x20);
      if (lVar11 != 0) {
        *(undefined1 *)(lVar11 + 0x13c) = 1;
        *(undefined4 *)(lVar11 + 0xd8) = 0;
        lVar11 = *(long *)puVar4;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar4;
        }
        *(int *)(*(long *)(lVar11 + 0xb8) + 0x20) = *(int *)(*(long *)(lVar11 + 0xb8) + 0x20) + 1;
        uVar13 = Dino_BusSand_App_Ads__get_SessionNow_2175fd8();
        *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18) = uVar13;
        Dino_BusSand_App_Meta_NoAdsOffer__OnInterstitialShown_220ce74(0);
        uVar8 = *(undefined8 *)(param_1 + 0x10);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_GameTracking__InterOpportunity_2218f90
                  (uVar8,*(undefined8 *)PTR_DAT_04cad188,*(undefined8 *)PTR_DAT_04ca9c30,0);
        Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
        plVar10 = (long *)FUN_02133068(*(undefined8 *)puVar3,0xe);
        puVar2 = PTR_DAT_04caa858;
        if (plVar10 != (long *)0x0) {
          if ((*(long *)PTR_DAT_04caa858 == 0) ||
             (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04caa858,*(undefined8 *)(*plVar10 + 0x40)
                                         ), lVar11 != 0)) {
            if ((int)plVar10[3] != 0) {
              plVar10[4] = *(long *)puVar2;
              thunk_FUN_02134474();
              puVar2 = PTR_DAT_04cacae0;
              if ((*(long *)PTR_DAT_04cacae0 != 0) &&
                 (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cacae0,
                                              *(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
              goto LAB_022795c4;
              if ((*(uint *)(plVar10 + 3) & 0xfffffffe) != 0) {
                plVar10[5] = *(long *)puVar2;
                thunk_FUN_02134474();
                puVar2 = PTR_DAT_04cad120;
                    /* try { // try from 02278fd0 to 02378ff3 has its CatchHandler @ 02278fd0
                       catch() { ... } // from try @ 02278fd0 with catch @ 02278fd0
                       catch() { ... } // from try @ 02278ffc with catch @ 02278fd0 */
                if ((*(long *)PTR_DAT_04cad120 != 0) &&
                   (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad120,
                                                *(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
                goto LAB_022795c4;
                if (2 < *(uint *)(plVar10 + 3)) {
                  plVar10[6] = *(long *)puVar2;
                    /* try { // try from 02278ff4 to 02378ffb has its CatchHandler @ 02279020 */
                  thunk_FUN_02134474();
                    /* try { // try from 02278ffc to 0237903b has its CatchHandler @ 02278fd0 */
                  lVar11 = Dino_BusSand_App_Ads__InterScene_2176940(*(undefined8 *)(param_1 + 0x10))
                  ;
                  if ((lVar11 != 0) &&
                     (lVar9 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar10 + 0x40)),
                     lVar9 == 0)) goto LAB_022795c4;
                    /* catch() { ... } // from try @ 02278ff4 with catch @ 02279020 */
                  if ((*(uint *)(plVar10 + 3) & 0xfffffffc) != 0) {
                    plVar10[7] = lVar11;
                    thunk_FUN_02134474(plVar10 + 7,lVar11);
                    puVar2 = PTR_DAT_04cad150;
                    if ((*(long *)PTR_DAT_04cad150 != 0) &&
                       (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad150,
                                                    *(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
                    goto LAB_022795c4;
                    if (4 < *(uint *)(plVar10 + 3)) {
                      plVar10[8] = *(long *)puVar2;
                      thunk_FUN_02134474();
                      puVar2 = PTR_DAT_04ca9ac8;
                      lStack_70 = *(long *)(param_1 + 0x28) * 1000;
                      lVar11 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&lStack_70);
                      if ((lVar11 != 0) &&
                         (lVar9 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar10 + 0x40)),
                         lVar9 == 0)) goto LAB_022795c4;
                      if (5 < *(uint *)(plVar10 + 3)) {
                        plVar10[9] = lVar11;
                        thunk_FUN_02134474(plVar10 + 9,lVar11);
                        puVar3 = PTR_DAT_04cad108;
                    /* try { // try from 022790e4 to 02379113 has its CatchHandler @ 022790e4
                       catch() { ... } // from try @ 022790e4 with catch @ 022790e4
                       catch() { ... } // from try @ 02279120 with catch @ 022790e4 */
                        if ((*(long *)PTR_DAT_04cad108 != 0) &&
                           (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad108,
                                                        *(undefined8 *)(*plVar10 + 0x40)),
                           lVar11 == 0)) goto LAB_022795c4;
                        if (6 < *(uint *)(plVar10 + 3)) {
                          plVar10[10] = *(long *)puVar3;
                          thunk_FUN_02134474();
                          lStack_98 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
                    /* try { // try from 02279114 to 0237911f has its CatchHandler @ 02279140 */
                          lStack_98 = lStack_98 * 1000;
                    /* try { // try from 02279120 to 0237915b has its CatchHandler @ 022790e4 */
                          lVar11 = FUN_02133100(*(undefined8 *)(puVar2 + 0x68),&lStack_98);
                    /* catch() { ... } // from try @ 02279114 with catch @ 02279140 */
                          if ((lVar11 != 0) &&
                             (lVar9 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar10 + 0x40)),
                             lVar9 == 0)) goto LAB_022795c4;
                          if ((*(uint *)(plVar10 + 3) & 0xfffffff8) != 0) {
                            plVar10[0xb] = lVar11;
                            thunk_FUN_02134474(plVar10 + 0xb,lVar11);
                            puVar3 = PTR_DAT_04cad0f8;
                            if ((*(long *)PTR_DAT_04cad0f8 != 0) &&
                               (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad0f8,
                                                            *(undefined8 *)(*plVar10 + 0x40)),
                               lVar11 == 0)) goto LAB_022795c4;
                            if (8 < *(uint *)(plVar10 + 3)) {
                              plVar10[0xc] = *(long *)puVar3;
                              thunk_FUN_02134474();
                              lStack_a0 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
                              lStack_a0 = lStack_a0 - *(long *)(param_1 + 0x28);
                              lVar11 = FUN_02133100(*(undefined8 *)(puVar2 + 0x68),&lStack_a0);
                              if ((lVar11 != 0) &&
                                 (lVar9 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar10 + 0x40)
                                                            ), lVar9 == 0)) goto LAB_022795c4;
                              if (9 < *(uint *)(plVar10 + 3)) {
                                plVar10[0xd] = lVar11;
                                thunk_FUN_02134474(plVar10 + 0xd,lVar11);
                                puVar2 = PTR_DAT_04ca9ce8;
                    /* catch() { ... } // from try @ 0227924c with catch @ 02279204 */
                                if ((*(long *)PTR_DAT_04ca9ce8 != 0) &&
                                   (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04ca9ce8,
                                                                *(undefined8 *)(*plVar10 + 0x40)),
                                   lVar11 == 0)) goto LAB_022795c4;
                                if (10 < *(uint *)(plVar10 + 3)) {
                                  plVar10[0xe] = *(long *)puVar2;
                                  thunk_FUN_02134474();
                                  puVar2 = PTR_DAT_04cad110;
                    /* try { // try from 02279240 to 0237924b has its CatchHandler @ 0227926c */
                    /* try { // try from 0227924c to 02379297 has its CatchHandler @ 02279204 */
                                  if ((*(long *)PTR_DAT_04cad110 != 0) &&
                                     (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad110,
                                                                  *(undefined8 *)(*plVar10 + 0x40)),
                                     lVar11 == 0)) goto LAB_022795c4;
                                  if (0xb < *(uint *)(plVar10 + 3)) {
                                    plVar10[0xf] = *(long *)puVar2;
                    /* catch() { ... } // from try @ 02279240 with catch @ 0227926c */
                                    thunk_FUN_02134474();
                                    puVar2 = PTR_DAT_04cacc00;
                                    if ((*(long *)PTR_DAT_04cacc00 != 0) &&
                                       (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cacc00,
                                                                    *(undefined8 *)(*plVar10 + 0x40)
                                                                   ), lVar11 == 0))
                                    goto LAB_022795c4;
                                    if (0xc < *(uint *)(plVar10 + 3)) {
                                      plVar10[0x10] = *(long *)puVar2;
                                      thunk_FUN_02134474();
                                      puVar2 = PTR_DAT_04cad160;
                                      if ((*(long *)PTR_DAT_04cad160 != 0) &&
                                         (lVar11 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad160,
                                                                      *(undefined8 *)
                                                                       (*plVar10 + 0x40)),
                                         lVar11 == 0)) goto LAB_022795c4;
                                      if (0xd < *(uint *)(plVar10 + 3)) {
                                        plVar10[0x11] = *(long *)puVar2;
                                        thunk_FUN_02134474();
                                        if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                                          thunk_FUN_0218fdac();
                                        }
                                        Dino_BusSand_App_Analytics__Log_216d0c8
                                                  (*(undefined8 *)PTR_DAT_04cad0e8,plVar10);
                                        goto LAB_0227958c;
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
            goto LAB_022795c0;
          }
          goto LAB_022795c4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

