/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel.<Climb>d__46$$System.IDisposable.Dispose
void Dino_BusSand_App_UI_WinStreakPanel__Climb_d__46__System_IDisposable_Dispose (Dino_BusSand_App_UI_WinStreakPanel__Climb_d__46_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel.<Climb>d__46$$System.IDisposable.Dispose
   void Dino_BusSand_App_UI_WinStreakPanel__Climb_d__46__System_IDisposable_Dispose
   (Dino_BusSand_App_UI_WinStreakPanel__Climb_d__46_o* __this, const MethodInfo* method); */

undefined1  [16]
Dino_BusSand_App_UI_WinStreakPanel__Climb_d__46__System_IDisposable_Dispose_233a1b8
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_04cb9350;
  if ((*(int *)(param_1 + 0x10) != 3) && (*(int *)(param_1 + 0x10) != -3)) {
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  if ((bRam0000000004f9c659 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9350);
    bRam0000000004f9c659 = 1;
  }
  auVar3._8_8_ = *(undefined8 *)puVar1;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  auVar3._0_8_ = param_1 + 0x38;
  return auVar3;
}

