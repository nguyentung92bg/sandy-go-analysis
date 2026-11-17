/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow.<FadeMoveEff>d__44$$MoveNext
bool Dino_BusSand_App_UI_YachtRacingTrackRow__FadeMoveEff_d__44__MoveNext (Dino_BusSand_App_UI_YachtRacingTrackRow__FadeMoveEff_d__44_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow.<FadeMoveEff>d__44$$MoveNext
   bool Dino_BusSand_App_UI_YachtRacingTrackRow__FadeMoveEff_d__44__MoveNext
   (Dino_BusSand_App_UI_YachtRacingTrackRow__FadeMoveEff_d__44_o* __this, const MethodInfo* method);
    */

undefined8
Dino_BusSand_App_UI_YachtRacingTrackRow__FadeMoveEff_d__44__MoveNext_21f72a8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  if ((bRam0000000004f9bc41 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1770);
    FUN_02132f7c(PTR_DAT_04cb1778);
    bRam0000000004f9bc41 = 1;
  }
  puVar1 = PTR_DAT_04cb1778;
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) goto LAB_022f7468;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Object___ctor_4870e5c(lVar2,0);
    if (lVar2 == 0) goto LAB_022f7468;
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 0x20);
    thunk_FUN_02134474();
    if (lVar4 == 0) goto LAB_022f7468;
    uVar5 = *(undefined8 *)(lVar4 + 0xc0);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(lVar4 + 0xc0) != 0) {
        uVar6 = UnityEngine_CanvasGroup__get_alpha_467ac88(*(long *)(lVar4 + 0xc0),0);
        puVar1 = PTR_DAT_04cac208;
        *(undefined4 *)(lVar2 + 0x18) = uVar6;
        uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
        System_Action_float____ctor_35f1448(uVar5,lVar2,*(undefined8 *)PTR_DAT_04cb1770,0);
        uVar5 = Dino_BusSand_App_UI_YachtRacingUi__Tween_21f746c(0x3f800000,0,uVar5);
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar5);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      goto LAB_022f7468;
    }
  }
  Dino_BusSand_App_UI_YachtRacingUi__SetActive_21f6568(*(undefined8 *)(lVar4 + 0xb0),0);
  uVar5 = *(undefined8 *)(lVar4 + 0xc0);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(lVar4 + 0xc0) == 0) {
LAB_022f7468:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_CanvasGroup__set_alpha_467ad3c(0x3f800000,*(long *)(lVar4 + 0xc0),0);
  }
  *(undefined8 *)(lVar4 + 0xd8) = 0;
  thunk_FUN_02134474((undefined8 *)(lVar4 + 0xd8),0);
  return 0;
}

