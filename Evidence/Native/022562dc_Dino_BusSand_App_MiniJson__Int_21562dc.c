/* IL2CPP: Dino.BusSand.App.MiniJson$$Int
int32_t Dino_BusSand_App_MiniJson__Int (Il2CppObject* o, int32_t fallback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.MiniJson$$Int
   int32_t Dino_BusSand_App_MiniJson__Int (Il2CppObject* o, int32_t fallback, const MethodInfo*
   method); */

uint Dino_BusSand_App_MiniJson__Int_21562dc(long *param_1,uint param_2)

{
  ulong uVar1;
  double *pdVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  uint uStack_14;
  
  uStack_14 = 0;
  uVar5 = param_2;
  if (param_1 != (long *)0x0) {
    lVar4 = *param_1;
    if (lVar4 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
      pdVar2 = (double *)thunk_FUN_0216e9e4();
      uVar5 = 0x80000000;
      if (*pdVar2 != INFINITY) {
        uVar5 = (int)*pdVar2;
      }
    }
    else if (lVar4 == *(long *)(PTR_DAT_04ca9ac8 + 0x28)) {
      pbVar3 = (byte *)thunk_FUN_0216e9e4();
      uVar5 = (uint)*pbVar3;
    }
    else if ((lVar4 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) &&
            (uVar1 = System_Int32__TryParse_482de64(param_1,&uStack_14,0), uVar5 = uStack_14,
            (uVar1 & 1) == 0)) {
      uVar5 = param_2;
    }
  }
  return uVar5;
}

