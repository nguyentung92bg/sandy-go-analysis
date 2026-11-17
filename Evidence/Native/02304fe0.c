/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$get_ConfigId
System_String_o* Dino_BusSand_App_Meta_EconomySettings__get_ConfigId (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$get_ConfigId
   System_String_o* Dino_BusSand_App_Meta_EconomySettings__get_ConfigId (const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_Meta_EconomySettings__get_ConfigId_2204fe0(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb1d58;
  if ((bRam0000000004f9bcca & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    bRam0000000004f9bcca = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined8 **)(lVar2 + 0xb8);
}

