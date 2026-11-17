/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$Whole
bool Dino_BusSand_App_Meta_EconomySettings__Whole (Il2CppObject* o, int64_t* n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$Whole
   bool Dino_BusSand_App_Meta_EconomySettings__Whole (Il2CppObject* o, int64_t* n, const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_Meta_EconomySettings__Whole_22087a0(long *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  double *pdVar3;
  double dVar4;
  
  if ((bRam0000000004f9bce3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bce3 = 1;
  }
  *param_2 = 0;
  if ((param_1 != (long *)0x0) && (*param_1 == *(long *)(PTR_DAT_04ca9ac8 + 0x80))) {
    pdVar3 = (double *)thunk_FUN_0216e9e4(param_1);
    puVar2 = PTR_DAT_04caa200;
    dVar4 = *pdVar3;
    if ((ulong)ABS(dVar4) >> 0x34 < 0x7ff) {
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (dVar4 == (double)(long)dVar4) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (ABS(dVar4) <= _UNK_00e69690) {
          lVar1 = -0x8000000000000000;
          if (dVar4 != INFINITY) {
            lVar1 = (long)dVar4;
          }
          *param_2 = lVar1;
          return 1;
        }
      }
    }
  }
  return 0;
}

