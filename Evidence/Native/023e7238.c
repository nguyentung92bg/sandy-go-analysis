/* IL2CPP: Dino.BusSand.App.UI.HomeEntries$$get_All
System_Collections_Generic_IReadOnlyList_HomeEntry__o* Dino_BusSand_App_UI_HomeEntries__get_All (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeEntries$$get_All
   System_Collections_Generic_IReadOnlyList_HomeEntry__o* Dino_BusSand_App_UI_HomeEntries__get_All
   (const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_HomeEntries__get_All_22e7238(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04caf600;
  if ((bRam0000000004f9c42b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf600);
    bRam0000000004f9c42b = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined8 **)(lVar2 + 0xb8);
}

