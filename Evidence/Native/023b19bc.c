/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel.<RestoreTimer>d__21$$MoveNext
bool Dino_BusSand_App_UI_PowerBuyPanel__RestoreTimer_d__21__MoveNext (Dino_BusSand_App_UI_PowerBuyPanel__RestoreTimer_d__21_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel.<RestoreTimer>d__21$$MoveNext
   bool Dino_BusSand_App_UI_PowerBuyPanel__RestoreTimer_d__21__MoveNext
   (Dino_BusSand_App_UI_PowerBuyPanel__RestoreTimer_d__21_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_PowerBuyPanel__RestoreTimer_d__21__MoveNext_22b19bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((bRam0000000004f9c2d2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9c2d2 = 1;
  }
  puVar1 = PTR_DAT_04caca88;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_UI_PowerBuyPanel__RefreshRestoreTime_22b0b44();
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f000000,uVar2,0);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),uVar2);
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

