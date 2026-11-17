/* IL2CPP: Dino.BusSand.App.UI.NoAdsUi.<>c__DisplayClass1_0$$<BindHall>b__1
void Dino_BusSand_App_UI_NoAdsUi___c__DisplayClass1_0___BindHall_b__1 (Dino_BusSand_App_UI_NoAdsUi___c__DisplayClass1_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.NoAdsUi.<>c__DisplayClass1_0$$<BindHall>b__1
   void Dino_BusSand_App_UI_NoAdsUi___c__DisplayClass1_0___BindHall_b__1
   (Dino_BusSand_App_UI_NoAdsUi___c__DisplayClass1_0_o* __this, const MethodInfo* method); */

uint Dino_BusSand_App_UI_NoAdsUi___c__DisplayClass1_0___BindHall_b__1_21cb978(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb968 with catch @ 022cb978
                        */
                    /* try { // try from 022cb97c to 023cb97f has its CatchHandler @ 022cb988 */
                    /* try { // try from 022cb980 to 023cb98b has its CatchHandler @ 022cb7fc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb97c with catch @ 022cb988
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cba90 with catch @ 022cb98c
                       catch(type#1 @ 00000000) { ... } // from try @ 022cbb00 with catch @ 022cb98c
                       catch(type#1 @ 00000000) { ... } // from try @ 022cbb10 with catch @ 022cb98c
                        */
  if ((bRam0000000004f9bb1a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb0140);
                    /* try { // try from 022cb9b0 to 023cb9bb has its CatchHandler @ 022cbae4 */
    FUN_02132f7c(PTR_DAT_04caec80);
    bRam0000000004f9bb1a = 1;
  }
  puVar2 = PTR_DAT_04caec80;
  lVar9 = *(long *)(param_1 + 0x18);
                    /* try { // try from 022cb9cc to 023cb9d7 has its CatchHandler @ 022cbad0 */
  if (lVar9 == 0) {
                    /* try { // try from 022cb9d8 to 023cb9e7 has its CatchHandler @ 022cbac0 */
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(lVar9,param_1,*(undefined8 *)PTR_DAT_04cb0140,0);
    *(long *)(param_1 + 0x18) = lVar9;
    thunk_FUN_02134474((long *)(param_1 + 0x18),lVar9);
  }
                    /* try { // try from 022cba10 to 023cba1f has its CatchHandler @ 022cbad4 */
  uVar6 = *(undefined8 *)puVar2;
                    /* try { // try from 022cba20 to 023cba3f has its CatchHandler @ 022cbabc */
  if ((bRam0000000004f9bb17 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb00a0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0090);
    FUN_02132f7c(PTR_DAT_04cb00f8);
    FUN_02132f7c(PTR_DAT_04cb0100);
    FUN_02132f7c(PTR_DAT_04cb0108);
    bRam0000000004f9bb17 = 1;
  }
  puVar2 = PTR_DAT_04cb00a0;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar8 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Meta_NoAdsFeature__get_I_2243704(0);
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar7);
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  if ((((uVar5 & 1) == 0) && (lVar4 != 0)) &&
     (uVar5 = Dino_BusSand_App_Meta_NoAdsFeature__ShouldShowHallEntry_2243a30(lVar4,0),
     (uVar5 & 1) != 0)) {
    if (lVar8 != 0) {
      uVar5 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                        (lVar8,*(undefined8 *)PTR_DAT_04cb00f8);
      if ((uVar5 & 1) != 0) goto LAB_022cb37c;
      lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb0090);
      System_Object___ctor_4870e5c(lVar4,0);
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar9;
        thunk_FUN_02134474((long *)(lVar4 + 0x10),lVar9);
        *(undefined8 *)(lVar4 + 0x18) = uVar6;
        thunk_FUN_02134474((undefined8 *)(lVar4 + 0x18),uVar6);
        uVar6 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar8,*(undefined8 *)PTR_DAT_04cb0108,2,lVar4,
                           *(undefined8 *)PTR_DAT_04cb0100);
        lVar9 = *(long *)puVar1;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar9);
        }
        puVar2 = PTR_DAT_04ca9ae8;
        if ((bRam0000000004fa8638 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
          bRam0000000004fa8638 = 1;
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar6,0);
        return (uVar3 ^ 0xffffffff) & 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_022cb37c:
  if (lVar9 != 0) {
    (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
  }
  return 0;
}

