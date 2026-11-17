/* IL2CPP: Dino.BusSand.App.Meta.WinChest$$set_LastWinCounted
void Dino_BusSand_App_Meta_WinChest__set_LastWinCounted (bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinChest$$set_LastWinCounted
   void Dino_BusSand_App_Meta_WinChest__set_LastWinCounted (bool value, const MethodInfo* method);
    */

void Dino_BusSand_App_Meta_WinChest__set_LastWinCounted_220d9ec(byte param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04cb21c0;
  if ((bRam0000000004f9bd1c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb21c0);
    bRam0000000004f9bd1c = 1;
  }
  **(byte **)(*(long *)puVar1 + 0xb8) = param_1 & 1;
  return;
}

