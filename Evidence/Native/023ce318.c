/* IL2CPP: Dino.BusSand.App.UI.GuidePanel.<HoleOpen>d__63$$MoveNext
bool Dino_BusSand_App_UI_GuidePanel__HoleOpen_d__63__MoveNext (Dino_BusSand_App_UI_GuidePanel__HoleOpen_d__63_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel.<HoleOpen>d__63$$MoveNext
   bool Dino_BusSand_App_UI_GuidePanel__HoleOpen_d__63__MoveNext
   (Dino_BusSand_App_UI_GuidePanel__HoleOpen_d__63_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_GuidePanel__HoleOpen_d__63__MoveNext_22ce318(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar3 = *(float *)(param_1 + 0x2c);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    fVar3 = 0.0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (fVar3 < *(float *)(param_1 + 0x28)) {
    fVar2 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
    *(float *)(param_1 + 0x2c) = fVar3 + fVar2;
    Dino_BusSand_App_Easing__Evaluate_21609e0((fVar3 + fVar2) / *(float *)(param_1 + 0x28),10,0);
    if (lVar1 != 0) {
      Dino_BusSand_App_UI_GuidePanel__LayoutHole_22ca1c0(lVar1);
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  else if (lVar1 != 0) {
    Dino_BusSand_App_UI_GuidePanel__LayoutHole_22ca1c0(0x3f800000,lVar1);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

