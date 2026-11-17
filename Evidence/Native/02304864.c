/* IL2CPP: Dino.BusSand.App.Meta.Economy$$WinCoins
int32_t Dino_BusSand_App_Meta_Economy__WinCoins (int32_t t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Economy$$WinCoins
   int32_t Dino_BusSand_App_Meta_Economy__WinCoins (int32_t t, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_Economy__WinCoins_2204864(int param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double *pdVar6;
  byte *pbVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  
  puVar5 = PTR_DAT_04cb2020;
  if ((bRam0000000004f9c068 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2018,0);
    FUN_02132f7c(PTR_DAT_04cb2020);
    FUN_02132f7c(PTR_DAT_04cb2038);
    FUN_02132f7c(PTR_DAT_04cb2050);
    bRam0000000004f9c068 = 1;
  }
  puVar4 = PTR_DAT_04cb1d58;
  puVar2 = (undefined8 *)PTR_DAT_04cb2050;
  if (param_1 == 1) {
    puVar2 = (undefined8 *)PTR_DAT_04cb2038;
  }
  uVar12 = 0x14;
  if (param_1 == 1) {
    uVar12 = 0x3c;
  }
  puVar3 = (undefined8 *)PTR_DAT_04cb2018;
  if (param_1 != 2) {
    puVar3 = puVar2;
  }
  uVar10 = *(undefined8 *)puVar5;
  uVar11 = *puVar3;
  uVar1 = 100;
  if (param_1 != 2) {
    uVar1 = uVar12;
  }
  if ((bRam0000000004f9c05d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d58);
    bRam0000000004f9c05d = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar8 = Dino_BusSand_App_Meta_EconomySettings__Row_22054c8(uVar10,0);
  if ((lVar8 != 0) &&
     (plVar9 = (long *)Dino_BusSand_App_MiniJson__Get_21565a8(lVar8,uVar11,0), plVar9 != (long *)0x0
     )) {
    uVar12 = 0;
    if (plVar9 != (long *)0x0) {
      lVar8 = *plVar9;
      if (lVar8 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
        pdVar6 = (double *)thunk_FUN_0216e9e4(plVar9,0,0);
        uVar12 = 0x80000000;
        if (*pdVar6 != INFINITY) {
          uVar12 = (int)*pdVar6;
        }
      }
      else if (lVar8 == *(long *)(PTR_DAT_04ca9ac8 + 0x28)) {
        pbVar7 = (byte *)thunk_FUN_0216e9e4(plVar9,0,0);
        uVar12 = (uint)*pbVar7;
      }
      else if (lVar8 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) {
        System_Int32__TryParse_482de64(plVar9,&stack0xffffffffffffffec,0);
        uVar12 = 0;
      }
    }
    return uVar12;
  }
  return uVar1;
}

