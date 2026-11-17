/* IL2CPP: Dino.BusSand.App.UI.GuidePanel.<FadeGroup>d__96$$MoveNext
bool Dino_BusSand_App_UI_GuidePanel__FadeGroup_d__96__MoveNext (Dino_BusSand_App_UI_GuidePanel__FadeGroup_d__96_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel.<FadeGroup>d__96$$MoveNext
   bool Dino_BusSand_App_UI_GuidePanel__FadeGroup_d__96__MoveNext
   (Dino_BusSand_App_UI_GuidePanel__FadeGroup_d__96_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_GuidePanel__FadeGroup_d__96__MoveNext_22cde48(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_023cdea8:
    fVar3 = *(float *)(param_1 + 0x3c);
    if (fVar3 < *(float *)(param_1 + 0x20)) {
      fVar2 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      fVar3 = fVar3 + fVar2;
      *(float *)(param_1 + 0x3c) = fVar3;
      if (lVar1 != 0) {
        fVar4 = *(float *)(param_1 + 0x30);
        fVar2 = *(float *)(param_1 + 0x34);
        lVar1 = *(long *)(lVar1 + 0x58);
        fVar3 = (float)Dino_BusSand_App_Easing__Evaluate_21609e0
                                 (fVar3 / *(float *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x38)
                                  ,0);
        if (lVar1 != 0) {
          UnityEngine_CanvasGroup__set_alpha_467ad3c(fVar2 + (fVar4 - fVar2) * fVar3,lVar1,0);
          *(undefined8 *)(param_1 + 0x18) = 0;
          thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
          *(undefined4 *)(param_1 + 0x10) = 1;
          return 1;
        }
      }
      goto LAB_023cdf4c;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (0.0 < *(float *)(param_1 + 0x20)) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
      if ((lVar1 == 0) || (*(long *)(lVar1 + 0x58) == 0)) goto LAB_023cdf4c;
      UnityEngine_CanvasGroup__set_alpha_467ad3c
                (*(undefined4 *)(param_1 + 0x34),*(long *)(lVar1 + 0x58),0);
      goto LAB_023cdea8;
    }
  }
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x58) != 0)) {
    UnityEngine_CanvasGroup__set_alpha_467ad3c
              (*(undefined4 *)(param_1 + 0x30),*(long *)(lVar1 + 0x58),0);
    return 0;
  }
LAB_023cdf4c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

