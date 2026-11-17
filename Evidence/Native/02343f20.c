/* IL2CPP: Dino.BusSand.App.Meta.NoAdsFeature.<RunForcedPopup>d__21$$MoveNext
bool Dino_BusSand_App_Meta_NoAdsFeature__RunForcedPopup_d__21__MoveNext (Dino_BusSand_App_Meta_NoAdsFeature__RunForcedPopup_d__21_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.NoAdsFeature.<RunForcedPopup>d__21$$MoveNext
   bool Dino_BusSand_App_Meta_NoAdsFeature__RunForcedPopup_d__21__MoveNext
   (Dino_BusSand_App_Meta_NoAdsFeature__RunForcedPopup_d__21_o* __this, const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_Meta_NoAdsFeature__RunForcedPopup_d__21__MoveNext_2243f20(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  uVar2 = param_1;
  if ((bRam0000000004f9bf2e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb3940);
    FUN_02132f7c(PTR_DAT_04cb3948);
                    /* try { // try from 02343f60 to 02444003 has its CatchHandler @ 02343f60
                       catch() { ... } // from try @ 02343f60 with catch @ 02343f60
                       catch() { ... } // from try @ 023441d4 with catch @ 02343f60
                       catch() { ... } // from try @ 0234423c with catch @ 02343f60
                       catch() { ... } // from try @ 0234428c with catch @ 02343f60
                       catch() { ... } // from try @ 023442f4 with catch @ 02343f60 */
    uVar2 = FUN_02132f7c(PTR_DAT_04caec90);
    bRam0000000004f9bf2e = 1;
  }
  puVar1 = PTR_DAT_04cb3948;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    lVar6 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Object___ctor_4870e5c(lVar3,0);
    plVar7 = (long *)(param_1 + 0x28);
    *plVar7 = lVar3;
    thunk_FUN_02134474(plVar7,lVar3);
    uVar2 = 0;
    if (*plVar7 == 0) goto LAB_02344094;
    *(undefined8 *)(*plVar7 + 0x10) = *(undefined8 *)(param_1 + 0x20);
    uVar2 = thunk_FUN_02134474();
    if (lVar6 == 0) goto LAB_02344094;
    uVar2 = Dino_BusSand_App_Meta_NoAdsFeature__ShouldForceShow_2243ac4(lVar6);
    puVar1 = PTR_DAT_04caa458;
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    lVar3 = *plVar7;
    if (lVar3 == 0) goto LAB_02344094;
    *(undefined1 *)(lVar3 + 0x18) = 0;
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 02344004 to 02444043 has its CatchHandler @ 02344254 */
    System_Action___ctor_47b5ed0(uVar4,lVar3,*(undefined8 *)PTR_DAT_04cb3940,0);
    uVar5 = Dino_BusSand_App_UI_NoAdsUi__OpenPanel_21cb254(uVar4,*(undefined8 *)PTR_DAT_04caec90,0);
    Dino_BusSand_App_Meta_SystemOpen__MarkGuided_224333c(9);
    uVar2 = 0;
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* try { // try from 02344060 to 02444063 has its CatchHandler @ 02344244 */
    if (*(char *)(*(long *)(param_1 + 0x28) + 0x18) != '\0') {
                    /* try { // try from 02344068 to 02444073 has its CatchHandler @ 02344248 */
      return 0;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
                    /* try { // try from 02344088 to 0244413b has its CatchHandler @ 0234425c */
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
LAB_02344094:
                    /* WARNING: Subroutine does not return */
  FUN_02133224(uVar2);
}

