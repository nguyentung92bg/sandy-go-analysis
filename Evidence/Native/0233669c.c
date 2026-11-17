/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$RefreshActiveStates
void Dino_BusSand_App_Meta_GiftPackFeature__RefreshActiveStates (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$RefreshActiveStates
   void Dino_BusSand_App_Meta_GiftPackFeature__RefreshActiveStates
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__RefreshActiveStates_223669c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_04cb3460;
  puVar1 = PTR_DAT_04cb3390;
                    /* try { // try from 023366c4 to 024366eb has its CatchHandler @ 02336908 */
  if ((bRam0000000004f9bec2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04cb3468);
    FUN_02132f7c(PTR_DAT_04cb3470);
    FUN_02132f7c(PTR_DAT_04cb3478);
    FUN_02132f7c(PTR_DAT_04cb3390);
    FUN_02132f7c(PTR_DAT_04cb3480);
    FUN_02132f7c(PTR_DAT_04cb3488);
    FUN_02132f7c(PTR_DAT_04cb3460);
                    /* try { // try from 02336730 to 02436757 has its CatchHandler @ 02336914 */
    bRam0000000004f9bec2 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar3,0);
  lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar1)
  ;
  puVar1 = PTR_DAT_04caec48;
                    /* try { // try from 02336758 to 024367eb has its CatchHandler @ 02335df0 */
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x10) == 0) {
                    /* catch() { ... } // from try @ 02335fac with catch @ 023368d4 */
                    /* catch() { ... } // from try @ 023367fc with catch @ 023368d8 */
                    /* catch() { ... } // from try @ 0233622c with catch @ 023368dc */
                    /* catch() { ... } // from try @ 02336410 with catch @ 023368e0 */
                    /* catch() { ... } // from try @ 023360e0 with catch @ 023368e4 */
                    /* catch() { ... } // from try @ 02335f68 with catch @ 023368e8 */
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar5 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
    lVar5 = lVar5 / 1000;
    if (*(long *)(lVar4 + 0x30) < lVar5) {
      *(long *)(lVar4 + 0x30) = lVar5;
    }
    if (lVar3 != 0) {
      lVar9 = *(long *)(lVar4 + 0x58);
      *(long *)(lVar3 + 0x10) = lVar5 + -0x15180;
      if (lVar9 != 0) {
        uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb3480);
                    /* try { // try from 023367ec to 024367ef has its CatchHandler @ 023369f8 */
                    /* try { // try from 023367f0 to 024367f3 has its CatchHandler @ 023369b8 */
        System_Predicate_object____ctor_2c4e748(uVar6,lVar3,*(undefined8 *)PTR_DAT_04cb3488,0);
                    /* try { // try from 023367f4 to 024367f7 has its CatchHandler @ 02336934 */
                    /* try { // try from 023367f8 to 024367fb has its CatchHandler @ 02335df0 */
                    /* try { // try from 023367fc to 024367ff has its CatchHandler @ 023368d8 */
                    /* try { // try from 02336800 to 02436803 has its CatchHandler @ 02336924 */
                    /* try { // try from 02336804 to 02436807 has its CatchHandler @ 0233693c */
                    /* try { // try from 02336808 to 0243680b has its CatchHandler @ 02336914 */
        System_Collections_Generic_List_object___RemoveAll_3a83234
                  (lVar9,uVar6,*(undefined8 *)PTR_DAT_04cb3468);
      }
      puVar2 = PTR_DAT_04cb3478;
                    /* try { // try from 0233680c to 0243680f has its CatchHandler @ 0233693c */
      lVar3 = *(long *)(lVar4 + 0x10);
                    /* try { // try from 02336810 to 02436813 has its CatchHandler @ 02336930 */
      if (lVar3 != 0) {
                    /* try { // try from 02336814 to 02436817 has its CatchHandler @ 02336908 */
                    /* try { // try from 02336818 to 0243681b has its CatchHandler @ 023369f8 */
        iVar8 = 0;
                    /* try { // try from 0233681c to 0243681f has its CatchHandler @ 02336904 */
                    /* try { // try from 02336820 to 02436823 has its CatchHandler @ 023369b8 */
        do {
                    /* try { // try from 02336824 to 0243682b has its CatchHandler @ 02336900 */
                    /* try { // try from 0233682c to 0243682f has its CatchHandler @ 023368fc */
          if (*(int *)(lVar3 + 0x18) <= iVar8) {
            return;
          }
                    /* try { // try from 02336830 to 02436833 has its CatchHandler @ 02336920 */
                    /* try { // try from 02336834 to 0243683b has its CatchHandler @ 02336938 */
          lVar3 = System_Collections_Generic_List_object___get_Item_3a81924
                            (lVar3,iVar8,*(undefined8 *)puVar2);
                    /* try { // try from 0233683c to 0243683f has its CatchHandler @ 023368f8 */
                    /* try { // try from 02336840 to 02436847 has its CatchHandler @ 023368ec */
                    /* try { // try from 02336848 to 0243684f has its CatchHandler @ 02336948 */
                    /* try { // try from 02336850 to 0243685b has its CatchHandler @ 0233693c */
          if (((lVar3 != 0) && (*(char *)(lVar3 + 0x30) != '\0')) &&
             (lVar9 = *(long *)(lVar3 + 0x20), 0 < lVar9)) {
                    /* try { // try from 0233685c to 02436867 has its CatchHandler @ 02336930 */
            if (lVar5 < lVar9) {
              lVar9 = *(long *)puVar1;
              *(undefined1 *)(lVar3 + 0x30) = 0;
                    /* try { // try from 02336868 to 02436873 has its CatchHandler @ 023369f8 */
              *(undefined1 *)(lVar3 + 0x6d) = 1;
              if (*(int *)(lVar9 + 0xe4) == 0) {
                    /* try { // try from 02336874 to 0243687f has its CatchHandler @ 023369b8 */
                thunk_FUN_0218fdac();
                lVar9 = *(long *)puVar1;
              }
                    /* try { // try from 02336880 to 0243688f has its CatchHandler @ 02336934 */
              lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
              if (lVar9 != 0) {
                    /* try { // try from 02336890 to 0243689b has its CatchHandler @ 02336938 */
                (**(code **)(lVar9 + 0x18))
                          (*(undefined8 *)(lVar9 + 0x40),*(undefined4 *)(lVar3 + 0x10),
                           *(undefined8 *)(lVar9 + 0x28));
                    /* try { // try from 0233689c to 024368a7 has its CatchHandler @ 02336948 */
              }
            }
            else {
                    /* catch() { ... } // from try @ 0233631c with catch @ 023368a8
                       try { // try from 023368a8 to 02436967 has its CatchHandler @ 02335df0 */
              lVar7 = Dino_BusSand_App_Meta_GiftPackFeature__PackDuration_223a2e0
                                (param_1,*(undefined4 *)(lVar3 + 0x10));
                    /* catch() { ... } // from try @ 023362cc with catch @ 023368ac */
                    /* catch() { ... } // from try @ 02336360 with catch @ 023368b0 */
                    /* catch() { ... } // from try @ 0233643c with catch @ 023368b4 */
              if (lVar7 + lVar9 <= lVar5) {
                    /* catch() { ... } // from try @ 023363f8 with catch @ 023368b8 */
                    /* catch() { ... } // from try @ 023361e8 with catch @ 023368bc */
                    /* catch() { ... } // from try @ 0233618c with catch @ 023368c0 */
                Dino_BusSand_App_Meta_GiftPackFeature__ExpirePack_223a404
                          (param_1,*(undefined4 *)(lVar3 + 0x10));
              }
            }
          }
                    /* catch() { ... } // from try @ 0233616c with catch @ 023368c4 */
          lVar3 = *(long *)(lVar4 + 0x10);
                    /* catch() { ... } // from try @ 02336110 with catch @ 023368c8 */
          iVar8 = iVar8 + 1;
                    /* catch() { ... } // from try @ 02336060 with catch @ 023368cc */
        } while (lVar3 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02336040 with catch @ 023368d0 */
  FUN_02133224();
}

