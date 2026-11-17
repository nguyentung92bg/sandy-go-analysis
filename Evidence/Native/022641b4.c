/* IL2CPP: Dino.BusSand.App.GameApp$$set_I
void Dino_BusSand_App_GameApp__set_I (Dino_BusSand_App_GameApp_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$set_I
   void Dino_BusSand_App_GameApp__set_I (Dino_BusSand_App_GameApp_o* value, const MethodInfo*
   method); */

void Dino_BusSand_App_GameApp__set_I_21641b4(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04caba50;
  if ((bRam0000000004f9b84a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    bRam0000000004f9b84a = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  **(undefined8 **)(lVar2 + 0xb8) = param_1;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

