/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$get_App
Dino_BusSand_App_GameApp_o* Dino_BusSand_Cheat_QaJourney__get_App (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$get_App
   Dino_BusSand_App_GameApp_o* Dino_BusSand_Cheat_QaJourney__get_App (const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_QaJourney__get_App_236f8e4(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04caba50;
  if ((bRam0000000004f9c7c7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    bRam0000000004f9c7c7 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined8 **)(lVar2 + 0xb8);
}

