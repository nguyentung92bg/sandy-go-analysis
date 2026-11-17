/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel.<DeferredCheck>d__12$$MoveNext
bool Dino_BusSand_App_UI_PowerBuyPanel__DeferredCheck_d__12__MoveNext (Dino_BusSand_App_UI_PowerBuyPanel__DeferredCheck_d__12_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel.<DeferredCheck>d__12$$MoveNext
   bool Dino_BusSand_App_UI_PowerBuyPanel__DeferredCheck_d__12__MoveNext
   (Dino_BusSand_App_UI_PowerBuyPanel__DeferredCheck_d__12_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_PowerBuyPanel__DeferredCheck_d__12__MoveNext_22b1904(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_UI_PowerBuyPanel__CheckPowerEnough_22b1370();
  }
  return iVar1 == 0;
}

