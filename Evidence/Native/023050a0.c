/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$get_Source
System_String_o* Dino_BusSand_App_Meta_EconomySettings__get_Source (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$get_Source
   System_String_o* Dino_BusSand_App_Meta_EconomySettings__get_Source (const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_EconomySettings__get_Source_22050a0(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb1d58;
  if ((bRam0000000004f9bccc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    bRam0000000004f9bccc = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
}

