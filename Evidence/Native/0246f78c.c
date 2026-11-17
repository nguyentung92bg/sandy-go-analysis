/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$get_Running
bool Dino_BusSand_Cheat_QaJourney__get_Running (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$get_Running
   bool Dino_BusSand_Cheat_QaJourney__get_Running (const MethodInfo* method); */

undefined1 Dino_BusSand_Cheat_QaJourney__get_Running_236f78c(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cbafc8;
  if ((bRam0000000004f9c7c4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbafc8);
    bRam0000000004f9c7c4 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined1 **)(lVar2 + 0xb8);
}

