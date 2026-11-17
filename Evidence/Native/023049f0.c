/* IL2CPP: Dino.BusSand.App.Meta.Economy$$get_ReviveAds
int32_t Dino_BusSand_App_Meta_Economy__get_ReviveAds (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Economy$$get_ReviveAds
   int32_t Dino_BusSand_App_Meta_Economy__get_ReviveAds (const MethodInfo* method); */

uint Dino_BusSand_App_Meta_Economy__get_ReviveAds_22049f0(void)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_04cac440;
  if ((bRam0000000004f9bcc2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac440);
    bRam0000000004f9bcc2 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_Meta_Economy__get_RevivesUsed_220487c();
  puVar2 = PTR_DAT_04cacfd8;
  if ((bRam0000000004f9c066 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70,0);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cacfd8);
    bRam0000000004f9c066 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_App_Meta_MonetizationSettings__get_Rewarded_2266b34();
  if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,0);
    }
    if (-1 < (int)uVar3) {
      if (lVar4 == 0) goto LAB_02366cd8;
      if ((int)uVar3 < *(int *)(lVar4 + 0x18)) {
        uVar3 = *(uint *)(lVar4 + (ulong)uVar3 * 4 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa200);
        }
        uVar1 = 0;
        if (uVar3 < 0x80000000) {
          uVar1 = uVar3;
        }
        return uVar1;
      }
    }
    return 0;
  }
LAB_02366cd8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

