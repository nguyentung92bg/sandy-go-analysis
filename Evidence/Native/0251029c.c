/* IL2CPP: Dino.BusSand.Core.LevelCatalog$$ContentHash
System_String_o* Dino_BusSand_Core_LevelCatalog__ContentHash (System_String_o* text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.LevelCatalog$$ContentHash
   System_String_o* Dino_BusSand_Core_LevelCatalog__ContentHash (System_String_o* text, const
   MethodInfo* method); */

void Dino_BusSand_Core_LevelCatalog__ContentHash_241029c(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint uStack_44;
  
  if ((bRam0000000004f9cb39 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb750);
    bRam0000000004f9cb39 = 1;
  }
  puVar1 = PTR_DAT_04cbb750;
  uVar6 = 0x811c9dc5;
  uStack_44 = 0x811c9dc5;
  uVar2 = uStack_44;
  if ((param_1 != 0) && (uVar2 = uVar6, 0 < *(int *)(param_1 + 0x10))) {
    iVar5 = 0;
    do {
      uVar3 = System_String__get_Chars_46ccb24(param_1,iVar5,0);
      if (((iVar5 != 0) || (uVar3 != 0xfeff)) &&
         ((uVar3 != 0xd ||
          ((*(int *)(param_1 + 0x10) <= iVar5 + 1 ||
           (sVar4 = System_String__get_Chars_46ccb24(param_1,iVar5 + 1,0), sVar4 != 10)))))) {
        uVar6 = (uVar6 ^ uVar3) * 0x1000193;
      }
      iVar5 = iVar5 + 1;
      uVar2 = uVar6;
    } while (iVar5 < *(int *)(param_1 + 0x10));
  }
  uStack_44 = uVar2;
  System_UInt32__ToString_484c3b4(&uStack_44,*(undefined8 *)puVar1,0);
  return;
}

