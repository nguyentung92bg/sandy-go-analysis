/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel$$RemainingMs
int64_t Dino_BusSand_App_Meta_WeeklyCupModel__RemainingMs (Dino_BusSand_App_Meta_WeeklyCupModel_o* __this, int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel$$RemainingMs
   int64_t Dino_BusSand_App_Meta_WeeklyCupModel__RemainingMs
   (Dino_BusSand_App_Meta_WeeklyCupModel_o* __this, int64_t nowMs, const MethodInfo* method); */

ulong Dino_BusSand_App_Meta_WeeklyCupModel__RemainingMs_2230570(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam0000000004f9be75 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9be75 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x18) != '\0') {
      lVar3 = *(long *)(lVar3 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar1 = (lVar3 - param_2) + 0x240c8400;
      uVar2 = 0;
      if (uVar1 < 0x8000000000000000) {
        uVar2 = uVar1;
      }
      return uVar2;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

