/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$ShowFinished
void Dino_BusSand_App_UI_BattleRoyalePanel__ShowFinished (Dino_BusSand_App_UI_BattleRoyalePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$ShowFinished
   void Dino_BusSand_App_UI_BattleRoyalePanel__ShowFinished
   (Dino_BusSand_App_UI_BattleRoyalePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyalePanel__ShowFinished_218d9a8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_04cade40;
  puVar2 = PTR_DAT_04ca9d18;
                    /* try { // try from 0228d9bc to 0238d9c7 has its CatchHandler @ 0228da58 */
  if ((bRam0000000004f9b98f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cadda8);
                    /* try { // try from 0228d9ec to 0238da07 has its CatchHandler @ 0228da70 */
    FUN_02132f7c(PTR_DAT_04cade40);
    FUN_02132f7c(PTR_DAT_04cadcc8);
                    /* try { // try from 0228da0c to 0238da2f has its CatchHandler @ 0228da74 */
    FUN_02132f7c(PTR_DAT_04cade20);
    FUN_02132f7c(PTR_DAT_04cade28);
    FUN_02132f7c(PTR_DAT_04caddf8);
    bRam0000000004f9b98f = 1;
  }
                    /* try { // try from 0228da30 to 0238da8b has its CatchHandler @ 0228d8e0 */
  uVar4 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar3,0);
  lVar10 = *(long *)puVar2;
  lVar8 = *(long *)(lVar10 + 0x38);
  if (lVar8 == 0) {
    FUN_0216b4cc(lVar10);
                    /* catch() { ... } // from try @ 0228d9bc with catch @ 0228da58 */
    lVar8 = *(long *)(lVar10 + 0x38);
  }
                    /* catch() { ... } // from try @ 0228d974 with catch @ 0228da5c */
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
                    /* catch() { ... } // from try @ 0228d9ec with catch @ 0228da70 */
                    /* catch() { ... } // from try @ 0228da0c with catch @ 0228da74 */
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cadcc8;
  lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
                    /* try { // try from 0228da8c to 0238db87 has its CatchHandler @ 0228da8c
                       catch() { ... } // from try @ 0228da8c with catch @ 0228da8c
                       catch() { ... } // from try @ 0228db94 with catch @ 0228da8c */
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  uVar5 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                    (*(undefined8 *)puVar3,**(undefined8 **)(lVar8 + 0xb8),0);
  Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar4,uVar5,0);
  if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(*(long *)(param_1 + 0x38) + 0x10) != 0) {
    return;
  }
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04cadda8,1,0);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04caddf8,0,0);
  lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cade20,0);
  lVar9 = *(long *)puVar2;
  lVar10 = *(long *)(lVar9 + 0x38);
  if (lVar10 == 0) {
    FUN_0216b4cc(lVar9);
    lVar10 = *(long *)(lVar9 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
                    /* try { // try from 0228db88 to 0238db93 has its CatchHandler @ 0228dbc4 */
                    /* try { // try from 0228db94 to 0238dbdf has its CatchHandler @ 0228da8c */
  uVar4 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                    (*(undefined8 *)PTR_DAT_04cade28,**(undefined8 **)(lVar10 + 0xb8),0);
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b9f8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48,uVar4,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b9f8 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  if ((uVar6 & 1) == 0) {
    if ((lVar8 == 0) ||
       (lVar8 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                          (lVar8,1,*(undefined8 *)PTR_DAT_04cada48), lVar8 == 0)) {
LAB_0229a1f0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        if (uVar1 <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar7 = *(long **)(lVar8 + 0x20 + lVar10 * 8);
        if (plVar7 == (long *)0x0) goto LAB_0229a1f0;
        (**(code **)(*plVar7 + 0x518))(plVar7,uVar4,*(undefined8 *)(*plVar7 + 0x520));
        uVar1 = *(uint *)(lVar8 + 0x18);
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < (int)uVar1);
    }
  }
  return;
}

