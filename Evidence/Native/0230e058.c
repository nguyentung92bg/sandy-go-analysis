/* IL2CPP: Dino.BusSand.App.Meta.DailyGift$$get_ChestProgress
int32_t Dino_BusSand_App_Meta_DailyGift__get_ChestProgress (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyGift$$get_ChestProgress
   int32_t Dino_BusSand_App_Meta_DailyGift__get_ChestProgress (const MethodInfo* method); */

int Dino_BusSand_App_Meta_DailyGift__get_ChestProgress_220e058(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  if ((bRam0000000004f9bd21 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd21 = 1;
  }
  iVar3 = Dino_BusSand_App_Meta_Monetization__get_DailyGiftChestDays_22681e0(0);
  puVar2 = PTR_DAT_04cabaf8;
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar3 = *(int *)(lVar5 + 400);
    iVar4 = Dino_BusSand_App_Meta_Monetization__get_DailyGiftChestDays_22681e0(0);
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = iVar3 / iVar4;
    }
    iVar3 = iVar3 - iVar1 * iVar4;
  }
  return iVar3;
}

