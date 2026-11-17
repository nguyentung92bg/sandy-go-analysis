/* IL2CPP: Dino.BusSand.Core.LevelCatalog$$get_Rev
System_String_o* Dino_BusSand_Core_LevelCatalog__get_Rev (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.LevelCatalog$$get_Rev
   System_String_o* Dino_BusSand_Core_LevelCatalog__get_Rev (const MethodInfo* method); */

undefined8 Dino_BusSand_Core_LevelCatalog__get_Rev_2410184(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04cb1868;
  if ((bRam0000000004f9cb38 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac008);
    FUN_02132f7c(PTR_DAT_04cb1868);
    FUN_02132f7c(PTR_DAT_04cbe538);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9cb38 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x28);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x10) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cac008 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar2 = Dino_BusSand_DataPack__Open_2379630(*(undefined8 *)PTR_DAT_04cbe538,0);
      if (lVar2 == 0) {
        uVar3 = *(undefined8 *)PTR_DAT_04ca9c30;
      }
      else {
        uVar3 = Dino_BusSand_DataPack__ContentId_237b9e0(lVar2,0);
      }
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar2 = *(long *)puVar1;
      }
      puVar4 = (undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x28);
      *puVar4 = uVar3;
      thunk_FUN_02134474(puVar4,uVar3);
      lVar2 = *(long *)puVar1;
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar2 = *(long *)puVar1;
    }
    return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

