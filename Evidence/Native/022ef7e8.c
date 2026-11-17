/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$InitUI
void Dino_BusSand_App_UI_YachtRacingRewardPanel__InitUI (Dino_BusSand_App_UI_YachtRacingRewardPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$InitUI
   void Dino_BusSand_App_UI_YachtRacingRewardPanel__InitUI
   (Dino_BusSand_App_UI_YachtRacingRewardPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingRewardPanel__InitUI_21ef7e8(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9bc11 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1340);
    FUN_02132f7c(PTR_DAT_04cb1348);
    FUN_02132f7c(PTR_DAT_04cb1130);
    FUN_02132f7c(PTR_DAT_04cb1350);
    FUN_02132f7c(PTR_DAT_04cb1148);
                    /* catch() { ... } // from try @ 022ef7dc with catch @ 022ef844 */
    FUN_02132f7c(PTR_DAT_04cb1160);
    bRam0000000004f9bc11 = 1;
  }
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    iVar2 = Dino_BusSand_App_Meta_YachtRacingCore__get_CurrentStage_2255454
                      (*(long *)(param_1 + 0x40),0);
    *(int *)(param_1 + 0x48) = iVar2;
    puVar1 = PTR_DAT_04cb1160;
                    /* try { // try from 022ef870 to 023ef91f has its CatchHandler @ 022ef870
                       catch() { ... } // from try @ 022ef870 with catch @ 022ef870
                       catch() { ... } // from try @ 022ef928 with catch @ 022ef870 */
    if (0 < iVar2) {
      uStack_28._0_4_ = 1;
      do {
        uVar3 = System_Int32__ToString_482d750(&uStack_28,0);
        uVar3 = System_String__Concat_46c82e0(*(undefined8 *)puVar1,uVar3,0);
        Dino_BusSand_App_UI_UIPanel__Show_21f4018
                  (param_1,uVar3,*(int *)(param_1 + 0x48) == (int)uStack_28,0);
        uStack_28._0_4_ = (int)uStack_28 + 1;
      } while ((int)uStack_28 < 4);
      iVar2 = *(int *)(param_1 + 0x48);
      if (2 < iVar2) {
        iVar2 = 3;
      }
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      uStack_28 = CONCAT44(iVar2,(int)uStack_28);
      uVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cb1340,0);
      uVar4 = System_Int32__ToString_482d750((long)&uStack_28 + 4,0);
      puVar1 = PTR_DAT_04cb1130;
                    /* try { // try from 022ef920 to 023ef927 has its CatchHandler @ 022ef988 */
                    /* try { // try from 022ef928 to 023ef9b3 has its CatchHandler @ 022ef870 */
      uVar4 = System_String__Concat_46d2b84
                        (*(undefined8 *)PTR_DAT_04cb1130,uVar4,*(undefined8 *)PTR_DAT_04cb1148,0);
      Dino_BusSand_App_UI_YachtRacingUi__SetSprite_21f8818(uVar3,uVar4,1,0);
      uVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cb1350,0);
      uVar4 = System_Int32__ToString_482d750((long)&uStack_28 + 4,0);
                    /* catch() { ... } // from try @ 022ef920 with catch @ 022ef988 */
      uVar4 = System_String__Concat_46d2b84
                        (*(undefined8 *)puVar1,uVar4,*(undefined8 *)PTR_DAT_04cb1348,0);
      Dino_BusSand_App_UI_YachtRacingUi__SetSprite_21f8818(uVar3,uVar4,1,0);
                    /* try { // try from 022ef9b4 to 023efa63 has its CatchHandler @ 022ef9b4
                       catch() { ... } // from try @ 022ef9b4 with catch @ 022ef9b4
                       catch() { ... } // from try @ 022efa6c with catch @ 022ef9b4 */
      uVar3 = Dino_BusSand_App_UI_YachtRacingRewardPanel__InitReward_21efb8c(param_1);
      Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar3,0);
    }
  }
  return;
}

