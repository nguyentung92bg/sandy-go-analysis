/* IL2CPP: Dino.BusSand.App.MiniJson$$Long
int64_t Dino_BusSand_App_MiniJson__Long (Il2CppObject* o, int64_t fallback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.MiniJson$$Long
   int64_t Dino_BusSand_App_MiniJson__Long (Il2CppObject* o, int64_t fallback, const MethodInfo*
   method); */

long Dino_BusSand_App_MiniJson__Long_2156378(long *param_1,long param_2)

{
  ulong uVar1;
  double *pdVar2;
  long lVar3;
  long lStack_18;
  
  lStack_18 = 0;
  lVar3 = param_2;
  if (param_1 != (long *)0x0) {
    if (*param_1 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
      pdVar2 = (double *)thunk_FUN_0216e9e4();
                    /* try { // try from 022563e4 to 02356403 has its CatchHandler @ 022563e4
                       catch() { ... } // from try @ 022563e4 with catch @ 022563e4
                       catch() { ... } // from try @ 02256408 with catch @ 022563e4
                       catch() { ... } // from try @ 022564c4 with catch @ 022563e4 */
      lVar3 = -0x8000000000000000;
      if (*pdVar2 != INFINITY) {
        lVar3 = (long)*pdVar2;
      }
    }
    else if ((*param_1 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) &&
            (uVar1 = System_Int64__TryParse_482f580(param_1,&lStack_18,0), lVar3 = lStack_18,
            (uVar1 & 1) == 0)) {
      lVar3 = param_2;
    }
  }
  return lVar3;
}

