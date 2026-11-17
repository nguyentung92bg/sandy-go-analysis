/* IL2CPP: Dino.BusSand.App.Meta.Segments$$get_LifeName
System_String_o* Dino_BusSand_App_Meta_Segments__get_LifeName (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Segments$$get_LifeName
   System_String_o* Dino_BusSand_App_Meta_Segments__get_LifeName (const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_Segments__get_LifeName_220fa78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_04cacfe0;
  if ((bRam0000000004f9bd35 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfe0);
    FUN_02132f7c(PTR_DAT_04cb2260);
    FUN_02132f7c(PTR_DAT_04cb2268);
    FUN_02132f7c(PTR_DAT_04cb2270);
    bRam0000000004f9bd35 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94a == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfe0);
    cRam0000000004f9b94a = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  puVar4 = (undefined8 *)PTR_DAT_04cb2260;
  if (**(int **)(lVar3 + 0xb8) != 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94a == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfe0);
      cRam0000000004f9b94a = '\x01';
    }
    puVar4 = (undefined8 *)PTR_DAT_04cb2270;
    puVar2 = PTR_DAT_04cb2268;
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    if (**(int **)(lVar3 + 0xb8) != 2) {
      puVar4 = (undefined8 *)puVar2;
    }
  }
  return *puVar4;
}

