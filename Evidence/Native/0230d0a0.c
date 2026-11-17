/* IL2CPP: Dino.BusSand.App.Meta.NoAdsOffer$$ShownToday
int32_t Dino_BusSand_App_Meta_NoAdsOffer__ShownToday (Dino_BusSand_App_Meta_PlayerData_o* d, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.NoAdsOffer$$ShownToday
   int32_t Dino_BusSand_App_Meta_NoAdsOffer__ShownToday (Dino_BusSand_App_Meta_PlayerData_o* d,
   const MethodInfo* method); */

int Dino_BusSand_App_Meta_NoAdsOffer__ShownToday_220d0a0(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000004f9bd12 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd12 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar4 = *(long *)(param_1 + 0x1c0);
  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Meta_Profile__Day_2271100(0);
  if (lVar4 == lVar3) {
    iVar2 = *(int *)(param_1 + 0x1c8);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar1 = 1;
    if (0 < iVar2) {
      iVar1 = iVar2;
    }
    return iVar1;
  }
  return 0;
}

