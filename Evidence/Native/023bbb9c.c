/* IL2CPP: Dino.BusSand.App.UI.StoreWaitingPanel.<Timeout>d__4$$MoveNext
bool Dino_BusSand_App_UI_StoreWaitingPanel__Timeout_d__4__MoveNext (Dino_BusSand_App_UI_StoreWaitingPanel__Timeout_d__4_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StoreWaitingPanel.<Timeout>d__4$$MoveNext
   bool Dino_BusSand_App_UI_StoreWaitingPanel__Timeout_d__4__MoveNext
   (Dino_BusSand_App_UI_StoreWaitingPanel__Timeout_d__4_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_StoreWaitingPanel__Timeout_d__4__MoveNext_22bbb9c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar5 = *(float *)(param_1 + 0x28);
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (45.0 <= fVar5) {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      plVar1 = (long *)(lVar3 + 0x38);
      lVar2 = *plVar1;
      *plVar1 = 0;
      thunk_FUN_02134474(plVar1,0);
      Dino_BusSand_App_UI_UIPanel__Close_21f509c(lVar3,0);
      if (lVar2 == 0) {
        return 0;
      }
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    fVar5 = 0.0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  fVar4 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(float *)(param_1 + 0x28) = fVar5 + fVar4;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

