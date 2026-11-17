/* IL2CPP: Dino.BusSand.App.UI.NoAdsUi$$OpenPanel
bool Dino_BusSand_App_UI_NoAdsUi__OpenPanel (System_Action_o* onClosed, System_String_o* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.NoAdsUi$$OpenPanel
   bool Dino_BusSand_App_UI_NoAdsUi__OpenPanel (System_Action_o* onClosed, System_String_o* source,
   const MethodInfo* method); */

uint Dino_BusSand_App_UI_NoAdsUi__OpenPanel_21cb254(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if ((bRam0000000004f9bb17 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb00a0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 022cb290 to 023cb29b has its CatchHandler @ 022cb304 */
    FUN_02132f7c(PTR_DAT_04cb0090);
    FUN_02132f7c(PTR_DAT_04cb00f8);
    FUN_02132f7c(PTR_DAT_04cb0100);
                    /* try { // try from 022cb2b4 to 023cb2bb has its CatchHandler @ 022cb2e8 */
    FUN_02132f7c(PTR_DAT_04cb0108);
                    /* try { // try from 022cb2bc to 023cb327 has its CatchHandler @ 022cb194 */
    bRam0000000004f9bb17 = 1;
  }
  puVar2 = PTR_DAT_04cb00a0;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb2b4 with catch @ 022cb2e8
                        */
    cRam0000000004f9b94d = '\x01';
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb230 with catch @ 022cb2ec
                        */
  puVar1 = PTR_DAT_04ca9ae8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb1e8 with catch @ 022cb2f0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb1e0 with catch @ 022cb300
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb220 with catch @ 022cb304
                       catch(type#1 @ 00000000) { ... } // from try @ 022cb290 with catch @ 022cb304
                        */
  lVar8 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb1bc with catch @ 022cb314
                        */
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Meta_NoAdsFeature__get_I_2243704(0);
  lVar7 = *(long *)puVar1;
                    /* try { // try from 022cb328 to 023cb32f has its CatchHandler @ 022cb338 */
  if (*(int *)(lVar7 + 0xe4) == 0) {
                    /* try { // try from 022cb330 to 023cb33b has its CatchHandler @ 022cb194 */
    thunk_FUN_0218fdac(lVar7);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb328 with catch @ 022cb338
                        */
                    /* try { // try from 022cb33c to 023cb33f has its CatchHandler @ 022cb348 */
                    /* try { // try from 022cb340 to 023cb34b has its CatchHandler @ 022cb194 */
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb33c with catch @ 022cb348
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb450 with catch @ 022cb34c
                       catch(type#1 @ 00000000) { ... } // from try @ 022cb4c0 with catch @ 022cb34c
                       catch(type#1 @ 00000000) { ... } // from try @ 022cb4d0 with catch @ 022cb34c
                        */
  if ((((uVar5 & 1) == 0) && (lVar4 != 0)) &&
     (uVar5 = Dino_BusSand_App_Meta_NoAdsFeature__ShouldShowHallEntry_2243a30(lVar4,0),
     (uVar5 & 1) != 0)) {
    if (lVar8 != 0) {
                    /* try { // try from 022cb370 to 023cb37b has its CatchHandler @ 022cb4a4 */
      uVar5 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                        (lVar8,*(undefined8 *)PTR_DAT_04cb00f8);
      if ((uVar5 & 1) != 0) goto LAB_022cb37c;
      lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb0090);
      System_Object___ctor_4870e5c(lVar4,0);
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = param_1;
                    /* try { // try from 022cb3d0 to 023cb3df has its CatchHandler @ 022cb494 */
        thunk_FUN_02134474((long *)(lVar4 + 0x10),param_1);
        *(undefined8 *)(lVar4 + 0x18) = param_2;
                    /* try { // try from 022cb3e0 to 023cb3ff has its CatchHandler @ 022cb47c */
        thunk_FUN_02134474((undefined8 *)(lVar4 + 0x18),param_2);
        uVar6 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar8,*(undefined8 *)PTR_DAT_04cb0108,2,lVar4,
                           *(undefined8 *)PTR_DAT_04cb0100);
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar8);
        }
                    /* try { // try from 022cb424 to 023cb42f has its CatchHandler @ 022cb494 */
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
  if (param_1 != 0) {
                    /* try { // try from 022cb38c to 023cb397 has its CatchHandler @ 022cb490 */
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
  }
                    /* try { // try from 022cb398 to 023cb3a7 has its CatchHandler @ 022cb480 */
  return 0;
}

