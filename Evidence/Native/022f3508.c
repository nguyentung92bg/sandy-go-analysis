/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel$$OnStageClick
void Dino_BusSand_App_UI_YachtRacingStartPanel__OnStageClick (Dino_BusSand_App_UI_YachtRacingStartPanel_o* __this, int32_t stage, UnityEngine_RectTransform_o* btnRect, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel$$OnStageClick
   void Dino_BusSand_App_UI_YachtRacingStartPanel__OnStageClick
   (Dino_BusSand_App_UI_YachtRacingStartPanel_o* __this, int32_t stage, UnityEngine_RectTransform_o*
   btnRect, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingStartPanel__OnStageClick_21f3508
               (long param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  int iStack_34;
  
                    /* catch() { ... } // from try @ 022f3470 with catch @ 022f3508 */
                    /* catch() { ... } // from try @ 022f3448 with catch @ 022f351c */
                    /* catch() { ... } // from try @ 022f35c8 with catch @ 022f3530 */
  iStack_34 = param_2;
  if ((bRam0000000004f9bc2e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb1210);
                    /* try { // try from 022f3570 to 023f357b has its CatchHandler @ 022f35f0 */
    FUN_02132f7c(PTR_DAT_04cb1218);
    FUN_02132f7c(PTR_DAT_04cb0f98);
    FUN_02132f7c(PTR_DAT_04cadde8);
                    /* try { // try from 022f3598 to 023f35af has its CatchHandler @ 022f35ec */
    bRam0000000004f9bc2e = 1;
  }
                    /* try { // try from 022f35c4 to 023f35c7 has its CatchHandler @ 022f35c8 */
                    /* catch() { ... } // from try @ 022f35c4 with catch @ 022f35c8
                       try { // try from 022f35c8 to 023f3603 has its CatchHandler @ 022f3530 */
  if ((((*(long *)(param_1 + 0x40) != 0) && (*(char *)(param_1 + 0x60) == '\0')) &&
      (*(int *)(param_1 + 0x48) <= param_2)) &&
     ((*(long *)(param_1 + 0x50) != 0 &&
      (uVar1 = Dino_BusSand_App_Meta_YachtRacingCore__StageRewardId_225525c
                         (*(long *)(param_1 + 0x40),param_2,0), 0 < (int)uVar1)))) {
    uVar1 = Dino_BusSand_App_Meta_StreakTowerUtil__Rewards_2251c7c(uVar1,0);
                    /* catch() { ... } // from try @ 022f3598 with catch @ 022f35ec */
                    /* catch() { ... } // from try @ 022f3570 with catch @ 022f35f0 */
    lVar2 = FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    uVar3 = System_Int32__ToString_482d750(&iStack_34,0);
    uVar3 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb0f98,uVar3,0);
    uVar4 = FUN_01e782f0(*(undefined8 *)PTR_DAT_04ca9d18);
    uVar3 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10(uVar3,uVar4,0);
    uVar3 = System_String__Concat_46d2b84
                      (*(undefined8 *)PTR_DAT_04cb1210,uVar3,*(undefined8 *)PTR_DAT_04cadde8,0);
    if (lVar2 != 0) {
      FUN_01e7704c(lVar2,uVar3);
      FUN_01e76ff0(lVar2,0,uVar3);
      uVar4 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10(*(undefined8 *)PTR_DAT_04cb1218,lVar2,0);
      lVar2 = *(long *)(param_1 + 0x50);
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
      if ((uVar5 & 1) == 0) {
        plVar6 = (long *)UnityEngine_Component__get_transform_43bcd18(param_1,0);
        if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)PTR_DAT_04cabdb0)) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(plVar6);
        }
      }
      else {
        plVar6 = *(long **)(param_1 + 0x58);
      }
      if (lVar2 != 0) {
        Dino_BusSand_App_UI_YachtRacingRewardTips__SetData_21ed678(lVar2,param_3,plVar6,uVar1,uVar4)
        ;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

