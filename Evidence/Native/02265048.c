/* IL2CPP: Dino.BusSand.App.GameApp$$set_LastAdReleaseMs
void Dino_BusSand_App_GameApp__set_LastAdReleaseMs (float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$set_LastAdReleaseMs
   void Dino_BusSand_App_GameApp__set_LastAdReleaseMs (float value, const MethodInfo* method); */

void Dino_BusSand_App_GameApp__set_LastAdReleaseMs_2165048(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04caba50;
  if ((bRam0000000004f9b853 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    bRam0000000004f9b853 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x24) = param_1;
  return;
}

