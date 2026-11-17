/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel.<GuideScroll>d__29$$MoveNext
bool Dino_BusSand_App_UI_StreakRatePanel__GuideScroll_d__29__MoveNext (Dino_BusSand_App_UI_StreakRatePanel__GuideScroll_d__29_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel.<GuideScroll>d__29$$MoveNext
   bool Dino_BusSand_App_UI_StreakRatePanel__GuideScroll_d__29__MoveNext
   (Dino_BusSand_App_UI_StreakRatePanel__GuideScroll_d__29_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_StreakRatePanel__GuideScroll_d__29__MoveNext_21e57e0
          (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((bRam0000000004f9bbcc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9bbcc = 1;
  }
                    /* try { // try from 022e5824 to 023e5a07 has its CatchHandler @ 022e4768 */
  iVar1 = *(int *)(param_3 + 0x10);
  lVar5 = *(long *)(param_3 + 0x20);
  if (iVar1 == 2) {
    fVar10 = *(float *)(param_3 + 0x30);
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    if (fVar10 < 2.0) {
      if (lVar5 == 0) goto LAB_022e5a94;
      goto LAB_022e58ec;
    }
    if (lVar5 == 0) goto LAB_022e5a94;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
        if (lVar5 == 0) goto LAB_022e5a94;
        Dino_BusSand_App_UI_StreakRatePanel__ScrollToIndex_21e46ec(lVar5,0);
        puVar2 = PTR_DAT_04ca9ae8;
        uVar6 = *(undefined8 *)(lVar5 + 0x50);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
        if ((uVar3 & 1) == 0) {
          lVar4 = *(long *)puVar2;
          uVar6 = *(undefined8 *)(lVar5 + 0x60);
                    /* try { // try from 022e5a08 to 023e5a0f has its CatchHandler @ 022e5a58 */
          *(undefined1 *)(lVar5 + 0x78) = 1;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
          if ((uVar3 & 1) != 0) {
            if (*(long *)(lVar5 + 0x60) == 0) goto LAB_022e5a94;
                    /* try { // try from 022e5a38 to 023e5a3f has its CatchHandler @ 022e5a98 */
                    /* try { // try from 022e5a40 to 023e5a57 has its CatchHandler @ 022e5a7c */
            UnityEngine_Behaviour__set_enabled_43bc50c(*(long *)(lVar5 + 0x60),0,0);
          }
          uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
                    /* catch() { ... } // from try @ 022e5a08 with catch @ 022e5a58 */
                    /* catch() { ... } // from try @ 022e53e0 with catch @ 022e5a5c */
                    /* catch() { ... } // from try @ 022e4858 with catch @ 022e5a60 */
          UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f000000,uVar6,0);
          *(undefined8 *)(param_3 + 0x18) = uVar6;
          thunk_FUN_02134474((undefined8 *)(param_3 + 0x18),uVar6);
                    /* catch() { ... } // from try @ 022e4da4 with catch @ 022e5a78 */
          *(undefined4 *)(param_3 + 0x10) = 1;
          return 1;
        }
      }
      return 0;
    }
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    UnityEngine_Canvas__ForceUpdateCanvases_4681650(0);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x50) == 0)) goto LAB_022e5a94;
    UnityEngine_RectTransform__get_anchoredPosition_43cf828(*(long *)(lVar5 + 0x50),0);
    *(undefined4 *)(param_3 + 0x28) = param_2;
    uVar7 = Dino_BusSand_App_UI_StreakRatePanel__get_MinY_21e5394(lVar5);
    fVar10 = 0.0;
    *(undefined4 *)(param_3 + 0x2c) = uVar7;
    *(undefined4 *)(param_3 + 0x30) = 0;
LAB_022e58ec:
    if (*(char *)(lVar5 + 0x2c) == '\0') {
      fVar8 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      lVar5 = *(long *)(lVar5 + 0x50);
      fVar9 = (fVar10 + fVar8) * 0.5;
      *(float *)(param_3 + 0x30) = fVar10 + fVar8;
      fVar10 = 1.0;
      if (fVar9 <= 1.0) {
        fVar10 = fVar9;
      }
      fVar8 = 0.0;
      if (0.0 <= fVar9) {
        fVar8 = fVar10;
      }
      fVar9 = 2.0 - (fVar8 + fVar8);
      fVar10 = fVar8 * (fVar8 + fVar8);
      if (0.5 <= fVar8) {
        fVar10 = fVar9 * fVar9 * -0.5 + 1.0;
      }
      if (lVar5 != 0) {
        uVar7 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar5,0);
        fVar8 = 1.0;
        if (fVar10 <= 1.0) {
          fVar8 = fVar10;
        }
        fVar9 = 0.0;
        if (0.0 <= fVar10) {
          fVar9 = fVar8;
        }
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                  (uVar7,*(float *)(param_3 + 0x28) +
                         fVar9 * (*(float *)(param_3 + 0x2c) - *(float *)(param_3 + 0x28)),lVar5,0);
        *(undefined8 *)(param_3 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_3 + 0x18),0);
        *(undefined4 *)(param_3 + 0x10) = 2;
        return 1;
      }
      goto LAB_022e5a94;
    }
  }
  uVar6 = *(undefined8 *)(lVar5 + 0x60);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(lVar5 + 0x60) == 0) {
LAB_022e5a94:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 022e4934 with catch @ 022e5a94
                       catch() { ... } // from try @ 022e4d60 with catch @ 022e5a94
                       catch() { ... } // from try @ 022e4f80 with catch @ 022e5a94
                       catch() { ... } // from try @ 022e533c with catch @ 022e5a94 */
      FUN_02133224();
    }
    UnityEngine_Behaviour__set_enabled_43bc50c(*(long *)(lVar5 + 0x60),1,0);
  }
  *(undefined1 *)(lVar5 + 0x78) = 0;
                    /* catch() { ... } // from try @ 022e5a40 with catch @ 022e5a7c */
                    /* catch() { ... } // from try @ 022e5744 with catch @ 022e5a80 */
                    /* catch() { ... } // from try @ 022e5268 with catch @ 022e5a84 */
                    /* catch() { ... } // from try @ 022e4f20 with catch @ 022e5a88 */
                    /* catch() { ... } // from try @ 022e51a4 with catch @ 022e5a8c */
  return 0;
}

