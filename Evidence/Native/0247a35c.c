/* IL2CPP: Dino.BusSand.DataPack$$Seal
System_Byte_array* Dino_BusSand_DataPack__Seal (System_String_o* text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.DataPack$$Seal
   System_Byte_array* Dino_BusSand_DataPack__Seal (System_String_o* text, const MethodInfo* method);
    */

void Dino_BusSand_DataPack__Seal_237a35c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_04cbb6d8;
  puVar2 = PTR_DAT_04cbb6d0;
  puVar1 = PTR_DAT_04cbb6c8;
  if ((bRam0000000004f9c801 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac008);
    FUN_02132f7c(PTR_DAT_04cbb6c8);
    FUN_02132f7c(PTR_DAT_04cbb6d8);
    FUN_02132f7c(PTR_DAT_04cbb6d0);
    bRam0000000004f9c801 = 1;
  }
  lVar4 = FUN_02133068(*(undefined8 *)puVar1,1);
  uStack_40 = 0;
  uStack_38 = 0;
  System_Collections_Generic_KeyValuePair_object__object____ctor_3910e8c
            (&uStack_40,*(undefined8 *)puVar2,param_1,*(undefined8 *)puVar3);
  puVar1 = PTR_DAT_04cac008;
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x28) = uStack_38;
      *(undefined8 *)(lVar4 + 0x20) = uStack_40;
      thunk_FUN_02134474((undefined8 *)(lVar4 + 0x20),0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_DataPack__Pack_237a450(lVar4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

