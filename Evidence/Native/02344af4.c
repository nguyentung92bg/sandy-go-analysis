/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_BonusBankNeed
int32_t Dino_BusSand_App_Meta_PassportFeature__get_BonusBankNeed (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_BonusBankNeed
   int32_t Dino_BusSand_App_Meta_PassportFeature__get_BonusBankNeed
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_PassportFeature__get_BonusBankNeed_2244af4(undefined8 param_1)

{
  undefined *puVar1;
  double *pdVar2;
  byte *pbVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  
  puVar1 = PTR_DAT_04cb3988;
  if ((bRam0000000004f9bf3c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3988);
    bRam0000000004f9bf3c = 1;
  }
  uVar4 = Dino_BusSand_App_Meta_PassportFeature__get_Cfg_224493c(param_1);
  plVar5 = (long *)Dino_BusSand_App_MiniJson__Get_21565a8(uVar4,*(undefined8 *)puVar1,0);
  uVar7 = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    if (lVar6 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
      pdVar2 = (double *)thunk_FUN_0216e9e4(plVar5,0,0);
      uVar7 = 0x80000000;
      if (*pdVar2 != INFINITY) {
        uVar7 = (int)*pdVar2;
      }
    }
    else if (lVar6 == *(long *)(PTR_DAT_04ca9ac8 + 0x28)) {
      pbVar3 = (byte *)thunk_FUN_0216e9e4(plVar5,0,0);
      uVar7 = (uint)*pbVar3;
    }
    else if (lVar6 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) {
      System_Int32__TryParse_482de64(plVar5,&stack0xffffffffffffffec,0);
      uVar7 = 0;
    }
  }
  return uVar7;
}

