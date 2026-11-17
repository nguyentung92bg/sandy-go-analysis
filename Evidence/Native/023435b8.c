/* IL2CPP: Dino.BusSand.App.Meta.SystemOpen$$NextNeedWinTimes
int32_t Dino_BusSand_App_Meta_SystemOpen__NextNeedWinTimes (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.SystemOpen$$NextNeedWinTimes
   int32_t Dino_BusSand_App_Meta_SystemOpen__NextNeedWinTimes (int32_t id, const MethodInfo*
   method); */

uint Dino_BusSand_App_Meta_SystemOpen__NextNeedWinTimes_22435b8(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  double *pdVar3;
  byte *pbVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  
  puVar1 = PTR_DAT_04cac018;
  if ((bRam0000000004f9bf20 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb38e8);
    FUN_02132f7c(PTR_DAT_04cb3900);
    bRam0000000004f9bf20 = 1;
  }
  puVar2 = PTR_DAT_04cb38e8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar2,param_1,0);
  if (lVar5 != 0) {
    plVar6 = (long *)Dino_BusSand_App_MiniJson__Get_21565a8(lVar5,*(undefined8 *)PTR_DAT_04cb3900,0)
    ;
    uVar7 = 0;
    if (plVar6 != (long *)0x0) {
      lVar5 = *plVar6;
      if (lVar5 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
        pdVar3 = (double *)thunk_FUN_0216e9e4(plVar6,0,0);
        uVar7 = 0x80000000;
        if (*pdVar3 != INFINITY) {
          uVar7 = (int)*pdVar3;
        }
      }
      else if (lVar5 == *(long *)(PTR_DAT_04ca9ac8 + 0x28)) {
        pbVar4 = (byte *)thunk_FUN_0216e9e4(plVar6,0,0);
        uVar7 = (uint)*pbVar4;
      }
      else if (lVar5 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) {
        System_Int32__TryParse_482de64(plVar6,&stack0xffffffffffffffec,0);
        uVar7 = 0;
      }
    }
    return uVar7;
  }
  return 0;
}

