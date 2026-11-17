/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton.<PlayWinAnimation>d__27$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleHallButton__PlayWinAnimation_d__27__MoveNext (Dino_BusSand_App_UI_BattleRoyaleHallButton__PlayWinAnimation_d__27_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton.<PlayWinAnimation>d__27$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleHallButton__PlayWinAnimation_d__27__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleHallButton__PlayWinAnimation_d__27_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_BattleRoyaleHallButton__PlayWinAnimation_d__27__MoveNext_218c628(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((bRam0000000004f9b988 & 1) == 0) {
                    /* try { // try from 0228c648 to 0238c64f has its CatchHandler @ 0228c90c */
                    /* try { // try from 0228c650 to 0238c847 has its CatchHandler @ 0228c1a0 */
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cadc50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cadcc8);
    bRam0000000004f9b988 = 1;
  }
  puVar2 = PTR_DAT_04cadc50;
  puVar1 = PTR_DAT_04ca9ae8;
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 2) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0228c874 with catch @ 0228c8c0 */
      thunk_FUN_0218fdac();
    }
                    /* catch() { ... } // from try @ 0228c848 with catch @ 0228c8c4 */
                    /* catch() { ... } // from try @ 0228c4e4 with catch @ 0228c8c8 */
                    /* catch() { ... } // from try @ 0228c420 with catch @ 0228c8cc */
                    /* catch() { ... } // from try @ 0228c300 with catch @ 0228c8d0 */
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
LAB_0228ca0c:
    lVar5 = *(long *)(param_1 + 0x20);
  }
  else {
    if (iVar3 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(float *)(param_1 + 0x3c) < 0.5) {
LAB_0228c7c4:
        puVar1 = PTR_DAT_04ca9ae8;
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_0228cac4;
          uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
          if ((uVar6 & 1) != 0) {
            fVar15 = *(float *)(param_1 + 0x3c);
            fVar12 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
            fVar15 = fVar15 + fVar12;
            *(float *)(param_1 + 0x3c) = fVar15;
            if ((*(long *)(param_1 + 0x20) != 0) &&
               (lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x48), lVar5 != 0)) {
                    /* try { // try from 0228c848 to 0238c85b has its CatchHandler @ 0228c8c4 */
              fVar15 = fVar15 + fVar15;
              fVar12 = 1.0;
              if (fVar15 <= 1.0) {
                fVar12 = fVar15;
              }
              fVar13 = 0.0;
              if (0.0 <= fVar15) {
                fVar13 = fVar12;
              }
              fVar12 = 0.0;
                    /* try { // try from 0228c874 to 0238c87f has its CatchHandler @ 0228c8c0 */
              if (0.0 <= fVar13) {
                fVar12 = fVar13;
              }
                    /* try { // try from 0228c880 to 0238c91f has its CatchHandler @ 0228c1a0 */
              UnityEngine_UI_Image__set_fillAmount_44afc70
                        (*(float *)(param_1 + 0x34) +
                         fVar12 * (*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x34)),lVar5,0)
              ;
              *(undefined8 *)(param_1 + 0x18) = 0;
              thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
              *(undefined4 *)(param_1 + 0x10) = 1;
              return 1;
            }
            goto LAB_0228cac4;
          }
        }
      }
      puVar1 = PTR_DAT_04ca9ae8;
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0228cac4;
                    /* catch() { ... } // from try @ 0228c498 with catch @ 0228c8e8 */
                    /* catch() { ... } // from try @ 0228c3d4 with catch @ 0228c8ec */
                    /* catch() { ... } // from try @ 0228c2b4 with catch @ 0228c8f0 */
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x34) = 0xffffffff;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* catch() { ... } // from try @ 0228c648 with catch @ 0228c90c */
      uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
      if ((uVar6 & 1) != 0) {
        return 0;
      }
      if (*(char *)(param_1 + 0x30) != '\0') {
                    /* catch() { ... } // from try @ 0228c94c with catch @ 0228c924 */
        if (*(long *)(param_1 + 0x20) != 0) {
          Dino_BusSand_App_UI_BattleRoyaleHallButton__StopTimer_218bb60();
          lVar8 = *(long *)(param_1 + 0x20);
          lVar10 = *(long *)PTR_DAT_04ca9d18;
                    /* try { // try from 0228c940 to 0238c94b has its CatchHandler @ 0228c958 */
          lVar5 = *(long *)(lVar10 + 0x38);
          if (lVar5 == 0) {
                    /* try { // try from 0228c94c to 0238c973 has its CatchHandler @ 0228c924 */
            FUN_0216b4cc(lVar10);
            lVar5 = *(long *)(lVar10 + 0x38);
          }
          lVar5 = *(long *)(lVar5 + 0x10);
                    /* catch() { ... } // from try @ 0228c940 with catch @ 0228c958 */
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0216b470();
          }
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar5 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0216b470();
          }
          uVar11 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                             (*(undefined8 *)PTR_DAT_04cadcc8,**(undefined8 **)(lVar5 + 0xb8),0);
          if (lVar8 != 0) {
            Dino_BusSand_App_UI_BattleRoyaleHallButton__SetStatus_218bd9c(lVar8,0,uVar11);
            uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
            UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f800000,uVar11,0);
            *(undefined8 *)(param_1 + 0x18) = uVar11;
            thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar11);
            *(undefined4 *)(param_1 + 0x10) = 2;
            return 1;
          }
        }
        goto LAB_0228cac4;
      }
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0228cac4;
      Dino_BusSand_App_Meta_BattleRoyaleCore__AutoChangeToNotStart_222211c
                (*(long *)(param_1 + 0x28),0);
      goto LAB_0228ca0c;
    }
    if (iVar3 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    plVar7 = (long *)(param_1 + 0x20);
    *plVar7 = **(long **)(*(long *)puVar2 + 0xb8);
    thunk_FUN_02134474(plVar7);
    lVar5 = Dino_BusSand_App_UI_BattleRoyaleUi__get_Core_2199bb0(0);
    plVar9 = (long *)(param_1 + 0x28);
    *plVar9 = lVar5;
    thunk_FUN_02134474(plVar9,lVar5);
    puVar1 = PTR_DAT_04ca9ae8;
    lVar5 = *plVar7;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
    if ((uVar6 & 1) == 0) {
      if (*plVar9 != 0) {
        if (*plVar7 == 0) goto LAB_0228cac4;
        uVar6 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(*plVar7,0);
        if ((uVar6 & 1) != 0) {
          if (*plVar7 == 0) goto LAB_0228cac4;
          uVar11 = *(undefined8 *)(*plVar7 + 0x48);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
          if ((uVar6 & 1) == 0) {
            if (*plVar9 == 0) goto LAB_0228cac4;
            iVar3 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150(*plVar9,0);
            if (*plVar9 == 0) goto LAB_0228cac4;
            iVar4 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc(*plVar9,0);
            if (iVar4 < 2) {
              iVar4 = 1;
            }
            *(bool *)(param_1 + 0x30) = iVar3 == iVar4;
            fVar12 = _UNK_00e200a0;
            if ((*(long *)(param_1 + 0x20) == 0) ||
               (lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x48), lVar5 == 0)) goto LAB_0228cac4;
            *(undefined4 *)(param_1 + 0x3c) = 0;
            fVar13 = (float)iVar3 / (float)iVar4;
            fVar15 = 1.0;
            if (fVar13 <= 1.0) {
              fVar15 = fVar13;
            }
            fVar14 = _UNK_00e205f0;
            if (0.0 <= fVar13) {
              fVar14 = fVar15 * fVar12 + _UNK_00e205f0;
            }
            *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(lVar5 + 0xf4);
            *(float *)(param_1 + 0x38) = fVar14;
            goto LAB_0228c7c4;
          }
        }
        goto LAB_0228c768;
      }
    }
    else {
LAB_0228c768:
      if (*plVar9 != 0) {
        *(undefined4 *)(*plVar9 + 0x34) = 0xffffffff;
      }
    }
    lVar5 = *plVar7;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    lVar5 = *plVar7;
  }
  if (lVar5 != 0) {
    Dino_BusSand_App_UI_BattleRoyaleHallButton__Fresh_218afa0();
    return 0;
  }
LAB_0228cac4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

