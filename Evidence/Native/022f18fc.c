/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel.<MoveItem>d__20$$MoveNext
bool Dino_BusSand_App_UI_YachtRacingRewardPanel__MoveItem_d__20__MoveNext (Dino_BusSand_App_UI_YachtRacingRewardPanel__MoveItem_d__20_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel.<MoveItem>d__20$$MoveNext
   bool Dino_BusSand_App_UI_YachtRacingRewardPanel__MoveItem_d__20__MoveNext
   (Dino_BusSand_App_UI_YachtRacingRewardPanel__MoveItem_d__20_o* __this, const MethodInfo* method);
    */

ulong Dino_BusSand_App_UI_YachtRacingRewardPanel__MoveItem_d__20__MoveNext_21f18fc
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  
                    /* try { // try from 022f1918 to 023f191f has its CatchHandler @ 022f1920 */
  if ((bRam0000000004f9bc21 & 1) == 0) {
                    /* catch() { ... } // from try @ 022f18ec with catch @ 022f1920
                       catch() { ... } // from try @ 022f1918 with catch @ 022f1920
                       try { // try from 022f1920 to 023f193b has its CatchHandler @ 022f1780 */
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cb0fc0);
                    /* try { // try from 022f193c to 023f19ef has its CatchHandler @ 022f193c
                       catch() { ... } // from try @ 022f193c with catch @ 022f193c
                       catch() { ... } // from try @ 022f1a34 with catch @ 022f193c
                       catch() { ... } // from try @ 022f1a8c with catch @ 022f193c
                       catch() { ... } // from try @ 022f1ac8 with catch @ 022f193c */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb14b0);
    FUN_02132f7c(PTR_DAT_04cb14b8);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cb14c0);
    bRam0000000004f9bc21 = 1;
  }
  puVar2 = PTR_DAT_04cb14b8;
  iVar1 = *(int *)(param_4 + 0x10);
  uVar3 = 0;
  if (iVar1 == 2) {
    uVar9 = 0xffffffff;
LAB_022f1b64:
    *(undefined4 *)(param_4 + 0x10) = uVar9;
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Object___ctor_4870e5c(lVar4,0);
      plVar7 = (long *)(param_4 + 0x38);
      *plVar7 = lVar4;
      thunk_FUN_02134474(plVar7,lVar4);
      uVar3 = 0;
      if (*plVar7 == 0) goto LAB_022f1b7c;
      *(undefined8 *)(*plVar7 + 0x10) = *(undefined8 *)(param_4 + 0x20);
      thunk_FUN_02134474();
      uVar3 = 0;
      if (*(long *)(param_4 + 0x38) == 0) goto LAB_022f1b7c;
      *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x18) = *(undefined8 *)(param_4 + 0x28);
                    /* try { // try from 022f19f0 to 023f1a33 has its CatchHandler @ 022f1af8 */
      uVar3 = thunk_FUN_02134474();
      fVar10 = *(float *)(param_4 + 0x30);
      if (0.0 < fVar10) {
        uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
        UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(fVar10,uVar5,0);
        *(undefined8 *)(param_4 + 0x18) = uVar5;
        thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),uVar5);
        uVar9 = 1;
                    /* try { // try from 022f1a34 to 023f1a83 has its CatchHandler @ 022f193c */
        uVar3 = 1;
        goto LAB_022f1b64;
      }
    }
    puVar2 = PTR_DAT_04ca9ae8;
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_022f1b7c;
    uVar5 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(param_4 + 0x38) == 0) goto LAB_022f1b7c;
                    /* try { // try from 022f1a84 to 023f1a8b has its CatchHandler @ 022f1ac8 */
      uVar5 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x18);
                    /* try { // try from 022f1a8c to 023f1abf has its CatchHandler @ 022f193c */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
      if ((uVar3 & 1) == 0) {
        lVar4 = *(long *)(param_4 + 0x38);
                    /* try { // try from 022f1ac0 to 023f1ac7 has its CatchHandler @ 022f1af8 */
        if (lVar4 == 0) {
LAB_022f1b7c:
                    /* WARNING: Subroutine does not return */
          FUN_02133224(uVar3);
        }
                    /* catch() { ... } // from try @ 022f1a84 with catch @ 022f1ac8
                       try { // try from 022f1ac8 to 023f1b13 has its CatchHandler @ 022f193c */
        uVar3 = 0;
        if (*(long *)(lVar4 + 0x10) == 0) goto LAB_022f1b7c;
        uVar9 = UnityEngine_Transform__get_position_43d0e48(*(long *)(lVar4 + 0x10),0);
        puVar2 = PTR_DAT_04cb0fc0;
        *(undefined4 *)(lVar4 + 0x20) = uVar9;
        *(undefined4 *)(lVar4 + 0x24) = param_2;
        *(undefined4 *)(lVar4 + 0x28) = param_3;
        uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 022f19f0 with catch @ 022f1af8
                       catch() { ... } // from try @ 022f1ac0 with catch @ 022f1af8 */
        System_Func_float__float____ctor_37a4838(uVar5,0,*(undefined8 *)PTR_DAT_04cb14c0,0);
        uVar8 = *(undefined8 *)(param_4 + 0x38);
                    /* catch() { ... } // from try @ 022f1ba8 with catch @ 022f1b14 */
        uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
        System_Action_float____ctor_35f1448(uVar6,uVar8,*(undefined8 *)PTR_DAT_04cb14b0,0);
                    /* try { // try from 022f1b44 to 023f1b4f has its CatchHandler @ 022f1c18 */
        uVar5 = Dino_BusSand_App_UI_YachtRacingUi__Tween_21f746c(0x3f000000,uVar5,uVar6,0);
        *(undefined8 *)(param_4 + 0x18) = uVar5;
        thunk_FUN_02134474();
        uVar3 = 1;
        uVar9 = 2;
        goto LAB_022f1b64;
      }
    }
    uVar3 = 0;
  }
                    /* try { // try from 022f1b6c to 023f1b77 has its CatchHandler @ 022f1c04 */
                    /* try { // try from 022f1b78 to 023f1b8f has its CatchHandler @ 022f1be0 */
  return uVar3;
}

