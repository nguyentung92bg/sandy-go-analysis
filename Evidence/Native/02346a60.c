/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$StageKeyCost
int32_t Dino_BusSand_App_Meta_PassportFeature__StageKeyCost (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t idx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$StageKeyCost
   int32_t Dino_BusSand_App_Meta_PassportFeature__StageKeyCost
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t idx, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_PassportFeature__StageKeyCost_2246a60(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  double *pdVar4;
  byte *pbVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  
  iVar3 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0();
  puVar2 = PTR_DAT_04cb3988;
  puVar1 = PTR_DAT_04cb3980;
  if (param_2 < iVar3) {
    if ((bRam0000000004f9bf3b & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cabaf0);
      FUN_02132f7c(PTR_DAT_04cb15c0);
      FUN_02132f7c(PTR_DAT_04cb3980);
      bRam0000000004f9bf3b = 1;
    }
    lVar6 = Dino_BusSand_App_Meta_PassportFeature__CfgList_22449bc(param_1,*(undefined8 *)puVar1);
    if (((param_2 < 0) || (lVar6 == 0)) || (*(int *)(lVar6 + 0x18) <= param_2)) {
      return 0;
    }
    plVar7 = (long *)System_Collections_Generic_List_object___get_Item_3a81924
                               (lVar6,param_2,*(undefined8 *)PTR_DAT_04cb15c0);
  }
  else {
    if ((bRam0000000004f9bf3c & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cb3988);
      bRam0000000004f9bf3c = 1;
    }
    uVar8 = Dino_BusSand_App_Meta_PassportFeature__get_Cfg_224493c(param_1);
    plVar7 = (long *)Dino_BusSand_App_MiniJson__Get_21565a8(uVar8,*(undefined8 *)puVar2,0);
  }
  uVar9 = 0;
  if (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    if (lVar6 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
      pdVar4 = (double *)thunk_FUN_0216e9e4(plVar7,0,0);
      uVar9 = 0x80000000;
      if (*pdVar4 != INFINITY) {
        uVar9 = (int)*pdVar4;
      }
    }
    else if (lVar6 == *(long *)(PTR_DAT_04ca9ac8 + 0x28)) {
      pbVar5 = (byte *)thunk_FUN_0216e9e4(plVar7,0,0);
      uVar9 = (uint)*pbVar5;
    }
    else if (lVar6 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) {
      System_Int32__TryParse_482de64(plVar7,&stack0xffffffffffffffec,0);
      uVar9 = 0;
    }
  }
  return uVar9;
}

