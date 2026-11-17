/* IL2CPP: Dino.BusSand.App.UI.UIManager.<>c__DisplayClass30_0$$<Close>b__0
void Dino_BusSand_App_UI_UIManager___c__DisplayClass30_0___Close_b__0 (Dino_BusSand_App_UI_UIManager___c__DisplayClass30_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManager.<>c__DisplayClass30_0$$<Close>b__0
   void Dino_BusSand_App_UI_UIManager___c__DisplayClass30_0___Close_b__0
   (Dino_BusSand_App_UI_UIManager___c__DisplayClass30_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_UIManager___c__DisplayClass30_0___Close_b__0_21ff48c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* catch() { ... } // from try @ 022ff404 with catch @ 022ff490 */
                    /* catch() { ... } // from try @ 022ff2a8 with catch @ 022ff4a4 */
                    /* catch() { ... } // from try @ 022ff244 with catch @ 022ff4a8 */
  if ((bRam0000000004f9bc81 & 1) == 0) {
                    /* catch() { ... } // from try @ 022ff1ec with catch @ 022ff4ac */
                    /* catch() { ... } // from try @ 022ff16c with catch @ 022ff4b0 */
                    /* catch() { ... } // from try @ 022ff3d4 with catch @ 022ff4b4 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* catch() { ... } // from try @ 022ff1d0 with catch @ 022ff4b8 */
    bRam0000000004f9bc81 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* catch() { ... } // from try @ 022ff160 with catch @ 022ff4d4 */
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 022ff398 with catch @ 022ff4f0 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar1 = PTR_DAT_04ca9ae8;
    uVar4 = 0;
    if ((bRam0000000004fa8603 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8,0);
      bRam0000000004fa8603 = 1;
      uVar4 = extraout_x1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      uVar4 = extraout_x1_00;
    }
    puVar1 = PTR_DAT_04cf6418;
    if ((bRam0000000004fa8602 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf6418,uVar4);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      bRam0000000004fa8602 = 1;
    }
    if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
      FUN_0216b4cc();
    }
    uVar4 = 0;
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x10);
    }
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (pcRam0000000004fa8680 == (code *)0x0) {
      pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
    }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fa8680)(0,uVar4);
    return;
  }
                    /* catch() { ... } // from try @ 022ff1c0 with catch @ 022ff514
                       catch() { ... } // from try @ 022ff440 with catch @ 022ff514 */
  return;
}

