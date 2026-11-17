/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$OnOpenYachtRacingBtnClick
void Dino_BusSand_App_UI_YachtRacingHallButton__OnOpenYachtRacingBtnClick (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022f7e80) */
/* WARNING: Removing unreachable block (ram,0x022f800c) */
/* WARNING: Removing unreachable block (ram,0x022f8024) */
/* WARNING: Removing unreachable block (ram,0x022f8034) */
/* WARNING: Removing unreachable block (ram,0x044c3ce4) */
/* WARNING: Removing unreachable block (ram,0x044c3cc0) */
/* WARNING: Removing unreachable block (ram,0x044c3cd0) */
/* WARNING: Removing unreachable block (ram,0x044c3d7c) */
/* WARNING: Removing unreachable block (ram,0x044c3d90) */
/* WARNING: Removing unreachable block (ram,0x044c3ddc) */
/* WARNING: Removing unreachable block (ram,0x044c3d94) */
/* WARNING: Removing unreachable block (ram,0x044c3da8) */
/* WARNING: Removing unreachable block (ram,0x044c3db4) */
/* WARNING: Removing unreachable block (ram,0x044c3dc8) */
/* WARNING: Removing unreachable block (ram,0x044c3d9c) */
/* WARNING: Removing unreachable block (ram,0x044c3d18) */
/* WARNING: Removing unreachable block (ram,0x044c3d48) */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$OnOpenYachtRacingBtnClick
   void Dino_BusSand_App_UI_YachtRacingHallButton__OnOpenYachtRacingBtnClick
   (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingHallButton__OnOpenYachtRacingBtnClick_21e99e4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
                    /* try { // try from 022e99f0 to 023e9a87 has its CatchHandler @ 022e99f0
                       catch() { ... } // from try @ 022e99f0 with catch @ 022e99f0
                       catch() { ... } // from try @ 022e9a90 with catch @ 022e99f0 */
  if ((bRam0000000004f9bbe7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0fa0);
    bRam0000000004f9bbe7 = 1;
  }
  uVar4 = Dino_BusSand_App_UI_YachtRacingHallButton__get_Alive_21e9704(param_1);
  puVar2 = PTR_DAT_04caba50;
  if ((uVar4 & 1) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 < 5) {
    if (iVar1 == 0) {
      if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar2;
      }
                    /* catch() { ... } // from try @ 022e9a88 with catch @ 022e9aec */
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
                    /* try { // try from 022e9b1c to 023e9bb3 has its CatchHandler @ 022e9b1c
                       catch() { ... } // from try @ 022e9b1c with catch @ 022e9b1c
                       catch() { ... } // from try @ 022e9bbc with catch @ 022e9b1c */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar2;
      }
      lVar8 = **(long **)(lVar6 + 0xb8);
      plVar5 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
      Dino_BusSand_App_Meta_SystemOpen__UnlockLevel_2242f94(5,0);
      lVar6 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffdc);
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 022e9bb4 to 023e9bbb has its CatchHandler @ 022e9c18 */
                    /* try { // try from 022e9bbc to 023e9c47 has its CatchHandler @ 022e9b1c */
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
          uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar9,0);
        }
        if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar5[4] = lVar6;
        thunk_FUN_02134474(plVar5 + 4,lVar6);
        uVar9 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10
                          (*(undefined8 *)PTR_DAT_04cb0fa0,plVar5,0);
        if (lVar8 != 0) {
          Dino_BusSand_App_GameApp__Toast_2166a6c(lVar8,uVar9,0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (iVar1 == 2) {
      lVar6 = Dino_BusSand_App_UI_YachtRacingUi__Once_21f7ef4(0,0,0);
      uVar4 = Dino_BusSand_App_UI_YachtRacingUi__CanOpenStart_21f809c();
      if ((uVar4 & 1) == 0) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
                    /* WARNING: Could not recover jumptable at 0x022f807c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
        return;
      }
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0);
        cRam0000000004f9b94d = '\x01';
      }
      if ((bRam0000000004f9bc49 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04cb1508);
        FUN_02132f7c(PTR_DAT_04cb1810);
        FUN_02132f7c(PTR_DAT_04cb1800);
        bRam0000000004f9bc49 = 1;
      }
      puVar2 = PTR_DAT_04cb1508;
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0);
        cRam0000000004f9b94d = '\x01';
      }
      lVar7 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
      lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      Dino_BusSand_App_UI_YachtRacingStartPanel_Param___ctor_21f2d50(lVar8,0);
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x18) = lVar6;
        *(undefined1 *)(lVar8 + 0x10) = 0;
        thunk_FUN_02134474((long *)(lVar8 + 0x18),lVar6);
        puVar2 = PTR_DAT_04ca9ae8;
        if (lVar7 != 0) {
          uVar9 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                            (lVar7,*(undefined8 *)PTR_DAT_04cb1800,2,lVar8,
                             *(undefined8 *)PTR_DAT_04cb1810);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
          if ((uVar4 & 1) == 0) {
            return;
          }
          if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022f83b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28))
            ;
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (iVar1 != 3) {
      return;
    }
  }
  else if (2 < iVar1 - 5U) {
    return;
  }
  if ((bRam0000000004f9bc46 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0,0,0);
    FUN_02132f7c(PTR_DAT_04cb1018);
    FUN_02132f7c(PTR_DAT_04cb17d0);
    FUN_02132f7c(PTR_DAT_04cb17d8);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb17e0);
    bRam0000000004f9bc46 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar6 = Dino_BusSand_App_UI_YachtRacingUi__Once_21f7ef4(0);
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar8 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  if (((uVar4 & 1) == 0) &&
     (lVar7 = Dino_BusSand_App_Meta_YachtRacingFeature__get_I_225aad4(0), lVar7 != 0)) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar3 = PTR_DAT_04cb17e0;
    uVar4 = Dino_BusSand_App_UiAssets__HasPrefab_2163510(*(undefined8 *)PTR_DAT_04cb17e0,0);
    if ((uVar4 & 1) != 0) {
      if (lVar8 == 0) goto LAB_022f7edc;
      uVar4 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                        (lVar8,*(undefined8 *)PTR_DAT_04cb17d0);
      if ((uVar4 & 1) == 0) {
        uVar9 = *(undefined8 *)puVar3;
        lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb1018);
        Dino_BusSand_App_UI_YachtRacingPanel_Param___ctor_21eb1d0(lVar7,0);
        if (lVar7 == 0) goto LAB_022f7edc;
        *(undefined1 *)(lVar7 + 0x10) = 0;
        *(undefined1 *)(lVar7 + 0x11) = 0;
        *(long *)(lVar7 + 0x18) = lVar6;
        thunk_FUN_02134474(2,(long *)(lVar7 + 0x18),lVar6);
        uVar9 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar8,uVar9,2,lVar7,*(undefined8 *)PTR_DAT_04cb17d8);
        lVar8 = *(long *)puVar2;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar8);
        }
        uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
      }
    }
  }
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022f7e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
    return;
  }
LAB_022f7edc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

