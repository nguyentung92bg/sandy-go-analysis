/* IL2CPP: Dino.BusSand.App.UI.GuidePanel.<Wait>d__97$$MoveNext
bool Dino_BusSand_App_UI_GuidePanel__Wait_d__97__MoveNext (Dino_BusSand_App_UI_GuidePanel__Wait_d__97_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel.<Wait>d__97$$MoveNext
   bool Dino_BusSand_App_UI_GuidePanel__Wait_d__97__MoveNext
   (Dino_BusSand_App_UI_GuidePanel__Wait_d__97_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_GuidePanel__Wait_d__97__MoveNext_22ce8b8(long param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar2 = *(float *)(param_1 + 0x24);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    fVar2 = 0.0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (*(float *)(param_1 + 0x20) <= fVar2) {
    return 0;
  }
  fVar1 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(float *)(param_1 + 0x24) = fVar2 + fVar1;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

