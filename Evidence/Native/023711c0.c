/* IL2CPP: Dino.BusSand.App.Meta.Profile$$get_SealedKey
System_String_o* Dino_BusSand_App_Meta_Profile__get_SealedKey (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$get_SealedKey
   System_String_o* Dino_BusSand_App_Meta_Profile__get_SealedKey (const MethodInfo* method); */

long Dino_BusSand_App_Meta_Profile__get_SealedKey_22711c0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0ea & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb47f8);
    bRam0000000004f9c0ea = 1;
  }
  puVar3 = PTR_DAT_04cb47f8;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar5 = *(long *)puVar3;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if ((lVar5 == 0) || (iVar1 = *(int *)(lVar5 + 0x10), iVar1 == 0)) {
    if ((lVar4 == 0) || (lVar5 = lVar4, *(int *)(lVar4 + 0x10) == 0)) {
      lVar5 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
    }
  }
  else if ((lVar4 != 0) && (*(int *)(lVar4 + 0x10) != 0)) {
    lVar6 = thunk_FUN_0216c29c(*(int *)(lVar4 + 0x10) + iVar1,lVar4,0);
    System_String__FillStringChecked_46d2a48(lVar6,0,lVar5);
    System_String__FillStringChecked_46d2a48(lVar6,iVar1,lVar4);
    lVar5 = lVar6;
  }
  return lVar5;
}

