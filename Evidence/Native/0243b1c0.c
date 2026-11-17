/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel.<FocusThenTip>d__51$$MoveNext
bool Dino_BusSand_App_UI_WinStreakPanel__FocusThenTip_d__51__MoveNext (Dino_BusSand_App_UI_WinStreakPanel__FocusThenTip_d__51_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel.<FocusThenTip>d__51$$MoveNext
   bool Dino_BusSand_App_UI_WinStreakPanel__FocusThenTip_d__51__MoveNext
   (Dino_BusSand_App_UI_WinStreakPanel__FocusThenTip_d__51_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_WinStreakPanel__FocusThenTip_d__51__MoveNext_233b1c0
          (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,long param_5)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((bRam0000000004f9c65b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c65b = 1;
  }
  iVar1 = *(int *)(param_5 + 0x10);
  lVar6 = *(long *)(param_5 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto LAB_0243b484;
    *(undefined1 *)(lVar6 + 0xb4) = 0;
LAB_0243b294:
    Dino_BusSand_App_UI_WinStreakPanel__ShowTooltip_23393a4(lVar6,*(undefined8 *)(param_5 + 0x28));
LAB_0243b2a0:
    uVar4 = 0;
  }
  else {
                    /* try { // try from 0243b204 to 0253b30f has its CatchHandler @ 0243b204
                       catch() { ... } // from try @ 0243b204 with catch @ 0243b204
                       catch() { ... } // from try @ 0243b3b4 with catch @ 0243b204
                       catch() { ... } // from try @ 0243b404 with catch @ 0243b204
                       catch() { ... } // from try @ 0243b444 with catch @ 0243b204
                       catch() { ... } // from try @ 0243b468 with catch @ 0243b204 */
    if (iVar1 == 1) {
      fVar8 = *(float *)(param_5 + 0x38);
      *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
      fVar11 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      fVar8 = fVar8 + fVar11;
      bVar2 = _UNK_00e207cc <= fVar8;
      *(float *)(param_5 + 0x38) = fVar8;
      if (bVar2) {
        if ((lVar6 != 0) && (*(long *)(lVar6 + 0x40) != 0)) {
          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                    (0,-*(float *)(param_5 + 0x34),*(long *)(lVar6 + 0x40),0);
          Dino_BusSand_App_UI_WinStreakPanel__Parallax_2338cbc(lVar6);
          *(undefined8 *)(param_5 + 0x18) = 0;
          thunk_FUN_02134474((undefined8 *)(param_5 + 0x18),0);
          *(undefined4 *)(param_5 + 0x10) = 2;
          return 1;
        }
        goto LAB_0243b484;
      }
      if (lVar6 == 0) goto LAB_0243b484;
    }
    else {
      if (iVar1 != 0) goto LAB_0243b2a0;
      *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x38) == 0)) goto LAB_0243b484;
      UnityEngine_RectTransform__get_rect_43cf450(*(long *)(lVar6 + 0x38),0);
      fVar11 = _UNK_00e20028;
      if (1.0 < param_4) {
        if (*(long *)(lVar6 + 0x38) == 0) goto LAB_0243b484;
        UnityEngine_RectTransform__get_rect_43cf450(*(long *)(lVar6 + 0x38),0);
        fVar11 = param_4;
      }
      if (*(long *)(lVar6 + 0x40) == 0) goto LAB_0243b484;
      UnityEngine_RectTransform__get_anchoredPosition_43cf828(*(long *)(lVar6 + 0x40),0);
                    /* try { // try from 0243b310 to 0253b317 has its CatchHandler @ 0243b424 */
      *(float *)(param_5 + 0x30) = -param_2;
      if ((*(long *)(param_5 + 0x28) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_5 + 0x28) + 0x10), lVar5 == 0)) goto LAB_0243b484;
      fVar7 = (float)Dino_BusSand_App_UI_WinStreakPanel__FloorY_2337bac
                               ((float)*(int *)(lVar5 + 0x14));
                    /* try { // try from 0243b340 to 0253b347 has its CatchHandler @ 0243b418 */
      fVar9 = fVar11 + *(float *)(param_5 + 0x30) + -560.0;
                    /* try { // try from 0243b36c to 0253b36f has its CatchHandler @ 0243b410 */
      if ((fVar7 + 500.0 <= fVar9) &&
         (fVar9 = fVar7 + -60.0, *(float *)(param_5 + 0x30) + 80.0 <= fVar9)) goto LAB_0243b294;
      plVar3 = *(long **)(lVar6 + 0xa0);
                    /* try { // try from 0243b37c to 0253b383 has its CatchHandler @ 0243b414 */
      *(undefined1 *)(lVar6 + 0xb4) = 1;
      if (plVar3 == (long *)0x0) goto LAB_0243b484;
      (**(code **)(*plVar3 + 0x3c8))(plVar3,*(undefined8 *)(*plVar3 + 0x3d0));
      if (*(long *)(lVar6 + 0x40) == 0) goto LAB_0243b484;
                    /* try { // try from 0243b3a0 to 0253b3a7 has its CatchHandler @ 0243b408 */
      UnityEngine_RectTransform__get_sizeDelta_43cf9ac(*(long *)(lVar6 + 0x40),0);
      fVar10 = _UNK_00e20468;
                    /* try { // try from 0243b3a8 to 0253b3b3 has its CatchHandler @ 0243b40c */
      fVar8 = 0.0;
                    /* try { // try from 0243b3b4 to 0253b3fb has its CatchHandler @ 0243b204 */
      *(undefined4 *)(param_5 + 0x38) = 0;
      fVar7 = fVar7 + fVar11 * fVar10;
      fVar10 = 0.0;
      if (0.0 <= fVar9 - fVar11) {
        fVar10 = fVar9 - fVar11;
      }
      if (fVar7 <= fVar10) {
        fVar10 = fVar7;
      }
      fVar11 = 0.0;
      if (0.0 <= fVar7) {
        fVar11 = fVar10;
      }
      *(float *)(param_5 + 0x34) = fVar11;
    }
    fVar11 = *(float *)(param_5 + 0x30);
    fVar7 = *(float *)(param_5 + 0x34);
    lVar5 = *(long *)(lVar6 + 0x40);
    if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
                    /* try { // try from 0243b3fc to 0253b3ff has its CatchHandler @ 0243b420 */
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 0243b400 to 0253b403 has its CatchHandler @ 0243b41c */
                    /* try { // try from 0243b404 to 0253b43f has its CatchHandler @ 0243b204 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243b3a0 with catch @ 0243b408
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243b3a8 with catch @ 0243b40c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243b36c with catch @ 0243b410
                        */
    fVar8 = (float)Dino_BusSand_App_UI_UiMotion__InOutSine_228a8c4(fVar8 / _UNK_00e207cc,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243b37c with catch @ 0243b414
                        */
    if (lVar5 == 0) {
LAB_0243b484:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243b340 with catch @ 0243b418
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243b400 with catch @ 0243b41c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243b3fc with catch @ 0243b420
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243b310 with catch @ 0243b424
                        */
    fVar9 = 1.0;
    if (fVar8 <= 1.0) {
      fVar9 = fVar8;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar8) {
      fVar10 = fVar9;
    }
                    /* try { // try from 0243b440 to 0253b443 has its CatchHandler @ 0243b45c */
                    /* try { // try from 0243b444 to 0253b45f has its CatchHandler @ 0243b204 */
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
              (0,-(fVar11 + (fVar7 - fVar11) * fVar10),lVar5,0);
    Dino_BusSand_App_UI_WinStreakPanel__Parallax_2338cbc(lVar6);
    *(undefined8 *)(param_5 + 0x18) = 0;
                    /* catch() { ... } // from try @ 0243b440 with catch @ 0243b45c */
                    /* try { // try from 0243b460 to 0253b467 has its CatchHandler @ 0243b470 */
    thunk_FUN_02134474((undefined8 *)(param_5 + 0x18),0);
                    /* try { // try from 0243b468 to 0253b473 has its CatchHandler @ 0243b204 */
    uVar4 = 1;
    *(undefined4 *)(param_5 + 0x10) = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0243b460 with catch @ 0243b470
                        */
  return uVar4;
}

