/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager.<Tween>d__30$$MoveNext
bool Dino_BusSand_App_UI_ContinueBottomPager__Tween_d__30__MoveNext (Dino_BusSand_App_UI_ContinueBottomPager__Tween_d__30_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager.<Tween>d__30$$MoveNext
   bool Dino_BusSand_App_UI_ContinueBottomPager__Tween_d__30__MoveNext
   (Dino_BusSand_App_UI_ContinueBottomPager__Tween_d__30_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_ContinueBottomPager__Tween_d__30__MoveNext_22bed48(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar8 = *(float *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x38) == 0)) goto LAB_023beeac;
    uVar4 = UnityEngine_UI_ScrollRect__get_horizontalNormalizedPosition_469048c
                      (*(long *)(lVar3 + 0x38),0);
    fVar8 = 0.0;
    *(undefined4 *)(param_1 + 0x34) = uVar4;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (fVar8 < *(float *)(param_1 + 0x28)) {
    fVar5 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
    *(float *)(param_1 + 0x38) = fVar8 + fVar5;
    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x38), lVar3 != 0)) {
      fVar9 = *(float *)(param_1 + 0x34);
      fVar5 = (fVar8 + fVar5) / *(float *)(param_1 + 0x28);
      fVar8 = 1.0;
      if (fVar5 <= 1.0) {
        fVar8 = fVar5;
      }
      fVar6 = *(float *)(param_1 + 0x2c);
      fVar7 = 1.0;
      if (0.0 <= fVar5) {
        fVar7 = 1.0 - fVar8;
      }
      fVar8 = (float)func_0x049b5300(fVar7,0x40400000);
      UnityEngine_UI_ScrollRect__set_horizontalNormalizedPosition_46906cc
                (fVar9 + (fVar6 - fVar9) * (1.0 - fVar8),lVar3,0);
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  else if ((lVar3 != 0) && (*(long *)(lVar3 + 0x38) != 0)) {
    UnityEngine_UI_ScrollRect__set_horizontalNormalizedPosition_46906cc
              (*(undefined4 *)(param_1 + 0x2c),*(long *)(lVar3 + 0x38),0);
    *(undefined8 *)(lVar3 + 0x60) = 0;
    thunk_FUN_02134474((undefined8 *)(lVar3 + 0x60),0);
    iVar1 = *(int *)(param_1 + 0x30);
    *(int *)(lVar3 + 0x68) = iVar1;
    if (*(int *)(lVar3 + 0x58) != iVar1) {
      lVar2 = *(long *)(lVar3 + 0x28);
      *(int *)(lVar3 + 0x58) = iVar1;
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))
                  (*(undefined8 *)(lVar2 + 0x40),iVar1,*(undefined8 *)(lVar2 + 0x28));
      }
    }
    return 0;
  }
LAB_023beeac:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

