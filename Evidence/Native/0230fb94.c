/* IL2CPP: Dino.BusSand.App.Meta.Segments$$get_MoneyName
System_String_o* Dino_BusSand_App_Meta_Segments__get_MoneyName (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Segments$$get_MoneyName
   System_String_o* Dino_BusSand_App_Meta_Segments__get_MoneyName (const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_Segments__get_MoneyName_220fb94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_04cacfe0;
  if ((bRam0000000004f9bd36 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfe0);
    FUN_02132f7c(PTR_DAT_04cb2278);
    FUN_02132f7c(PTR_DAT_04cb2280);
    FUN_02132f7c(PTR_DAT_04cb2288);
    bRam0000000004f9bd36 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar4 = Dino_BusSand_App_Meta_Segments__get_MoneyNow_220f3d8();
  puVar3 = PTR_DAT_04cb2288;
  puVar2 = PTR_DAT_04cb2280;
  puVar5 = (undefined8 *)PTR_DAT_04cb2278;
  if (iVar4 != 2) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar4 = Dino_BusSand_App_Meta_Segments__get_MoneyNow_220f3d8();
    puVar5 = (undefined8 *)puVar2;
    if (iVar4 != 1) {
      puVar5 = (undefined8 *)puVar3;
    }
  }
  return *puVar5;
}

