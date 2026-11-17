/* IL2CPP: Dino.BusSand.App.UI.StreakRateGameRow$$Init
void Dino_BusSand_App_UI_StreakRateGameRow__Init (Dino_BusSand_App_UI_StreakRateGameRow_o* __this, Dino_BusSand_App_Meta_StreakRateFeature_o* f, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRateGameRow$$Init
   void Dino_BusSand_App_UI_StreakRateGameRow__Init (Dino_BusSand_App_UI_StreakRateGameRow_o*
   __this, Dino_BusSand_App_Meta_StreakRateFeature_o* f, float delay, const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakRateGameRow__Init_21de1c4
               (undefined4 param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined4 uVar14;
  long lVar15;
  undefined4 uStack_64;
  
  if ((bRam0000000004f9bb99 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cafb10);
    FUN_02132f7c(PTR_DAT_04cabb10);
    FUN_02132f7c(PTR_DAT_04cb0b08);
                    /* try { // try from 022de238 to 023de23b has its CatchHandler @ 022de23c */
                    /* catch() { ... } // from try @ 022de164 with catch @ 022de23c
                       catch() { ... } // from try @ 022de238 with catch @ 022de23c
                       try { // try from 022de23c to 023de24f has its CatchHandler @ 022de100 */
    FUN_02132f7c(PTR_DAT_04cb0b10);
    FUN_02132f7c(PTR_DAT_04cb0b18);
    FUN_02132f7c(PTR_DAT_04cabc50);
    FUN_02132f7c(PTR_DAT_04cb0b20);
    FUN_02132f7c(PTR_DAT_04cb0b28);
    bRam0000000004f9bb99 = 1;
  }
  puVar5 = PTR_DAT_04cb0b28;
  puVar4 = PTR_DAT_04cb0b18;
  puVar3 = PTR_DAT_04cabb10;
  puVar2 = PTR_DAT_04ca9ae8;
  uStack_64 = 0;
  *(long *)(param_2 + 0x20) = param_3;
  thunk_FUN_02134474((long *)(param_2 + 0x20),param_3);
  lVar15 = 0x20;
  uVar11 = 0;
  do {
    plVar13 = *(long **)(param_2 + 0x40);
    uVar6 = UnityEngine_Component__get_transform_43bcd18(param_2,0);
    uVar1 = uVar11 + 1;
    uVar14 = (undefined4)uVar1;
    uStack_64 = uVar14;
    uVar7 = System_Int32__ToString_482d750(&uStack_64,0);
    uVar7 = System_String__Concat_46c82e0(*(undefined8 *)puVar4,uVar7,0);
    lVar8 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar6,uVar7,0);
    if (plVar13 == (long *)0x0) goto LAB_022de5ec;
                    /* try { // try from 022de304 to 023de367 has its CatchHandler @ 022de304
                       catch() { ... } // from try @ 022de304 with catch @ 022de304
                       catch() { ... } // from try @ 022de380 with catch @ 022de304
                       catch() { ... } // from try @ 022de40c with catch @ 022de304 */
    lVar9 = 0;
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0)) {
      uVar6 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar6,0);
    }
    if (*(uint *)(plVar13 + 3) <= uVar11) {
LAB_022de5f0:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c(lVar9);
    }
    plVar13[uVar11 + 4] = lVar8;
    thunk_FUN_02134474((long)plVar13 + lVar15,lVar8);
    if (uVar11 < 3) {
      if (param_3 == 0) goto LAB_022de5ec;
      uStack_64 = Dino_BusSand_App_Meta_StreakRateFeature__RateNumber_224c86c
                            (param_3,uVar11 & 0xffffffff,0);
                    /* try { // try from 022de368 to 023de37f has its CatchHandler @ 022de40c */
      uVar6 = System_Int32__ToString_482d750(&uStack_64,0);
      lVar8 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,uVar6,0);
                    /* try { // try from 022de380 to 023de407 has its CatchHandler @ 022de304 */
      lVar12 = *(long *)(param_2 + 0x40);
      if (lVar12 == 0) goto LAB_022de5ec;
      lVar9 = lVar8;
      if (*(uint *)(lVar12 + 0x18) <= uVar11) goto LAB_022de5f0;
      uVar6 = *(undefined8 *)(lVar12 + uVar11 * 8 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
      lVar9 = 0;
      if ((uVar10 & 1) != 0) {
        lVar12 = *(long *)(param_2 + 0x40);
        if (lVar12 == 0) goto LAB_022de5ec;
        if (*(uint *)(lVar12 + 0x18) <= uVar11) goto LAB_022de5f0;
        lVar9 = *(long *)(lVar12 + uVar11 * 8 + 0x20);
        uStack_64 = uVar14;
        uVar6 = System_Int32__ToString_482d750(&uStack_64,0);
                    /* try { // try from 022de408 to 023de40b has its CatchHandler @ 022de40c */
                    /* catch() { ... } // from try @ 022de368 with catch @ 022de40c
                       catch() { ... } // from try @ 022de408 with catch @ 022de40c
                       try { // try from 022de40c to 023de41f has its CatchHandler @ 022de304 */
        uVar6 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cabc50,uVar6,0);
        if (lVar9 == 0) goto LAB_022de5ec;
        lVar9 = UnityEngine_Transform__Find_43d4bec(lVar9,uVar6,0);
      }
      Dino_BusSand_App_UI_StreakRateGameRow__SetText_21de600(lVar9,lVar8);
      uVar6 = UnityEngine_Component__get_transform_43bcd18(param_2,0);
      uVar6 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar6,*(undefined8 *)puVar5,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar11 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
      uVar7 = 0;
      if ((uVar11 & 1) != 0) {
        uStack_64 = uVar14;
                    /* try { // try from 022de488 to 023de4ff has its CatchHandler @ 022de488
                       catch() { ... } // from try @ 022de488 with catch @ 022de488
                       catch() { ... } // from try @ 022de518 with catch @ 022de488
                       catch() { ... } // from try @ 022deaf4 with catch @ 022de488 */
        uVar7 = System_Int32__ToString_482d750(&uStack_64,0);
        uVar7 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar6,uVar7,0);
      }
      Dino_BusSand_App_UI_StreakRateGameRow__SetText_21de600(uVar7,lVar8);
    }
    lVar15 = lVar15 + 8;
    uVar11 = uVar1;
  } while (uVar1 != 5);
  uVar6 = UnityEngine_Component__get_transform_43bcd18(param_2,0);
  uVar6 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar6,*(undefined8 *)PTR_DAT_04cb0b08,0);
  *(undefined8 *)(param_2 + 0x28) = uVar6;
  thunk_FUN_02134474();
  uVar6 = UnityEngine_Component__get_transform_43bcd18(param_2,0);
                    /* try { // try from 022de500 to 023de517 has its CatchHandler @ 022deaf4 */
  uVar6 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar6,*(undefined8 *)PTR_DAT_04cb0b20,0);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  thunk_FUN_02134474();
                    /* try { // try from 022de518 to 023deaef has its CatchHandler @ 022de488 */
  uVar6 = UnityEngine_Component__get_transform_43bcd18(param_2,0);
  lVar15 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar6,*(undefined8 *)PTR_DAT_04cb0b10,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar15,0,0);
  if ((uVar11 & 1) == 0) {
    uVar6 = FUN_02133068(*(undefined8 *)PTR_DAT_04cafb10,0);
  }
  else {
    if (lVar15 == 0) {
LAB_022de5ec:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar6 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                      (lVar15,1,*(undefined8 *)PTR_DAT_04cada48);
  }
  *(undefined8 *)(param_2 + 0x38) = uVar6;
  thunk_FUN_02134474();
  UnityEngine_MonoBehaviour__StopAllCoroutines_43c4224(param_2,0);
  uVar6 = Dino_BusSand_App_UI_StreakRateGameRow__Loop_21de6f0(param_1,param_2);
  UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_2,uVar6,0);
  return;
}

