/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel.<Glide>d__31$$MoveNext
bool Dino_BusSand_App_UI_StreakEventPanel__Glide_d__31__MoveNext (Dino_BusSand_App_UI_StreakEventPanel__Glide_d__31_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel.<Glide>d__31$$MoveNext
   bool Dino_BusSand_App_UI_StreakEventPanel__Glide_d__31__MoveNext
   (Dino_BusSand_App_UI_StreakEventPanel__Glide_d__31_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_StreakEventPanel__Glide_d__31__MoveNext_21c30b4(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c2ffc with catch @ 022c30c0
                        */
  if ((bRam0000000004f9baf2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac1e8);
                    /* try { // try from 022c3104 to 023c3107 has its CatchHandler @ 022c3108 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c3104 with catch @ 022c3108
                        */
    FUN_02132f7c(PTR_DAT_04cafd48);
                    /* try { // try from 022c310c to 023c310f has its CatchHandler @ 022c3118 */
                    /* try { // try from 022c3110 to 023c311b has its CatchHandler @ 022c2f68 */
    FUN_02132f7c(PTR_DAT_04cafd50);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c310c with catch @ 022c3118
                        */
    FUN_02132f7c(PTR_DAT_04cafd58);
                    /* try { // try from 022c3124 to 023c3163 has its CatchHandler @ 022c3124
                       catch(type#1 @ 00000000) { ... } // from try @ 022c3124 with catch @ 022c3124
                       catch(type#1 @ 00000000) { ... } // from try @ 022c31a8 with catch @ 022c3124
                       catch(type#1 @ 00000000) { ... } // from try @ 022c3248 with catch @ 022c3124
                        */
    bRam0000000004f9baf2 = 1;
  }
  puVar2 = PTR_DAT_04cafd58;
  lVar7 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Object___ctor_4870e5c(lVar3,0);
                    /* try { // try from 022c3164 to 023c316f has its CatchHandler @ 022c31e4 */
    plVar8 = (long *)(param_1 + 0x30);
    *plVar8 = lVar3;
                    /* try { // try from 022c3170 to 023c31a7 has its CatchHandler @ 022c31ec */
    thunk_FUN_02134474(plVar8,lVar3);
    if (*plVar8 == 0) goto LAB_022c33a8;
    *(undefined8 *)(*plVar8 + 0x10) = *(undefined8 *)(param_1 + 0x20);
    thunk_FUN_02134474();
    if (lVar7 == 0) goto LAB_022c33a8;
    uVar9 = *(undefined8 *)(lVar7 + 0x90);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                    /* try { // try from 022c31a8 to 023c323b has its CatchHandler @ 022c3124 */
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    plVar5 = *(long **)(lVar7 + 0x90);
    if (plVar5 == (long *)0x0) goto LAB_022c33a8;
    (**(code **)(*plVar5 + 0x3c8))(plVar5,*(undefined8 *)(*plVar5 + 0x3d0));
    if (*(long *)(lVar7 + 0x90) == 0) goto LAB_022c33a8;
    lVar3 = *plVar8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c3164 with catch @ 022c31e4
                        */
    uVar10 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition_469058c
                       (*(long *)(lVar7 + 0x90),0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c3170 with catch @ 022c31ec
                        */
    if (lVar3 == 0) goto LAB_022c33a8;
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(lVar3 + 0x18) = uVar10;
    Dino_BusSand_App_UI_StreakEventPanel__ScrollTo_21c2070(lVar7,uVar1);
    if (*(long *)(lVar7 + 0x90) == 0) goto LAB_022c33a8;
    lVar3 = *(long *)(param_1 + 0x30);
    uVar10 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition_469058c
                       (*(long *)(lVar7 + 0x90),0);
    if (lVar3 == 0) goto LAB_022c33a8;
    lVar6 = *plVar8;
    *(undefined4 *)(lVar3 + 0x1c) = uVar10;
    if ((lVar6 == 0) || (*(long *)(lVar7 + 0x90) == 0)) goto LAB_022c33a8;
    UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition_46906e0
              (*(undefined4 *)(lVar6 + 0x18),*(long *)(lVar7 + 0x90),0);
    puVar2 = PTR_DAT_04cac208;
    lVar3 = *plVar8;
                    /* try { // try from 022c323c to 023c323f has its CatchHandler @ 022c3240 */
    if (lVar3 == 0) goto LAB_022c33a8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c323c with catch @ 022c3240
                        */
                    /* try { // try from 022c3244 to 023c3247 has its CatchHandler @ 022c3250 */
                    /* try { // try from 022c3248 to 023c3253 has its CatchHandler @ 022c3124 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c3244 with catch @ 022c3250
                        */
    if (ABS(*(float *)(lVar3 + 0x1c) - *(float *)(lVar3 + 0x18)) < _UNK_00e20208) {
      return 0;
    }
                    /* try { // try from 022c325c to 023c329b has its CatchHandler @ 022c325c
                       catch(type#1 @ 00000000) { ... } // from try @ 022c325c with catch @ 022c325c
                       catch(type#1 @ 00000000) { ... } // from try @ 022c32e0 with catch @ 022c325c
                       catch(type#1 @ 00000000) { ... } // from try @ 022c33c0 with catch @ 022c325c
                        */
    *(undefined1 *)(lVar3 + 0x20) = 0;
    uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Action_float____ctor_35f1448(uVar9,lVar3,*(undefined8 *)PTR_DAT_04cafd48,0);
    if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
                    /* try { // try from 022c329c to 023c32a7 has its CatchHandler @ 022c335c */
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022c32a8 to 023c32df has its CatchHandler @ 022c3364 */
    lVar3 = Dino_BusSand_App_Tween__Value_2160f64(_UNK_00e2094c,uVar9,0);
    if (((lVar3 == 0) || (lVar3 = Dino_BusSand_App_Tween__SetEase_2160eb0(lVar3,5,0), lVar3 == 0))
       || (lVar3 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar3,1,0), lVar3 == 0))
    goto LAB_022c33a8;
                    /* try { // try from 022c32e0 to 023c33b3 has its CatchHandler @ 022c325c */
    lVar3 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar3,lVar7,0);
    lVar6 = *plVar8;
    uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar9,lVar6,*(undefined8 *)PTR_DAT_04cafd50,0);
    if (lVar3 == 0) goto LAB_022c33a8;
    Dino_BusSand_App_Tween__OnDone_2160edc(lVar3,uVar9,0);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x30) + 0x20) == '\0') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c329c with catch @ 022c335c
                        */
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c32a8 with catch @ 022c3364
                        */
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
    }
    return 0;
  }
LAB_022c33a8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

