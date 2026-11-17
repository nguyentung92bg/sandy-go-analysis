/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow.<FlagDrop>d__49$$MoveNext
bool Dino_BusSand_App_UI_YachtRacingTrackRow__FlagDrop_d__49__MoveNext (Dino_BusSand_App_UI_YachtRacingTrackRow__FlagDrop_d__49_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow.<FlagDrop>d__49$$MoveNext
   bool Dino_BusSand_App_UI_YachtRacingTrackRow__FlagDrop_d__49__MoveNext
   (Dino_BusSand_App_UI_YachtRacingTrackRow__FlagDrop_d__49_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_YachtRacingTrackRow__FlagDrop_d__49__MoveNext_21f7550
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((bRam0000000004f9bc42 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cb1790);
    FUN_02132f7c(PTR_DAT_04cb1798);
    bRam0000000004f9bc42 = 1;
  }
  puVar2 = PTR_DAT_04cb1798;
  iVar1 = *(int *)(param_3 + 0x10);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
      if (*(long *)(param_3 + 0x28) == 0) goto LAB_022f76a0;
      puVar3 = (undefined8 *)(*(long *)(param_3 + 0x28) + 0xd0);
      *puVar3 = 0;
      thunk_FUN_02134474(puVar3,0);
    }
LAB_022f7688:
    return iVar1 == 0;
  }
  *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar4,0);
  if (lVar4 != 0) {
    plVar6 = (long *)(lVar4 + 0x10);
    *plVar6 = *(long *)(param_3 + 0x20);
    thunk_FUN_02134474(plVar6);
    uVar5 = Dino_BusSand_App_UI_YachtRacingAnimValues__get_FinishFlagEase_21e7a34(0);
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    thunk_FUN_02134474();
    if (*plVar6 != 0) {
      UnityEngine_RectTransform__get_anchoredPosition_43cf828(*plVar6,0);
      puVar2 = PTR_DAT_04cac208;
      *(undefined4 *)(lVar4 + 0x18) = param_2;
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Action_float____ctor_35f1448(uVar5,lVar4,*(undefined8 *)PTR_DAT_04cb1790,0);
      uVar5 = Dino_BusSand_App_UI_YachtRacingUi__Tween_21f746c(_UNK_00e2098c,0,uVar5);
      *(undefined8 *)(param_3 + 0x18) = uVar5;
      thunk_FUN_02134474((undefined8 *)(param_3 + 0x18),uVar5);
      *(undefined4 *)(param_3 + 0x10) = 1;
      goto LAB_022f7688;
    }
  }
LAB_022f76a0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

