/* IL2CPP: Dino.BusSand.App.Meta.DailyGift$$Available
bool Dino_BusSand_App_Meta_DailyGift__Available (int32_t wonLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyGift$$Available
   bool Dino_BusSand_App_Meta_DailyGift__Available (int32_t wonLevel, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_DailyGift__Available_220e1d4(int param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04cb21e8;
  if ((bRam0000000004f9bd24 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb21e8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bd24 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_Meta_DailyGift__get_On_220dedc();
  if (((uVar4 & 1) == 0) ||
     (iVar3 = Dino_BusSand_App_Meta_Monetization__get_DailyGiftFromLevel_2267f28(0),
     puVar1 = PTR_DAT_04cabaf8, param_1 < iVar3)) {
    bVar2 = false;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar6 = *(long *)(lVar5 + 0x188);
    lVar5 = Dino_BusSand_App_Meta_Profile__Day_2271100(0);
    bVar2 = lVar6 != lVar5;
  }
  return bVar2;
}

