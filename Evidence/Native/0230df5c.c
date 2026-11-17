/* IL2CPP: Dino.BusSand.App.Meta.DailyGift$$get_NextIndex
int32_t Dino_BusSand_App_Meta_DailyGift__get_NextIndex (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyGift$$get_NextIndex
   int32_t Dino_BusSand_App_Meta_DailyGift__get_NextIndex (const MethodInfo* method); */

int Dino_BusSand_App_Meta_DailyGift__get_NextIndex_220df5c(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd20 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd20 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (-1 < *(long *)(lVar6 + 0x188)) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar5 = Dino_BusSand_App_Meta_Profile__Day_2271100(0);
    lVar7 = *(long *)(lVar6 + 0x188);
    if (lVar5 - lVar7 < 2) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar5 = Dino_BusSand_App_Meta_Profile__Day_2271100(0);
      iVar1 = *(int *)(lVar6 + 0x184);
      if (lVar7 == lVar5) {
        return iVar1;
      }
      iVar4 = Dino_BusSand_App_Meta_Monetization__get_DailyGiftDays_2267f84(0);
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = iVar1 / iVar4;
      }
      return iVar1 - iVar2 * iVar4;
    }
  }
  return 0;
}

