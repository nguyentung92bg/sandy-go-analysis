/* IL2CPP: Dino.BusSand.App.Tables$$Row
System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_Tables__Row (System_String_o* table, System_String_o* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Tables$$Row
   System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_Tables__Row
   (System_String_o* table, System_String_o* id, const MethodInfo* method); */

long * Dino_BusSand_App_Tables__Row_215ee18(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plStack_28;
  
  puVar2 = PTR_DAT_04cac018;
  if ((bRam0000000004f9b812 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaf40);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04cac018);
    bRam0000000004f9b812 = 1;
  }
  plStack_28 = (long *)0x0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Tables__Table_215ebec(param_1);
  if (lVar3 != 0) {
    System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
              (lVar3,param_2,&plStack_28,*(undefined8 *)PTR_DAT_04caaf40);
    if (plStack_28 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_04ca9b08 + 0x130);
      if (bVar1 <= *(byte *)(*plStack_28 + 0x130)) {
        if (*(long *)(*(long *)(*plStack_28 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)PTR_DAT_04ca9b08) {
          return plStack_28;
        }
        return (long *)0x0;
      }
    }
    return (long *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

