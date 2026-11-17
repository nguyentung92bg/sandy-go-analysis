/* IL2CPP: Dino.BusSand.App.UI.StreakHomeBar$$Refresh
void Dino_BusSand_App_UI_StreakHomeBar__Refresh (Dino_BusSand_App_UI_StreakHomeBar_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StreakHomeBar$$Refresh
   void Dino_BusSand_App_UI_StreakHomeBar__Refresh (Dino_BusSand_App_UI_StreakHomeBar_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakHomeBar__Refresh_21b5518(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  puVar5 = PTR_DAT_04cac668;
  if ((bRam0000000004f9baa2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf220);
    FUN_02132f7c(PTR_DAT_04caf3e0);
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9baa2 = 1;
  }
  puVar6 = PTR_DAT_04caf3e0;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar10 = Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4(*(undefined8 *)puVar6);
  if (lVar10 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(lVar10,0);
  }
                    /* try { // try from 022b55cc to 023b5607 has its CatchHandler @ 022b55cc
                       catch() { ... } // from try @ 022b55cc with catch @ 022b55cc
                       catch() { ... } // from try @ 022b5610 with catch @ 022b55cc */
  bVar8 = Dino_BusSand_App_UI_LiveOpsHome__get_StreakShown_2322760(0);
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x20),0),
     lVar12 == 0)) goto LAB_022b595c;
  bVar8 = bVar8 & lVar11 != 0;
  bVar9 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar12,0);
                    /* try { // try from 022b5608 to 023b560f has its CatchHandler @ 022b5610 */
  if (bVar8 != (bVar9 & 1)) {
                    /* catch() { ... } // from try @ 022b5608 with catch @ 022b5610
                       try { // try from 022b5610 to 023b5623 has its CatchHandler @ 022b55cc */
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x20),0),
       lVar12 == 0)) goto LAB_022b595c;
    UnityEngine_GameObject__SetActive_43c1408(lVar12,bVar8,0);
  }
  if (bVar8 == 0) {
    return;
  }
  if (lVar10 == 0) goto LAB_022b595c;
                    /* catch() { ... } // from try @ 022b5688 with catch @ 022b563c */
  lVar12 = Dino_BusSand_App_Meta_StreakRateFeature__NeedScores_224bf28(lVar10,lVar11,0);
  lVar10 = Dino_BusSand_App_Meta_StreakRateFeature__RewardIds_224bf94(lVar10,lVar11,0);
  if (lVar12 == 0) goto LAB_022b595c;
  uVar3 = *(uint *)(lVar11 + 0x48);
  lVar18 = (long)(int)uVar3;
  bVar7 = (*(ulong *)(lVar12 + 0x18) & 0xffffffff) == 0;
  uVar15 = (uint)*(ulong *)(lVar12 + 0x18);
  bVar4 = (int)uVar15 <= (int)uVar3;
  fVar20 = 1.0;
  if (!bVar7 && !bVar4) {
                    /* try { // try from 022b5680 to 023b5687 has its CatchHandler @ 022b56bc */
    if (uVar15 <= uVar3) goto LAB_022b5960;
                    /* try { // try from 022b5688 to 023b56cf has its CatchHandler @ 022b563c */
    iVar1 = *(int *)(lVar12 + lVar18 * 4 + 0x20);
    if (iVar1 < 1) {
      fVar20 = 0.0;
    }
    else {
      fVar19 = (float)*(int *)(lVar11 + 0x4c) / (float)iVar1;
      fVar21 = 1.0;
      if (fVar19 <= 1.0) {
        fVar21 = fVar19;
      }
      fVar20 = 0.0;
                    /* catch() { ... } // from try @ 022b5680 with catch @ 022b56bc */
      if (0.0 <= fVar19) {
        fVar20 = fVar21;
      }
    }
  }
  lVar16 = *(long *)(param_1 + 0x28);
  if (lVar16 == 0) goto LAB_022b595c;
                    /* catch() { ... } // from try @ 022b5710 with catch @ 022b56d0 */
  fVar21 = 0.0;
  if (0.0 <= fVar20) {
    fVar21 = fVar20;
  }
  UnityEngine_RectTransform__get_sizeDelta_43cf9ac(lVar16,0);
                    /* try { // try from 022b5708 to 023b570f has its CatchHandler @ 022b5744 */
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(fVar21 * 808.0 + 44.0,lVar16,0);
                    /* try { // try from 022b5710 to 023b5757 has its CatchHandler @ 022b56d0 */
  plVar17 = *(long **)(param_1 + 0x48);
  if (bVar7 || bVar4) {
    uVar13 = *(undefined8 *)PTR_DAT_04ca9c30;
  }
  else {
    uVar13 = System_Int32__ToString_482d750(lVar11 + 0x4c,0);
    if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_022b5960;
    uVar14 = System_Int32__ToString_482d750(lVar12 + lVar18 * 4 + 0x20,0);
                    /* catch() { ... } // from try @ 022b5708 with catch @ 022b5744 */
    uVar13 = System_String__Concat_46d2b84(uVar13,*(undefined8 *)PTR_DAT_04cabd10,uVar14,0);
  }
  if (plVar17 == (long *)0x0) goto LAB_022b595c;
  (**(code **)(*plVar17 + 0x518))(plVar17,uVar13,*(undefined8 *)(*plVar17 + 0x520));
  if (bVar7 || bVar4) {
LAB_022b57f0:
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_022b595c;
                    /* catch() { ... } // from try @ 022b584c with catch @ 022b5800 */
    UnityEngine_Behaviour__set_enabled_43bc50c(*(long *)(param_1 + 0x38),0,0);
    plVar17 = *(long **)(param_1 + 0x50);
    if (plVar17 == (long *)0x0) goto LAB_022b595c;
    (**(code **)(*plVar17 + 0x518))
              (plVar17,*(undefined8 *)PTR_DAT_04ca9c30,*(undefined8 *)(*plVar17 + 0x520));
  }
  else {
    if (lVar10 == 0) goto LAB_022b595c;
    if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar3) goto LAB_022b57f0;
    if (*(uint *)(lVar10 + 0x18) <= uVar3) {
LAB_022b5960:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    uVar14 = *(undefined8 *)(param_1 + 0x50);
    uVar13 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined4 *)(lVar10 + lVar18 * 4 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_04caf220 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_BusStreakUi__SetReward_21b3558(_UNK_00e2094c,0x3e800000,uVar13,uVar14,uVar2)
    ;
  }
  lVar11 = *(long *)(lVar11 + 0x38);
  lVar10 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
  plVar17 = *(long **)(param_1 + 0x58);
  lVar11 = lVar11 - lVar10;
  if (lVar11 < 1000) {
                    /* catch() { ... } // from try @ 022b58d4 with catch @ 022b5894 */
    uVar13 = *(undefined8 *)PTR_DAT_04ca9c30;
  }
  else {
                    /* try { // try from 022b5844 to 023b584b has its CatchHandler @ 022b5880 */
                    /* try { // try from 022b584c to 023b5893 has its CatchHandler @ 022b5800 */
    if (*(int *)(*(long *)PTR_DAT_04caf220 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* catch() { ... } // from try @ 022b5844 with catch @ 022b5880 */
    uVar13 = Dino_BusSand_App_Countdown__Text_214f5d0(lVar11 / 1000,0);
  }
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x518))(plVar17,uVar13,*(undefined8 *)(*plVar17 + 0x520));
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x30),0),
       lVar10 != 0)) {
                    /* try { // try from 022b58cc to 023b58d3 has its CatchHandler @ 022b5908 */
      bVar8 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar10,0);
                    /* try { // try from 022b58d4 to 023b591b has its CatchHandler @ 022b5894 */
      if (999 < lVar11 == (bool)(bVar8 & 1)) {
        return;
      }
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x30),0),
         lVar10 != 0)) {
        UnityEngine_GameObject__SetActive_43c1408(lVar10,999 < lVar11,0);
                    /* catch() { ... } // from try @ 022b58cc with catch @ 022b5908 */
        if ((*(long *)(param_1 + 0x40) != 0) &&
           (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x40),0),
           lVar10 != 0)) {
          if ((bRam0000000004fa8360 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf5bd0,999 < lVar11,0);
            bRam0000000004fa8360 = 1;
          }
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar12 = *(long *)(lVar10 + 0x10);
          if (lVar12 != 0) {
            if (pcRam0000000004fa8430 == (code *)0x0) {
              pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
            }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8430)(lVar12,999 < lVar11);
            return;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar10,0);
        }
      }
    }
  }
LAB_022b595c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

