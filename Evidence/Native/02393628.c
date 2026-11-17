/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$Reload
void Dino_BusSand_App_Meta_WinStreak__Reload (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$Reload
   void Dino_BusSand_App_Meta_WinStreak__Reload (const MethodInfo* method); */

void Dino_BusSand_App_Meta_WinStreak__Reload_2293628(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_04cb5400;
  if ((bRam0000000004f9c1ed & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5400);
    bRam0000000004f9c1ed = 1;
  }
  puVar2 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
  *puVar2 = 0;
  thunk_FUN_02134474(puVar2,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = 0;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

