/* IL2CPP: Dino.BusSand.App.GameApp.<ChallengeWin>d__98$$MoveNext
bool Dino_BusSand_App_GameApp__ChallengeWin_d__98__MoveNext (Dino_BusSand_App_GameApp__ChallengeWin_d__98_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.GameApp.<ChallengeWin>d__98$$MoveNext
   bool Dino_BusSand_App_GameApp__ChallengeWin_d__98__MoveNext
   (Dino_BusSand_App_GameApp__ChallengeWin_d__98_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_GameApp__ChallengeWin_d__98__MoveNext_216dcf8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_24;
  
  if ((bRam0000000004f9b8a6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b0);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04caca68);
    FUN_02132f7c(PTR_DAT_04caca70);
    FUN_02132f7c(PTR_DAT_04caca78);
    FUN_02132f7c(PTR_DAT_04caca80);
    FUN_02132f7c(PTR_DAT_04cac678);
    FUN_02132f7c(PTR_DAT_04cac6e0);
    FUN_02132f7c(PTR_DAT_04cac5e8);
    FUN_02132f7c(PTR_DAT_04cac7c8);
    FUN_02132f7c(PTR_DAT_04cac7d0);
                    /* catch() { ... } // from try @ 0226de30 with catch @ 0226de10 */
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cac7d8);
                    /* try { // try from 0226de24 to 0236de2f has its CatchHandler @ 0226de60 */
    FUN_02132f7c(PTR_DAT_04cabc00);
                    /* try { // try from 0226de30 to 0236de7f has its CatchHandler @ 0226de10 */
    FUN_02132f7c(PTR_DAT_04caca90);
    FUN_02132f7c(PTR_DAT_04caca98);
    bRam0000000004f9b8a6 = 1;
  }
  puVar2 = PTR_DAT_04caca80;
  iVar1 = *(int *)(param_1 + 0x10);
  lVar8 = *(long *)(param_1 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
                    /* catch() { ... } // from try @ 0226de24 with catch @ 0226de60 */
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Object___ctor_4870e5c(lVar3,0);
      plVar7 = (long *)(param_1 + 0x28);
      *plVar7 = lVar3;
      thunk_FUN_02134474(plVar7,lVar3);
      if (*plVar7 != 0) {
        *(undefined8 *)(*plVar7 + 0x18) = *(undefined8 *)(param_1 + 0x20);
        thunk_FUN_02134474();
        if ((lVar8 != 0) && (*(long *)(lVar8 + 0x28) != 0)) {
          Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                    (*(long *)(lVar8 + 0x28),*(undefined8 *)PTR_DAT_04cac5e8);
          if (*(long *)(lVar8 + 0x28) != 0) {
            Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                      (*(long *)(lVar8 + 0x28),*(undefined8 *)PTR_DAT_04cac678);
            if (*(long *)(lVar8 + 0x28) != 0) {
              Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                        (*(long *)(lVar8 + 0x28),*(undefined8 *)PTR_DAT_04cac6e0);
              lVar3 = Dino_BusSand_App_Meta_DailyChallengeFeature__get_I_222f7d4(0);
              if (lVar3 == 0) {
                uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
                System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
                          (uVar4,*(undefined8 *)PTR_DAT_04caca50);
              }
              else {
                uVar4 = Dino_BusSand_App_Meta_DailyChallengeFeature__CompleteToday_222fb4c(lVar3,0);
              }
              *(undefined8 *)(param_1 + 0x30) = uVar4;
              thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar4);
              if (*(int *)(*(long *)PTR_DAT_04cabaa8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_Ads__OnLevelResult_216e2bc();
              plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
              puVar2 = PTR_DAT_04cabc00;
              if (plVar7 != (long *)0x0) {
                if ((*(long *)PTR_DAT_04cabc00 != 0) &&
                   (lVar3 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cabc00,
                                               *(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0)) {
LAB_0226e2b0:
                  uVar4 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                  FUN_021330e8(uVar4,0);
                }
                if ((int)plVar7[3] != 0) {
                  plVar7[4] = *(long *)puVar2;
                  thunk_FUN_02134474();
                  uStack_24 = *(undefined4 *)(lVar8 + 0x60);
                  lVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_24);
                  if ((lVar8 != 0) &&
                     (lVar3 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0)
                     ) goto LAB_0226e2b0;
                  if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
                    plVar7[5] = lVar8;
                    thunk_FUN_02134474(plVar7 + 5,lVar8);
                    if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04caca90,plVar7);
                    if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    Dino_BusSand_App_Audio__FadeOutMusic_214dbec(_UNK_00e20390,0);
                    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
                    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e2098c,uVar4,0);
                    *(undefined8 *)(param_1 + 0x18) = uVar4;
                    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar4);
                    *(undefined4 *)(param_1 + 0x10) = 1;
                    return 1;
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
            }
          }
        }
      }
      goto LAB_0226e2a8;
    }
    lVar3 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar2 = PTR_DAT_04caa458;
    if (lVar3 == 0) goto LAB_0226e2a8;
    *(undefined1 *)(lVar3 + 0x10) = 0;
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Action___ctor_47b5ed0(uVar4,lVar3,*(undefined8 *)PTR_DAT_04caca68,0);
    if (*(int *)(*(long *)PTR_DAT_04cabaa8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Ads__ShowInterstitialIfAllowed_216e370(*(undefined8 *)PTR_DAT_04caca98,uVar4);
  }
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_0226e2a8;
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x10) == '\0') {
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 2;
    return 1;
  }
  if (lVar8 == 0) goto LAB_0226e2a8;
  lVar3 = *(long *)(param_1 + 0x30);
  *(undefined4 *)(lVar8 + 0x60) = 0;
  if (lVar3 == 0) goto LAB_0226e2a8;
  if (*(int *)(lVar3 + 0x18) < 1) {
LAB_0226dfdc:
    lVar8 = 0;
  }
  else {
    if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0226e2a8;
    uVar5 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (*(long *)(lVar8 + 0x28),*(undefined8 *)PTR_DAT_04cac7c8);
    if ((uVar5 & 1) != 0) goto LAB_0226dfdc;
    if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0226e2a8;
    lVar8 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                      (*(long *)(lVar8 + 0x28),*(undefined8 *)PTR_DAT_04cac7d8,4,
                       *(undefined8 *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cac7d0);
  }
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if ((uVar5 & 1) == 0) {
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar6,uVar4,*(undefined8 *)PTR_DAT_04caca78,0);
    if (*(int *)(*(long *)PTR_DAT_04cabb00 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    Dino_BusSand_App_UI_ScreenFade__Run_2289914(uVar6,&uStack_48,0);
  }
  else {
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7b0);
    System_Action_Vector3____ctor_35f2828(uVar6,uVar4,*(undefined8 *)PTR_DAT_04caca70,0);
    if (lVar8 == 0) {
LAB_0226e2a8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined8 *)(lVar8 + 0x50) = uVar6;
    thunk_FUN_02134474((undefined8 *)(lVar8 + 0x50),uVar6);
  }
  return 0;
}

