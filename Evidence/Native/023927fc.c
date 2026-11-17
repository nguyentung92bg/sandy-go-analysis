/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$Row
System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_Meta_WinStreak__Row (System_String_o* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$Row
   System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_Meta_WinStreak__Row
   (System_String_o* id, const MethodInfo* method); */

long * Dino_BusSand_App_Meta_WinStreak__Row_22927fc(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plStack_28;
  
  puVar2 = PTR_DAT_04cac018;
  if ((bRam0000000004f9c1df & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb53e8);
    bRam0000000004f9c1df = 1;
  }
  puVar3 = PTR_DAT_04cb53e8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cac018;
  uVar5 = *(undefined8 *)puVar3;
  if ((bRam0000000004f9b812 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaf40,param_1,0);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04cac018);
    bRam0000000004f9b812 = 1;
  }
  plStack_28 = (long *)0x0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Tables__Table_215ebec(uVar5);
  if (lVar4 != 0) {
    System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
              (lVar4,param_1,&plStack_28,*(undefined8 *)PTR_DAT_04caaf40);
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

