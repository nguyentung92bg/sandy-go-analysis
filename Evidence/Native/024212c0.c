/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$CollectSteps
void Dino_BusSand_App_UI_LiveOpsHome__CollectSteps (System_Collections_Generic_List_IEnumerator__o* steps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$CollectSteps
   void Dino_BusSand_App_UI_LiveOpsHome__CollectSteps
   (System_Collections_Generic_List_IEnumerator__o* steps, const MethodInfo* method); */

void Dino_BusSand_App_UI_LiveOpsHome__CollectSteps_23212c0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  puVar3 = PTR_DAT_04cb8a28;
  if ((bRam0000000004f9c5b1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cb8a30);
    FUN_02132f7c(PTR_DAT_04caf910);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb8a38);
    FUN_02132f7c(PTR_DAT_04cb8a40);
    FUN_02132f7c(PTR_DAT_04cb8a48);
    FUN_02132f7c(PTR_DAT_04cb8a50);
    FUN_02132f7c(PTR_DAT_04cb8a28);
    FUN_02132f7c(PTR_DAT_04caf3f0);
    FUN_02132f7c(PTR_DAT_04cb8a58);
    bRam0000000004f9c5b1 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar7,0);
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  uVar13 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar13,0,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  lVar9 = Dino_BusSand_App_UI_LiveOpsHome__get_Streak_2321798();
  if (lVar7 == 0) goto LAB_0242178c;
  plVar14 = (long *)(lVar7 + 0x10);
  *plVar14 = lVar9;
  thunk_FUN_02134474(plVar14,lVar9);
  puVar3 = PTR_DAT_04cac458;
  if (*(int *)(*(long *)PTR_DAT_04cac458 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02421430 to 025214cb has its CatchHandler @ 02421430
                       catch() { ... } // from try @ 02421430 with catch @ 02421430
                       catch() { ... } // from try @ 024214d4 with catch @ 02421430
                       catch() { ... } // from try @ 0242152c with catch @ 02421430
                       catch() { ... } // from try @ 02421558 with catch @ 02421430
                       catch() { ... } // from try @ 02421584 with catch @ 02421430 */
  uVar8 = Dino_BusSand_App_Meta_FeatureGate__On_220b9e8(7,0);
  if ((((uVar8 & 1) != 0) && (*plVar14 != 0)) &&
     (uVar8 = Dino_BusSand_App_Meta_StreakRateFeature__get_IsOpen_224c000(*plVar14,0),
     (uVar8 & 1) != 0)) {
    if (*plVar14 == 0) goto LAB_0242178c;
    Dino_BusSand_App_Meta_StreakRateFeature__HaveNewActivity_224d280(*plVar14,0);
    if (*plVar14 == 0) goto LAB_0242178c;
    lVar9 = Dino_BusSand_App_Meta_StreakRateFeature__get_CurrentSlot_224c008(*plVar14,0);
    if (lVar9 != 0) {
      uVar8 = Dino_BusSand_App_Meta_SystemOpen__Guided_2243224(3,0);
      if ((uVar8 & 1) == 0) {
        uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar10,lVar7,*(undefined8 *)PTR_DAT_04cb8a48,0);
        uVar10 = Dino_BusSand_App_UI_LiveOpsHome__Intro_23217fc(0,uVar10);
        if (param_1 == 0) goto LAB_0242178c;
                    /* try { // try from 024214cc to 025214d3 has its CatchHandler @ 02421538 */
        lVar11 = *(long *)(param_1 + 0x10);
        lVar12 = *(long *)PTR_DAT_04cb8a30;
                    /* try { // try from 024214d4 to 02521523 has its CatchHandler @ 02421430 */
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_0242178c;
        uVar4 = *(uint *)(param_1 + 0x18);
        if (uVar4 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(param_1 + 0x18) = uVar4 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar4 * 8 + 0x20) = uVar10;
          thunk_FUN_02134474();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (param_1,uVar10,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* try { // try from 02421524 to 02521527 has its CatchHandler @ 02421534 */
      if (*(char *)(lVar9 + 0x54) != '\0') {
                    /* try { // try from 02421528 to 0252152b has its CatchHandler @ 02421530 */
                    /* try { // try from 0242152c to 02521553 has its CatchHandler @ 02421430 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02421528 with catch @ 02421530
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02421524 with catch @ 02421534
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024214cc with catch @ 02421538
                        */
        auStack_34[0] = 1;
        uVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x28),auStack_34);
                    /* try { // try from 02421554 to 02521557 has its CatchHandler @ 02421578 */
                    /* try { // try from 02421558 to 0252157b has its CatchHandler @ 02421430 */
        uVar10 = Dino_BusSand_App_UI_PostWinFlow__Show_object__283e038
                           (uVar13,*(undefined8 *)PTR_DAT_04caf3f0,uVar10,
                            *(undefined8 *)PTR_DAT_04cb8a38);
        if (param_1 == 0) goto LAB_0242178c;
                    /* catch() { ... } // from try @ 02421554 with catch @ 02421578 */
                    /* try { // try from 0242157c to 02521583 has its CatchHandler @ 0242158c */
        FUN_01e77d34(param_1,uVar10,*(undefined8 *)PTR_DAT_04cb8a30);
      }
    }
  }
                    /* try { // try from 02421584 to 0252158f has its CatchHandler @ 02421430 */
  lVar9 = Dino_BusSand_App_UI_LiveOpsHome__get_Tower_2321878();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0242157c with catch @ 0242158c
                        */
  plVar14 = (long *)(lVar7 + 0x18);
  *plVar14 = lVar9;
  thunk_FUN_02134474(plVar14,lVar9);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = Dino_BusSand_App_Meta_FeatureGate__On_220b9e8(8,0);
                    /* try { // try from 024215b8 to 02521687 has its CatchHandler @ 024215b8
                       catch() { ... } // from try @ 024215b8 with catch @ 024215b8
                       catch() { ... } // from try @ 02421690 with catch @ 024215b8
                       catch() { ... } // from try @ 02421704 with catch @ 024215b8
                       catch() { ... } // from try @ 02421728 with catch @ 024215b8
                       catch() { ... } // from try @ 02421754 with catch @ 024215b8 */
  if ((((uVar8 & 1) != 0) && (*plVar14 != 0)) &&
     (uVar8 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(2,0), (uVar8 & 1) != 0)) {
    if (*plVar14 == 0) goto LAB_0242178c;
    uVar8 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_HasData_2229490(*plVar14,0);
    if ((uVar8 & 1) == 0) goto LAB_02421770;
    uVar4 = Dino_BusSand_App_Meta_SystemOpen__Guided_2243224(2,0);
    if ((uVar4 & 1) == 0) {
      uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar10,lVar7,*(undefined8 *)PTR_DAT_04cb8a50,0);
      uVar10 = Dino_BusSand_App_UI_LiveOpsHome__Intro_23217fc(1,uVar10);
      if (param_1 == 0) goto LAB_0242178c;
      FUN_01e77d34(param_1,uVar10,*(undefined8 *)PTR_DAT_04cb8a30);
    }
    if (*plVar14 != 0) {
      uVar5 = Dino_BusSand_App_Meta_ClimbTowerFeature__TakeAutoOpen_2228e48(*plVar14,0);
      if (*plVar14 != 0) {
        uVar6 = Dino_BusSand_App_Meta_ClimbTowerFeature__TakeProcess_2228e58(*plVar14,0);
        puVar3 = PTR_DAT_04caf910;
        if ((((uVar5 | uVar6) & 1) == 0) && (((uVar4 ^ 1) & 1) == 0)) {
                    /* try { // try from 02421688 to 0252168f has its CatchHandler @ 02421708 */
                    /* try { // try from 02421690 to 025216ff has its CatchHandler @ 024215b8 */
          if ((*plVar14 == 0) ||
             ((lVar7 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                 (*plVar14,*(undefined8 *)PTR_DAT_04caf910), lVar7 == 0 ||
              (*plVar14 == 0)))) goto LAB_0242178c;
          iVar1 = *(int *)(lVar7 + 0x10);
          lVar7 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                            (*plVar14,*(undefined8 *)puVar3);
          if (lVar7 == 0) goto LAB_0242178c;
          if (iVar1 == *(int *)(lVar7 + 0x14)) goto LAB_02421770;
        }
        auStack_38[0] = 1;
        uVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x28),auStack_38);
                    /* try { // try from 02421700 to 02521703 has its CatchHandler @ 02421704 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02421700 with catch @ 02421704
                       try { // try from 02421704 to 02521723 has its CatchHandler @ 024215b8 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02421688 with catch @ 02421708
                        */
        uVar13 = Dino_BusSand_App_UI_PostWinFlow__Show_object__283e038
                           (uVar13,*(undefined8 *)PTR_DAT_04cb8a58,uVar10,
                            *(undefined8 *)PTR_DAT_04cb8a40);
        if (param_1 != 0) {
          lVar7 = *(long *)(param_1 + 0x10);
          lVar9 = *(long *)PTR_DAT_04cb8a30;
                    /* try { // try from 02421724 to 02521727 has its CatchHandler @ 02421748 */
                    /* try { // try from 02421728 to 0252174b has its CatchHandler @ 024215b8 */
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar4 = *(uint *)(param_1 + 0x18);
            if (uVar4 < *(uint *)(lVar7 + 0x18)) {
                    /* catch() { ... } // from try @ 02421724 with catch @ 02421748 */
                    /* try { // try from 0242174c to 02521753 has its CatchHandler @ 0242175c */
              *(uint *)(param_1 + 0x18) = uVar4 + 1;
              *(undefined8 *)(lVar7 + (long)(int)uVar4 * 8 + 0x20) = uVar13;
                    /* try { // try from 02421754 to 0252175f has its CatchHandler @ 024215b8 */
              thunk_FUN_02134474();
            }
            else {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0242174c with catch @ 0242175c
                        */
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (param_1,uVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_02421770;
          }
        }
      }
    }
LAB_0242178c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_02421770:
  Dino_BusSand_App_UI_LiveOpsHome__CollectHiddenSteps_23218dc(param_1);
  return;
}

