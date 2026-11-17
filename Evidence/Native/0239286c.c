/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$Num
int64_t Dino_BusSand_App_Meta_WinStreak__Num (System_String_o* id, System_String_o* field, int64_t fallback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$Num
   int64_t Dino_BusSand_App_Meta_WinStreak__Num (System_String_o* id, System_String_o* field,
   int64_t fallback, const MethodInfo* method); */

long Dino_BusSand_App_Meta_WinStreak__Num_229286c
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  double *pdVar2;
  long lVar3;
  long *plVar4;
  long lStack_18;
  
  lVar3 = Dino_BusSand_App_Meta_WinStreak__Row_22927fc();
  if ((lVar3 != 0) &&
     (plVar4 = (long *)Dino_BusSand_App_MiniJson__Get_21565a8(lVar3,param_2,0),
     plVar4 != (long *)0x0)) {
    lStack_18 = 0;
    lVar3 = 0;
    if (plVar4 != (long *)0x0) {
      if (*plVar4 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
        pdVar2 = (double *)thunk_FUN_0216e9e4(plVar4,0,0);
        lVar3 = -0x8000000000000000;
        if (*pdVar2 != INFINITY) {
          lVar3 = (long)*pdVar2;
        }
      }
      else if ((*plVar4 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) &&
              (uVar1 = System_Int64__TryParse_482f580(plVar4,&lStack_18,0), lVar3 = lStack_18,
              (uVar1 & 1) == 0)) {
        lVar3 = 0;
      }
    }
    return lVar3;
  }
  return param_3;
}

