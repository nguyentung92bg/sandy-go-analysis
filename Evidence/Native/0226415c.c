/* IL2CPP: Dino.BusSand.App.GameApp$$get_I
Dino_BusSand_App_GameApp_o* Dino_BusSand_App_GameApp__get_I (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$get_I
   Dino_BusSand_App_GameApp_o* Dino_BusSand_App_GameApp__get_I (const MethodInfo* method); */

undefined8 Dino_BusSand_App_GameApp__get_I_216415c(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04caba50;
  if ((bRam0000000004f9b849 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    bRam0000000004f9b849 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined8 **)(lVar2 + 0xb8);
}

