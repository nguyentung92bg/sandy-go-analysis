/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$OpenTips
void Dino_BusSand_App_UI_YachtRacingUi__OpenTips (System_Action_o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$OpenTips
   void Dino_BusSand_App_UI_YachtRacingUi__OpenTips (System_Action_o* done, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_YachtRacingUi__OpenTips_21f83f8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((bRam0000000004f9bc4a & 1) == 0) {
                    /* try { // try from 022f8418 to 023f841b has its CatchHandler @ 022f842c */
                    /* try { // try from 022f841c to 023f843f has its CatchHandler @ 022f83e0 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1818);
                    /* catch() { ... } // from try @ 022f8418 with catch @ 022f842c */
    FUN_02132f7c(PTR_DAT_04cb1820);
                    /* try { // try from 022f8440 to 023f848b has its CatchHandler @ 022f8440
                       catch(type#1 @ 00000000) { ... } // from try @ 022f8440 with catch @ 022f8440
                       catch(type#1 @ 00000000) { ... } // from try @ 022f8538 with catch @ 022f8440
                        */
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb1828);
    bRam0000000004f9bc4a = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = Dino_BusSand_App_UI_YachtRacingUi__Once_21f7ef4(param_1);
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
                    /* try { // try from 022f848c to 023f8493 has its CatchHandler @ 022f85cc */
                    /* try { // try from 022f849c to 023f849f has its CatchHandler @ 022f85b0 */
  lVar6 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
                    /* try { // try from 022f84a8 to 023f84af has its CatchHandler @ 022f85a8 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022f84b4 to 023f84db has its CatchHandler @ 022f85cc */
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  puVar2 = PTR_DAT_04cb1828;
  if ((uVar4 & 1) == 0) {
                    /* try { // try from 022f84dc to 023f84e3 has its CatchHandler @ 022f85ac */
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_UiAssets__HasPrefab_2163510(*(undefined8 *)puVar2,0);
    if ((uVar4 & 1) != 0) {
      if (lVar6 == 0) goto LAB_022f8580;
                    /* try { // try from 022f84fc to 023f8507 has its CatchHandler @ 022f8594 */
                    /* try { // try from 022f8508 to 023f851f has its CatchHandler @ 022f8570 */
      uVar4 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                        (lVar6,*(undefined8 *)PTR_DAT_04cb1818);
      if ((uVar4 & 1) == 0) {
                    /* try { // try from 022f8534 to 023f8537 has its CatchHandler @ 022f8538 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f8534 with catch @ 022f8538
                       try { // try from 022f8538 to 023f85df has its CatchHandler @ 022f8440 */
        uVar5 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar6,*(undefined8 *)puVar2,2,lVar3,*(undefined8 *)PTR_DAT_04cb1820);
        lVar6 = *(long *)puVar1;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar6);
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f8508 with catch @ 022f8570
                        */
        uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        if (lVar3 == 0) goto LAB_022f8580;
        goto LAB_022f8514;
      }
    }
  }
  if (lVar3 != 0) {
LAB_022f8514:
                    /* WARNING: Could not recover jumptable at 0x022f852c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    return;
  }
LAB_022f8580:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

