/* IL2CPP: Dino.BusSand.App.UI.DailyView$$get_Header
System_String_o* Dino_BusSand_App_UI_DailyView__get_Header (Dino_BusSand_App_UI_DailyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.DailyView$$get_Header
   System_String_o* Dino_BusSand_App_UI_DailyView__get_Header (Dino_BusSand_App_UI_DailyView_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_DailyView__get_Header_21bae7c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_04ca9c20;
  if ((bRam0000000004f9babe & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf7c0);
    FUN_02132f7c(PTR_DAT_04caf7c8);
    bRam0000000004f9babe = 1;
  }
  plVar4 = (long *)FUN_02133068(*(undefined8 *)puVar1,1);
  if (*(long *)(param_1 + 0x10) != 0) {
    uStack_34 = Dino_BusSand_App_Meta_DailyChallengeFeature__get_DoneThisMonth_222fb24
                          (*(long *)(param_1 + 0x10),0);
                    /* try { // try from 022baf0c to 023baf13 has its CatchHandler @ 022baf50 */
    lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
    if (plVar4 != (long *)0x0) {
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
        uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar7,0);
      }
      puVar3 = PTR_DAT_04caf7c8;
      puVar2 = PTR_DAT_04caf7c0;
      puVar1 = PTR_DAT_04cad330;
      if ((int)plVar4[3] != 0) {
                    /* try { // try from 022baf44 to 023baf4b has its CatchHandler @ 022baf4c */
                    /* catch() { ... } // from try @ 022baf44 with catch @ 022baf4c
                       try { // try from 022baf4c to 023baf6b has its CatchHandler @ 022bae24 */
                    /* catch() { ... } // from try @ 022baf0c with catch @ 022baf50 */
        plVar4[4] = lVar5;
        thunk_FUN_02134474(plVar4 + 4,lVar5);
                    /* try { // try from 022baf6c to 023bb053 has its CatchHandler @ 022baf6c
                       catch() { ... } // from try @ 022baf6c with catch @ 022baf6c
                       catch() { ... } // from try @ 022bb094 with catch @ 022baf6c */
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_UiKit__T_2285e1c(*(undefined8 *)puVar3,*(undefined8 *)puVar2,plVar4,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

