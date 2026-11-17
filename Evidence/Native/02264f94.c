/* IL2CPP: Dino.BusSand.App.GameApp$$set_AdReleases
void Dino_BusSand_App_GameApp__set_AdReleases (int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$set_AdReleases
   void Dino_BusSand_App_GameApp__set_AdReleases (int32_t value, const MethodInfo* method); */

void Dino_BusSand_App_GameApp__set_AdReleases_2164f94(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04caba50;
  if ((bRam0000000004f9b851 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    bRam0000000004f9b851 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x20) = param_1;
  return;
}

