/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$set_Source
void Dino_BusSand_App_Meta_EconomySettings__set_Source (System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$set_Source
   void Dino_BusSand_App_Meta_EconomySettings__set_Source (System_String_o* value, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_EconomySettings__set_Source_22050f8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_04cb1d58;
  if ((bRam0000000004f9bccd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    bRam0000000004f9bccd = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  puVar3 = (undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
  *puVar3 = param_1;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                 ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

