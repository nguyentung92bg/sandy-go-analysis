/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$set_Running
void Dino_BusSand_Cheat_AutoQa__set_Running (bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$set_Running
   void Dino_BusSand_Cheat_AutoQa__set_Running (bool value, const MethodInfo* method); */

void Dino_BusSand_Cheat_AutoQa__set_Running_2340a00(byte param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c67e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    bRam0000000004f9c67e = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  *(byte *)(*(long *)(lVar2 + 0xb8) + 0x10) = param_1 & 1;
  return;
}

