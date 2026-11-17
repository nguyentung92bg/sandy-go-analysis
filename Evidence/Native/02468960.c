/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel$$get_Gc
Dino_BusSand_App_Gameplay_GameplayController_o* Dino_BusSand_Cheat_CheatMobilePanel__get_Gc (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel$$get_Gc
   Dino_BusSand_App_Gameplay_GameplayController_o* Dino_BusSand_Cheat_CheatMobilePanel__get_Gc
   (const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_CheatMobilePanel__get_Gc_2368960(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cac868;
  if ((bRam0000000004f9c78f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac868);
    bRam0000000004f9c78f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9bcf9 == '\0') {
    FUN_02132f7c(PTR_DAT_04cac868);
    cRam0000000004f9bcf9 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined8 **)(lVar2 + 0xb8);
}

