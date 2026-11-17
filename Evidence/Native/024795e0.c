/* IL2CPP: Dino.BusSand.DataPack$$get_Names
System_Collections_Generic_IEnumerable_string__o* Dino_BusSand_DataPack__get_Names (Dino_BusSand_DataPack_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.DataPack$$get_Names
   System_Collections_Generic_IEnumerable_string__o* Dino_BusSand_DataPack__get_Names
   (Dino_BusSand_DataPack_o* __this, const MethodInfo* method); */

long Dino_BusSand_DataPack__get_Names_23795e0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000004f9c7ff & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb638);
    bRam0000000004f9c7ff = 1;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar4 = *(long *)PTR_DAT_04cbb638;
    lVar2 = *(long *)(lVar1 + 0x38);
    if (lVar2 == 0) {
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0xd0) + 0x135) & 1) ==
          0) {
        FUN_0216b470();
      }
      uVar3 = thunk_FUN_0216e89c();
      System_Collections_Generic_Dictionary_KeyCollection_object__object____ctor_38f9e4c
                (uVar3,lVar1,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0xd8));
      *(undefined8 *)(lVar1 + 0x38) = uVar3;
      thunk_FUN_02134474((long *)(lVar1 + 0x38),uVar3);
      lVar2 = *(long *)(lVar1 + 0x38);
    }
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

