/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$ResetPositionToPlayer
void Dino_BusSand_App_UI_BattleRoyaleScenePanel__ResetPositionToPlayer (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$ResetPositionToPlayer
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel__ResetPositionToPlayer
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel__ResetPositionToPlayer_2194b40(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b9bf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9b9bf = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  UnityEngine_Canvas__ForceUpdateCanvases_4681650(0);
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_02294c90;
  iVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150
                    (*(long *)(param_1 + 0x40),0);
  if (iVar2 == 0) {
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar5 == 0) goto LAB_02294c90;
    if (*(char *)(lVar5 + 0x14) == '\0') {
LAB_02294c18:
      if (*(int *)(lVar5 + 0x10) == 0) {
        plVar7 = *(long **)(param_1 + 0x48);
        if (plVar7 == (long *)0x0) goto LAB_02294c90;
        uVar6 = 0;
        goto LAB_02294c70;
      }
    }
    else {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_02294c90;
      if (*(char *)(*(long *)(param_1 + 0x40) + 0x38) == '\0') goto LAB_02294c18;
    }
    plVar4 = *(long **)(param_1 + 0x58);
    plVar7 = *(long **)(param_1 + 0x48);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else if (*plVar4 != *(long *)PTR_DAT_04cabdb0) {
      plVar4 = (long *)0x0;
    }
    uVar6 = 0xc3960000;
  }
  else {
    plVar4 = *(long **)(param_1 + 0x58);
    plVar7 = *(long **)(param_1 + 0x48);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else if (*plVar4 != *(long *)PTR_DAT_04cabdb0) {
      plVar4 = (long *)0x0;
    }
    uVar6 = 0xc42f0000;
  }
  uVar6 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__NormalizedFor_219529c(uVar6,param_1,plVar4);
  if (plVar7 == (long *)0x0) {
LAB_02294c90:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_02294c70:
                    /* WARNING: Could not recover jumptable at 0x047906f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x448))(uVar6,plVar7,1,*(undefined8 *)(*plVar7 + 0x450));
  return;
}

