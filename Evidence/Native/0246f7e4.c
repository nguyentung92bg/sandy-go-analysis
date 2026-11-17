/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$set_Running
void Dino_BusSand_Cheat_QaJourney__set_Running (bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$set_Running
   void Dino_BusSand_Cheat_QaJourney__set_Running (bool value, const MethodInfo* method); */

void Dino_BusSand_Cheat_QaJourney__set_Running_236f7e4(byte param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cbafc8;
  if ((bRam0000000004f9c7c5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbafc8);
    bRam0000000004f9c7c5 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  **(byte **)(lVar2 + 0xb8) = param_1 & 1;
  return;
}

