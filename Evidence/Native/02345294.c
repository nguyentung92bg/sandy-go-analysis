/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$FreeBox
int32_t Dino_BusSand_App_Meta_PassportFeature__FreeBox (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$FreeBox
   int32_t Dino_BusSand_App_Meta_PassportFeature__FreeBox (Dino_BusSand_App_Meta_PassportFeature_o*
   __this, int32_t i, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_PassportFeature__FreeBox_2245294(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  double *pdVar2;
  byte *pbVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  
  puVar1 = PTR_DAT_04cb39d0;
  if ((bRam0000000004f9bf46 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb39d0);
    bRam0000000004f9bf46 = 1;
  }
  uVar6 = *(undefined8 *)puVar1;
  if ((bRam0000000004f9bf45 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    bRam0000000004f9bf45 = 1;
  }
  lVar4 = Dino_BusSand_App_Meta_PassportFeature__CfgList_22449bc(param_1,uVar6);
  if (((-1 < param_2) && (lVar4 != 0)) && (param_2 < *(int *)(lVar4 + 0x18))) {
    plVar5 = (long *)System_Collections_Generic_List_object___get_Item_3a81924
                               (lVar4,param_2,*(undefined8 *)PTR_DAT_04cb15c0);
    uVar7 = 0;
    if (plVar5 != (long *)0x0) {
      lVar4 = *plVar5;
      if (lVar4 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
        pdVar2 = (double *)thunk_FUN_0216e9e4(plVar5,0,0);
        uVar7 = 0x80000000;
        if (*pdVar2 != INFINITY) {
          uVar7 = (int)*pdVar2;
        }
      }
      else if (lVar4 == *(long *)(PTR_DAT_04ca9ac8 + 0x28)) {
        pbVar3 = (byte *)thunk_FUN_0216e9e4(plVar5,0,0);
        uVar7 = (uint)*pbVar3;
      }
      else if (lVar4 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) {
        System_Int32__TryParse_482de64(plVar5,&stack0xffffffffffffffec,0);
        uVar7 = 0;
      }
    }
    return uVar7;
  }
  return 0;
}

