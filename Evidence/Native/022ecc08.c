/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$InitTrackItems
void Dino_BusSand_App_UI_YachtRacingPanel__InitTrackItems (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$InitTrackItems
   void Dino_BusSand_App_UI_YachtRacingPanel__InitTrackItems
   (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingPanel__InitTrackItems_21ecc08(long param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  undefined4 in_s3;
  undefined4 uVar14;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  if ((bRam0000000004f9bbfc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb11a8);
    FUN_02132f7c(PTR_DAT_04caa458);
                    /* try { // try from 022ecc54 to 023ecc57 has its CatchHandler @ 022ecc6c */
                    /* try { // try from 022ecc58 to 023ecce7 has its CatchHandler @ 022ecbf8 */
    FUN_02132f7c(PTR_DAT_04cb11b0);
    FUN_02132f7c(PTR_DAT_04cb11b8);
                    /* catch() { ... } // from try @ 022ecc54 with catch @ 022ecc6c */
    FUN_02132f7c(PTR_DAT_04cb11c0);
    FUN_02132f7c(PTR_DAT_04cb11c8);
    FUN_02132f7c(PTR_DAT_04cb11d0);
    FUN_02132f7c(PTR_DAT_04cb11d8);
    FUN_02132f7c(PTR_DAT_04cb11e0);
    FUN_02132f7c(PTR_DAT_04cb11e8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb11f0);
    FUN_02132f7c(PTR_DAT_04cb11f8);
    bRam0000000004f9bbfc = 1;
  }
  puVar4 = PTR_DAT_04cb11b8;
  puVar3 = PTR_DAT_04cb11b0;
  lVar6 = *(long *)(param_1 + 0x40);
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_78 = 0;
                    /* try { // try from 022ecce8 to 023ecd7f has its CatchHandler @ 022ecce8
                       catch() { ... } // from try @ 022ecce8 with catch @ 022ecce8
                       catch() { ... } // from try @ 022ecd88 with catch @ 022ecce8 */
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
    lVar11 = *(long *)(*(long *)(lVar6 + 0x10) + 0x18);
    if ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) == 0)) {
      if (*(long *)(param_1 + 0x50) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_88,*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_04cb11c8);
        while( true ) {
                    /* catch() { ... } // from try @ 022eceac with catch @ 022ecf10 */
          uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_88,*(undefined8 *)puVar4);
          if ((uVar7 & 1) == 0) {
                    /* try { // try from 022ecf40 to 023ecfd7 has its CatchHandler @ 022ecf40
                       catch() { ... } // from try @ 022ecf40 with catch @ 022ecf40
                       catch() { ... } // from try @ 022ecfe0 with catch @ 022ecf40 */
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_88,*(undefined8 *)puVar3);
                    /* try { // try from 022ecfd8 to 023ecfdf has its CatchHandler @ 022ed03c */
                    /* try { // try from 022ecfe0 to 023ed06b has its CatchHandler @ 022ecf40 */
            return;
          }
          if (lStack_78 == 0) break;
          lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lStack_78,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          UnityEngine_GameObject__SetActive_43c1408(lVar6,0,0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
    else {
      uVar5 = Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress_22551dc(lVar6,0xffffffff,0);
      uVar13 = *(undefined8 *)(param_1 + 0x80);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
      uVar14 = 0;
      if ((uVar7 & 1) != 0) {
        if (*(long *)(param_1 + 0x80) == 0) goto LAB_022eced0;
        UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_1 + 0x80),0);
        uVar14 = in_s3;
      }
      puVar4 = PTR_DAT_04cb11e8;
      puVar3 = PTR_DAT_04cb11e0;
      lVar6 = *(long *)(param_1 + 0x50);
      if (lVar6 != 0) {
        bVar2 = false;
        iVar12 = 0;
        do {
                    /* try { // try from 022ecd80 to 023ecd87 has its CatchHandler @ 022ecde4 */
                    /* try { // try from 022ecd88 to 023ece13 has its CatchHandler @ 022ecce8 */
          if (*(int *)(lVar6 + 0x18) <= iVar12) {
            Dino_BusSand_App_UI_YachtRacingPanel__OnBotsUpdated_21ed0d4(param_1);
            if (!bVar2) {
              return;
            }
            lVar6 = Dino_BusSand_App_UI_YachtRacingPanel__ForceActiveBot_21ed2f8(param_1);
            uVar7 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
            if ((uVar7 & 1) != 0) {
              if (lVar6 == 0) {
                thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
                uVar9 = thunk_FUN_0216e89c();
                uVar13 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
                System_NullReferenceException___ctor_483267c(uVar9,uVar13,0);
              }
              else {
                uVar7 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
                if ((uVar7 & 1) != 0) {
                  if ((bRam0000000004fa84ef & 1) == 0) {
                    FUN_02132f7c(PTR_DAT_04cf7890);
                    bRam0000000004fa84ef = 1;
                  }
                  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  lVar11 = *(long *)(param_1 + 0x10);
                  if (lVar11 != 0) {
                    if (pcRam0000000004fa8560 == (code *)0x0) {
                      pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                    }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000004fa8560)(lVar11,lVar6);
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
                }
                thunk_FUN_021985a8(PTR_DAT_04caa3a8);
                uVar9 = thunk_FUN_0216e89c();
                uVar13 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
                System_ArgumentException___ctor_47b660c(uVar9,uVar13,0);
              }
              uVar13 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar9,uVar13);
            }
            return;
          }
          lVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                            (lVar6,iVar12,*(undefined8 *)puVar4);
          if (iVar12 < *(int *)(lVar11 + 0x18)) {
            if ((lVar6 == 0) ||
               (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0), lVar8 == 0)) break;
            UnityEngine_GameObject__SetActive_43c1408(lVar8,1,0);
            uVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                               (lVar11,iVar12,*(undefined8 *)puVar3);
            uVar1 = *(undefined4 *)(param_1 + 0x48);
                    /* catch() { ... } // from try @ 022ecd80 with catch @ 022ecde4 */
            uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar9,param_1,*(undefined8 *)PTR_DAT_04cb11f0,0);
                    /* try { // try from 022ece14 to 023eceab has its CatchHandler @ 022ece14
                       catch() { ... } // from try @ 022ece14 with catch @ 022ece14
                       catch() { ... } // from try @ 022eceb4 with catch @ 022ece14 */
            uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb11a8);
            System_Action_object__Vector2____ctor_35f7de0
                      (uVar10,param_1,*(undefined8 *)PTR_DAT_04cb11f8,0);
            Dino_BusSand_App_UI_YachtRacingTrackRow__Init_21f5234
                      (uVar14,lVar6,uVar13,uVar5,uVar1,uVar9,uVar10,0);
            if (iVar12 == *(int *)(lVar11 + 0x18) + -1) {
              Dino_BusSand_App_UI_YachtRacingTrackRow__HideLine_21f6614(lVar6,0);
            }
            lVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                              (lVar11,iVar12,*(undefined8 *)puVar3);
            if (lVar6 == 0) break;
            bVar2 = (bool)(*(char *)(lVar6 + 0x2d) == '\0' | bVar2);
          }
          else {
                    /* try { // try from 022eceac to 023eceb3 has its CatchHandler @ 022ecf10 */
                    /* try { // try from 022eceb4 to 023ecf3f has its CatchHandler @ 022ece14 */
            if ((lVar6 == 0) ||
               (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0), lVar6 == 0)) break;
            UnityEngine_GameObject__SetActive_43c1408(lVar6,0,0);
          }
          lVar6 = *(long *)(param_1 + 0x50);
          iVar12 = iVar12 + 1;
        } while (lVar6 != 0);
      }
    }
  }
LAB_022eced0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

