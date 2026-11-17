/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleQuitItem$$Bind
void Dino_BusSand_App_UI_BattleRoyaleQuitItem__Bind (UnityEngine_Transform_o* quitItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleQuitItem$$Bind
   void Dino_BusSand_App_UI_BattleRoyaleQuitItem__Bind (UnityEngine_Transform_o* quitItem, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleQuitItem__Bind_218f20c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 0228f214 to 0238f273 has its CatchHandler @ 0228f214
                       catch() { ... } // from try @ 0228f214 with catch @ 0228f214
                       catch() { ... } // from try @ 0228f304 with catch @ 0228f214 */
  if ((bRam0000000004f9b99a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cadef0);
    FUN_02132f7c(PTR_DAT_04cadef8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadf00);
                    /* try { // try from 0228f274 to 0238f27b has its CatchHandler @ 0228f314 */
    FUN_02132f7c(PTR_DAT_04cadf08);
                    /* try { // try from 0228f27c to 0238f287 has its CatchHandler @ 0228f358 */
    FUN_02132f7c(PTR_DAT_04cadf10);
    FUN_02132f7c(PTR_DAT_04cadf18);
    FUN_02132f7c(PTR_DAT_04cabd10);
                    /* try { // try from 0228f2a0 to 0238f2a7 has its CatchHandler @ 0228f348 */
    FUN_02132f7c(PTR_DAT_04cadf20);
    bRam0000000004f9b99a = 1;
  }
  uStack_24 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  puVar2 = PTR_DAT_04ca9d18;
                    /* try { // try from 0228f2d4 to 0238f2db has its CatchHandler @ 0228f330 */
  if ((uVar4 & 1) == 0) {
    uVar5 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(param_1,*(undefined8 *)PTR_DAT_04cadf08,0)
    ;
    lVar9 = *(long *)puVar2;
                    /* try { // try from 0228f300 to 0238f303 has its CatchHandler @ 0228f31c */
    lVar8 = *(long *)(lVar9 + 0x38);
                    /* try { // try from 0228f304 to 0238f383 has its CatchHandler @ 0228f214 */
    if (lVar8 == 0) {
      FUN_0216b4cc(lVar9);
      lVar8 = *(long *)(lVar9 + 0x38);
    }
                    /* catch() { ... } // from try @ 0228f274 with catch @ 0228f314 */
    lVar8 = *(long *)(lVar8 + 0x10);
                    /* catch() { ... } // from try @ 0228f300 with catch @ 0228f31c */
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0216b470();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0228f2d4 with catch @ 0228f330 */
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04cadf00;
    lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
                    /* catch() { ... } // from try @ 0228f2a0 with catch @ 0228f348 */
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0216b470();
    }
                    /* catch() { ... } // from try @ 0228f27c with catch @ 0228f358 */
    uVar6 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                      (*(undefined8 *)puVar2,**(undefined8 **)(lVar8 + 0xb8),0);
    Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar5,uVar6,0);
    lVar8 = Dino_BusSand_App_UI_BattleRoyaleUi__get_Core_2199bb0(0);
    if (lVar8 != 0) {
                    /* try { // try from 0228f384 to 0238f3df has its CatchHandler @ 0228f384
                       catch() { ... } // from try @ 0228f384 with catch @ 0228f384
                       catch() { ... } // from try @ 0228f414 with catch @ 0228f384 */
      if (param_1 != 0) {
        uVar5 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cadf20,0);
        lVar9 = *(long *)puVar1;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar9);
        }
        uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
        if ((uVar4 & 1) != 0) {
                    /* try { // try from 0228f3e0 to 0238f3e7 has its CatchHandler @ 0228f450 */
          uVar5 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                            (param_1,*(undefined8 *)PTR_DAT_04cadf18,0);
        }
        uStack_24 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150(lVar8,0);
        uVar6 = System_Int32__ToString_482d750(&uStack_24,0);
                    /* try { // try from 0228f40c to 0238f413 has its CatchHandler @ 0228f438 */
                    /* try { // try from 0228f414 to 0238f46b has its CatchHandler @ 0228f384 */
        uStack_24 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc(lVar8,0);
        uVar7 = System_Int32__ToString_482d750(&uStack_24,0);
                    /* catch() { ... } // from try @ 0228f40c with catch @ 0228f438 */
        uVar6 = System_String__Concat_46d2b84(uVar6,*(undefined8 *)PTR_DAT_04cabd10,uVar7,0);
                    /* catch() { ... } // from try @ 0228f3e0 with catch @ 0228f450 */
        Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar5,uVar6,0);
        uVar5 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cadf10,0);
                    /* catch() { ... } // from try @ 0228f490 with catch @ 0228f46c */
                    /* try { // try from 0228f47c to 0238f48f has its CatchHandler @ 0228f4c4 */
        lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cadef8);
        Dino_BusSand_App_Meta_BattleRoyalePerson___ctor_22245a8(lVar8,0);
        puVar1 = PTR_DAT_04cadef0;
                    /* try { // try from 0228f490 to 0238f4e3 has its CatchHandler @ 0228f46c */
        if (*(int *)(*(long *)PTR_DAT_04cadef0 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (lVar8 != 0) {
          *(undefined4 *)(lVar8 + 0x10) = **(undefined4 **)(*(long *)puVar1 + 0xb8);
          uVar3 = Dino_BusSand_App_UI_BattleRoyaleUi__get_MyHeadId_219bd74(0);
                    /* catch() { ... } // from try @ 0228f47c with catch @ 0228f4c4 */
          *(undefined4 *)(lVar8 + 0x14) = uVar3;
          Dino_BusSand_App_UI_BattleRoyaleUi__SetHead_219c98c(uVar5,lVar8,0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

