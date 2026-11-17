/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel.<GrowGreen>d__32$$MoveNext
bool Dino_BusSand_App_UI_StreakEventPanel__GrowGreen_d__32__MoveNext (Dino_BusSand_App_UI_StreakEventPanel__GrowGreen_d__32_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel.<GrowGreen>d__32$$MoveNext
   bool Dino_BusSand_App_UI_StreakEventPanel__GrowGreen_d__32__MoveNext
   (Dino_BusSand_App_UI_StreakEventPanel__GrowGreen_d__32_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_StreakEventPanel__GrowGreen_d__32__MoveNext_21c33f8
          (undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  
                    /* try { // try from 022c3414 to 023c341f has its CatchHandler @ 022c3494 */
  if ((bRam0000000004f9baf3 & 1) == 0) {
                    /* try { // try from 022c3420 to 023c3457 has its CatchHandler @ 022c349c */
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cafcd8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 022c3458 to 023c34eb has its CatchHandler @ 022c33d4 */
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cafd68);
    FUN_02132f7c(PTR_DAT_04cafd70);
    FUN_02132f7c(PTR_DAT_04cafd78);
    bRam0000000004f9baf3 = 1;
  }
  puVar3 = PTR_DAT_04cafd78;
  lVar7 = *(long *)(param_3 + 0x20);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c3414 with catch @ 022c3494
                        */
  if (*(int *)(param_3 + 0x10) == 1) {
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c3420 with catch @ 022c349c
                        */
    if (*(int *)(param_3 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Object___ctor_4870e5c(lVar4,0);
    plVar8 = (long *)(param_3 + 0x30);
    *plVar8 = lVar4;
    thunk_FUN_02134474(plVar8,lVar4);
    if (*plVar8 == 0) goto LAB_022c3754;
    *(undefined8 *)(*plVar8 + 0x10) = *(undefined8 *)(param_3 + 0x20);
    thunk_FUN_02134474();
                    /* try { // try from 022c34ec to 023c34ef has its CatchHandler @ 022c34f0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c34ec with catch @ 022c34f0
                        */
                    /* try { // try from 022c34f4 to 023c34f7 has its CatchHandler @ 022c3500 */
                    /* try { // try from 022c34f8 to 023c3503 has its CatchHandler @ 022c33d4 */
    if (((lVar7 == 0) || (*(long *)(lVar7 + 0x98) == 0)) || (*(long *)(lVar7 + 0x60) == 0))
    goto LAB_022c3754;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c34f4 with catch @ 022c3500
                        */
    iVar1 = *(int *)(*(long *)(lVar7 + 0x98) + 0x18);
    lVar4 = *plVar8;
                    /* try { // try from 022c350c to 023c354b has its CatchHandler @ 022c350c
                       catch(type#1 @ 00000000) { ... } // from try @ 022c350c with catch @ 022c350c
                       catch(type#1 @ 00000000) { ... } // from try @ 022c3590 with catch @ 022c350c
                       catch(type#1 @ 00000000) { ... } // from try @ 022c3674 with catch @ 022c350c
                        */
    UnityEngine_RectTransform__get_sizeDelta_43cf9ac(*(long *)(lVar7 + 0x60),0);
    if (lVar4 == 0) goto LAB_022c3754;
    fVar10 = 0.0;
    iVar2 = *(int *)(param_3 + 0x28);
    lVar9 = *(long *)(param_3 + 0x30);
    *(float *)(lVar4 + 0x18) = param_2;
    if ((0 < iVar2) && (0 < iVar1)) {
      if (*(long *)(lVar7 + 0x58) == 0) goto LAB_022c3754;
      UnityEngine_RectTransform__get_sizeDelta_43cf9ac(*(long *)(lVar7 + 0x58),0);
                    /* try { // try from 022c354c to 023c3557 has its CatchHandler @ 022c3610 */
      iVar2 = *(int *)(param_3 + 0x28);
      if (iVar1 <= *(int *)(param_3 + 0x28)) {
        iVar2 = iVar1;
      }
                    /* try { // try from 022c3558 to 023c358f has its CatchHandler @ 022c3618 */
      fVar10 = param_2 - ((float)(iVar1 - iVar2) * 350.0 + 175.0 + 10.0);
    }
    if (lVar9 == 0) goto LAB_022c3754;
    lVar4 = *plVar8;
    *(float *)(lVar9 + 0x1c) = fVar10;
    puVar3 = PTR_DAT_04cac208;
    if (lVar4 == 0) goto LAB_022c3754;
                    /* try { // try from 022c3590 to 023c3667 has its CatchHandler @ 022c350c */
    if (*(float *)(lVar4 + 0x1c) <= *(float *)(lVar4 + 0x18)) {
      return 0;
    }
    *(undefined1 *)(lVar4 + 0x20) = 0;
    uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Action_float____ctor_35f1448(uVar5,lVar4,*(undefined8 *)PTR_DAT_04cafd68,0);
    if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar4 = Dino_BusSand_App_Tween__Value_2160f64(_UNK_00e20590,uVar5,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c354c with catch @ 022c3610
                        */
    if (((lVar4 == 0) || (lVar4 = Dino_BusSand_App_Tween__SetEase_2160eb0(lVar4,3,0), lVar4 == 0))
       || (lVar4 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar4,1,0), lVar4 == 0))
    goto LAB_022c3754;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c3558 with catch @ 022c3618
                        */
    lVar4 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar4,lVar7,0);
    lVar9 = *plVar8;
    uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar5,lVar9,*(undefined8 *)PTR_DAT_04cafd70,0);
    if (lVar4 == 0) goto LAB_022c3754;
                    /* try { // try from 022c3668 to 023c366b has its CatchHandler @ 022c366c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c3668 with catch @ 022c366c
                        */
    Dino_BusSand_App_Tween__OnDone_2160edc(lVar4,uVar5,0);
    puVar3 = PTR_DAT_04cad568;
                    /* try { // try from 022c3670 to 023c3673 has its CatchHandler @ 022c367c */
                    /* try { // try from 022c3674 to 023c367f has its CatchHandler @ 022c350c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c3670 with catch @ 022c367c
                        */
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022c3688 to 023c36c7 has its CatchHandler @ 022c3688
                       catch(type#1 @ 00000000) { ... } // from try @ 022c3688 with catch @ 022c3688
                       catch(type#1 @ 00000000) { ... } // from try @ 022c370c with catch @ 022c3688
                       catch(type#1 @ 00000000) { ... } // from try @ 022c37ac with catch @ 022c3688
                        */
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar3;
    }
    if (**(long **)(lVar4 + 0xb8) != 0) {
                    /* try { // try from 022c36c8 to 023c36d3 has its CatchHandler @ 022c3748 */
                    /* try { // try from 022c36d4 to 023c370b has its CatchHandler @ 022c3750 */
      Dino_BusSand_GameAudio__UiTick_2383128(_UNK_00e200f8,**(long **)(lVar4 + 0xb8),0);
    }
  }
  if (*(long *)(param_3 + 0x30) != 0) {
    if (*(char *)(*(long *)(param_3 + 0x30) + 0x20) == '\0') {
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 022c370c to 023c379f has its CatchHandler @ 022c3688 */
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
      if ((uVar6 & 1) != 0) {
        *(undefined8 *)(param_3 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_3 + 0x18),0);
        *(undefined4 *)(param_3 + 0x10) = 1;
        return 1;
      }
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c36c8 with catch @ 022c3748
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c36d4 with catch @ 022c3750
                        */
    return 0;
  }
LAB_022c3754:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

