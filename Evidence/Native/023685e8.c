/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_WelcomeBackCooldownDays
int32_t Dino_BusSand_App_Meta_Monetization__get_WelcomeBackCooldownDays (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Monetization$$get_WelcomeBackCooldownDays
   int32_t Dino_BusSand_App_Meta_Monetization__get_WelcomeBackCooldownDays (const MethodInfo*
   method); */

uint Dino_BusSand_App_Meta_Monetization__get_WelcomeBackCooldownDays_22685e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double *pdVar4;
  byte *pbVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  
  puVar3 = PTR_DAT_04cb1ea0;
  puVar2 = PTR_DAT_04cb1e90;
  if ((bRam0000000004f9c093 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1e90);
    FUN_02132f7c(PTR_DAT_04cb1ea0);
    bRam0000000004f9c093 = 1;
  }
  puVar1 = PTR_DAT_04cb1d58;
  uVar8 = *(undefined8 *)puVar2;
  uVar9 = *(undefined8 *)puVar3;
  if ((bRam0000000004f9c05d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    bRam0000000004f9c05d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = Dino_BusSand_App_Meta_EconomySettings__Row_22054c8(uVar8,0);
  if ((lVar6 != 0) &&
     (plVar7 = (long *)Dino_BusSand_App_MiniJson__Get_21565a8(lVar6,uVar9,0), plVar7 != (long *)0x0)
     ) {
    uVar10 = 0;
    if (plVar7 != (long *)0x0) {
      lVar6 = *plVar7;
      if (lVar6 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
        pdVar4 = (double *)thunk_FUN_0216e9e4(plVar7,0,0);
        uVar10 = 0x80000000;
        if (*pdVar4 != INFINITY) {
          uVar10 = (int)*pdVar4;
        }
      }
      else if (lVar6 == *(long *)(PTR_DAT_04ca9ac8 + 0x28)) {
        pbVar5 = (byte *)thunk_FUN_0216e9e4(plVar7,0,0);
        uVar10 = (uint)*pbVar5;
      }
      else if (lVar6 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) {
        System_Int32__TryParse_482de64(plVar7,&stack0xffffffffffffffec,0);
        uVar10 = 0;
      }
    }
    return uVar10;
  }
  return 7;
}

