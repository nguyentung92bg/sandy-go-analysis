/* IL2CPP: Dino.BusSand.App.MiniJson$$Skip
void Dino_BusSand_App_MiniJson__Skip (System_String_o* s, int32_t* i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.MiniJson$$Skip
   void Dino_BusSand_App_MiniJson__Skip (System_String_o* s, int32_t* i, const MethodInfo* method);
    */

void Dino_BusSand_App_MiniJson__Skip_2155004(long param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_04ca9ac8;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *param_2;
  if (iVar1 < *(int *)(param_1 + 0x10)) {
    do {
      uVar3 = System_String__get_Chars_46ccb24(param_1,iVar1,0);
      if (*(int *)(*(long *)(puVar2 + 0x88) + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)(puVar2 + 0x88));
      }
      uVar4 = System_Char__IsWhiteSpace_47b9ba0(uVar3,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      iVar1 = *param_2 + 1;
      *param_2 = iVar1;
    } while (iVar1 < *(int *)(param_1 + 0x10));
  }
  return;
}

