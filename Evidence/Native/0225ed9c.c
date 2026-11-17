/* IL2CPP: Dino.BusSand.App.Tables$$Row
System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_Tables__Row (System_String_o* table, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Tables$$Row
   System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_Tables__Row
   (System_String_o* table, int32_t id, const MethodInfo* method); */

void Dino_BusSand_App_Tables__Row_215ed9c(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04cac018;
  uStack_24 = param_2;
  if ((bRam0000000004f9b811 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac018);
    bRam0000000004f9b811 = 1;
  }
  uVar2 = System_Int32__ToString_482d750(&uStack_24,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  Dino_BusSand_App_Tables__Row_215ee18(param_1,uVar2);
  return;
}

