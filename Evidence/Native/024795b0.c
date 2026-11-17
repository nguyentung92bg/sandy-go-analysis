/* IL2CPP: Dino.BusSand.DataPack$$.ctor
void Dino_BusSand_DataPack___ctor (Dino_BusSand_DataPack_o* __this, System_Collections_Generic_Dictionary_string__byte____o* entries, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.DataPack$$.ctor
   void Dino_BusSand_DataPack___ctor (Dino_BusSand_DataPack_o* __this,
   System_Collections_Generic_Dictionary_string__byte____o* entries, const MethodInfo* method); */

void Dino_BusSand_DataPack___ctor_23795b0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  System_Object___ctor_4870e5c(param_1,0);
  puVar1 = (undefined8 *)(param_1 + 0x10);
  *puVar1 = param_2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

