/* IL2CPP: Dino.BusSand.DataPack$$StartsWith
bool Dino_BusSand_DataPack__StartsWith (System_Byte_array* a, System_Byte_array* prefix, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.DataPack$$StartsWith
   bool Dino_BusSand_DataPack__StartsWith (System_Byte_array* a, System_Byte_array* prefix, const
   MethodInfo* method); */

bool Dino_BusSand_DataPack__StartsWith_237b418(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar3 = *(int *)(param_2 + 0x18);
    if (iVar1 < iVar3) {
      bVar2 = false;
    }
    else if (iVar3 < 1) {
      bVar2 = true;
    }
    else {
      pcVar4 = (char *)(param_1 + 0x20);
      pcVar5 = (char *)(param_2 + 0x20);
      do {
        iVar3 = iVar3 + -1;
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c(param_1);
        }
        bVar2 = *pcVar4 == *pcVar5;
      } while ((bVar2) &&
              (iVar1 = iVar1 + -1, param_1 = 1, pcVar4 = pcVar4 + 1, pcVar5 = pcVar5 + 1, iVar3 != 0
              ));
    }
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

