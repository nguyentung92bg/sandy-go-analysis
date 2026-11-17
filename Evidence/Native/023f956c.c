/* IL2CPP: Dino.BusSand.App.UI.LanguagePanel.Row$$.ctor
void Dino_BusSand_App_UI_LanguagePanel_Row___ctor (Dino_BusSand_App_UI_LanguagePanel_Row_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LanguagePanel.Row$$.ctor
   void Dino_BusSand_App_UI_LanguagePanel_Row___ctor (Dino_BusSand_App_UI_LanguagePanel_Row_o*
   __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_LanguagePanel_Row___ctor_22f956c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_04cab748;
  puVar1 = PTR_DAT_04cab740;
                    /* try { // try from 023f9580 to 024f9697 has its CatchHandler @ 023f9580
                       catch() { ... } // from try @ 023f9580 with catch @ 023f9580
                       catch() { ... } // from try @ 023f97b8 with catch @ 023f9580
                       catch() { ... } // from try @ 023f9804 with catch @ 023f9580
                       catch() { ... } // from try @ 023f9814 with catch @ 023f9580
                       catch() { ... } // from try @ 023f9870 with catch @ 023f9580
                       catch() { ... } // from try @ 023f9894 with catch @ 023f9580 */
  if ((bRam0000000004f9c49c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab740);
    FUN_02132f7c(PTR_DAT_04cab748);
    bRam0000000004f9c49c = 1;
  }
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar3,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),uVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

