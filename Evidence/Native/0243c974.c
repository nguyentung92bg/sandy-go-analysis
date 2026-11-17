/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel.<Tour>d__49$$MoveNext
bool Dino_BusSand_App_UI_WinStreakPanel__Tour_d__49__MoveNext (Dino_BusSand_App_UI_WinStreakPanel__Tour_d__49_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel.<Tour>d__49$$MoveNext
   bool Dino_BusSand_App_UI_WinStreakPanel__Tour_d__49__MoveNext
   (Dino_BusSand_App_UI_WinStreakPanel__Tour_d__49_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_WinStreakPanel__Tour_d__49__MoveNext_233c974
          (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,long param_5)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((bRam0000000004f9c65f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9c65f = 1;
  }
                    /* try { // try from 0243c9b4 to 0253c9bb has its CatchHandler @ 0243ca4c */
  iVar1 = *(int *)(param_5 + 0x10);
  lVar5 = *(long *)(param_5 + 0x20);
                    /* try { // try from 0243c9bc to 0253ca67 has its CatchHandler @ 0243c88c */
  uVar3 = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
      if (lVar5 == 0) goto LAB_0243ccb4;
                    /* catch() { ... } // from try @ 0243ca68 with catch @ 0243ca8c */
                    /* try { // try from 0243ca90 to 0253ca97 has its CatchHandler @ 0243caa0 */
      *(undefined1 *)(lVar5 + 0xb4) = 1;
                    /* try { // try from 0243ca98 to 0253caa3 has its CatchHandler @ 0243c88c */
      uVar3 = 0;
      if (*(long *)(lVar5 + 0xa0) == 0) goto LAB_0243ccb4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0243ca90 with catch @ 0243caa0
                        */
                    /* try { // try from 0243caa4 to 0253cb8f has its CatchHandler @ 0243caa4
                       catch() { ... } // from try @ 0243caa4 with catch @ 0243caa4
                       catch() { ... } // from try @ 0243cbe0 with catch @ 0243caa4
                       catch() { ... } // from try @ 0243cc14 with catch @ 0243caa4
                       catch() { ... } // from try @ 0243cc3c with catch @ 0243caa4
                       catch() { ... } // from try @ 0243cc68 with catch @ 0243caa4 */
      UnityEngine_Behaviour__set_enabled_43bc50c(*(long *)(lVar5 + 0xa0),0,0);
      uVar3 = 0;
      if (*(long *)(lVar5 + 0x38) == 0) goto LAB_0243ccb4;
      UnityEngine_RectTransform__get_rect_43cf450(*(long *)(lVar5 + 0x38),0);
      fVar9 = _UNK_00e20028;
      if (1.0 < param_4) {
        uVar3 = 0;
        if (*(long *)(lVar5 + 0x38) == 0) goto LAB_0243ccb4;
        UnityEngine_RectTransform__get_rect_43cf450(*(long *)(lVar5 + 0x38),0);
        fVar9 = param_4;
      }
                    /* try { // try from 0243cbd8 to 0253cbdf has its CatchHandler @ 0243cc14 */
      uVar3 = 0;
      if (*(long *)(lVar5 + 0x40) == 0) goto LAB_0243ccb4;
                    /* try { // try from 0243cbe0 to 0253cc0f has its CatchHandler @ 0243caa4 */
      UnityEngine_RectTransform__get_anchoredPosition_43cf828(*(long *)(lVar5 + 0x40),0);
      lVar6 = *(long *)(lVar5 + 0x40);
      *(float *)(param_5 + 0x28) = -param_2;
      uVar3 = 0;
      if (lVar6 == 0) goto LAB_0243ccb4;
      UnityEngine_RectTransform__get_sizeDelta_43cf9ac(lVar6,0);
      fVar8 = 0.0;
      *(undefined4 *)(param_5 + 0x34) = 0;
      fVar10 = 0.0;
      if (0.0 <= param_2 - fVar9) {
        fVar10 = param_2 - fVar9;
      }
                    /* try { // try from 0243cc10 to 0253cc13 has its CatchHandler @ 0243cc18 */
      *(float *)(param_5 + 0x2c) = fVar10;
    }
    else {
      if (iVar1 != 1) {
        return 0;
      }
      fVar8 = *(float *)(param_5 + 0x34);
      *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
      uVar3 = UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      fVar8 = fVar8 + extraout_s0;
      *(float *)(param_5 + 0x34) = fVar8;
      if (2.0 <= fVar8) {
                    /* try { // try from 0243cb90 to 0253cb97 has its CatchHandler @ 0243cc1c */
        uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
        UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f000000,uVar3,0);
        *(undefined8 *)(param_5 + 0x18) = uVar3;
        thunk_FUN_02134474((undefined8 *)(param_5 + 0x18),uVar3);
        uVar4 = 2;
        goto LAB_0243cbc0;
      }
      if (lVar5 == 0) goto LAB_0243ccb4;
    }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243cbd8 with catch @ 0243cc14
                       try { // try from 0243cc14 to 0253cc37 has its CatchHandler @ 0243caa4 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243cc10 with catch @ 0243cc18
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243cb90 with catch @ 0243cc1c
                        */
    fVar9 = *(float *)(param_5 + 0x28);
    fVar10 = *(float *)(param_5 + 0x2c);
    lVar6 = *(long *)(lVar5 + 0x40);
    if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 0243cc38 to 0253cc3b has its CatchHandler @ 0243cc5c */
                    /* try { // try from 0243cc3c to 0253cc5f has its CatchHandler @ 0243caa4 */
    uVar3 = Dino_BusSand_App_UI_UiMotion__InOutSine_228a8c4(fVar8 * 0.5,0);
    if (lVar6 == 0) {
LAB_0243ccb4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar3);
    }
                    /* catch() { ... } // from try @ 0243cc38 with catch @ 0243cc5c */
    fVar8 = 1.0;
    if (extraout_s0_02 <= 1.0) {
      fVar8 = extraout_s0_02;
    }
                    /* try { // try from 0243cc60 to 0253cc67 has its CatchHandler @ 0243cc70 */
    fVar7 = 0.0;
                    /* try { // try from 0243cc68 to 0253cc73 has its CatchHandler @ 0243caa4 */
    if (0.0 <= extraout_s0_02) {
      fVar7 = fVar8;
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0243cc60 with catch @ 0243cc70
                        */
                    /* try { // try from 0243cc74 to 0253cda7 has its CatchHandler @ 0243cc74
                       catch() { ... } // from try @ 0243cc74 with catch @ 0243cc74
                       catch() { ... } // from try @ 0243cde8 with catch @ 0243cc74
                       catch() { ... } // from try @ 0243cf00 with catch @ 0243cc74
                       catch() { ... } // from try @ 0243cf08 with catch @ 0243cc74
                       catch() { ... } // from try @ 0243cf40 with catch @ 0243cc74
                       catch() { ... } // from try @ 0243cf88 with catch @ 0243cc74 */
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
              (0,-(fVar9 + (fVar10 - fVar9) * fVar7),lVar6,0);
    Dino_BusSand_App_UI_WinStreakPanel__Parallax_2338cbc(lVar5);
    *(undefined8 *)(param_5 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_5 + 0x18),0);
    *(undefined4 *)(param_5 + 0x10) = 1;
  }
  else {
    if (iVar1 == 2) {
      fVar9 = 0.0;
      *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
      *(undefined4 *)(param_5 + 0x30) = *(undefined4 *)(param_5 + 0x2c);
      *(undefined4 *)(param_5 + 0x34) = 0;
    }
    else {
      if (iVar1 != 3) {
        return 0;
      }
      fVar9 = *(float *)(param_5 + 0x34);
      *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
      uVar3 = UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      fVar9 = fVar9 + extraout_s0_00;
      bVar2 = _UNK_00e20094 <= fVar9;
      *(float *)(param_5 + 0x34) = fVar9;
      if (bVar2) {
        if (lVar5 != 0) {
          uVar3 = 0;
          if (*(long *)(lVar5 + 0x40) != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243c9b4 with catch @ 0243ca4c
                        */
            UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                      (0,-*(float *)(param_5 + 0x28),*(long *)(lVar5 + 0x40),0);
            uVar3 = 0;
            if (*(long *)(lVar5 + 0xa0) != 0) {
                    /* try { // try from 0243ca68 to 0253ca6b has its CatchHandler @ 0243ca8c */
                    /* try { // try from 0243ca6c to 0253ca8f has its CatchHandler @ 0243c88c */
              UnityEngine_Behaviour__set_enabled_43bc50c(*(long *)(lVar5 + 0xa0),1,0);
              *(undefined1 *)(lVar5 + 0xb4) = 0;
              return 0;
            }
          }
        }
        goto LAB_0243ccb4;
      }
    }
    if (lVar5 == 0) goto LAB_0243ccb4;
    lVar6 = *(long *)(lVar5 + 0x40);
    fVar10 = *(float *)(param_5 + 0x30);
    fVar8 = *(float *)(param_5 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_App_UI_UiMotion__InOutSine_228a8c4(fVar9 / _UNK_00e20094,0);
    if (lVar6 == 0) goto LAB_0243ccb4;
    fVar9 = 1.0;
    if (extraout_s0_01 <= 1.0) {
      fVar9 = extraout_s0_01;
    }
    fVar7 = 0.0;
    if (0.0 <= extraout_s0_01) {
      fVar7 = fVar9;
    }
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
              (0,-(fVar10 + (fVar8 - fVar10) * fVar7),lVar6,0);
    Dino_BusSand_App_UI_WinStreakPanel__Parallax_2338cbc(lVar5);
    *(undefined8 *)(param_5 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_5 + 0x18),0);
    uVar4 = 3;
LAB_0243cbc0:
    *(undefined4 *)(param_5 + 0x10) = uVar4;
  }
  return 1;
}

