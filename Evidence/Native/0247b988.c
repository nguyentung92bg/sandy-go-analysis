/* IL2CPP: Dino.BusSand.DataPack$$Has
bool Dino_BusSand_DataPack__Has (Dino_BusSand_DataPack_o* __this, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.DataPack$$Has
   bool Dino_BusSand_DataPack__Has (Dino_BusSand_DataPack_o* __this, System_String_o* name, const
   MethodInfo* method); */

uint Dino_BusSand_DataPack__Has_237b988(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  if ((bRam0000000004f9c805 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb738);
    bRam0000000004f9c805 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = System_Collections_Generic_Dictionary_object__object___FindEntry_34b4a60
                      (*(long *)(param_1 + 0x10),param_2,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)PTR_DAT_04cbb738 + 0x20) + 0xc0) + 0x110));
    return ~uVar1 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

