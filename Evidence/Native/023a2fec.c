/* IL2CPP: Dino.BusSand.App.UI.UiSkin$$.ctor
void Dino_BusSand_App_UI_UiSkin___ctor (Dino_BusSand_App_UI_UiSkin_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiSkin$$.ctor
   void Dino_BusSand_App_UI_UiSkin___ctor (Dino_BusSand_App_UI_UiSkin_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_UiSkin___ctor_22a2fec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar6 = PTR_DAT_04cb5ae0;
  puVar5 = PTR_DAT_04cb5ad8;
  puVar4 = PTR_DAT_04cb5ad0;
  puVar3 = PTR_DAT_04cb5ac8;
  puVar2 = PTR_DAT_04cb5ac0;
  puVar1 = PTR_DAT_04cb5ab8;
                    /* try { // try from 023a300c to 024a300f has its CatchHandler @ 023a301c */
                    /* try { // try from 023a3010 to 024a3037 has its CatchHandler @ 023a2c98 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023a2e78 with catch @ 023a3014
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023a2e9c with catch @ 023a3018
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023a300c with catch @ 023a301c
                        */
                    /* try { // try from 023a3038 to 024a303b has its CatchHandler @ 023a305c */
                    /* try { // try from 023a303c to 024a305f has its CatchHandler @ 023a2c98 */
  if ((bRam0000000004f9c26d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5ae0);
    FUN_02132f7c(PTR_DAT_04cb5ad0);
                    /* catch() { ... } // from try @ 023a3038 with catch @ 023a305c */
                    /* try { // try from 023a3060 to 024a3067 has its CatchHandler @ 023a3070 */
    FUN_02132f7c(PTR_DAT_04cb5ac0);
                    /* try { // try from 023a3068 to 024a3073 has its CatchHandler @ 023a2c98 */
    FUN_02132f7c(PTR_DAT_04cb5ac8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023a3060 with catch @ 023a3070
                        */
    FUN_02132f7c(PTR_DAT_04cb5ab8);
    FUN_02132f7c(PTR_DAT_04cb5ad8);
    bRam0000000004f9c26d = 1;
  }
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_UiSkin_SpriteEntry____ctor_2ac04cc(uVar7,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),uVar7);
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_UiSkin_MatEntry____ctor_2abdb7c(uVar7,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),uVar7);
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_List_UiSkin_AliasEntry____ctor_2abb22c(uVar7,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar7);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa8588 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa8588 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  UnityEngine_Object___ctor_43c663c(param_1,0);
  if (pcRam0000000004fa8590 == (code *)0x0) {
    pcRam0000000004fa8590 = (code *)FUN_02132f40(&UNK_00e3b9b1);
  }
                    /* WARNING: Could not recover jumptable at 0x044c4b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000004fa8590)(param_1);
  return;
}

