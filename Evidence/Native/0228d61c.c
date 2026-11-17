/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$RefreshNormal
void Dino_BusSand_App_UI_BattleRoyalePanel__RefreshNormal (Dino_BusSand_App_UI_BattleRoyalePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$RefreshNormal
   void Dino_BusSand_App_UI_BattleRoyalePanel__RefreshNormal
   (Dino_BusSand_App_UI_BattleRoyalePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyalePanel__RefreshNormal_218d61c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uStack_34;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((bRam0000000004f9b98b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadda8);
    FUN_02132f7c(PTR_DAT_04cade18);
    FUN_02132f7c(PTR_DAT_04cabd10);
                    /* try { // try from 0228d664 to 0238d703 has its CatchHandler @ 0228d664
                       catch() { ... } // from try @ 0228d664 with catch @ 0228d664
                       catch() { ... } // from try @ 0228d7ac with catch @ 0228d664
                       catch() { ... } // from try @ 0228d85c with catch @ 0228d664 */
    FUN_02132f7c(PTR_DAT_04cade30);
    FUN_02132f7c(PTR_DAT_04caddf8);
    FUN_02132f7c(PTR_DAT_04cade38);
    bRam0000000004f9b98b = 1;
  }
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_34 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    uStack_24 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150
                          (*(long *)(param_1 + 0x40),0);
    puVar2 = PTR_DAT_04cade30;
    puVar1 = PTR_DAT_04cabd10;
    if (*(long *)(param_1 + 0x40) != 0) {
      uStack_28 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc
                            (*(long *)(param_1 + 0x40),0);
      uVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar2,0);
      uVar4 = System_Int32__ToString_482d750(&uStack_24,0);
      uVar5 = System_Int32__ToString_482d750(&uStack_28,0);
                    /* try { // try from 0228d704 to 0238d70f has its CatchHandler @ 0228d8a8 */
      uVar4 = System_String__Concat_46d2b84(uVar4,*(undefined8 *)puVar1,uVar5,0);
      Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar3,uVar4,0);
      if (*(long *)(param_1 + 0x38) != 0) {
        lVar6 = *(long *)(param_1 + 0x40);
        if (*(int *)(*(long *)(param_1 + 0x38) + 0x10) == 2) {
          if (lVar6 == 0) goto LAB_0228d88c;
          uStack_34 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_SpecialWinPersonNum_2221360
                                (lVar6,0);
        }
        else {
          if (lVar6 == 0) goto LAB_0228d88c;
          uStack_34 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentPersonNum_2221348(lVar6,0);
        }
        uVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cade38,0)
        ;
        uVar4 = System_Int32__ToString_482d750(&uStack_34,0);
        Dino_BusSand_App_UI_BattleRoyaleUi__SetTexts_219a108(uVar3,uVar4,0);
                    /* try { // try from 0228d798 to 0238d7ab has its CatchHandler @ 0228d8a4 */
        if ((*(long *)(param_1 + 0x40) != 0) &&
           (lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar6 != 0)) {
                    /* try { // try from 0228d7ac to 0238d7fb has its CatchHandler @ 0228d664 */
          lVar8 = *(long *)(lVar6 + 0x30);
          Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04cade18,1,0);
          lVar6 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
          if (lVar6 < lVar8) {
            Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04cadda8,0,0);
                    /* try { // try from 0228d7fc to 0238d803 has its CatchHandler @ 0228d88c */
            Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04caddf8,1,0);
            Dino_BusSand_App_UI_BattleRoyalePanel__SetTime_218d890(param_1,lVar8);
            lVar6 = *(long *)(param_1 + 0x50);
            if (lVar6 != 0) {
              UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,lVar6,0);
            }
            uVar7 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0);
            if ((uVar7 & 1) != 0) {
              uVar3 = Dino_BusSand_App_UI_BattleRoyalePanel__Countdown_218d92c(param_1,lVar8);
                    /* try { // try from 0228d858 to 0238d85b has its CatchHandler @ 0228d878 */
              uVar3 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar3,0);
                    /* try { // try from 0228d85c to 0238d8df has its CatchHandler @ 0228d664 */
              *(undefined8 *)(param_1 + 0x50) = uVar3;
              thunk_FUN_02134474((long *)(param_1 + 0x50),uVar3);
            }
          }
          else {
            Dino_BusSand_App_UI_BattleRoyalePanel__ShowFinished_218d9a8(param_1);
          }
                    /* catch() { ... } // from try @ 0228d858 with catch @ 0228d878 */
          return;
        }
      }
    }
  }
LAB_0228d88c:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0228d7fc with catch @ 0228d88c */
  FUN_02133224();
}

