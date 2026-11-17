/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel$$BotScore
int32_t Dino_BusSand_App_Meta_WeeklyCupModel__BotScore (Dino_BusSand_App_Meta_WeeklyCupModel_o* __this, Dino_BusSand_App_Meta_CupBot_o* bot, int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel$$BotScore
   int32_t Dino_BusSand_App_Meta_WeeklyCupModel__BotScore (Dino_BusSand_App_Meta_WeeklyCupModel_o*
   __this, Dino_BusSand_App_Meta_CupBot_o* bot, int64_t nowMs, const MethodInfo* method); */

int Dino_BusSand_App_Meta_WeeklyCupModel__BotScore_22313ec(long param_1,long param_2,long param_3)

{
  int iVar1;
  double dVar2;
  
  if ((bRam0000000004f9be77 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9be77 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_02331500;
  dVar2 = (double)(param_3 - *(long *)(*(long *)(param_1 + 0x10) + 0x10)) / _UNK_00e6a4f0;
  if (dVar2 <= 0.0) {
    iVar1 = 0;
  }
  else if (1.0 <= dVar2) {
    if (param_2 == 0) goto LAB_02331500;
    iVar1 = *(int *)(param_2 + 0x14);
  }
  else {
    if (param_2 == 0) {
LAB_02331500:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar1 = *(int *)(param_2 + 0x14);
    dVar2 = dVar2 + (1.0 - dVar2) * dVar2 * ((double)*(int *)(param_2 + 0x18) / 100.0);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    dVar2 = dVar2 * dVar2 * (3.0 - (dVar2 + dVar2)) * (double)iVar1;
    iVar1 = -0x80000000;
    if ((double)(long)dVar2 != INFINITY) {
      iVar1 = (int)dVar2;
    }
  }
  return iVar1;
}

