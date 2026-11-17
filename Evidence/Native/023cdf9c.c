/* IL2CPP: Dino.BusSand.App.UI.GuidePanel.<FinishRoutine>d__94$$MoveNext
bool Dino_BusSand_App_UI_GuidePanel__FinishRoutine_d__94__MoveNext (Dino_BusSand_App_UI_GuidePanel__FinishRoutine_d__94_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GuidePanel.<FinishRoutine>d__94$$MoveNext
   bool Dino_BusSand_App_UI_GuidePanel__FinishRoutine_d__94__MoveNext
   (Dino_BusSand_App_UI_GuidePanel__FinishRoutine_d__94_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_GuidePanel__FinishRoutine_d__94__MoveNext_22cdf9c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  iVar1 = *(int *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x58) == 0)) {
LAB_023ce048:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    auVar4 = UnityEngine_CanvasGroup__get_alpha_467ac88(*(long *)(lVar3 + 0x58),0);
    uVar2 = Dino_BusSand_App_UI_GuidePanel__FadeGroup_22cd648(auVar4,0,_UNK_00e20390,lVar3,7);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar2);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) goto LAB_023ce048;
    Dino_BusSand_App_UI_GuidePanel__RestoreRaised_22cab10(lVar3);
    Dino_BusSand_App_UI_GuidePanel__MarkTriggered_22cd0ac(lVar3);
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(lVar3,0);
  }
  return iVar1 == 0;
}

