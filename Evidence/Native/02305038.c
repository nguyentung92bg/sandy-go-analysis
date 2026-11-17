/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$set_ConfigId
void Dino_BusSand_App_Meta_EconomySettings__set_ConfigId (System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$set_ConfigId
   void Dino_BusSand_App_Meta_EconomySettings__set_ConfigId (System_String_o* value, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_EconomySettings__set_ConfigId_2205038(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb1d58;
  if ((bRam0000000004f9bccb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    bRam0000000004f9bccb = 1;
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

