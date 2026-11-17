/* IL2CPP: Dino.BusSand.App.UI.HomeQueue.<Wait>d__4$$MoveNext
bool Dino_BusSand_App_UI_HomeQueue__Wait_d__4__MoveNext (Dino_BusSand_App_UI_HomeQueue__Wait_d__4_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeQueue.<Wait>d__4$$MoveNext
   bool Dino_BusSand_App_UI_HomeQueue__Wait_d__4__MoveNext
   (Dino_BusSand_App_UI_HomeQueue__Wait_d__4_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_HomeQueue__Wait_d__4__MoveNext_23211e8(long param_1)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (8.0 <= *(float *)(param_1 + 0x28)) {
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  uVar1 = Dino_BusSand_App_UI_HomeQueue__Ready_232016c(*(undefined8 *)(param_1 + 0x20));
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  fVar3 = *(float *)(param_1 + 0x28);
  fVar2 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  *(float *)(param_1 + 0x28) = fVar3 + fVar2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

