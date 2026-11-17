/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$PlayForward
void Dino_BusSand_App_UI_YachtRacingTrackRow__PlayForward (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, Dino_BusSand_App_Meta_YachtRacingBot_o* bot, bool playMoveSound, bool playDownHitSound, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$PlayForward
   void Dino_BusSand_App_UI_YachtRacingTrackRow__PlayForward
   (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, Dino_BusSand_App_Meta_YachtRacingBot_o* bot,
   bool playMoveSound, bool playDownHitSound, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingTrackRow__PlayForward_21f6620
               (long param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  long *plVar11;
  undefined8 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  
  if (param_2 == 0) {
    return;
  }
  *(long *)(param_1 + 0x20) = param_2;
  thunk_FUN_02134474();
  Dino_BusSand_App_UI_YachtRacingTrackRow__ActiveYacht_21f6310
            (param_1,*(undefined1 *)(param_2 + 0x2d));
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 != *(int *)(param_2 + 0x18)) {
    iVar2 = *(int *)(param_1 + 0x28);
    *(bool *)(param_1 + 0x34) = iVar2 <= iVar1;
    if (iVar1 < iVar2) {
      fVar10 = 472.0;
      fVar15 = (float)iVar1 / (float)iVar2;
      fVar16 = 1.0;
      if (fVar15 <= 1.0) {
        fVar16 = fVar15;
      }
      fVar13 = 0.0;
      if (0.0 <= fVar15) {
        fVar13 = fVar16;
      }
      fVar13 = fVar13 * *(float *)(param_1 + 0x30);
    }
    else {
      fVar10 = 500.0;
      fVar13 = *(float *)(param_1 + 0x30) + 472.0;
    }
    plVar11 = (long *)(param_1 + 200);
    if (*plVar11 != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,*plVar11,0);
      *(undefined8 *)(param_1 + 200) = 0;
      thunk_FUN_02134474(plVar11,0);
    }
    lVar9 = Dino_BusSand_App_UI_YachtRacingUi__get_Core_21f6838();
    if (lVar9 != 0) {
      Dino_BusSand_App_Meta_YachtRacingCore__SetBotLastWinCount_2258d54
                (lVar9,*(undefined4 *)(param_2 + 0x10),0);
    }
    uVar7 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0);
    puVar3 = PTR_DAT_04ca9ae8;
    bVar4 = iVar2 <= iVar1;
    if ((uVar7 & 1) != 0) {
      uVar8 = Dino_BusSand_App_UI_YachtRacingTrackRow__Forward_21f6a6c
                        (fVar13 + fVar10,param_1,bVar4,param_3 & 1);
      uVar8 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar8,0);
      *(undefined8 *)(param_1 + 200) = uVar8;
code_r0x02132f28:
      if (iRam00000000051c1b10 != 0) {
        FUN_02220bf0(1L << ((ulong)plVar11 >> 0xc & 0x3f),
                     ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
      }
      return;
    }
    if ((bRam0000000004f9bc3a & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      bRam0000000004f9bc3a = 1;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
    if ((uVar7 & 1) != 0) {
      lVar9 = *(long *)(param_1 + 0x48);
      if (lVar9 == 0) goto LAB_022f6a68;
      uVar14 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar9,0);
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(uVar14,fVar13 + fVar10,lVar9,0);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar12 = *(undefined8 *)(param_1 + 0x68);
      uVar8 = System_Int32__ToString_482d750(*(long *)(param_1 + 0x20) + 0x14,0);
      Dino_BusSand_App_UI_YachtRacingUi__SetTexts_21f4bb8(uVar12,uVar8);
      if (*(long *)(param_1 + 0x20) != 0) {
        Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8
                  (*(undefined8 *)(param_1 + 0x80),*(int *)(*(long *)(param_1 + 0x20) + 0x28) == 1);
        Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f6568(*(undefined8 *)(param_1 + 0xb0),0);
        Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f6568(*(undefined8 *)(param_1 + 0xa8),!bVar4)
        ;
        if ((bool)(~bVar4 & 1)) {
          return;
        }
        Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f60f8(*(undefined8 *)(param_1 + 0x48),0);
        if (*(long *)(param_1 + 0x20) != 0) {
          lVar9 = 0x58;
          if (*(char *)(*(long *)(param_1 + 0x20) + 0x2c) != '\0') {
            lVar9 = 0x50;
          }
          lVar9 = *(long *)(param_1 + lVar9);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
          if ((uVar7 & 1) != 0) {
            return;
          }
          if (cRam0000000004f9b65e == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65e = '\x01';
          }
          if (lVar9 != 0) {
            lVar6 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
            UnityEngine_Transform__set_localScale_43d1be0
                      (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                       *(undefined4 *)(lVar6 + 0x14),lVar9,0);
            if (cRam0000000004f9b948 == '\0') {
              FUN_02132f7c(PTR_DAT_04cacfc0);
              cRam0000000004f9b948 = '\x01';
            }
            UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                      (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                       (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],lVar9,0);
            lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
            if (lVar9 != 0) {
              bVar4 = true;
              goto UnityEngine_GameObject__SetActive_43c1408;
            }
          }
        }
      }
    }
LAB_022f6a68:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar7 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0);
  puVar3 = PTR_DAT_04ca9ae8;
  if ((uVar7 & 1) != 0) {
    plVar11 = (long *)(param_1 + 0xe0);
    if (*plVar11 != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,*plVar11,0);
    }
    uVar8 = Dino_BusSand_App_UI_YachtRacingTrackRow__GoldMedalLater_21f6c8c(param_1);
    uVar8 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar8,0);
    *(undefined8 *)(param_1 + 0xe0) = uVar8;
    goto code_r0x02132f28;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar9 = *(long *)(param_1 + 0x80);
  bVar4 = *(int *)(*(long *)(param_1 + 0x20) + 0x28) == 1;
  if ((bRam0000000004f9bc50 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc50 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if ((lVar9 == 0) || (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0), lVar6 == 0))
  {
LAB_022f61bc:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  bVar5 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar6,0);
  if ((bool)(bVar5 & 1) == bVar4) {
    return;
  }
  lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
  if (lVar9 == 0) goto LAB_022f61bc;
UnityEngine_GameObject__SetActive_43c1408:
  if ((bRam0000000004fa8360 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf5bd0,bVar4,0);
    bRam0000000004fa8360 = 1;
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar6 = *(long *)(lVar9 + 0x10);
  if (lVar6 != 0) {
    if (pcRam0000000004fa8430 == (code *)0x0) {
      pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
    }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fa8430)(lVar6,bVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar9,0);
}

