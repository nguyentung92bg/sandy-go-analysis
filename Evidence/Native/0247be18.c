/* IL2CPP: Dino.BusSand.DataPack$$FromBytes
Dino_BusSand_DataPack_o* Dino_BusSand_DataPack__FromBytes (System_Byte_array* file, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.DataPack$$FromBytes
   Dino_BusSand_DataPack_o* Dino_BusSand_DataPack__FromBytes (System_Byte_array* file, const
   MethodInfo* method); */

long Dino_BusSand_DataPack__FromBytes_237be18(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cac008;
  if ((bRam0000000004f9c808 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac008);
    bRam0000000004f9c808 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_DataPack__Unpack_23799d0(param_1);
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar3,0);
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  thunk_FUN_02134474((undefined8 *)(lVar3 + 0x10),uVar2);
  return lVar3;
}

