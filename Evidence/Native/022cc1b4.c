/* IL2CPP: Dino.BusSand.App.UI.BonusBankOpenPanel.<Claim>d__8$$MoveNext
bool Dino_BusSand_App_UI_BonusBankOpenPanel__Claim_d__8__MoveNext (Dino_BusSand_App_UI_BonusBankOpenPanel__Claim_d__8_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BonusBankOpenPanel.<Claim>d__8$$MoveNext
   bool Dino_BusSand_App_UI_BonusBankOpenPanel__Claim_d__8__MoveNext
   (Dino_BusSand_App_UI_BonusBankOpenPanel__Claim_d__8_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_BonusBankOpenPanel__Claim_d__8__MoveNext_21cc1b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long lStack_28;
  
  if ((bRam0000000004f9bb1f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04caec68);
                    /* try { // try from 022cc1e8 to 023cc26f has its CatchHandler @ 022cc34c */
    FUN_02132f7c(PTR_DAT_04cad9b8);
    FUN_02132f7c(PTR_DAT_04cb0188);
    FUN_02132f7c(PTR_DAT_04cb0190);
    bRam0000000004f9bb1f = 1;
  }
  fVar4 = _UNK_00e20660;
  lVar3 = *(long *)(param_1 + 0x20);
  lStack_28 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar5 = *(float *)(param_1 + 0x28);
                    /* try { // try from 022cc2a8 to 023cc2d3 has its CatchHandler @ 022cc310 */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (fVar4 <= fVar5) {
      if (lVar3 != 0) {
                    /* try { // try from 022cc3a4 to 023cc3af has its CatchHandler @ 022cc450 */
        uVar1 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar3,*(undefined8 *)PTR_DAT_04cad9b8,0);
        uVar2 = System_Int64__ToString_482e7e4(lVar3 + 0x50,0);
        if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
        }
        Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar1,uVar2,0);
                    /* try { // try from 022cc3f4 to 023cc41f has its CatchHandler @ 022cc440 */
        *(undefined4 *)(lVar3 + 0x48) = 2;
        return 0;
      }
      goto LAB_022cc40c;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) goto LAB_022cc40c;
    Dino_BusSand_App_UI_BonusBankOpenPanel__SetState_21cbf28(lVar3,1);
    if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cb0188,0);
                    /* try { // try from 022cc280 to 023cc287 has its CatchHandler @ 022cc378 */
    Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cb0190,0);
    fVar5 = 0.0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  fVar4 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  *(float *)(param_1 + 0x28) = fVar5 + fVar4;
  if (lVar3 != 0) {
    uVar1 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar3,*(undefined8 *)PTR_DAT_04cad9b8,0);
                    /* try { // try from 022cc2e4 to 023cc2eb has its CatchHandler @ 022cc314 */
                    /* try { // try from 022cc2ec to 023cc32b has its CatchHandler @ 022cc16c */
    fVar5 = *(float *)(param_1 + 0x28) / _UNK_00e20660;
    fVar4 = 1.0;
    if (fVar5 <= 1.0) {
      fVar4 = fVar5;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cc2a8 with catch @ 022cc310
                        */
    fVar6 = 0.0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cc2e4 with catch @ 022cc314
                        */
    if (0.0 <= fVar5) {
      fVar6 = fVar4;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cc18c with catch @ 022cc318
                        */
    fVar6 = fVar6 * (float)*(long *)(lVar3 + 0x50);
                    /* try { // try from 022cc32c to 023cc333 has its CatchHandler @ 022cc33c */
                    /* try { // try from 022cc334 to 023cc33f has its CatchHandler @ 022cc16c */
    lStack_28 = -0x8000000000000000;
    if (fVar6 != INFINITY) {
      lStack_28 = (long)fVar6;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cc32c with catch @ 022cc33c
                        */
    uVar2 = System_Int64__ToString_482e7e4(&lStack_28,0);
                    /* try { // try from 022cc340 to 023cc343 has its CatchHandler @ 022cc374 */
                    /* try { // try from 022cc344 to 023cc357 has its CatchHandler @ 022cc16c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cc1e8 with catch @ 022cc34c
                        */
    if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
                    /* try { // try from 022cc358 to 023cc35f has its CatchHandler @ 022cc368 */
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
    }
                    /* try { // try from 022cc360 to 023cc363 has its CatchHandler @ 022cc378 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cc358 with catch @ 022cc368
                        */
                    /* try { // try from 022cc36c to 023cc36f has its CatchHandler @ 022cc374 */
    Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar1,uVar2,0);
                    /* try { // try from 022cc370 to 023cc387 has its CatchHandler @ 022cc16c */
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cc340 with catch @ 022cc374
                       catch(type#1 @ 00000000) { ... } // from try @ 022cc36c with catch @ 022cc374
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cc280 with catch @ 022cc378
                       catch(type#1 @ 00000000) { ... } // from try @ 022cc360 with catch @ 022cc378
                        */
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cc420 with catch @ 022cc388
                       catch(type#1 @ 00000000) { ... } // from try @ 022cc46c with catch @ 022cc388
                       catch(type#1 @ 00000000) { ... } // from try @ 022cc490 with catch @ 022cc388
                        */
  }
LAB_022cc40c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

