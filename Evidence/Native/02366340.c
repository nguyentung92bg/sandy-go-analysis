/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$RowInt
int32_t Dino_BusSand_App_Meta_Monetization__RowInt (System_String_o* id, System_String_o* field, int32_t fallback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$RowInt
   int32_t Dino_BusSand_App_Meta_Monetization__RowInt (System_String_o* id, System_String_o* field,
   int32_t fallback, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_Monetization__RowInt_2266340
               (undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  double *pdVar2;
  byte *pbVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  
  puVar1 = PTR_DAT_04cb1d58;
  if ((bRam0000000004f9c05d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    bRam0000000004f9c05d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Meta_EconomySettings__Row_22054c8(param_1,0);
  if ((lVar4 != 0) &&
     (plVar5 = (long *)Dino_BusSand_App_MiniJson__Get_21565a8(lVar4,param_2,0),
     plVar5 != (long *)0x0)) {
    uVar6 = 0;
    if (plVar5 != (long *)0x0) {
      lVar4 = *plVar5;
      if (lVar4 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
        pdVar2 = (double *)thunk_FUN_0216e9e4(plVar5,0,0);
        uVar6 = 0x80000000;
        if (*pdVar2 != INFINITY) {
          uVar6 = (int)*pdVar2;
        }
      }
      else if (lVar4 == *(long *)(PTR_DAT_04ca9ac8 + 0x28)) {
        pbVar3 = (byte *)thunk_FUN_0216e9e4(plVar5,0,0);
        uVar6 = (uint)*pbVar3;
      }
      else if (lVar4 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) {
        System_Int32__TryParse_482de64(plVar5,&stack0xffffffffffffffec,0);
        uVar6 = 0;
      }
    }
    return uVar6;
  }
  return param_3;
}

