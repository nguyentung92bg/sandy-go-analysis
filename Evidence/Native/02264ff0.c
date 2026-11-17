/* IL2CPP: Dino.BusSand.App.GameApp$$get_LastAdReleaseMs
float Dino_BusSand_App_GameApp__get_LastAdReleaseMs (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$get_LastAdReleaseMs
   float Dino_BusSand_App_GameApp__get_LastAdReleaseMs (const MethodInfo* method); */

undefined4 Dino_BusSand_App_GameApp__get_LastAdReleaseMs_2164ff0(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04caba50;
  if ((bRam0000000004f9b852 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    bRam0000000004f9b852 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x24);
}

