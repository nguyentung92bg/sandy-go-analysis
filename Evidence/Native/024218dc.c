/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$CollectHiddenSteps
void Dino_BusSand_App_UI_LiveOpsHome__CollectHiddenSteps (System_Collections_Generic_List_IEnumerator__o* steps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$CollectHiddenSteps
   void Dino_BusSand_App_UI_LiveOpsHome__CollectHiddenSteps
   (System_Collections_Generic_List_IEnumerator__o* steps, const MethodInfo* method); */

void Dino_BusSand_App_UI_LiveOpsHome__CollectHiddenSteps_23218dc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam0000000004f9c5c5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8a68);
    FUN_02132f7c(PTR_DAT_04cb8a30);
    FUN_02132f7c(PTR_DAT_04cb8a70);
    FUN_02132f7c(PTR_DAT_04cb8a78);
    bRam0000000004f9c5c5 = 1;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  uVar7 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  uVar1 = Dino_BusSand_App_UI_LiveOpsHome__get_PassportOn_23220fc();
  Dino_BusSand_App_UI_LiveOpsHome__HiddenIntro_2322574(param_1,uVar1 & 1,2);
  uVar1 = Dino_BusSand_App_UI_LiveOpsHome__get_RaceOn_2322264();
  Dino_BusSand_App_UI_LiveOpsHome__HiddenIntro_2322574(param_1,uVar1 & 1,4);
                    /* try { // try from 02421988 to 0252198f has its CatchHandler @ 02421a4c */
  uVar1 = Dino_BusSand_App_UI_LiveOpsHome__get_RoyaleOn_2322374();
  Dino_BusSand_App_UI_LiveOpsHome__HiddenIntro_2322574(param_1,uVar1 & 1,3);
  uVar1 = Dino_BusSand_App_UI_LiveOpsHome__get_DailyOn_2322444();
                    /* try { // try from 024219a0 to 025219a3 has its CatchHandler @ 02421a48 */
  Dino_BusSand_App_UI_LiveOpsHome__HiddenIntro_2322574(param_1,uVar1 & 1,6);
                    /* try { // try from 024219b0 to 02521a13 has its CatchHandler @ 02421a50 */
  uVar1 = Dino_BusSand_App_UI_LiveOpsHome__get_CupOn_23224d0();
  Dino_BusSand_App_UI_LiveOpsHome__HiddenIntro_2322574(param_1,uVar1 & 1,7);
  uVar2 = Dino_BusSand_App_UI_LiveOpsHome__get_CupOn_23224d0();
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_I_222fe5c(0);
  if (lVar3 != 0) {
    uVar2 = Dino_BusSand_App_Meta_WeeklyCupFeature__get_ResultDue_223044c(lVar3,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb8a68);
    Dino_BusSand_App_UI_CupView___ctor_21bc3f4(uVar4,0);
                    /* try { // try from 02421a14 to 02521a43 has its CatchHandler @ 02421860 */
    uVar7 = Dino_BusSand_App_UI_PostWinFlow__Show_object__283e038
                      (uVar7,*(undefined8 *)PTR_DAT_04cb8a78,uVar4,*(undefined8 *)PTR_DAT_04cb8a70);
    if (param_1 != 0) {
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)PTR_DAT_04cb8a30;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
                    /* try { // try from 02421a44 to 02521a47 has its CatchHandler @ 02421a54 */
      if (lVar3 != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024219a0 with catch @ 02421a48
                       try { // try from 02421a48 to 02521a6f has its CatchHandler @ 02421860 */
        uVar1 = *(uint *)(param_1 + 0x18);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02421988 with catch @ 02421a4c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024219b0 with catch @ 02421a50
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02421a44 with catch @ 02421a54
                        */
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(param_1 + 0x18) = uVar1 + 1;
          puVar5 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
          *puVar5 = uVar7;
                    /* try { // try from 02421a70 to 02521a73 has its CatchHandler @ 02421a8c */
                    /* try { // try from 02421a74 to 02521a8f has its CatchHandler @ 02421860 */
        }
        else {
                    /* catch() { ... } // from try @ 02421a70 with catch @ 02421a8c */
                    /* try { // try from 02421a90 to 02521a97 has its CatchHandler @ 02421aa0 */
          uVar1 = *(uint *)(param_1 + 0x18);
          System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                    (param_1,uVar1 + 1,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                    0x70) + 0x20) + 0xc0) + 0x78));
          lVar3 = *(long *)(param_1 + 0x10);
          *(uint *)(param_1 + 0x18) = uVar1 + 1;
                    /* try { // try from 02421a98 to 02521aa3 has its CatchHandler @ 02421860 */
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          puVar5 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
          *puVar5 = uVar7;
        }
        if (iRam00000000051c1b10 != 0) {
          FUN_02220bf0(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                       ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02421a90 with catch @ 02421aa0
                        */
  FUN_02133224();
}

