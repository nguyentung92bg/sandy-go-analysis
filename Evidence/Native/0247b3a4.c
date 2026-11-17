/* IL2CPP: Dino.BusSand.DataPack$$IsSealed
bool Dino_BusSand_DataPack__IsSealed (System_Byte_array* file, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.DataPack$$IsSealed
   bool Dino_BusSand_DataPack__IsSealed (System_Byte_array* file, const MethodInfo* method); */

bool Dino_BusSand_DataPack__IsSealed_237b3a4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  if ((bRam0000000004f9c802 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac008);
    bRam0000000004f9c802 = 1;
  }
  puVar2 = PTR_DAT_04cac008;
  if (param_1 == 0) {
    return false;
  }
  lVar4 = *(long *)PTR_DAT_04cac008;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = **(long **)(lVar4 + 0xb8);
  if ((param_1 != 0) && (lVar4 != 0)) {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar5 = *(int *)(lVar4 + 0x18);
    if (iVar1 < iVar5) {
      bVar3 = false;
    }
    else if (iVar5 < 1) {
      bVar3 = true;
    }
    else {
      pcVar6 = (char *)(param_1 + 0x20);
      pcVar7 = (char *)(lVar4 + 0x20);
      do {
        iVar5 = iVar5 + -1;
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c(param_1);
        }
        bVar3 = *pcVar6 == *pcVar7;
      } while ((bVar3) &&
              (iVar1 = iVar1 + -1, param_1 = 1, pcVar6 = pcVar6 + 1, pcVar7 = pcVar7 + 1, iVar5 != 0
              ));
    }
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

