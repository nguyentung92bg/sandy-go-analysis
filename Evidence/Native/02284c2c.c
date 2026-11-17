/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow.<Run>d__7$$System.IDisposable.Dispose
void Dino_BusSand_App_UI_LevelEnterFlow__Run_d__7__System_IDisposable_Dispose (Dino_BusSand_App_UI_LevelEnterFlow__Run_d__7_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow.<Run>d__7$$System.IDisposable.Dispose
   void Dino_BusSand_App_UI_LevelEnterFlow__Run_d__7__System_IDisposable_Dispose
   (Dino_BusSand_App_UI_LevelEnterFlow__Run_d__7_o* __this, const MethodInfo* method); */

undefined1  [16]
Dino_BusSand_App_UI_LevelEnterFlow__Run_d__7__System_IDisposable_Dispose_2184c2c
          (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_04cad8c8;
  uVar1 = *(int *)(param_1 + 0x10) + 3;
  if (uVar1 < 8 && (1 << (ulong)(uVar1 & 0x1f) & 0xe1U) != 0) {
    if ((bRam0000000004f9b951 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cad8c8);
      bRam0000000004f9b951 = 1;
    }
    auVar4._8_8_ = *(undefined8 *)puVar2;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    auVar4._0_8_ = param_1 + 0x40;
    return auVar4;
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}

