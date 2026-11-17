/* IL2CPP: Dino.BusSand.App.UI.HomeQueue.<Run>d__1$$MoveNext
bool Dino_BusSand_App_UI_HomeQueue__Run_d__1__MoveNext (Dino_BusSand_App_UI_HomeQueue__Run_d__1_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeQueue.<Run>d__1$$MoveNext
   bool Dino_BusSand_App_UI_HomeQueue__Run_d__1__MoveNext
   (Dino_BusSand_App_UI_HomeQueue__Run_d__1_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_HomeQueue__Run_d__1__MoveNext_23207e4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  char acStack_24 [4];
  
  if ((bRam0000000004f9c5ae & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9af8);
                    /* try { // try from 02420824 to 02520a5b has its CatchHandler @ 02420824
                       catch() { ... } // from try @ 02420824 with catch @ 02420824
                       catch() { ... } // from try @ 02420da4 with catch @ 02420824
                       catch() { ... } // from try @ 02420e6c with catch @ 02420824
                       catch() { ... } // from try @ 02420f28 with catch @ 02420824 */
    FUN_02132f7c(PTR_DAT_04cb89c8);
    FUN_02132f7c(PTR_DAT_04cb89d0);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cb89d8);
    FUN_02132f7c(PTR_DAT_04cb8958);
    FUN_02132f7c(PTR_DAT_04cb89e0);
    FUN_02132f7c(PTR_DAT_04cb7708);
    FUN_02132f7c(PTR_DAT_04cb89e8);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cac718);
    FUN_02132f7c(PTR_DAT_04cb63f8);
    FUN_02132f7c(PTR_DAT_04cb89f0);
    FUN_02132f7c(PTR_DAT_04cb89f8);
    FUN_02132f7c(PTR_DAT_04cb7410);
    FUN_02132f7c(PTR_DAT_04cb8a00);
    FUN_02132f7c(PTR_DAT_04cb0060);
    bRam0000000004f9c5ae = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  uVar3 = 0;
  if (iVar1 < 5) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        Dino_BusSand_App_Meta_OfferScheduler__OnHomeArrival_220c6bc(0);
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
        thunk_FUN_02134474();
        uVar6 = *(undefined8 *)PTR_DAT_04caca88;
        *(undefined4 *)(param_1 + 0x38) = 0;
        uVar6 = thunk_FUN_0216e89c(uVar6);
        UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e20994,uVar6,0);
        *(undefined8 *)(param_1 + 0x18) = uVar6;
                    /* try { // try from 02420a5c to 02520a83 has its CatchHandler @ 02420ef0 */
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
        uVar8 = 1;
        goto LAB_02420e6c;
      }
      if (iVar1 != 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar3 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                        (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cb7708);
      if ((uVar3 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x3c) = 0;
        goto LAB_02420a84;
      }
LAB_02420ad8:
      uVar3 = Dino_BusSand_App_UI_HomeQueue__Ready_232016c(*(undefined8 *)(param_1 + 0x20));
      if ((uVar3 & 1) == 0) {
        uVar6 = Dino_BusSand_App_UI_HomeQueue__Wait_2320734(*(undefined8 *)(param_1 + 0x20));
        *(undefined8 *)(param_1 + 0x18) = uVar6;
        thunk_FUN_02134474();
                    /* try { // try from 02420c74 to 02520c7f has its CatchHandler @ 02420ebc */
        uVar8 = 4;
        goto LAB_02420e6c;
      }
    }
    else {
      if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (*(float *)(param_1 + 0x3c) < 8.0) {
LAB_02420a84:
          if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar3 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                            (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cb7708);
          if ((uVar3 & 1) != 0) {
            fVar12 = *(float *)(param_1 + 0x3c);
            fVar11 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
            *(undefined8 *)(param_1 + 0x18) = 0;
            *(float *)(param_1 + 0x3c) = fVar12 + fVar11;
            thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
                    /* try { // try from 02420ac8 to 02520aef has its CatchHandler @ 02420eec */
            uVar8 = 2;
            goto LAB_02420e6c;
          }
        }
                    /* try { // try from 02420ba8 to 02520bb3 has its CatchHandler @ 02420ea0 */
                    /* try { // try from 02420bb4 to 02520bbb has its CatchHandler @ 02420ea4 */
        uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
        UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e200f8,uVar6,0);
                    /* try { // try from 02420bcc to 02520bd7 has its CatchHandler @ 02420ea8 */
        *(undefined8 *)(param_1 + 0x18) = uVar6;
                    /* try { // try from 02420bd8 to 02520bdf has its CatchHandler @ 02420eb0 */
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
        uVar8 = 3;
        goto LAB_02420e6c;
      }
      if (iVar1 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        goto LAB_02420ad8;
      }
      if (iVar1 != 4) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    uVar3 = Dino_BusSand_App_UI_HomeQueue__Ready_232016c(*(undefined8 *)(param_1 + 0x20));
    puVar2 = PTR_DAT_04cac5c0;
    if ((uVar3 & 1) == 0) {
      lVar9 = *(long *)PTR_DAT_04cac5c0;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar2;
      }
      if (*(char *)(*(long *)(lVar9 + 0xb8) + 8) == '\0') {
        return 0;
      }
      uVar6 = Dino_BusSand_App_UI_HomeQueue__Why_232032c(*(undefined8 *)(param_1 + 0x20));
      uVar6 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb8a00,uVar6,0);
                    /* try { // try from 02420c3c to 02520c47 has its CatchHandler @ 02420e94 */
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 02420c4c to 02520c53 has its CatchHandler @ 02420e98 */
      UnityEngine_Debug__Log_4360fc8(uVar6,0);
      return 0;
    }
    uVar3 = Dino_BusSand_App_Meta_WelcomeBack__get_Pending_220ec8c(0);
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 02420b00 to 02520b07 has its CatchHandler @ 02420edc */
                    /* try { // try from 02420b0c to 02520b13 has its CatchHandler @ 02420ee4 */
                    /* try { // try from 02420b14 to 02520b1f has its CatchHandler @ 02420ed8 */
      uVar6 = *(undefined8 *)PTR_DAT_04cb89f0;
      uVar7 = *(undefined8 *)PTR_DAT_04cb89e0;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
                    /* try { // try from 02420b30 to 02520b3b has its CatchHandler @ 02420ed4 */
      uVar6 = Dino_BusSand_App_UI_PostWinFlow__Show_object__283e038
                        (*(undefined8 *)(param_1 + 0x30),uVar6,0,uVar7);
                    /* try { // try from 02420b3c to 02520b47 has its CatchHandler @ 02420ed0 */
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      thunk_FUN_02134474();
      uVar8 = 5;
      goto LAB_02420e6c;
    }
LAB_02420b54:
    plVar4 = (long *)Dino_BusSand_App_UI_LiveOpsHome__Steps_2321040(uVar3);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 02420b60 to 02520b6b has its CatchHandler @ 02420eac */
    lVar9 = *plVar4;
                    /* try { // try from 02420b6c to 02520b73 has its CatchHandler @ 02420eb4 */
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 02420b84 to 02520b8f has its CatchHandler @ 02420eb8 */
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04cb89c8) {
                    /* try { // try from 02420c84 to 02520c8b has its CatchHandler @ 02420ec0 */
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02420c88;
        }
        uVar3 = uVar3 - 1;
                    /* try { // try from 02420b90 to 02520b97 has its CatchHandler @ 02420e9c */
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_0216b7a4(plVar4,*(long *)PTR_DAT_04cb89c8,0);
LAB_02420c88:
    uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                    /* try { // try from 02420c9c to 02520ca7 has its CatchHandler @ 02420ec4 */
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    thunk_FUN_02134474();
  }
  else {
    if (iVar1 - 7U < 3) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_02420940;
    }
    if (iVar1 == 5) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_02420b54;
    }
    if (iVar1 != 6) {
      return 0;
    }
  }
  plVar4 = *(long **)(param_1 + 0x40);
                    /* try { // try from 02420cac to 02520cb3 has its CatchHandler @ 02420ec8 */
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
                    /* try { // try from 02420cb4 to 02520ccf has its CatchHandler @ 02420ecc */
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar9 = *plVar4;
  uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar3 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04ca9c08) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_02420d0c;
      }
      uVar3 = uVar3 - 1;
      piVar10 = piVar10 + 4;
                    /* try { // try from 02420cec to 02520cef has its CatchHandler @ 02420ee8 */
    } while (uVar3 != 0);
  }
  puVar5 = (undefined8 *)FUN_0216b7a4(plVar4,*(long *)PTR_DAT_04ca9c08,0);
LAB_02420d0c:
                    /* try { // try from 02420d0c to 02520d17 has its CatchHandler @ 02420e90 */
  uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                    /* try { // try from 02420d18 to 02520d23 has its CatchHandler @ 02420e8c */
  if ((uVar3 & 1) == 0) {
    Dino_BusSand_App_UI_HomeQueue__Run_d__1____m__Finally1_23210b0();
    *(undefined8 *)(param_1 + 0x40) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x40),0);
                    /* try { // try from 02420d8c to 02520d97 has its CatchHandler @ 02420e7c */
    uVar3 = Dino_BusSand_App_UI_HomeQueue__Ready_232016c(*(undefined8 *)(param_1 + 0x20));
                    /* try { // try from 02420d98 to 02520da3 has its CatchHandler @ 02420e78 */
                    /* try { // try from 02420da4 to 02520e67 has its CatchHandler @ 02420824 */
    if ((((uVar3 & 1) == 0) || (2 < *(int *)(param_1 + 0x38))) ||
       (uVar3 = Dino_BusSand_App_Meta_OfferScheduler__get_CanShowPopup_220c644(0), (uVar3 & 1) == 0)
       ) {
LAB_02420940:
      if (((*(char *)(param_1 + 0x28) != '\0') &&
          (uVar3 = Dino_BusSand_App_UI_HomeQueue__Ready_232016c(*(undefined8 *)(param_1 + 0x20)),
          (uVar3 & 1) != 0)) && (*(int *)(param_1 + 0x38) < 3)) {
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar3 = Dino_BusSand_App_GameApp__get_RateUsDue_21675a0(*(long *)(param_1 + 0x20),0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          Dino_BusSand_App_UI_UIManager__Open_object__2945314
                    (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cb89f8,2,0,
                     *(undefined8 *)PTR_DAT_04cb89e8);
        }
      }
                    /* catch() { ... } // from try @ 02420d68 with catch @ 02420e80 */
                    /* catch() { ... } // from try @ 02420d54 with catch @ 02420e84 */
                    /* catch() { ... } // from try @ 02420d44 with catch @ 02420e88 */
                    /* catch() { ... } // from try @ 02420d18 with catch @ 02420e8c */
                    /* catch() { ... } // from try @ 02420d0c with catch @ 02420e90 */
                    /* catch() { ... } // from try @ 02420c3c with catch @ 02420e94 */
      return 0;
    }
    uVar3 = Dino_BusSand_App_Meta_StarterOffer__get_PopupDue_220ca94(0);
    if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 02420c4c with catch @ 02420e98 */
      acStack_24[0] = '\0';
                    /* catch() { ... } // from try @ 02420b90 with catch @ 02420e9c */
                    /* catch() { ... } // from try @ 02420ba8 with catch @ 02420ea0 */
      Dino_BusSand_App_UI_LiveOpsHome__GiftPackDueImpl_2321aa4(acStack_24);
                    /* catch() { ... } // from try @ 02420bb4 with catch @ 02420ea4 */
                    /* catch() { ... } // from try @ 02420bcc with catch @ 02420ea8 */
      if (acStack_24[0] == '\0') {
                    /* catch() { ... } // from try @ 02420b30 with catch @ 02420ed4 */
                    /* catch() { ... } // from try @ 02420b14 with catch @ 02420ed8 */
        uVar3 = Dino_BusSand_App_Meta_NoAdsOffer__get_PopupDue_220cf50(0);
                    /* catch() { ... } // from try @ 02420b00 with catch @ 02420edc */
        if ((uVar3 & 1) == 0) goto LAB_02420940;
                    /* catch() { ... } // from try @ 02420e68 with catch @ 02420ee0 */
                    /* catch() { ... } // from try @ 02420b0c with catch @ 02420ee4 */
                    /* catch() { ... } // from try @ 02420cec with catch @ 02420ee8 */
        Dino_BusSand_App_Meta_OfferScheduler__Count_220c70c(0,0);
                    /* catch() { ... } // from try @ 02420ac8 with catch @ 02420eec */
                    /* catch() { ... } // from try @ 02420a5c with catch @ 02420ef0 */
        Dino_BusSand_App_Meta_NoAdsOffer__MarkShown_220d150(0);
                    /* try { // try from 02420f0c to 02520f0f has its CatchHandler @ 02420f1c */
                    /* catch() { ... } // from try @ 02420f0c with catch @ 02420f1c */
                    /* try { // try from 02420f20 to 02520f27 has its CatchHandler @ 02420f30 */
        uVar6 = Dino_BusSand_App_UI_PostWinFlow__Show_object__283e038
                          (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cb63f8,
                           *(undefined8 *)PTR_DAT_04cb0060,*(undefined8 *)PTR_DAT_04cb89d8);
                    /* try { // try from 02420f28 to 02520f33 has its CatchHandler @ 02420824 */
        *(undefined8 *)(param_1 + 0x18) = uVar6;
                    /* catch() { ... } // from try @ 02420f20 with catch @ 02420f30 */
        thunk_FUN_02134474();
        uVar8 = 9;
      }
      else {
                    /* catch() { ... } // from try @ 02420b60 with catch @ 02420eac */
                    /* catch() { ... } // from try @ 02420bd8 with catch @ 02420eb0 */
                    /* catch() { ... } // from try @ 02420b6c with catch @ 02420eb4 */
        Dino_BusSand_App_Meta_OfferScheduler__Count_220c70c(0,0);
                    /* catch() { ... } // from try @ 02420b84 with catch @ 02420eb8 */
        uVar6 = Dino_BusSand_App_UI_LiveOpsHome__ShowGiftPack_232117c();
                    /* catch() { ... } // from try @ 02420c74 with catch @ 02420ebc */
                    /* catch() { ... } // from try @ 02420c84 with catch @ 02420ec0 */
                    /* catch() { ... } // from try @ 02420c9c with catch @ 02420ec4 */
        *(undefined8 *)(param_1 + 0x18) = uVar6;
                    /* catch() { ... } // from try @ 02420cac with catch @ 02420ec8 */
        thunk_FUN_02134474();
                    /* catch() { ... } // from try @ 02420cb4 with catch @ 02420ecc */
        uVar8 = 8;
                    /* catch() { ... } // from try @ 02420b3c with catch @ 02420ed0 */
      }
    }
    else {
      Dino_BusSand_App_Meta_OfferScheduler__Count_220c70c(0,0);
      uVar6 = Dino_BusSand_App_UI_PostWinFlow__Show_object__283e038
                        (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cb7410,
                         *(undefined8 *)PTR_DAT_04cac718,*(undefined8 *)PTR_DAT_04cb8958);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      thunk_FUN_02134474();
      uVar8 = 7;
    }
  }
  else {
    plVar4 = *(long **)(param_1 + 0x40);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar9 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
                    /* try { // try from 02420d44 to 02520d4f has its CatchHandler @ 02420e88 */
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 02420d54 to 02520d5b has its CatchHandler @ 02420e84 */
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04cb89d0) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02420e20;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
                    /* try { // try from 02420d68 to 02520d6f has its CatchHandler @ 02420e80 */
    puVar5 = (undefined8 *)FUN_0216b7a4(plVar4,*(long *)PTR_DAT_04cb89d0,0);
LAB_02420e20:
    uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    uVar3 = Dino_BusSand_App_UI_HomeQueue__Ready_232016c(*(undefined8 *)(param_1 + 0x20));
    if (((uVar3 & 1) == 0) || (2 < *(int *)(param_1 + 0x38))) {
                    /* catch() { ... } // from try @ 02420d8c with catch @ 02420e7c */
      Dino_BusSand_App_UI_HomeQueue__Run_d__1____m__Finally1_23210b0();
      return 0;
    }
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
                    /* try { // try from 02420e68 to 02520e6b has its CatchHandler @ 02420ee0 */
    uVar8 = 6;
  }
LAB_02420e6c:
                    /* try { // try from 02420e6c to 02520f0b has its CatchHandler @ 02420824 */
  *(undefined4 *)(param_1 + 0x10) = uVar8;
  return 1;
                    /* catch() { ... } // from try @ 02420d98 with catch @ 02420e78 */
}

