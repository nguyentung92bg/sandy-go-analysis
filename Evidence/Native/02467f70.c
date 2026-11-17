/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$get_SnapshotPath
System_String_o* Dino_BusSand_Cheat_CheatManager__get_SnapshotPath (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$get_SnapshotPath
   System_String_o* Dino_BusSand_Cheat_CheatManager__get_SnapshotPath (const MethodInfo* method); */

long Dino_BusSand_Cheat_CheatManager__get_SnapshotPath_2367f70(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c76c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cba9f8);
    bRam0000000004f9c76c = 1;
  }
  puVar3 = PTR_DAT_04cba9f8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Meta_Profile__get_SavePath_226f9c0(0);
  lVar6 = *(long *)puVar3;
  if ((lVar4 == 0) || (iVar1 = *(int *)(lVar4 + 0x10), iVar1 == 0)) {
    if ((lVar6 == 0) || (lVar4 = lVar6, *(int *)(lVar6 + 0x10) == 0)) {
      lVar4 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
    }
  }
  else if ((lVar6 != 0) && (*(int *)(lVar6 + 0x10) != 0)) {
    lVar5 = thunk_FUN_0216c29c(*(int *)(lVar6 + 0x10) + iVar1,lVar6,0);
    System_String__FillStringChecked_46d2a48(lVar5,0,lVar4);
    System_String__FillStringChecked_46d2a48(lVar5,iVar1,lVar6);
    lVar4 = lVar5;
  }
  return lVar4;
}

