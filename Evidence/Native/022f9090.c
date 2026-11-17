/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi.<Tween>d__29$$MoveNext
bool Dino_BusSand_App_UI_YachtRacingUi__Tween_d__29__MoveNext (Dino_BusSand_App_UI_YachtRacingUi__Tween_d__29_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi.<Tween>d__29$$MoveNext
   bool Dino_BusSand_App_UI_YachtRacingUi__Tween_d__29__MoveNext
   (Dino_BusSand_App_UI_YachtRacingUi__Tween_d__29_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_YachtRacingUi__Tween_d__29__MoveNext_21f9090(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar4 = *(float *)(param_1 + 0x38);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    fVar4 = 0.0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  fVar3 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  *(float *)(param_1 + 0x38) = fVar4 + fVar3;
  fVar5 = 1.0;
  if (0.0 < *(float *)(param_1 + 0x20)) {
    fVar3 = (fVar4 + fVar3) / *(float *)(param_1 + 0x20);
    fVar4 = 1.0;
    if (fVar3 <= 1.0) {
      fVar4 = fVar3;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar3) {
      fVar5 = fVar4;
    }
  }
  lVar1 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  fVar4 = fVar5;
  if (lVar2 != 0) {
    fVar4 = (float)(**(code **)(lVar2 + 0x18))
                             (fVar5,*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    if (1.0 <= fVar5) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224(fVar4);
}

