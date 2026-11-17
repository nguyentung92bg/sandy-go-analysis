/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$OnClickBg
void Dino_BusSand_App_UI_YachtRacingPanel__OnClickBg (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$OnClickBg
   void Dino_BusSand_App_UI_YachtRacingPanel__OnClickBg (Dino_BusSand_App_UI_YachtRacingPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingPanel__OnClickBg_21ede18(long param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  if ((bRam0000000004f9bc04 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1250);
    FUN_02132f7c(PTR_DAT_04cb1258);
    bRam0000000004f9bc04 = 1;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    Dino_BusSand_App_UI_YachtRacingRewardTips__Hide_21ed9b4();
  }
  if (((*(char *)(param_1 + 0x90) != '\0') && (*(char *)(param_1 + 0x2c) == '\0')) &&
     (*(long *)(param_1 + 0x40) != 0)) {
    *(undefined1 *)(param_1 + 0x90) = 0;
    Dino_BusSand_App_UI_YachtRacingPanel__StopBounceLoop_21edd6c(param_1);
    puVar2 = PTR_DAT_04ca9ae8;
    uVar9 = *(undefined8 *)(param_1 + 0x88);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)(param_1 + 0x88) == 0) ||
         (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x88),0),
         lVar6 == 0)) goto LAB_022edfac;
                    /* catch() { ... } // from try @ 022ede8c with catch @ 022edef4 */
      UnityEngine_GameObject__SetActive_43c1408(lVar6,0,0);
    }
    puVar3 = PTR_DAT_04caa458;
    uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    /* try { // try from 022edf20 to 023edfcf has its CatchHandler @ 022edf20
                       catch() { ... } // from try @ 022edf20 with catch @ 022edf20
                       catch() { ... } // from try @ 022edfd8 with catch @ 022edf20 */
    System_Action___ctor_47b5ed0(uVar9,param_1,*(undefined8 *)PTR_DAT_04cb1258,0);
    uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Action___ctor_47b5ed0(uVar7,param_1,*(undefined8 *)PTR_DAT_04cb1250,0);
    uVar9 = Dino_BusSand_App_UI_YachtRacingUi__OpenReward_21f8594(uVar9,uVar7,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
LAB_022edfac:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_Meta_YachtRacingCore__OnClaimReward_2258b14(*(long *)(param_1 + 0x40),0);
      if ((bRam0000000004f9bc05 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9bc05 = 1;
      }
      if (*(char *)(param_1 + 0x92) == '\0') {
        *(undefined1 *)(param_1 + 0x92) = 1;
        Dino_BusSand_App_UI_YachtRacingPanel__StopBounceLoop_21edd6c(param_1);
        *(undefined1 *)(param_1 + 0x93) = 0;
        if (*(long *)(param_1 + 0x38) == 0) {
          lVar6 = 0;
        }
        else {
          plVar8 = (long *)(*(long *)(param_1 + 0x38) + 0x18);
          lVar6 = *plVar8;
          *plVar8 = 0;
          thunk_FUN_02134474(plVar8,0);
        }
        lVar11 = *(long *)(param_1 + 0x40);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
        if (((uVar5 & 1) != 0) && (*(char *)(param_1 + 0x2c) == '\0')) {
          Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
        }
        if ((lVar11 != 0) &&
           (iVar4 = Dino_BusSand_App_Meta_YachtRacingCore__get_State_22553b4(lVar11,0),
           fVar1 = _UNK_00e20390, iVar4 == 2)) {
          lVar6 = Dino_BusSand_App_UI_YachtRacingUi__Once_21f7ef4(lVar6,lVar6,0);
          uVar5 = Dino_BusSand_App_UI_YachtRacingUi__CanOpenStart_21f809c();
          if ((uVar5 & 1) == 0) {
            if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022f807c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
              return;
            }
LAB_022f8098:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (cRam0000000004f9b94d == '\0') {
            FUN_02132f7c(PTR_DAT_04cad1b0);
            cRam0000000004f9b94d = '\x01';
          }
          if (0.0 < fVar1) {
            lVar11 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
            if (lVar11 == 0) goto LAB_022f8098;
            uVar5 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(lVar11,0);
            if ((uVar5 & 1) != 0) {
              lVar6 = Dino_BusSand_App_UI_YachtRacingUi__DelayedStart_21f81e8(fVar1,0,lVar6);
              if (lVar6 == 0) {
                thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
                uVar7 = thunk_FUN_0216e89c();
                uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
                System_NullReferenceException___ctor_483267c(uVar7,uVar9,0);
              }
              else {
                uVar5 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
                if ((uVar5 & 1) != 0) {
                  if ((bRam0000000004fa84ef & 1) == 0) {
                    FUN_02132f7c(PTR_DAT_04cf7890);
                    bRam0000000004fa84ef = 1;
                  }
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  lVar10 = *(long *)(lVar11 + 0x10);
                  if (lVar10 != 0) {
                    if (pcRam0000000004fa8560 == (code *)0x0) {
                      pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                    }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000004fa8560)(lVar10,lVar6);
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar11,0);
                }
                thunk_FUN_021985a8(PTR_DAT_04caa3a8);
                uVar7 = thunk_FUN_0216e89c();
                uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
                System_ArgumentException___ctor_47b660c(uVar7,uVar9,0);
              }
              uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar7,uVar9);
            }
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
          lVar10 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
          lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
          Dino_BusSand_App_UI_YachtRacingStartPanel_Param___ctor_21f2d50(lVar11,0);
          if (lVar11 != 0) {
            *(long *)(lVar11 + 0x18) = lVar6;
            *(undefined1 *)(lVar11 + 0x10) = 0;
            thunk_FUN_02134474((long *)(lVar11 + 0x18),lVar6);
            puVar2 = PTR_DAT_04ca9ae8;
            if (lVar10 != 0) {
              uVar9 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                                (lVar10,*(undefined8 *)PTR_DAT_04cb1800,2,lVar11,
                                 *(undefined8 *)PTR_DAT_04cb1810);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
              if ((uVar5 & 1) == 0) {
                return;
              }
              if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022f83b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar6 + 0x18))
                          (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
                return;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022ee0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
          return;
        }
      }
      return;
    }
  }
                    /* try { // try from 022ede8c to 023ede93 has its CatchHandler @ 022edef4 */
                    /* try { // try from 022ede94 to 023edf1f has its CatchHandler @ 022edddc */
  return;
}

