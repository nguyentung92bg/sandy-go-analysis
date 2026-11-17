/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$OnClickClose
void Dino_BusSand_App_UI_YachtRacingPanel__OnClickClose (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$OnClickClose
   void Dino_BusSand_App_UI_YachtRacingPanel__OnClickClose (Dino_BusSand_App_UI_YachtRacingPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingPanel__OnClickClose_21ec24c(long param_1)

{
  float fVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  if ((*(char *)(param_1 + 0x2c) != '\0') || (*(char *)(param_1 + 0x92) != '\0')) {
    return;
  }
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (uVar4 = Dino_BusSand_App_Meta_YachtRacingCore__get_DataValid_22553cc
                        (*(long *)(param_1 + 0x40),0), (uVar4 & 1) == 0)) {
    if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar3 = Dino_BusSand_App_Meta_YachtRacingCore__get_State_22553b4(*(long *)(param_1 + 0x40),0);
    if (iVar3 == 7) {
      if ((*(char *)(param_1 + 0x91) != '\0') || (*(char *)(param_1 + 0x2c) != '\0')) {
        return;
      }
      if (*(long *)(param_1 + 0x58) != 0) {
        Dino_BusSand_App_UI_YachtRacingRewardTips__Hide_21ed9b4();
      }
      *(undefined1 *)(param_1 + 0x91) = 1;
      lVar5 = Dino_BusSand_App_UI_YachtRacingPanel__ClaimAnim_21eda68(param_1);
      uVar4 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      goto UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4;
    }
  }
  if ((bRam0000000004f9bc05 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc05 = 1;
  }
  if (*(char *)(param_1 + 0x92) == '\0') {
    *(undefined1 *)(param_1 + 0x92) = 1;
    Dino_BusSand_App_UI_YachtRacingPanel__StopBounceLoop_21edd6c(param_1);
    *(undefined1 *)(param_1 + 0x93) = 0;
    if (*(long *)(param_1 + 0x38) == 0) {
      lVar5 = 0;
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 0x38) + 0x18);
      lVar5 = *plVar6;
      *plVar6 = 0;
      thunk_FUN_02134474(plVar6,0);
    }
    lVar9 = *(long *)(param_1 + 0x40);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
    if (((uVar4 & 1) != 0) && (*(char *)(param_1 + 0x2c) == '\0')) {
      Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    }
    if ((lVar9 != 0) &&
       (iVar3 = Dino_BusSand_App_Meta_YachtRacingCore__get_State_22553b4(lVar9,0),
       fVar1 = _UNK_00e20390, iVar3 == 2)) {
      lVar5 = Dino_BusSand_App_UI_YachtRacingUi__Once_21f7ef4(lVar5,lVar5,0);
      uVar4 = Dino_BusSand_App_UI_YachtRacingUi__CanOpenStart_21f809c();
      if ((uVar4 & 1) == 0) {
        if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022f807c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
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
        param_1 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
        if (param_1 == 0) goto LAB_022f8098;
        uVar4 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0);
        if ((uVar4 & 1) != 0) {
          lVar5 = Dino_BusSand_App_UI_YachtRacingUi__DelayedStart_21f81e8(fVar1,0,lVar5);
UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4:
          if (lVar5 == 0) {
            thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
            uVar7 = thunk_FUN_0216e89c();
            uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
            System_NullReferenceException___ctor_483267c(uVar7,uVar8,0);
          }
          else {
            uVar4 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
            if ((uVar4 & 1) != 0) {
              if ((bRam0000000004fa84ef & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cf7890);
                bRam0000000004fa84ef = 1;
              }
              if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar9 = *(long *)(param_1 + 0x10);
              if (lVar9 != 0) {
                if (pcRam0000000004fa8560 == (code *)0x0) {
                  pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000004fa8560)(lVar9,lVar5);
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
      lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      Dino_BusSand_App_UI_YachtRacingStartPanel_Param___ctor_21f2d50(lVar9,0);
      if (lVar9 != 0) {
        *(long *)(lVar9 + 0x18) = lVar5;
        *(undefined1 *)(lVar9 + 0x10) = 0;
        thunk_FUN_02134474((long *)(lVar9 + 0x18),lVar5);
        puVar2 = PTR_DAT_04ca9ae8;
        if (lVar10 != 0) {
          uVar8 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                            (lVar10,*(undefined8 *)PTR_DAT_04cb1800,2,lVar9,
                             *(undefined8 *)PTR_DAT_04cb1810);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
          if ((uVar4 & 1) == 0) {
            return;
          }
          if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022f83b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28))
            ;
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022ee0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      return;
    }
  }
  return;
}

