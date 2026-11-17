/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$UpdateSlider
void Dino_BusSand_App_UI_BattleRoyaleHallButton__UpdateSlider (Dino_BusSand_App_UI_BattleRoyaleHallButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$UpdateSlider
   void Dino_BusSand_App_UI_BattleRoyaleHallButton__UpdateSlider
   (Dino_BusSand_App_UI_BattleRoyaleHallButton_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleHallButton__UpdateSlider_218bba4(long param_1)

{
  float fVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b982 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b982 = 1;
  }
  lVar5 = Dino_BusSand_App_UI_BattleRoyaleUi__get_Core_2199bb0(0);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
                    /* try { // try from 0228bc04 to 0238bc0b has its CatchHandler @ 0228be00 */
                    /* try { // try from 0228bc0c to 0238bdcf has its CatchHandler @ 0228be08 */
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
  if (((uVar6 & 1) == 0) && (lVar5 != 0)) {
    iVar3 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_State_2221138(lVar5,0);
    if ((iVar3 == 1) ||
       (uVar6 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_HaveHallCommand_221f168(lVar5,0),
       (uVar6 & 1) != 0)) {
      iVar3 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_TotalStageNum_2220fcc(lVar5,0);
      if (iVar3 < 2) {
        iVar3 = 1;
      }
      uVar6 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_HaveHallCommand_221f168(lVar5,0);
      if ((uVar6 & 1) == 0) {
        iVar4 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150(lVar5,0);
      }
      else {
        iVar4 = *(int *)(lVar5 + 0x34);
      }
      fVar9 = (float)iVar4 / (float)iVar3;
    }
    else {
      fVar9 = 1.0;
      if (iVar3 != 2) {
        fVar9 = 0.0;
      }
    }
    puVar2 = PTR_DAT_04cfca40;
    plVar7 = *(long **)(param_1 + 0x48);
    if (plVar7 != (long *)0x0) {
      fVar10 = 1.0;
      if (fVar9 <= 1.0) {
        fVar10 = fVar9;
      }
      fVar1 = _UNK_00e205f0;
      if (0.0 <= fVar9) {
        fVar1 = fVar10 * _UNK_00e200a0 + _UNK_00e205f0;
      }
      if ((bRam0000000004faae34 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cfca40,0);
        bRam0000000004faae34 = 1;
      }
      fVar9 = 1.0;
      if (fVar1 <= 1.0) {
        fVar9 = fVar1;
      }
      fVar10 = 0.0;
      if (0.0 <= fVar1) {
        fVar10 = fVar9;
      }
      uVar6 = UnityEngine_UI_SetPropertyUtility__SetStruct_float__28b8684
                        (fVar10,(long)plVar7 + 0xf4,*(undefined8 *)puVar2);
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x045afcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x2f8))(plVar7,*(undefined8 *)(*plVar7 + 0x300));
        return;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

