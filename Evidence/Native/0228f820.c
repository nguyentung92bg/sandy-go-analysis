/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleQuitItem$$BindProgress
void Dino_BusSand_App_UI_BattleRoyaleQuitItem__BindProgress (UnityEngine_Transform_o* progress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleQuitItem$$BindProgress
   void Dino_BusSand_App_UI_BattleRoyaleQuitItem__BindProgress (UnityEngine_Transform_o* progress,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleQuitItem__BindProgress_218f820(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* catch() { ... } // from try @ 0228f7ec with catch @ 0228f830 */
  if ((bRam0000000004f9b99d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 0228f850 to 0238f853 has its CatchHandler @ 0228f85c */
    FUN_02132f7c(PTR_DAT_04cadf18);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0228f850 with catch @ 0228f85c
                        */
    FUN_02132f7c(PTR_DAT_04cabd10);
    bRam0000000004f9b99d = 1;
  }
  uStack_24 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if (((uVar2 & 1) == 0) &&
     (lVar3 = Dino_BusSand_App_UI_BattleRoyaleUi__get_Core_2199bb0(0), lVar3 != 0)) {
                    /* try { // try from 0228f8a8 to 0238f957 has its CatchHandler @ 0228f8a8
                       catch() { ... } // from try @ 0228f8a8 with catch @ 0228f8a8
                       catch() { ... } // from try @ 0228f97c with catch @ 0228f8a8 */
    uVar4 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(param_1,*(undefined8 *)PTR_DAT_04cadf18,0)
    ;
    uStack_24 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150(lVar3,0);
    uVar5 = System_Int32__ToString_482d750(&uStack_24,0);
    uStack_24 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc(lVar3,0);
    uVar6 = System_Int32__ToString_482d750(&uStack_24,0);
    uVar5 = System_String__Concat_46d2b84(uVar5,*(undefined8 *)PTR_DAT_04cabd10,uVar6,0);
    Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar4,uVar5,0);
  }
  return;
}

