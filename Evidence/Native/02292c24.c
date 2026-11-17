/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$Refresh
void Dino_BusSand_App_UI_BattleRoyaleScenePanel__Refresh (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$Refresh
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel__Refresh
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel__Refresh_2192c24(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if ((bRam0000000004f9b9b5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae180);
    bRam0000000004f9b9b5 = 1;
  }
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_02292e50;
  uVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150
                    (*(long *)(param_1 + 0x40),0);
  lVar8 = *(long *)(param_1 + 0x40);
                    /* try { // try from 02292c84 to 02392cef has its CatchHandler @ 02292c84
                       catch() { ... } // from try @ 02292c84 with catch @ 02292c84
                       catch() { ... } // from try @ 02292d04 with catch @ 02292c84 */
  uVar3 = Dino_BusSand_App_UI_BattleRoyaleUi__get_MyHeadId_219bd74(0);
  if (lVar8 == 0) goto LAB_02292e50;
  uVar4 = Dino_BusSand_App_Meta_BattleRoyaleCore__LivePlayers_22245b8(lVar8,0xf,1,4,uVar3,0);
  Dino_BusSand_App_UI_BattleRoyaleScenePanel__DeduplicateHeads_2193bd0(param_1,uVar4);
  Dino_BusSand_App_UI_BattleRoyaleScenePanel__SetCommon_21941cc(param_1,uVar4);
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_02292e50;
  iVar1 = *(int *)(*(long *)(param_1 + 0x38) + 0x10);
  if (iVar1 == 2) {
                    /* try { // try from 02292cf0 to 02392d03 has its CatchHandler @ 02292d2c */
    lVar8 = *(long *)(param_1 + 0x40);
    if (lVar8 == 0) goto LAB_02292e50;
    uVar4 = 3;
LAB_02292cfc:
    uVar4 = Dino_BusSand_App_Meta_BattleRoyaleCore__DeadPlayers_2224b94(lVar8,uVar4,0);
                    /* try { // try from 02292d04 to 02392d3f has its CatchHandler @ 02292c84 */
    Dino_BusSand_App_UI_BattleRoyaleScenePanel__SetDead_2194570(param_1,uVar4);
  }
  else if (iVar1 == 1) {
    lVar8 = *(long *)(param_1 + 0x40);
    if (lVar8 == 0) goto LAB_02292e50;
    uVar4 = 2;
    goto LAB_02292cfc;
  }
  Dino_BusSand_App_UI_BattleRoyaleScenePanel__InitPlayerPositions_2194698(param_1);
  Dino_BusSand_App_UI_BattleRoyaleScenePanel__RefreshPositions_21948a8(param_1,uVar2 & 1);
  Dino_BusSand_App_UI_BattleRoyaleScenePanel__ResetPositionToPlayer_2194b40(param_1);
                    /* catch() { ... } // from try @ 02292cf0 with catch @ 02292d2c */
  Dino_BusSand_App_UI_BattleRoyaleScenePanel__RefreshReward_2194c94(param_1);
  Dino_BusSand_App_UI_BattleRoyaleScenePanel__RefreshDecoration_2194e38(param_1);
  lVar8 = *(long *)(param_1 + 0x38);
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0x14) != '\0') {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_02292e50;
      if (*(char *)(*(long *)(param_1 + 0x40) + 0x38) != '\0') {
        *(undefined1 *)(param_1 + 0x9c) = 1;
        lVar8 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__get_Overlay_2192fd0();
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
        if ((uVar5 & 1) != 0) {
          if (lVar8 == 0) goto LAB_02292e50;
          *(undefined1 *)(lVar8 + 0x4c) = 1;
        }
        if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cae180,0);
        uVar4 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__GuideRoutine_2194ffc(param_1);
        Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar4,0);
        lVar8 = *(long *)(param_1 + 0x38);
        if (lVar8 == 0) goto LAB_02292e50;
      }
    }
    if (*(int *)(lVar8 + 0x10) == 2) {
      *(undefined1 *)(param_1 + 0x9c) = 1;
      lVar8 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__WinAnimation_21950d4(param_1);
    }
    else {
      if (*(int *)(lVar8 + 0x10) != 1) {
        return;
      }
      *(undefined1 *)(param_1 + 0x9c) = 1;
      lVar8 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__LoseAnimation_2195068(param_1);
    }
    uVar5 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
    if ((uVar5 & 1) != 0) {
      if (lVar8 == 0) {
        thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
        uVar6 = thunk_FUN_0216e89c();
        uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
        System_NullReferenceException___ctor_483267c(uVar6,uVar4,0);
      }
      else {
        uVar5 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
        if ((uVar5 & 1) != 0) {
          if ((bRam0000000004fa84ef & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7890);
            bRam0000000004fa84ef = 1;
          }
          if (param_1 != 0) {
            lVar7 = *(long *)(param_1 + 0x10);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
            }
            if (pcRam0000000004fa8560 == (code *)0x0) {
              pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
            }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8560)(lVar7,lVar8);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        thunk_FUN_021985a8(PTR_DAT_04caa3a8);
        uVar6 = thunk_FUN_0216e89c();
        uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
        System_ArgumentException___ctor_47b660c(uVar6,uVar4,0);
      }
      uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar6,uVar4);
    }
    return;
  }
LAB_02292e50:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

