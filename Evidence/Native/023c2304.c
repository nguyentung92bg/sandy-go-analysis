/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel.<ClearAdvancing>d__40$$MoveNext
bool Dino_BusSand_App_UI_ContinueBottomPanel__ClearAdvancing_d__40__MoveNext (Dino_BusSand_App_UI_ContinueBottomPanel__ClearAdvancing_d__40_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel.<ClearAdvancing>d__40$$MoveNext
   bool Dino_BusSand_App_UI_ContinueBottomPanel__ClearAdvancing_d__40__MoveNext
   (Dino_BusSand_App_UI_ContinueBottomPanel__ClearAdvancing_d__40_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_ContinueBottomPanel__ClearAdvancing_d__40__MoveNext_22c2304(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = _UNK_00e20994;
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar2 = *(float *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (fVar1 <= fVar2) {
      if (*(long *)(param_1 + 0x20) != 0) {
        *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x4d) = 0;
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    fVar2 = 0.0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  fVar1 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(float *)(param_1 + 0x28) = fVar2 + fVar1;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

